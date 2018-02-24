#include"bits/stdc++.h"
using namespace std;
list<int>l;
list<int>::iterator itr;
int main()
{
	int i,j,haha;
	for(i=0;i<5;i++)
	{
		cin>>haha;
		l.push_back(haha);
	}
	for(i=0;i<5;i++)
	{
		cin>>haha;
		l.push_front(haha);
	}
	cout<<endl;
	for(itr=l.begin();itr!=l.end();itr++)
	{
		cout<<*itr;
	}
	for(i=0;i<5;i++)
	{
		cin>>haha;
		l.insert(itr,1,haha);
	}
	cout<<endl;
	for(itr=l.begin();itr!=l.end();itr++)
	{
		cout<<*itr;
	}
	cout<<endl<<l.front();
	cout<<endl;
	cout<<l.back();
	return 0;
}