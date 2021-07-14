/*12. Hacer un programa que calcule el resultado de la siguiente expresion:
1-2+3-4+5-6...n*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,suma=0,par=0,impar=0,negativo=0;
	
	cout<<"Digite el numero de elementos: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){         
		if(i%2==0){//los numeros pares son negativos				(2) negativo = -2 , (4) negativo = -4
			negativo = i * -1; //los cambiamos de signo				(2) par = -2		(4) par = -2 + -4 = -6
			par += negativo;				
		}
		else{ //los impares son positivos
			impar += i;										//(1) impar = 1, (3) impar = 1+3 = 4 , (5) impar 4+5 = 9
		}
	}
	
	suma = par + impar;					// 9-6 = 3
	
	cout<<"\nLa suma es: "<<suma<<endl;
	system("pause");
	return 0;
}

