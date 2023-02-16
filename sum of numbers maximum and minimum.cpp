// CPP program to find the sum and product
// of minimum and maximum element in an array

#include <iostream>
using namespace std;

// Function to find minimum element
int getMin(int arr[], int n)
{
	int res = arr[0];
	for (int i = 1; i < n; i++)
		res = min(res, arr[i]);
	return res;
}

// Function to find maximum element
int getMax(int arr[], int n)
{
	int res = arr[0];
	for (int i = 1; i < n; i++)
		res = max(res, arr[i]);
	return res;
}

// Function to get Sum
int findSum(int arr[], int n)
{
	int min = getMin(arr, n);
	int max = getMax(arr, n);

	return min + max;
}

// Function to get product
int findProduct(int arr[], int n)
{
	int min = getMin(arr, n);
	int max = getMax(arr, n);

	return min * max;
}

// Driver Code
int main()
{
	int arr[] = { 12, 1234, 45, 67, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Sum of min and max element
	cout << "Sum = " << findSum(arr, n) << endl;

	// Product of min and max element
	cout << "Product = " << findProduct(arr, n);

	return 0;
}

