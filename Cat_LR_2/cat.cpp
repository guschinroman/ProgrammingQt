#include "cat.h"

Cat::Cat()
{

}

QString Cat::getName() const
{
    return this->name;
}

int Cat::getAge() const
{
    return this->age;
}

void Cat::setName(const QString &name)
{
    if (name.length() > 2)
    {
        this->name = name;
    }
}

void Cat::setAge(const int &age)
{
    if (age >= 0 && age < 30)
    {
        this->age = age;
    }
}
