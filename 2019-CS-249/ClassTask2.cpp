#include <iostream>

using namespace std;

int main()
{
	//variable declaration
	int n, temp[10];
	int *arr = new int[10];
	bool x = true;

	//assigning default value
	for (int i = 0; i < 10; i++)
	{
		arr[i] = -999;
	}

	cout << "Enter the number of input(Max Limit:10): ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		if (arr[9] != -999)
		{ //checking if no. input is greater then the array size or not
			if (x == true)
			{
				cout << "Limit Reached - Increasing Array Size\n";
				for (int i = 0; i < 10; i++) //backing up array data
					temp[i] = arr[i];

				delete arr;			   //deleting old array
				int *arr = new int[n]; //declaring new array of same name

				for (int i = 0; i < 10; i++)
					arr[i] = temp[i]; //assign data again to the new array

				x = false;
			}
			cin >> arr[i];
		}
		else
		{
			cin >> arr[i];
		}
	}
	//printing result
	cout << "Array: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}

	delete arr;
	return 0;
}

