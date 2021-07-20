#include<iostream>
#define size 5
using namespace std;
void bubble_sort(int arr[])
{
	int i,temp,flag,pos;
	for(pos=1; pos<size; pos++)
	{
		flag=0;
		for(i=0; i<size-pos; i++)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
			flag=1;
		}
		if(flag==0)
		break;
	}
}
void display(int arr[])
{
	int i;
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[size];
	cout<<"Insert value: "<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	bubble_sort(arr);
	cout<<"After sorting: "<<endl;
	display(arr);
}
