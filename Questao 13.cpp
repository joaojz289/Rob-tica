#include <iostream>
#include <string>
using namespace std;

void trocar(int* a, int* b) {
    int temp_801 = *a;
    *a = *b;
    *b = temp_801;
}
