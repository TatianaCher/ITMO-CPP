#include <iostream>

using namespace std;

double &demo_f();
double demo_val = 100;

int main() {

    double new_demo_val = 0;

    cout << "new_demo =" << new_demo_val << endl;

    new_demo_val = demo_f();

    cout << "new_demo =" << new_demo_val << endl;

    return 0;
}

//реализация функции
double &demo_f()
{
    return demo_val;
}
