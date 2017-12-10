#include <iostream>
#include "predator.h"

using namespace std;

Predator::Predator()
{
    cout << "Hi, I'm predator" << endl;
}

Predator::~Predator()
{
    cout << "Bye bye, your predator" << endl;
}

void Predator::setBloodLustLevel(int level)
{
    blood_lust_ = level;
}

int Predator::getBloodLustLevel()
{
    return blood_lust_;
}
