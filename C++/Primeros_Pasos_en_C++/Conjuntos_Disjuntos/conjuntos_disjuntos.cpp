#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 +10;

int p[N], sz[N];   //  Disjoint Set Union (Union Find)

void init(int n){
	for(int i = 1; i <= n; i++){
		p[i]=i;
		sz[i]=1;
	}
}

int _find2(int u){
	if(u == p[u]) return u;
	return _find2(p[u]);
}

int _find(int u){
	if(u == p[u]) return u;
	return p[u] = _find(p[u]); // Memorizacion
}

void _union(int u,int v){
	int pu = _find(u);
	int pv = _find(v);
	if(pu == pv) return;
	p[pu] = pv;
	sz[pv] = sz[pv] + sz[pu];
}
int main(){
	// Numero de elementos
	cout << "Nro de elementos:  ";
	int  n;
	cin >> n;
	init(n);
	cout << "Nro de preguntas:  ";
	// Union de conjuntos
	// Verificar si dos elementos pertenecen al mismo conjunto
	int q;
	cin>>q;
	while(q--){
		int type;
		cin >> type;
		if(type == 1){
			int u ,v;
			cin >>u >>v ;
			_union(u,v);
		}else if(type == 2){
		// Verificar si estan en el mismo conjunto
			int u ,v;
			cin >> u >> v;
			if (_find(u) == _find(v)){
				cout << "Yes\n";
			} else {
				cout << "No\n";
			}
		}else{
			// Tamaño del conjunto
			int u ;
			cin >> u;
			int pu = _find(u);
			cout << "Tamaño:  " << sz[pu] <<"\n";
		}
		
	}
	return 0;
}