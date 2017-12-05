#include <iostream>

using namespace std;


int sqr_it(int i); // прототип функции (определение)

int main() {
    int x;
    cout << "Введите число:" << endl;
    cin >> x;
    x = sqr_it(x);
    cout << "Результат: " << x << endl;
    return 0;
}

//реализация функции
int sqr_it(int i) {
    return i = i * i;
}