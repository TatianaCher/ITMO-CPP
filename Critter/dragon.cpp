#include <iostream>
#include "dragon.h"

using namespace std;


Dragon::Dragon():Critter(99)
{
    cout << "Hi, I'm Dragon" << endl;
}

Dragon::~Dragon()
{
    cout << "Bye, your Dragon" << endl;
}

void Dragon::setFire()
{
    cout << "Burn!" << endl;
}
