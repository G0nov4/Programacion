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
int sgn(int d){
	if (d == 0)
			return 0;
		else if(d > 0)
			return 1;
		else
			return -1;
}
void build(int nodo, int izq, int der)
{
	if (izq == der){ tree[nodo] = sgn(A[izq]); } 
	else {
		int mid = (izq + der) / 2;
		build(2 * nodo, izq, mid);
		build(2 * nodo + 1, mid + 1, der);
		int d = tree[2 * nodo] * tree[2 * nodo + 1];
		tree[nodo] = sgn(d);
	}
}

void update(int nodo, int izq, int der, int pos, ll val)
{
	if (izq == der)
	{
		tree[nodo] = sgn(val);
	} else {
		int mid = (izq + der) / 2;
		if (pos <= mid)
		{
			update(2 * nodo, izq ,mid ,pos ,val);
		} else {
			update(2 * nodo + 1, mid + 1, der, pos, val);
		}
		ll d = tree[2 * nodo] * tree[2 * nodo + 1];
		tree[nodo] = sgn(d);
	}
}

ll query(int nodo, int izq, int der, int i, int j){
	if (izq == i and der == j){
		return tree[nodo];
	}
	int mid = (izq + der) / 2;
	if (j <= mid){
		return sgn(query(2 * nodo, izq, mid, i, j));
	}
	if (i > mid){
		return sgn(query(2 * nodo + 1, mid + 1, der, i, j));
	}
	return sgn(query(2 * nodo, izq, mid, i, mid) * query(2 * nodo + 1, mid + 1, der, mid + 1, j));
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, q;
	cin >> n >> q;
	for (int i = 0; i < n; ++i)
		cin >> A[i];
	build(1, 0, n - 1);
	int caso;
	ll l, r;
	while(q--){

		cin >> caso;

		if(caso == 1){
			cin >> l >> r;
			int d = query(1, 0, n - 1, l-1, r-1);
			cout << d << endl;
		} else if(caso == 2){
			cin >> l >> r;
			int pos = l;
			update(1, 0, n - 1, pos - 1 ,r);
		}
	}
	return 0;
}
