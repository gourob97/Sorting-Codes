#include<iostream>
using namespace std;

void mergesort(int arr[],int l,int r);
void mergen(int arr[],int l,int m,int r);

int main()
{
	int arr[100];
	int size;
	cin>>size;

	for (int i = 0; i < size; ++i)
	{
		cin>>arr[i];
	}

	mergesort(arr,0,size-1);

	for (int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

}


void mergesort(int arr[],int l,int r)
{

	int m;

	if(l<r)
	{
       m=(l+(r-1))/2;


	mergesort(arr,l,m);
	mergesort(arr,m+1,r);

	mergen(arr,l,m,r);
	}



}

void mergen(int arr[],int l,int m,int r)
{


    int n1,n2,i,j,k;
    n1=m-l+1;
    n2=r-m;

    int left[n1];
    int right[n2];

    for (i = 0; i < n1; ++i)
    {
    	left[i]=arr[l+i];
    }

    for (j= 0; j < n2; ++j)
    {
    	right[j]=arr[m+1+j];
    }

    i=0,j=0,k=l;

    while(i<n1 && j<n2)
    {
    	if(left[i]<=right[j]){
    		arr[k]=left[i];
    		i++;
    	}

    	else{
    		arr[k]=right[j];
    		j++;
    	}

    	k++;

    }

    while(i<n1)
    {
    	arr[k]=left[i];
    	i++;
    	k++;
    }

    while(j<n2)
    {
    	arr[k]=right[j];
    	j++;
    	k++;
    }

    return;

}
