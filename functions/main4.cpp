#include <iostream>

using namespace std;


void sqr_it(int &i); // прототип функции (определение)

int main() {
   int x;
   cout << "Введите число:" << endl;
   cin >> x;
   sqr_it(x);
   cout << "Результат: " << x << endl;
   return 0;
}
//реализация функции
void sqr_it(int &i) {
   i = i * i;
}
