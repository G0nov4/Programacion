#include <iostream>

using namespace std;

int main(){
	int a,b;
	double T[6] = {0.0,4.00,4.50,5.00,2.00,1.50};	
	cin >> a >> b;
	printf("Total: R$ %.2f\n",T[a]*b);
	return 0;
}