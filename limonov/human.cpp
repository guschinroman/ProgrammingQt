#include "human.h"

Human::Human()
{

}

void Human::setName(const QString &name)
{
    this->name = name;
}

void Human::setSurname(const QString &surname)
{
    this->surname = surname;
}

void Human::setAge(const int &age)
{
    this->age = age;
}

void Human::addCitizenship(const Citizenship &citizenship)
{
    this->citizenships[citizenshipCount] = citizenship;
    citizenshipCount++;
}

void Human::removeCitizenship(const int index)
{
    for(int i = index; i < citizenshipCount - 1; i++)
    {
        this->citizenships[i] = this->citizenships[i+1];
    }
    citizenshipCount--;
}

void Human:: getCitizenship(Citizenship citizenshipRet[20]){
    for(int i = 0; i<citizenshipCount; i++){
        citizenshipRet[i] = this->citizenships[i];
    }

}

QString Human::getName() const
{
    return name;
}

QString Human::getSurname() const
{
    return surname;
}

int Human::getAge() const
{
    return age;
}
