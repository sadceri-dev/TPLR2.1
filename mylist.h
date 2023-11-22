#pragma once
#include "train.h"
#include <string>

template <typename T>
void mcin(T* _x);

class myList
{
    int size = 0;
    train* HEAD;
    train* LAST;
    bool a_to_z_flag;

    train* operator[](int idx);
    void sort();

public:

    myList();

    void flipFlag();
    void seeFlag();

    void add();
    void print();
    void del();
    void edit();
    void findType();
};