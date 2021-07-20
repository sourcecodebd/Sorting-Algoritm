#include<iostream>
#define size 5
using namespace std;

void SelectionSort(int arr[])
{
	for(int i=0;i<size-1;i++)
	{
		int smallest = i;
			for(int j=i+1;j<size;j++)
			{
				if(arr[j]<arr[smallest])
				{
					smallest = j;
				}
			}
			int temp = arr[i];
			arr[i] = arr[smallest];
			arr[smallest] = temp;
	}
}

void DisplayArray(int arr[])
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}

int main()
{
	cout<<"Enter array value"<<endl;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}


	cout<<"Array before sorting: "<<endl;
	DisplayArray(arr);
	SelectionSort(arr);
	cout<<"Array after sorting: "<<endl;
	DisplayArray(arr);
}
