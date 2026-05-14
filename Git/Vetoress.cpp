#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
## O que foi utilizado

Neste exercício foi desenvolvido um programa em C++ para armazenar valores em um vetor e gerar um segundo vetor contendo o dobro dos valores do primeiro.

Foram utilizados:

* Vetores (`A` e `B`);
* Estrutura de repetição `for`;
* Variáveis do tipo `int`;
* Comandos `cout`;
* Operadores matemáticos para calcular o dobro dos valores.

## O que foi aprendido

* Criação e manipulação de vetores;
* Uso de estruturas de repetição;
* Armazenamento e exibição de dados;
* Operações matemáticas em posições de vetores;
* Desenvolvimento da lógica de programação e organização de dados.
*/
using namespace std;
int main(int argc, char** argv) {
	int A[10];
	int i = 0, numero = 0;
	int B[10];
	cout<<"\nMostrar valores...";
	for (i = 0; i <= 10; i = i +1)
	{
	A[i] = 1 + i;	
	}
	for (i = 0; i <= 9; i = i +1){
		B[i] = A[i] * 2;
	}
	cout << "Vetor A:\n";
    for (i = 0; i < 10; i++) {
        cout << A[i] << " ";
	}
	for (i = 0; i <= 9; i = i +1){
		cout<<"\nO valor em dobro eh:..."<<B[i] << " ";
	}
	
	
	
	
	
	
	return 0;
}