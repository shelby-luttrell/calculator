//Shelby Luttrell: Lone wolf
//DSL Project #2: 4 Function Calculator

#include <QApplication>

#include "calculator.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Calculator calc;
    calc.show();
    return app.exec();
}