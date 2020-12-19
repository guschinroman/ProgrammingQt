#ifndef MYELLIPSE_H
#define MYELLIPSE_H

class MyEllipse
{
public:
    MyEllipse();

private:
    int focusPositionLeft;
    int focusPositionRight;

protected:
    int length;

public:
    int getLength()
    {
        return this->length;
    }

    void setLength(int newLength)
    {
        if (newLength > 0)
        {
            this->length = newLength;
        }
    }
};

class MyCircle : public MyEllipse
{

};

#endif // MYELLIPSE_H
