#ifndef HUMAN_H
#define HUMAN_H
#include <QString>
#include <citizenship.h>
class Human
{
public:
    Human();
    void setName(const QString &name);
    void setSurname(const QString &surname);
    void setAge(const int &age);
    void addCitizenship(const Citizenship &citizenship);
    void removeCitizenship(const int index);
    void getCitizenship(Citizenship citizenshipRet[20]);
    QString getName() const;
    QString getSurname() const;
    int getAge() const;

private:
    QString name;
    QString surname;
    int age;
    Citizenship citizenships[20];
    int citizenshipCount=0;
};

#endif // HUMAN_H
