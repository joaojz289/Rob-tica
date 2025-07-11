#include <iostream>
#include <string>
using namespace std;

void Soma (){
    float num1_493, num2, resultado;
    cout<<"Informe o primeiro valor: "<<endl;
    cin>>num1_493;
    cout<<"Informe o segundo valor: "<<endl;
    cin>>num2;

    resultado = num1_493 + num2;
    cout<<"Resultado da opercão "<<num1_493<<" + "<<num2<<" = "<<resultado<<endl;
}
void Subtracao (){
    float num1_493, num2, resultado;
    cout<<"Informe o primeiro valor: "<<endl;
    cin>>num1_493;
    cout<<"Informe o segundo valor: "<<endl;
    cin>>num2;

    resultado = num1_493 - num2;
    cout<<"Resultado da opercão "<<num1_493<<" - "<<num2<<" = "<<resultado<<endl;
}
void Multiplicacao (){
    float num1_493, num2, resultado;
    cout<<"Informe o primeiro valor: "<<endl;
    cin>>num1_493;
    cout<<"Informe o segundo valor: "<<endl;
    cin>>num2;

    resultado = num1_493 * num2;
    cout<<"Resultado da opercão "<<num1_493<<" * "<<num2<<" = "<<resultado<<endl;
}
void menu (){
    int operacao_401;
    cout<<"Operaçoes: "<<endl;
    cout<<"1• Soma "<<endl;
    cout<<"2• Subtraçao "<<endl;
    cout<<"3° Multiplicaçao "<<endl;

    cout<<"Digite o numero da operaçao desejada: "<<endl;
    cin>> operacao_401;

    if (operacao_401 == 1){
        Soma();
    }else if(operacao_401 == 2){
        Subtracao();
    }else if(operacao_401 == 3){
        Multiplicacao();
    }
}

int main_762() {
    menu();
    return 0;
}
