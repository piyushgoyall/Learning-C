//Wap to find second largrest element in an array using recursion.
// To write this code in "C" use printf in place of cout and scanf in place of cin.
#include<iostream>
using namespace std;
int array_max(int arr[], int start, int N);
int array_min(int arr[], int start, int N);
int second_max(int arr[], int start, int N, int high, int low);
int main()
{
    int arr[100];
    int N, i;
    cout<<"Enter size of the array: ";
    cin>>N;
    cout<<"\n";
    for(i=0; i<N; i++) 
	{
		cout<<"Enter element for arr["<<i<<"] : ";
		cin>>arr[i];
	}
    cout<<"\n";
    cout<<"Maximum element : ";
    int k = array_max(arr, 0, N);
    cout<<k;
    cout<<"\n";
    cout<<"\n";
    cout<<"Minimum element : ";
    int p = array_min(arr, 0, N);
    cout<<p;
    cout<<"\n";
    cout<<"\n";
    cout<<"Second largest element : ";
    int q=second_max(arr,0,N,k,p);
    cout<<q;
}
int array_max(int arr[], int start, int N)
{
	static int max=arr[0];
	if(start<N)
	{
		if(arr[start]>max)
		{
		    max=arr[start];
			array_max(arr,start+1,N);
		}
		else
		{
			array_max(arr,start+1,N);
		}
	}
  	else
	{
		return max;
	}
}
int array_min(int arr[], int start, int N)
{
	static int min=arr[0];
	if(start<N)
	{
		if(arr[start]<min)
		{
			min = arr[start];
			array_min(arr,start+1,N);
		}
		else
		{
			array_min(arr,start+1,N);
		}
	}
	else
	{
		return min;
	}
}

int second_max(int arr[], int start, int N, int high, int low)
{
	static int second=arr[0];
	if(start<N)
	{
		if(arr[start]<high && arr[start]>low)
		{
			if(second<arr[start])
			{
				second=arr[start];
			}
			second_max(arr,start+1,N,high,low);
		}
		else
		{
			second_max(arr,start+1,N,high,low);
		}
	}
	else
	{
		return second;
	}
}

