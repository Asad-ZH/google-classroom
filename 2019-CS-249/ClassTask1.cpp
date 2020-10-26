#include <iostream>

using namespace std;

int main()
{
	//variable and array declaration
	int n;
	int *arr = new int[10];

	cout << "Enter the number of input(Max Limit:10): ";
	cin >> n;
	//taking input
	for (int i = 0; i < n; i++)
	{
		if (i < 10)
			cin >> arr[i];
		else
			cin >> arr[9]; //storing in the last index
	}
	for (int i = 0; i < 10; i++)
	{ //printing result
		cout << arr[i] << "\t";
	}

	delete arr; //deleting dynamic array
	return 0;
}

