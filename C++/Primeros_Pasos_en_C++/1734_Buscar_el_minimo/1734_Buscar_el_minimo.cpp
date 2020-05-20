//////////////////////////////////
// Autor: GaryNova
// Descripcion: 
// Algoritmo:
/////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 +10;
ll A[N], tree[4 * N];
int n;

int left(int p){return p << 1;}

int right(int p){ return ((p << 1) + 1);}

void build(int nodo, int izq, int der){
	if(izq == der)
		tree[nodo] = izq;
	else{
		int mid = (izq + der) / 2;
		build(left(nodo), izq, mid);
		build(right(nodo), mid + 1, der);

		int p1 = tree[left(nodo)] , p2 = tree[right(nodo)];
		tree[nodo] = (A[p1] <= A[p2]) ? p1 : p2; 
	}
}
int update(int nodo, int izq, int der, int pos, ll val){
	int i = pos, j = pos;
	if(j< izq|| der< i) return tree[nodo];
	if(izq == i && der == j) {
		A[i] = val;
		return tree[nodo] = izq;
	}
	int mid = (izq + der) / 2;

	int p1 = update(left(nodo), izq, mid, pos, val);
	int p2 = update(right(nodo), mid+ 1,der, pos, val);
	return tree[nodo] = (A[p1] <= A[p2]) ? p1 : p2;
}
int update(int pos, ll val){
	return update(1, 0, n - 1, pos, val); 	
}

int RMQ(int nodo, int izq, int der, int i, int j){
	if(i > der || j < izq) {return -1;}
	if(izq >= i && der <= j){ return tree[nodo]; }

	int mid = (der + izq) /2;
	int p1 = RMQ(left(nodo) , izq    , mid, i, j);
	int p2 = RMQ(right(nodo), mid + 1, der, i, j);

	if(p1 == -1) return p2;
	if(p2 == -1) return p1;
	return (A[p1]<=A[p2]) ? p1 : p2;
}
int rqm(int i, int j) {return RMQ(1, 0, n - 1, i, j); }

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, caso;
	cin >> n >> caso;
	for (int i = 0;i < n; ++i)
		cin >> A[i];
	
	build(1, 0, n-1);
	char s;
	int i , j ,x ,y;
	while(caso--){
		cin >> s;
		if(s == 'q'){
			cin >> i >> j;
			int d = rqm(i ,j);
			cout<<  d <<endl;
		}
		else
		{
			cin >> x >> y;	
			update(1, 0, n-1, x, y);		
		}
	}

	return 0;
}