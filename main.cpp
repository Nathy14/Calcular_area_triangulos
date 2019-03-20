#include <iostream>
#include "triangulo.h"
using namespace std;
int main() {
  int opcao;
  int vetor[10];
  int count=0;
  int i=0;
  while (true){
    cout<<"0-sair\n";
    cout<<"1-informar dados do proximo triangulo(lados) em metros\n";
    cout<<"2-calcular area total\n";
    cin>>opcao;
    if(opcao>2 || opcao < 0){
      cout<<"Erro, digite uma opcao valida!";
    }
    else if(opcao == 0){
      cout<<"Saindo do programa\n";
      break;
    }
    else if(opcao == 1){
      if(i>10){
        cout<<"Você ja preencheu todos os valores possiveis do vetor";
      }
      else{
        double x;
        double y;
        double z;
        triangulo n(x,y,z);
        cout<<"Digite o valor do primeiro lado: \n";
        cin>>x;
        cout<<"Digite o valor do segundo lado: \n";
        cin>>y;
        cout<<"Digite o valor do terceiro lado: \n";
        cin>>z;
        double soma_area = n.area();
        vetor[i] = soma_area;
        i++;
        cout<<"A area deste triangulo é igual a "<<soma_area<<"\n";
      }
    }
  else if(opcao == 2){
    for(int j=0;j<10;j++){
      double soma =+ vetor[j];
  cout<<"A soma total das areas dos triangulos é igual a "<<soma<<"\n";
    }
  }
}
return 0;
}  
