#include "fraction.h"

Fraction::Fraction()
{

}

void Fraction::setNumerator(int value)
{
    this->fNumerator = value;
}

void Fraction::setDenominator(int value)
{
    if (value == 0)
        this->fDenominator = 1;
    else
        this->fDenominator = value;
}

double Fraction::toDouble()
{
    return (double)this->fNumerator / (double)this->fDenominator;
}
