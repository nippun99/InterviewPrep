#include<bits/stdc++.h>
using namespace std;
int main() {
	vector<int> v;
	for(int i=0;i<5;i++){
		v.push_back(i);
	}
	
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}

