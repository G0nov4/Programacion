//////////////////////////////////
// Autor: GaryNova
// Descripcion: 
// Algoritmo:
/////////////////////////////////
#include <iostream>
#include <stdio.h>
const int N = 2e5 +10;
int p[N],X[N],Y[N];

void init(int n){
	for (int i = 0; i < n; ++i)
	{
		p[i]=i
	}
}


int _find(int u){
if(u == p[u]) return n;
return p[u] = _find(p[u])
}

bool _union(int u,int v){
	int pu = _find(u);
	int pv = _find(v);
	if (pu == pv) return false;
	{
		/* code */
	}
	p[u]=v;
}
int main(){
	memset(X,-1,sizeof X);
	memset(y,-1,sizeof y);
	int n;
	cin >>n;
	int i=0;
	while(n--){
		int x,y;
		cin >>x>>y;
		if (X[x] != -1){

		}
		if (Y[y] != -1){
			
		}
		X[x] = i;
		Y[y] = i;
		i++;
	}

	int m;
	while(m--){
		int x ,y;
		cin >> x >> y;
		X[x] = i;
		Y[y] = i;
		i++;
	}



return 0;
}
