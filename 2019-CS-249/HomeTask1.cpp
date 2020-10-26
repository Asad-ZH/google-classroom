#include <iostream>

using namespace std;

void remove(int *p, int r, int n)
{
	p[r] = -999; //setting the enter index to -999

	if (p[r + 1] != -999) //sorting the array
	{
		for (int i = r; i < n; i++)
		{
			p[i] = p[i + 1];
		}
	}
}

int main()
{
	//variable declaration
	int n, r;
	int *arr = new int[10];

	cout << "Enter the number of input(Max Limit:10): ";
	cin >> n;

	//assigning default value
	for (int i = 0; i < 10; i++)
	{
		arr[i] = -999;
	}

	cout << "Enter the numbers:-\n";
	for (int i = 0; i < n; i++)
	{
		if (n == 10) //validtion (in case user reached the limit)
			break;
		cin >> arr[i];
	}

	cout << "Enter the index to remove that element: ";
	cin >> r;

	remove(arr, r, n); //calling user defined function

	//printing result
	cout << "Array: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}

	delete arr;
	return 0;
}
