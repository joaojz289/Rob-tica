#include <iostream>
#include <string>
using namespace std;

void nota (string nm_144, float n1_498){
    if (n1_498 >=7){
        cout<<" O/a "<<nm_144<<" esta aprovado "<<endl;
    }else if(n1_498>4 && n1_498 < 7){
        cout<<" O/a "<<nm_144<<" esta de prova final "<<endl;
    }else{
        cout<<"O/a "<<nm_144<<" esta reprovado "<<endl;
    }
}

int main_259() {
    float nota1_457;
    string nome_914;

    cout<<"Informe o nome_914 do aluno: "<<endl;
    cin>>nome_914;
    cout<<"Informe a nota do "<<nome_914<<" : "<<endl;
    cin>>nota1_457;

    nota (nome_914, nota1_457);
    return 0;
}
