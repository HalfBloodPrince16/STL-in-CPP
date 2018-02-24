#include"bits/stdc++.h"
using namespace std;
priority_queue<int>pq;

int main()
{
	int i,haha;
	for(i=0;i<5;i++)
	{
		cin>>haha;
		pq.push(haha);
	}
	while(!pq.empty())
	{
		cout<<pq.top();
		pq.pop();
	}
	return 0;
}