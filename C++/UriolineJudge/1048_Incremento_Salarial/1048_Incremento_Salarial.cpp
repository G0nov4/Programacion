#include <iostream>
using namespace std;

void imprime(double aum,double a,int por){
	printf("Novo salario: %.2f\n",((a*aum)+a));
	printf("Reajuste ganho: %.2f\n",a*(aum));
	printf("Em percentual: %d %\n",por);
}
int main(){
	double a;
	cin >> a;
	if (a > 0 and a <= 400.00){
		imprime(0.15,a,15);
	}else if(a >= 400.01 and a <= 800.00){
		imprime(0.12,a,12);
	}else if(a >= 800.01 and a <= 1200.00){
		imprime(0.10,a,10);
	}else if(a >= 1200.01 and a <= 2000.00){
		imprime(0.07,a,7);
	}else if(a > 2000.00 ){
		imprime(0.04,a,4);
	}
	return 0;
}