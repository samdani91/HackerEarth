#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k;
	long long count;	
	cin>>t;
	while(t--){
		count=0;
		cin>>n>>k;
		multiset<long long>bags;
		for(int i=0;i<n;i++){
			long long candy;
			cin>>candy;
			bags.insert(candy);
		}
		for(int i=0;i<k;i++){
			auto it=(--bags.end());
			long long max_candy=*it;
			count+=max_candy;
			bags.erase(it);
			bags.insert(max_candy/2);
		}
		cout<<count<<endl;
	}
}
