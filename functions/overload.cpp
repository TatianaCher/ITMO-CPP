#include <iostream>

using namespace std;

void demo_f(int i);
void demo_f(int i, int j);
void demo_f(double k);


int main() {

    demo_f(10);
    demo_f(10, 20);
    demo_f(5.6);
    return 0;
}

void demo_f(int i) {
    cout << "Вызов функции demo_f(int) с одним аргументом i = " << i << endl;
}

void demo_f(int i, int j) {
    cout << "Вызов функции demo_f(int, int) с двумя аргументами i = " << i << " j= " << j <<endl;
}

void demo_f(double k) {
    cout << "Вызов функции demo_f(double) с одним аргументом k = " << k << endl;
}
