#ifndef CAT_H
#define CAT_H
#include <QString>

class Cat
{
public:
    Cat();
    Cat(QString name, int weigth);
    void Meow();
    void Meow(const char* callingName, int count = 3);
    int weigth();
    void setWeigth(int weigth);

private:
    int weigthValue;
    QString name;
    int length;
    void MakeMeow();
};

#endif // CAT_H
