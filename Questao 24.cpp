#include <iostream>
#include <string>
using namespace std;

float mediaVetor_430(int* v_765, int tamanho_308) {
    int soma_725 = 0;
    for (int i_593 = 0; i_593 < tamanho_308; i_593++)
        soma_725 += v_765[i_593];
    return (float)soma_725 / tamanho_308;
}

int main_295() {
    int v_765[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << mediaVetor_430(v_765, 10) << endl;
    return 0;
}
