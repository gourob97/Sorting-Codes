//author--> Gourob Mazumder
#include<iostream>
#define MAX 100
using namespace std;

void heapsort(int * , int );

void maxheap(int *, int, int );

void display(int *, int );



int main()
{
	int num[MAX], size;
	cout << "How many elements do you want to sort? " << endl;
	cin >> size;

	for (int i = 0; i < size; ++i)
	{
		cin >> num[i];
	}

	cout << endl << endl << "unsorted array" << endl;
	display(num, size);

	heapsort(num, size);

	cout << endl << endl << "sorted array" << endl;

	display(num, size);



	return 0;
}

void heapsort(int *num, int size)
{
	for (int i = (size / 2) - 1; i >= 0 ; --i)
	{
		maxheap(num, size, i);
	}


	for (int i = size - 1; i >= 0; --i)
	{
		swap(num[0], num[i]);

		maxheap(num, i, 0);
	}
}

void maxheap(int *num, int size, int root)
{



	int max = root;
	int left = (2 * root) + 1;
	int right = (2 * root) + 2;

	if (left < size && num[max] < num[left])
		max = left;

	if (right < size && num[root] < num[right])
		max = right;
	if (max != root)
	{
		swap(num[root], num[max]);

		maxheap(num, size, max);
	}

}


void display(int *num, int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << num[i] << " ";
	}
	cout << endl;
}