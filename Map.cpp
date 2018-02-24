#include"bits/stdc++.h"
using namespace std;

map<int,int>m;
map<int,int>::iterator itr;
int main()
{
	int i=5,j;
	while(i)
	{
		cin>>j;
		m.insert(pair<int,int>(6-i,j));
		i--;
	}

	for(itr=m.begin();itr!=m.end();itr++)
	{
		cout<<itr->first;
		cout<<" "<<itr->second<<endl;
	}
	return 0;
}