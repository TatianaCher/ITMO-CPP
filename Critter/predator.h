#ifndef PREDATOR_H_
#define PREDATOR_H_

using namespace std;

class Predator
{
public:
    Predator();
    ~Predator();

    void setBloodLustLevel(int level);
    int getBloodLustLevel();

private:
    int blood_lust_;
};

#endif
