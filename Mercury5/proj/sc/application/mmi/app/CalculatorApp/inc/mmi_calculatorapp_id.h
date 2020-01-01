#ifndef __MMI_CALCULATORAPP_ID_H__
#define __MMI_CALCULATORAPP_ID_H__

#ifdef __APP_MMI_SMALLROM__
#define __CALCULATORAPP_SMALLROM__
#endif

typedef enum
{
    CALCULATOR_WND_MAIN = WND_ID_APP_BASE,
}CalculatorWndId_e;

typedef enum
{
    CALCULATOR_RESULT_TEXT = APP_WDG_START,
    CALCULATOR_RESULT_BACKGROUND,
    CALCULATOR_OPERAND1_TEXT,
    CALCULATOR_OPERATOR_TEXT,
    CALCULATOR_LIST,
    CALCULATOR_OPERAND_BUTTON,
    CALCULATOR_OPERATOR_LIST,
    CALCULATOR_OPERATOR_BUTTON,

    CALCULATOR_ADDITION_BUTTON,
    CALCULATOR_SUBSTRACTION_BUTTON,
    CALCULATOR_MULTIPLICATION_BUTTON,
    CALCULATOR_DIVISION_BUTTON,
    CALCULATOR_EQUAL_BUTTON,

    CALCULATOR_DOT_TEXT,
    CALCULATOR_PERCENT_TEXT,
}CalculatorWdgId_e;

typedef enum
{
    CALCULATOR_OPERATOR_ADDITION = 0,
    CALCULATOR_OPERATOR_SUBSTRACTION,
    CALCULATOR_OPERATOR_MULTIPLICATION,
    CALCULATOR_OPERATOR_DIVISION,
    CALCULATOR_OPERATOR_EQUAL,
}CalculatorOperatorId_e;

#endif  //__MMI_CALCULATORAPP_ID_H__

