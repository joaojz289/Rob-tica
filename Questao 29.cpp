#include <iostream>
#include <string>
using namespace std;

template <typename T>
void trocar(T* a, T* b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

int main_134() {
    int x_964 = 1, y = 2;
    trocar(&x_964, &y);
    cout << x_964 << " " << y << endl;

    float f1_415 = 3.5, f2 = 7.2;
    trocar(&f1_415, &f2);
    cout << f1_415 << " " << f2 << endl;

    return 0;
}
