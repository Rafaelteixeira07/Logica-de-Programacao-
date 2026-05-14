#include <iostream>
using namespace std;

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