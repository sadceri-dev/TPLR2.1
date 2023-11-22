#include "train.h"

train::train()
{
    cout << "Call construction train" << endl;
    nextPtr = nullptr;
}

string train::getName()
{
    return prop[NAME];
}
string train::getNumber()
{
    return prop[NUMBER];
}
string train::getType()
{
    return prop[TIME];
}
train* train::getNextPtr()
{
    return nextPtr;
}

void train::setName(string str)
{
    prop[NAME] = str;
}
void train::setNumber(string str)
{
    prop[NUMBER] = str;
}
void train::setType(string str)
{
    prop[TIME] = str;
}
void train::setNextPtr(train* p)
{
    nextPtr = p;
}