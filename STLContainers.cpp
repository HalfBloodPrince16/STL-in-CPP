#include<bits/stdc++.h>
using namespace std;
void showlist(list <int> g);
void showq(queue <int> gq);
void showstack(stack <int> gq);
void showdq(deque <int> g);
void showpq(priority_queue <int> gq);
//containers in STL

int main()
{
	std::vector<int>v;
	vector <int> :: iterator i;
    vector <int> :: reverse_iterator ir;

	for(int i = 1 ; i <= 10 ; i++)
	{
		v.push_back(i);
	}
	cout<<endl;
	for(i = v.begin() ; i != v.end() ; i++)
	{
		cout<<*i<<"\t";
	}
	cout<<endl;
	for(ir = v.rbegin() ; ir != v.rend() ; ir++)
	{
		cout<<*ir<<"\t";
	}
	
	//capacity
	cout<<endl;
	cout << "Size : " << v.size();
    cout << "\nCapacity : " << v.capacity();
    cout << "\nMax_Size : " << v.max_size();
    
    //accessig elements 
    cout<<endl;
    cout<<v[3]<<"\n";
    cout<<v.at(3)<<"\n";
    cout<<v.front()<<"\n";
    cout<<*v.end()<<"\n";
    
    //Lists 
    list <int> gqlist1, gqlist2;
 
 
    for (int i = 0; i < 10; ++i)
    {
        gqlist1.push_back(i * 2);
        gqlist2.push_front(i * 3);
    }
    cout << "\nList 1 (gqlist1) is : ";
    showlist(gqlist1);
 
    cout << "\nList 2 (gqlist2) is : ";
    showlist(gqlist2);
 
    cout << "\ngqlist1.front() : " << gqlist1.front();
    cout << "\ngqlist1.back() : " << gqlist1.back();
 
    cout << "\ngqlist1.pop_front() : ";
    gqlist1.pop_front();
    showlist(gqlist1);
 
    cout << "\ngqlist2.pop_back() : ";
    gqlist2.pop_back();
    showlist(gqlist2);
 
    cout << "\ngqlist1.reverse() : ";
    gqlist1.reverse();
    showlist(gqlist1);
 
    cout << "\ngqlist2.sort(): ";
    gqlist2.sort();
    showlist(gqlist2);
    
    //queue
    queue <int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
 
    cout << "The queue gquiz is : ";
    showq(gquiz);
 
    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.front() : " << gquiz.front();
    cout << "\ngquiz.back() : " << gquiz.back();
 
    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showq(gquiz);
    
    //Stack
    
     stack <int> gquiz;
    gquiz.push(10);
    gquiz.push(30);
    gquiz.push(20);
    gquiz.push(5);
    gquiz.push(1);
 
    cout << "The stack gquiz is : ";
    showstack(gquiz);
 
    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.top() : " << gquiz.top();
 
 
    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showstack(gquiz);
    
    //dequeue
    
     deque <int> gquiz;
    gquiz.push_back(10);
    gquiz.push_front(20);
    gquiz.push_back(30);
    gquiz.push_front(15);
    cout << "The deque gquiz is : ";
    showdq(gquiz);
 
    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.max_size() : " << gquiz.max_size();
 
    cout << "\ngquiz.at(2) : " << gquiz.at(2);
    cout << "\ngquiz.front() : " << gquiz.front();
    cout << "\ngquiz.back() : " << gquiz.back();
 
    cout << "\ngquiz.pop_front() : ";
    gquiz.pop_front();
    showdq(gquiz);
 
    cout << "\ngquiz.pop_back() : ";
    gquiz.pop_back();
    showdq(gquiz);
    
    //priority queue
    priority_queue <int> gquiz;
    gquiz.push(10);
    gquiz.push(30);
    gquiz.push(20);
    gquiz.push(5);
    gquiz.push(1);
 
    cout << "The priority queue gquiz is : ";
    showpq(gquiz);
 
    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.top() : " << gquiz.top();
 
 
    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showpq(gquiz);
 
 
	return 0;
}
void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}
void showq(queue <int> gq)
{
    queue <int> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

void showstack(stack <int> gq)
{
    stack <int> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}

void showdq(deque <int> g)
{
    deque <int> :: iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

void showpq(priority_queue <int> gq)
{
    priority_queue <int> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}
