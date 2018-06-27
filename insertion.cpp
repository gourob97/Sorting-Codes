#include<iostream>
using namespace std;

int main()
{
	int arr[100];
	int size,  key;
	cin >> size;

	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}


	for (int i = 1; i < size ; ++i)
	{

		key=arr[i];

        int j=i-1;


		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}

		arr[j+1]=key;


		for (int i = 0; i < size; ++i)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}



	return 0;
}