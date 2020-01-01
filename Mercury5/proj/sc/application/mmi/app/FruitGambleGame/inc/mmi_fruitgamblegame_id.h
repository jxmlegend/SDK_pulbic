#ifndef __MMI_FRUITGAMBLEGAME_WQVGAP_RS__
#define __MMI_FRUITGAMBLEGAME_WQVGAP_RS__

typedef enum 
{
	FRUITGAMBLEGAME_WND_SPLASH = WND_ID_APP_BASE,
	FRUITGAMBLEGAME_WND_PLAY,
	FRUITGAMBLEGAME_WND_RESULT,
	FRUITGAMBLEGAME_WND_GUESS,
}FruitGambleGameWndId_e;

typedef enum
{
	WID_FRUITGAMBLEGAME_WND_SPLASH_IMAGE = APP_WDG_START,
	WID_FRUITGAMBLEGAME_WND_SPLASH_TEXT,
	WID_FRUITGAMBLEGAME_WND_SPLASH_ABS,
	WID_FRUITGAMBLEGAME_WND_PLAY_ABS,
	FRUITGAMBLE_PLAY_BG_IMAGEWIDGET,
	FRUITGAMBLE_PLAY_YOUR_MONEY_MSG_TEXTWIDGET,
	FRUITGAMBLE_PLAY_YOUR_MONEY_TEXTWIDGET,
	FRUITGAMBLE_PLAY_INPUT_BASE = 100,
	FRUITGAMBLE_PLAY_INPUT_APPLE_TEXTWIDGET = FRUITGAMBLE_PLAY_INPUT_BASE,
	FRUITGAMBLE_PLAY_INPUT_ORANGE_TEXTWIDGET,
	FRUITGAMBLE_PLAY_INPUT_DINGDONG_TEXTWIDGET,
	FRUITGAMBLE_PLAY_INPUT_MELON_TEXTWIDGET,
	FRUITGAMBLE_PLAY_INPUT_SUIKA_TEXTWIDGET,
	FRUITGAMBLE_PLAY_INPUT_STAR_TEXTWIDGET,
	FRUITGAMBLE_PLAY_INPUT_SEVEN_TEXTWIDGET,
	FRUITGAMBLE_PLAY_INPUT_BAR_TEXTWIDGET,
	FRUITGAMBLE_SELECT_FRAME_IMAGEWIDGET,
	FRUITGAMBLE_INPUT_FRAME_IMAGEWIDGET,
	FRUITGAMBLE_RESULT_ABSCONTAINER,
	FRUITGAMBLE_RESULT_IMAGEWIDGET,
	FRUITGAMBLE_WIN_MONEY_TEXTWIDGET,
	FRUITGAMBLE_GUESS_ABSCONTAINER,
	FRUITGAMBLE_GUESS_BG_IMAGEWIDGET,
	FRUITGAMBLE_GUESS_FRAME_IMAGEWIDGET,
	FRUITGAMBLE_GUESS_WIN_MONEY_TEXTWIDGET,
	FRUITGAMBLE_RECORD_TITLEWIDGET,
	FRUITGAMBLE_RECORD_SCROLLBARWIDGET,
	FRUITGAMBLE_RECORD_LISTWIDGET,
	FRUITGAMBLE_RECORD_ITEMWIDGET,
	FRUITGAMBLE_RECORD_ITEM1_TEXTWIDGET,
	FRUITGAMBLE_RECORD_ITEM2_TEXTWIDGET,
	FRUITGAMBLE_SAVE_TITLEWIDGET,
	FRUITGAMBLE_SAVE_INPUTWIDGET,
	FRUITGAMBLE_SPLASH_MAIN_TEXTWIDGET,
	FRUITGAMBLE_PLAY_INPUT_BAR_BUTTONWIDGET,
	FRUITGAMBLE_PLAY_INPUT_SEVEN_BUTTONWIDGET,
	FRUITGAMBLE_PLAY_INPUT_STAR_BUTTONWIDGET,
	FRUITGAMBLE_PLAY_INPUT_SUIKA_BUTTONWIDGET,
	FRUITGAMBLE_PLAY_INPUT_MELON_BUTTONWIDGET,
	FRUITGAMBLE_PLAY_INPUT_DINGDONG_BUTTONWIDGET,
	FRUITGAMBLE_PLAY_INPUT_ORANGE_BUTTONWIDGET,
	FRUITGAMBLE_PLAY_INPUT_APPLE_BUTTONWIDGET,
	FRUITGAMBLE_RESULT_FADEOUTWIDGET,
	MID_FRUITGAMBLE_OPTION,
	MID_FRUITGAMBLE_OPTION_SAVE
} FruitGambleGameWdgId_e;

#endif //__MMI_CALIBRATIONAPP_ID_H__
