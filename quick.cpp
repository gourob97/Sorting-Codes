#include<iostream>
#include<algorithm>
using namespace std;

void quicksort(int arr[], int low, int high);
int  partition(int arr[], int low, int high);

int main()
{
	int arr[100];
	int size;
	cin >> size;

	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	quicksort(arr, 0, size - 1);

	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}

void quicksort(int arr[], int low, int high)
{

	// cout<<"in quicksort function";

	if (low < high) {
		int pi;

		pi = partition(arr, low, high);


		quicksort(arr, low, pi - 1);
		quicksort(arr, pi + 1, high);
	}

}

int partition(int arr[], int low, int high)
{

	// cout<<"int partition function";
	int pivot = arr[high];

	int i = low - 1;
	for (int j = low; j <= high - 1; ++j)
	{
		if (arr[j] <= pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}

	swap(arr[i + 1], arr[high]);

	return i + 1;


}