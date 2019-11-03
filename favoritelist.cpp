#include <iostream>
#include <string>
#include "favoriteclass.h"
#include "favoritelist.h"
using namespace std;

favoritelist::favoritelist()
{
    numItems = 0;
    totalfavorite = 0;
}
void favoritelist::AddItem()
{
    dogs[numItems].getfavoriteInput();
    totalfavorite += dogs[numItems].getbreed();
    numItems++;

}
void favoritelist::showList()
{
    int i;
    for (i = 0; i < numItems; i++)
    {
        cout << dogs[i];
    }
    cout << "total quantity of all dogs are" << totalfavorite << endl;
}
