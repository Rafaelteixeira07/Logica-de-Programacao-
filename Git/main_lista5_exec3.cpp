#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
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