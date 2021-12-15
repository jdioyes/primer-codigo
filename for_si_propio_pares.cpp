#include<iostream>
using namespace std;

main()
{
	int n,suma,suma1,par;
	par=0;
	suma1=0;
	for(n=1;n<=50;n++)
	{
			if(n%2==0)
			{
				par=par+1;
				suma1=suma1+n;
				suma=n+n;
				cout<<"la suma de "<<n<<" mas "<<n<<" es: "<<suma<<endl;
			}
	}
	cout<<"\nla suma de todos los numeros pares es: "<<suma1<<endl;
	cout<<"\nla catidad de veces que ingreso es: "<<par<<endl;
}
