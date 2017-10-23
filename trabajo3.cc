//Programa que sume N numeros naturales
//Autor: Daniela Canul Garcia
//Creado el 23 de Octubre de 2017
#include <iostream>
using namespace std;
int main (){
int sum=0;
int count=1;
int N=0;
cout<<"Dame un nùmero entero "<<endl;
 cin>>N;
for(count=0; count<=N; count++){
sum=sum+count;
}
cout<<"la suma de los N numeros naturales es: "<<sum<<endl;
return 0;
}
