#ifndef DRAGON_H_
#define DRAGON_H_

#include "critter.h"
#include "predator.h"

class Dragon:public Predator, public Critter
{
public:

    Dragon();
    ~Dragon();

    void setFire();
};

#endif
