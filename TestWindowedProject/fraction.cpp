#include "fraction.h"


fraction::fraction(int num, int denom)
{
    this->fNumerator = num;
    if (denom != 0)
        this->fDenominator = denom;
    else
        this->fDenominator = 1;
}

fraction fraction::operator+(const fraction & rigthFraction) const
{
    return fraction(this->fNumerator*rigthFraction.fDenominator + rigthFraction.fNumerator*this->fDenominator , this->fDenominator * rigthFraction.fDenominator);
}

fraction fraction::operator+=(const fraction & rightFraction)
{
    this->fNumerator = this->fNumerator*rightFraction.fDenominator + rightFraction.fNumerator*this->fDenominator;
    this->fDenominator = this->fDenominator*rightFraction.fDenominator;
    return *this;
}

int fraction::operator[](char field)
{
    if (field == 'n')
    {
        return this->fNumerator;
    }
    else if (field == 'd')
    {
        return this->fDenominator;
    }
    return 0;
}

fraction fraction::operator*(int num) const {
    return fraction(this->fNumerator * num, this->fDenominator);
}

fraction::fraction(const fraction& original)
{
    this->fNumerator = original.fNumerator;
    this->fDenominator = original.fDenominator;
}

fraction::fraction(int num)
{
    this->fNumerator = num;
    this->fDenominator = 1;
}
