#include"bits/stdc++.h"
using namespace std;
queue<int>q;


int main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
		q.push(i);
	}
	while(!q.empty())
	{
		cout<<q.front();
		q.pop();
	}
	return 0;
}