#ifndef INTSTACK_H
#define INTSTACK_H
#include <QLinkedList>


class IntStack : protected QLinkedList<int>
{
public:
    IntStack();
    void push(int value);
    int pop();
    int size();
};

#endif // INTSTACK_H
