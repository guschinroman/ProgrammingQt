#include "cat.h"
#include <iostream>
using namespace std;

Cat::Cat()
{
    this->name = "";
    this->weigth = 1;
}


void Cat::Meow()
{
    cout << "Meow" << endl;
}
