#include<bits/stdc++.h>
using namespace std;

int main()
{
	//MANIPULATING ALGOS
	
	int arr[] = {3,5,2,7,66,90,-7};
	int n = sizeof(arr)/sizeof(arr[0]);
	//initializing  vector and storing a array into it.
	std::vector<int>vect(arr,arr+n);
	//displaying an vector.
	for(int i = 0 ; i < n ; i++)
	{
		cout<<vect[i]<<" ";
	}
	
	//sorting a vector
	cout<<endl;
	sort(vect.begin(),vect.end());
	for(int i = 0 ; i < n ; i++)
	{
		cout<<vect[i]<<" ";
	}
	
	// binary search in a vector.
	cout<<endl;
	if(binary_search(vect.begin(),vect.end(),90))
	{
		cout<<"found";
	}
	
	//finding the max/min element in array
	cout<<endl;
	cout<<*max_element(vect.begin(),vect.end());
	cout<<endl;
	cout<<*min_element(vect.begin(),vect.end());
	
	//reversing a vector
	cout<<endl;
	reverse(vect.begin(),vect.end());
	for(int i = 0 ; i < n ; i++)
	{
		cout<<vect[i]<<" ";
	}
	
	//accumulating / sum of all elements in array
	cout<<endl;
	cout<<accumulate(vect.begin(),vect.end(),0);
	
	//count : to find how many times an element occured
	cout<<endl;
	cout<<count(vect.begin(),vect.end(),90);
	
	//lower/upper bound
	cout<<endl;
	int q = *lower_bound(vect.begin(), vect.end(),2);
    int p = *upper_bound(vect.begin(), vect.end(),7);
 
    cout << "The lower bound is at position: ";
    cout << q-*vect.begin() << endl;
 
    cout << "The upper bound is at position: ";
    cout << p-*vect.begin() << endl;
	
	
	//NON-MANIPULATING ALGOS
	//erasing a element and readjusting the whole array
	vect.erase(vect.begin());
	n--;
	cout<<endl;
	for(int i = 0 ; i < n ; i++)
	{
		cout<<vect[i]<<" ";
	}
	
	//for erasing the unique no.s in vector
	vect.erase(unique(vect.begin(),vect.end()),vect.end());
	cout<<endl;
	for(int i = 0 ; i < n ; i++)
	{
		cout<<vect[i]<<" ";
	}
	//then we have array operations which are similar to vector operations.
	return 0;
}
















