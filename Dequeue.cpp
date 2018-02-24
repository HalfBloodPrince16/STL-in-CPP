#include"bits/stdc++.h"
using namespace std;
deque<int>d;
deque<int>::iterator itr;

int main()
{
	int i,j,haha;
	for(i=0;i<5;i++)
	{
		cin>>haha;
		d.push_back(haha);
		d.push_front(haha);
	}
	cout<<endl;
	for(itr=d.begin();itr!=d.end();itr++)
	{
		cout<<*itr;
	}
	for(i=0;i<5;i++)
	{
		d.pop_back();
	}
	cout<<endl;
	for(itr=d.begin();itr!=d.end();itr++)
	{
		cout<<*itr;
	}
	cout<<endl;
	while(!d.empty())
	{
		cout<<d.front();
		d.pop_front();
	}
	return 0;
}