#include "intstack.h"

IntStack::IntStack()
{

}


void IntStack::push(int value)
{
    append(value);
}

int IntStack::size()
{
    return QLinkedList<int>::size();
}

int IntStack::pop()
{
    int returnValue = -1;

    if (size() > 0)
    {
        returnValue = last();
        removeLast();
    }

    return returnValue;
}
