#include <iostream>
#include <string>
using namespace std;

int InvertSinal_957(int &valor){
    int resultado_246;
    if (valor > 0){
        resultado_246 = -(valor);
    }else if(valor<0){
        resultado_246 = abs(valor);
    }
    return resultado_246;
}

int main_889() {
    int num1_958;
    cout<<"Digite um valor: "<<endl;
    cin>>num1_958;

    cout<< "Trocando os sinais de "<<num1_958<< " para "<<InvertSinal_957(num1_958) <<endl;
    return 0;
}
