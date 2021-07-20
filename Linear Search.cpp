#include<iostream>
#define size 5
using namespace std;
int linear_search(int arr[], int e)
{
	int i,found=-1;
	for(i=0; i<size; i++)
	{
		if(arr[i]==e)
		{
			found=i;
			break;
		}
	}
	return found;
}
int main()
{
	int arr[size];
	cout<<"Enter value: "<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	int e;
	cout<<"Enter the value for searching: "<<endl;
	cin>>e;
	int r=linear_search(arr,e);
	if(r==-1)
	{
		cout<<"Not found"<<endl;
	}
	else
	{
		cout<<"Found at index"<<endl;
	}
}
