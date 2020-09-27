#include "cat.h"
#include <iostream>
using namespace std;

Cat::Cat()
{
    this->name = "";
    this->weigthValue = 1;
    this->length = 2;
}

Cat::Cat(QString name, int weigth)
{
    this->name = name;
    this->weigthValue = weigth;
}

int Cat::weigth()
{
    return this->weigthValue;
}

void Cat::setWeigth(int weigth)
{
    if (weigth > 0 && weigth < 100) {
        this->weigthValue = weigth;
    }
}


void Cat::Meow()
{
    this->MakeMeow();
}

void Cat::Meow(const char* callingName, int count)
{
    cout << "Meow" << " " << callingName;
}

void Cat::MakeMeow()
{
    cout << "Meow" << this->length << endl;
}
