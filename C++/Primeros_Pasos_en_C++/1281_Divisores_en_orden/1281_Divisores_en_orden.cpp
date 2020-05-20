//////////////////////////////////
// Autor: GaryNova
// Descripcion: 
// Algoritmo:
/////////////////////////////////
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
void divisores(int num){
    int square_root = (int) sqrt(num) + 1;
    for (int i = 1; i < square_root; i++) { 
        if (num % i == 0&&i*i!=num)
            cout << i << num/i << endl;
        if (num % i == 0&&i*i==num)
            cout << i << '\n';
    }
}
int main(){
	int l;
	while((scanf("%ld",&l))!=EOF){
		/*cout << "Divisores de "<<l<<": ";
		int num = l/2;
		for(int i =1;i <=num;i++){
			if(num % i == 0){
				cout<<i<<" ";
			}
		}
		cout << l <<endl;*/
        divisores(l);
    }
    	return 0;
}
