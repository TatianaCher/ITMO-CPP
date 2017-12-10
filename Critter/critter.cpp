#include "critter.h"
#include <iostream>

using namespace std;

Critter::Critter()
{
   cout << "Hi, I'm critter" << endl;
}

Critter::Critter(int hunger)
{
    hunger_ = hunger;
    cout << "Hi, I'm critter. My hunger level is " << hunger_ << endl;
}

Critter::~Critter()
{
    cout << "Bye bye, your critter" << endl;
}

int Critter::getHungerLevel()
{
    return hunger_;
}
