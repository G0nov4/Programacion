#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool pairCompare(const std::pair<string, int>& firstElem, const std::pair<string, int>& secondElem) {
     return firstElem.second < secondElem.second;
}
int main(){
	int n,val;
	string cad;
	cin >> n;
	pair<string,int> P;
	std::vector<std::pair<string,int>> vec;
	while(n--){
		cin >> cad >> val;
		P.first = cad;
		P.second = val;
		vec.push_back(P);
	
	}
	for (int i = 0; i < n; ++i)
	{
		cout << vec[i].first <<endl;
		/* code */
	}
	std::sort(vec.begin(),vec.end(),pairCompare);

	for (int i = 0; i < vec.size(); ++i)
	{
		cout << vec[i].first<<endl;
		/* code */
	}
	return 0;
}