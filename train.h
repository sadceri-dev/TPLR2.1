#pragma once
#include <iostream>
#include <string>

#define NAME 0
#define NUMBER 1
#define TIME 2

using namespace std;



class train
{
    string prop[3];
    train* nextPtr;

public:

    train();

    string getName();
    string getNumber();
    string getType();
    train* getNextPtr();

    void setName(string str);
    void setNumber(string str);
    void setType(string str);
    void setNextPtr(train* p);

    friend std::ostream& operator<<(std::ostream& os, const train& p)
    {
        return os << "�����: " << p.prop[NUMBER] << " ����� ����������: " << p.prop[NAME] << " �����: " << p.prop[TIME] << endl;
    }

    friend std::istream& operator>>(std::istream& in, train& p)
    {
        std::cout << "�����: ";
        in.clear();
        in.ignore();
        getline(in, p.prop[NUMBER]);

        std::cout << "����� ����������: ";
        in.clear();
        getline(in, p.prop[NAME]);

        std::cout << "�����: ";
        in.clear();
        getline(in, p.prop[TIME]);

        in.sync();

        return in;
    }

};