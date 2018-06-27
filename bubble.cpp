#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int arr[10];
	int size;
	cin >> size;

	bool swapped;

	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}



	for (int i = 0; i < size - 1; ++i)
	{

		swapped = false;

		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}

		if(swapped==false)
			break;
	}




	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	return 0;
}