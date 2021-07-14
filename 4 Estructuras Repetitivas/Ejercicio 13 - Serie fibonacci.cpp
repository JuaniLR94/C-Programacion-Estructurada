//13. Hacer un que realize la serie fibonacci -> 1 1 2 3 5 8 13...n  

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n,x=0,y=1,z=1;
	
	do{
		cout<<"Digite la cantidad de digitos de la serie: ";
		cin>>n;
	}while(n<=0);
	
	cout<<"1 ";						//1
	for(int i=1;i<n;i++){			//									(1) 				(2)			(3)
		z = x + y;					//z = 1			| z= 1 + 1 = 2	| z = 1 + 2 = 3	| z = 2 + 3 = 5	| z = 3 + 5
		cout<<z<<" ";				// "1 1 ..." 	| 1 1 2			|  1 1 2 3		| 1 1 2 3 5		| 1 1 2 3 5 8
		x = y;						//x = 1			| x = 1			|  x= 2 		| x = 3			| x= 5
		y = z;						//y = 1			| y = 2			| y = 3			| y = 5			| y = 8
	}
	
	cout<<"\n";
	system("pause");
	return 0;
}
