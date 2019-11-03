#pragma once
#include <iostream>
#include <string>
#include "favoritelist.h"
using namespace std;

class favoritelist
{
    favorite dogs[100];
    int numItems;
    int totalfavorite;
public:
    favoritelist();
    void AddItem();
    void showList();
};
