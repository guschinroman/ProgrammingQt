#ifndef CAT_H
#define CAT_H
#include <QString>

class Cat
{
public:
    Cat();

    QString getName() const;
    int getAge() const;

    void setName(const QString& name);
    void setAge(const int& age);

private:
    QString name;
    int age;
};

#endif // CAT_H
