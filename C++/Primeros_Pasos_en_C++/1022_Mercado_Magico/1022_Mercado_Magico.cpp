//////////////////////////////////
// Autor: GaryNova
// Descripcion: 
// Algoritmo:
/////////////////////////////////
#include <bits/stdc++.h>

#define ll long long

using namespace std;

const int N = 1e5 +10;

ll A[N], tree[4 * N];
// Definimos funcion de construcción

void build(int nodo, int izq, int der)
{
	if (izq == der){
		tree[nodo] = A[izq];
	} else {
		int mid = (izq + der) / 2;
		build(2 * nodo, izq, mid);
		build(2 * nodo + 1, mid + 1, der);
		int p1 = tree[2*nodo] ;int p2 = tree[2*nodo+1];
		tree[nodo] = (A[p1] <= A[p2]) ? p1 : p2; 
	}
}

void update(int nodo, int izq, int der, int pos, ll val)
{
	if (izq == der)
	{
		tree[nodo] = val;
	} else {
		int mid = (izq + der) / 2;
		if (pos <= mid)
		{
			update(2 * nodo, izq ,mid ,pos ,val);
		} else {
			update(2 * nodo + 1, mid + 1, der, pos, val);
		}
		int p1 = tree[2*nodo] ; int p2 = tree[2*nodo+1];
		tree[nodo] = (A[p1] <= A[p2]) ? p1 : p2; 
	}
}


int RMQ(int nodo, int izq, int der, int i, int j){
	cout << (j < izq) << endl;
 	cout << (der < i) << endl;
	if (j < izq || der < i) {return -1;}
	if(izq >= i && der <= j){ return tree[nodo]; }

	int mid = (der + izq) /2;
	int p1 = RMQ(2*nodo , izq    , mid, i, j);
	int p2 = RMQ(2*nodo+1, mid + 1, der, i, j);

	if(p1 == -1) return p2;
	if(p2 == -1) return p1;
	return (A[p1]<=A[p2]) ? p1 : p2;
}
int rqm(int i, int j,int n) {return RMQ(1, 0, n - 1, i, j); }

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
		int n, q;
		cin >> n >> q;
		for(int i = 0; i < n; i++){
			cin >> A[i];
		}
		build(1, 0, n-1);
		while(q--){
			string ope;
			cin >> ope;
			if(ope == "u"){
				int pos; ll val;
				cin >> pos >> val;
				update(1, 0, n - 1, pos - 1, val);
			} else {
				int l ,r;
				cin >> l >> r;
				int r1 = rqm(l ,r, n);
				cout << r1 << endl; 
			}
		}
	
	return 0;
}
