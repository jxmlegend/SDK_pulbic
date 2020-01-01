		.text

        	
        	//#include     "dec_AMR_RAM.i"		

		.global	Decoder_Inv_sqrt

		


ArgStack:        .space   16
VarStack:        .space   60
AzTemp:          .space   20

TempBuffer:      .space   480



a_b:   .hword 4096, 7807, -3733
      .hword 1899, -3798, 1899

/*
;==============================================================================
;  Table of lag_window for autocorrelation.
;
;  noise floor = 1.0001   = (0.9999  on r[1] ..r[10])
;  Bandwitdh expansion = 60 Hz
;
;
;  lag_wind[0] =  1.00000000    (not stored)
;  lag_wind[1] =  0.99879038
;  lag_wind[2] =  0.99546897
;  lag_wind[3] =  0.98995781
;  lag_wind[4] =  0.98229337
;  lag_wind[5] =  0.97252619
;  lag_wind[6] =  0.96072036
;  lag_wind[7] =  0.94695264
;  lag_wind[8] =  0.93131179
;  lag_wind[9] =  0.91389757
;  lag_wind[10]=  0.89481968
;==============================================================================
*/

lag_h_l:     .hword 11904, 32728, 17280, 32619, 30720, 32438, 25856, 32187, 24192, 31867, \
                28992, 31480, 24384, 31029,  7360, 30517, 19520, 29946, 14784, 29321



grid:        .hword 32760, 32723, 32588, 32364, 32051, 31651, \
                31164, 30591, 29935, 29196, 28377, 27481, \
                26509, 25465, 24351, 23170, 21926, 20621, \
                19260, 17846, 16384, 14876, 13327, 11743, \
                10125, 8480, 6812, 5126, 3425, 1714, \
                0, -1714, -3425, -5126, -6812, -8480, \
                -10125, -11743, -13327, -14876, -16384, -17846, \
                -19260, -20621, -21926, -23170, -24351, -25465, \
                -26509, -27481, -28377, -29196, -29935, -30591, \
                -31164, -31651, -32051, -32364, -32588, -32723, \
                -32760


table1:      .hword 32767, 32729, 32610, 32413, 32138, 31786, 31357, 30853
            .hword 30274, 29622, 28899, 28106, 27246, 26320, 25330, 24279
            .hword 23170, 22006, 20788, 19520, 18205, 16846, 15447, 14010
            .hword 12540, 11039, 9512, 7962, 6393, 4808, 3212, 1608
            .hword 0, -1608, -3212, -4808, -6393, -7962, -9512, -11039
            .hword -12540, -14010, -15447, -16846, -18205, -19520, -20788, -22006
            .hword -23170, -24279, -25330, -26320, -27246, -28106, -28899, -29622
            .hword -30274, -30853, -31357, -31786, -32138, -32413, -32610, -32729
            .hword -32768


slope_tmp:       .hword -26887, -8812, -5323, -3813, -2979, -2444, -2081, -1811
            .hword -1608, -1450, -1322, -1219, -1132, -1059, -998, -946
            .hword -901, -861, -827, -797, -772, -750, -730, -713
            .hword -699, -687, -677, -668, -662, -657, -654, -652
            .hword -652, -654, -657, -662, -668, -677, -687, -699
            .hword -713, -730, -750, -772, -797, -827, -861, -901
            .hword -946, -998, -1059, -1132, -1219, -1322, -1450, -1608
            .hword -1811, -2081, -2444, -2979, -3813, -5323, -8812, -26887






invsqrt_tab: .hword 32767, 31790, 30894, 30070, 29309, 28602, 27945, 27330, 26755, 26214
            .hword 25705, 25225, 24770, 24339, 23930, 23541, 23170, 22817, 22479, 22155
            .hword 21845, 21548, 21263, 20988, 20724, 20470, 20225, 19988, 19760, 19539
            .hword 19326, 19119, 18919, 18725, 18536, 18354, 18176, 18004, 17837, 17674
            .hword 17515, 17361, 17211, 17064, 16921, 16782, 16646, 16514, 16384


