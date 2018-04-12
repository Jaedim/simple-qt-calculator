#include "calculator.h"

Calculator::Calculator()
{
    outputText = "";
}

void Calculator::calculate(QString equation)
{
    if (equation.length() == 0) return;

    if (sanityCheck(equation) == false)
    {
        outputText = "Illegal characters were input";
        return;
    }

    QString value = "";

    for (int i = 0; i < equation.length(); i++)
    {
        QChar charAt = equation.at(i);

        if (charAt.isDigit())
        {
            value+=charAt;
        }
        else
        {
            valueStack.push(value);
            symbolStack.push(charAt);
            value = "";
        }
    }

    outputText = "";
}

bool Calculator::sanityCheck(QString equation)
{
    bool passes = true;

    for (int i = 0; i < equation.length(); i++)
    {
        QChar tempChar = equation.at(i);

        if (!tempChar.isDigit()
               && tempChar != '+' && tempChar != '-'
               && tempChar != '*' && tempChar != '/'
               && tempChar != '×' && tempChar != '÷'
               && tempChar != '.'
           )
            passes = false;
    }

    return passes;
}

QString Calculator::output()
{
    return outputText;
}
