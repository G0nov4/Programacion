#include <iostream>
#include <string>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int a,suma;
	string b;
	int v[10]={6,2,5,5,4,5,6,3,7,6};
	cin >> a;
	for (int i = 0; i < a; ++i)
	{
		suma=0;
		cin >> b;
		for (int i = 0; i < b.size(); ++i)
		{
			suma+=v[(b[i] - '0') - 2];

			/* code */
		}
		printf("%d leds\n",suma);	
		/* code */
	}
	return 0;
}