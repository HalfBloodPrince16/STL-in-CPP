#include"bits/stdc++.h"
using namespace std;

stack<int>s;

int main()
{
	int i=5,j;
	while(i)
	{
		cin>>j;
		s.push(j);
		i--;

	}
	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}
	return 0;
}