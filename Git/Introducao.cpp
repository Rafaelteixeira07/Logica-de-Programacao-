#include <iostream>
/*
## O que foi utilizado

Neste exercício foi desenvolvido um programa em C++ para calcular o volume de uma lata de óleo, utilizando os valores de raio e altura informados pelo usuário.

V = 3.14 \cdot r^2 \cdot h

Foram utilizados:

* Variáveis do tipo `float`;
* Comandos `cin` e `cout`;
* Operadores matemáticos;
* Estrutura básica da linguagem C++.

## O que foi aprendido

* Entrada e saída de dados;
* Uso de variáveis;
* Aplicação de fórmulas matemáticas na programação;
* Desenvolvimento da lógica de programação;
* Transformação de um problema matemático em algoritmo.
*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float raio = 0, altura = 0;
	cout<< "\nVolume da lata de oleo";
	cout<< "\nEscreva o raio:\n";
	cin >> raio;
	cout<< "\nEscreva a altura:\n";
	cin>> altura;
	cout<<"\nO Volume da lata eh:\n"<< 3.14 *raio*raio*altura;
	
	
	
	
	
	
	
	
	
	
	return 0;
}