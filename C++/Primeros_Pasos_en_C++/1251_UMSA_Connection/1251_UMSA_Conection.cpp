#include <stdio.h>
#include <iostream>
using namespace std;
int v[100010];
int st;
static void initialize(int n){
	for (int i = 0; i < n+1; ++i)
		v[i]=i;
	st=n;
}
static int in(int b){
	if (b == v[b])
		return b;
	else
		return (v[b] = in(v[b]));
}
static bool InsameSet(int a,int b){
	if(in(a)==in(b))
		return true;
	return false;
}
static void Union(int a ,int b){
	if (!InsameSet(a,b))
		st--;
	v[in(a)] = in(b);
}
int main(){
	int m,n;
	cin >> m>> n;
	initialize(m);
	int a,b,x;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >>a >>b;
		cin>>x;
		if (x == 1)
			Union(a,b);
		cout<< st <<endl;
	}
	return 0;
}