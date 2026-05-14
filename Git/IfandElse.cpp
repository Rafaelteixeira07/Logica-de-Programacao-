#include <iostream>
using namespace std;
/*
## O que foi utilizado

Neste exercício foi desenvolvido um programa em C++ para receber três valores numéricos e verificar se eles podem formar um triângulo. Caso seja possível, o programa identifica se o triângulo é equilátero, isósceles ou escaleno.

Foram utilizados:

* Variáveis do tipo `float`;
* Comandos `cin` e `cout`;
* Estruturas condicionais `if`, `else if` e `else`;
* Operadores lógicos (`&&` e `||`);
* Comparações matemáticas para validar os lados do triângulo.

## O que foi aprendido

* Entrada e saída de dados;
* Uso de estruturas condicionais;
* Aplicação da lógica matemática em programação;
* Verificação de condições utilizando operadores lógicos;
* Classificação de triângulos através de algoritmos;
* Desenvolvimento do raciocínio lógico.
*/
int main(){

float a,b,c;

cout<<"Digite o primeiro lado:\n ";
cin>>a;

cout<<"\nDigite o segundo lado:\n ";
cin>>b;

cout<<"\nDigite o terceiro lado:\n ";
cin>>c;

if(a + b > c && a + c > b && b + c > a){

    cout<<"\nForma um triangulo\n";

    if(a == b && b == c){
        cout<<"\nTriangulo equilatero";
    }

    else if(a == b || a == c || b == c){
        cout<<"\nTriangulo isosceles";
    }

    else{
        cout<<"\nTriangulo escaleno";
    }

}

else{
    cout<<"\nNao forma um triangulo";
}

return 0;
}