inter_6_tab: 
            .hword 29443, 28346, 25207, 20449, 14701, 8693, 3143
            .hword -1352, -4402, -5865, -5850, -4673, -2783
            .hword -672, 1211, 2536, 3130, 2991, 2259
            .hword 1170, 0, -1001, -1652, -1868, -1666
            .hword -1147, -464, 218, 756, 1060, 1099
            .hword 904, 550, 135, -245, -514, -634
            .hword -602, -451, -231, 0, 191, 308
            .hword 340, 296, 198, 78, -36, -120
            .hword -163, -165, -132, -79, -19, 34
            .hword 73, 91, 89, 70, 38, 0


inter_6:
            .hword 29519
            .hword 28316, 24906, 19838, 13896, 7945, 2755
            .hword -1127, -3459, -4304, -3969, -2899, -1561
            .hword -336, 534, 970, 1023, 823, 516
            .hword 220, 0, -131, -194, -215, 0
            
//==============================================================================
// ShiftAz
//==============================================================================
ShiftAz:
        LDR     r5,=AzTemp
        ADD     r6,r0,#2
        MOV     r7,#10
ShiftAz_loop:
        LDRH    r8,[r6],#2
        SUBS    r7,r7,#1        
        STRH    r8,[r5],#2

        BNE     ShiftAz_loop

        LDR     r0,=AzTemp
        MOV     pc,lr







//=============================================================================
//Word32 Decoder_Inv_sqrt (       /* (o) : output value   */
//    Word32 L_x          /* (i) : input value    */
//)
//=============================================================================
Decoder_Inv_sqrt:
        STMFD   r13!, {r1-r7,lr}

        CMP     r0,#0                       // if (L_x <= (Word32) 0)
        BLE     Decoder_Inv_sqrt_end1               // return ((Word32) 0x3fffffffL)//

//        CLZ     r1,r0
//        SUB     r1,r1,#1                    // r1 = exp = norm_l (L_x)//

		MOV		r2,r0
		BL 		Decoder_norm_l				// r1 = exp = norm_l (L_x)//
		MOV		r1,r0
		
        MOV     r0,r2,LSL r1                // L_x = (L_x<<exp)//     /* L_x is normalize */

        RSB     r1,r1,#30                   // exp = sub (30, exp)//

        ANDS    r2,r1,#1                    // if ((exp & 1) == 0) {
        MOVEQ   r0,r0,ASR #1                // L_x = L_x/2// }

        MOV     r1,r1,ASR #1                // exp = (exp >> 1)//
        MOV     r0,r0,ASR #9                // L_x = L_x >> 9//        
        ADD     r1,r1,#1                    // r1 = exp += 1//

        MOV     r2,r0,ASR #16               // r2 = i = extract_h (L_x)//        /* Extract b25-b31 */
        MOV     r0,r0,ASR #1                // L_x = L_x/2//

        MOV     r3,r0,LSL #16
        MVN     r4,#0x8000
        MOV     r3,r3,ASR #16               // r3 = a = extract_l (L_x)//

//        MOV     r4,#0x7f00
//        ADD     r4,r4,#0x00ff
        SUB     r2,r2,#16                   // i = sub (i, 16)//
        AND     r3,r3,r4                    // a = a & (Word16) 0x7fff//

        LDR     r4,=invsqrt_tab
        MOV     r2,r2,LSL #1        
        ADD     r4,r4,r2
        LDRSH   r5,[r4],#2                  // r5 = table[i]
        MOV     r7,r5,LSL #16               // r7 = L_y = L_deposit_h (table[i])//
        LDRSH   r6,[r4]                     // r6 = table[i+1]

        SUB     r5,r5,r6                    // r5 = tmp = sub (table[i], table[i + 1])//

        SMULBB  r6,r3,r5
        QDSUB   r7,r7,r6                    // L_y = L_msu (L_y, tmp, a)//  /* L_y -=  tmp*a*2         */

        MOV     r0,r7,ASR r1                // L_y = L_y >> exp//

        LDMFD   r13!, {r1-r7,lr}
        BX      lr

Decoder_Inv_sqrt_end1:

        MOV     r0,#0x3fffffff
        LDMFD   r13!, {r1-r7,lr}
        BX      lr






        .ltorg   //LTORG






	.end
