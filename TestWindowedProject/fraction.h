#ifndef FRACTION_H
#define FRACTION_H
#include <QDebug>



class fraction
{
public:
    fraction()
    {
        this->fNumerator = 1;
        this->fDenominator = 1;
    }
    fraction(int, int);
    fraction(int);
    fraction(const fraction& original);

    fraction operator+(const fraction&) const;
    fraction operator*(int num) const;
    fraction operator+=(const fraction&);
    int operator[](char);

    ~fraction()
    {
        qDebug() << "fraction going to destroy";
    }
private:
    int fNumerator;
    int fDenominator;
};


#endif // FRACTION_H
