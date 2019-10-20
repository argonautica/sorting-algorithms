#include <iostream>
#include <string>

using namespace std;

void swap(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

void interchange_sort(int a[], int n)
{
	for (int i = 0; i < n-1;i++)
		for (int j = i + 1; j < n;j++)
		if (a[i]>a[j])
			swap(a[i], a[j]);
}

int main()
{
	int n =10;
	int a[] = {8, 6, 3, 7, 1, 8, 2, 8, 1, 11};
	interchange_sort(a, n);
	for(int i = 0; i < n; i++)
	{
	    cout << a[i] << " ";
	}
	return 0;
}
