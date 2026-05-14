#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
### Enunciado

* Mostrar os números pares entre 10 e 100
* Exibir a somatória dos números pares no final

### O que foi aprendido/utilizado

* Declaração de variáveis (int)
* Uso do contador iniciando em 10
* Laço de repetição while
* Incremento de 2 em 2 para manter números pares
* Soma acumulativa usando uma variável (soma)
* Impressão dos valores na tela com cout
*/
using namespace std;
int main(int argc, char** argv) {
int cont = 10, soma = 0;
cout<< "\n Todos os pares de 0 a 10";
while (cont<101){
	cout << "  " << cont;
	cont = cont + 2;
	soma = cont + soma;
	
}

cout<<"\nA soma dos pares eh:\n" << soma;	

	
	
	return 0;
}