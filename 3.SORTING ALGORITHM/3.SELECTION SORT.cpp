#include<iostream>
using namespace std;

//second function//
void call(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
			cout<<endl;
}	

//first function//
void func(int arr[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		int mim=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]<arr[mim])
			{
				mim=j;
			}
		}	
	swap(arr[i],arr[mim]);
}
	 call(arr,size);
}

int main()
{
	int arr[]={2,3,4,5,1,7,8,9};
	int size=8;
	func(arr,size);
	return 0;
}
