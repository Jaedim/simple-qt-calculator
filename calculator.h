#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stack>
#include <QString>

class Calculator
{
public:
    Calculator();
    void calculate(QString equation);
    QString output();

private:
    bool sanityCheck(QString equation);

    QString outputText;

    std::stack<QString> valueStack;
    std::stack<QChar> symbolStack;
};

#endif // CALCULATOR_H
