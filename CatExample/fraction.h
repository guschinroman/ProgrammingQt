#ifndef FRACTION_H
#define FRACTION_H


class Fraction
{
public:
    Fraction();
    double toDouble();
    void setNumerator(int);
    void setDenominator(int);

private:
    int fNumerator;
    int fDenominator;
};

#endif // FRACTION_H
