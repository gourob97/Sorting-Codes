#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int arr[100];
	int size, minindx;
	cin >> size;

	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}




	for (int i = 0; i < size - 1; ++i)
	{
		minindx = i;

		for (int j = size - 1; j >= i; --j)
		{
			if (arr[j] > arr [minindx])
			{

				minindx = j;
			}
		}



		swap(arr[i], arr[minindx]);


	}


	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";

	}

	cout << endl;
	return 0;
}
