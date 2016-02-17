#include <iostream>

using namespace std;

int buildSquare(int sizeOf)
{
	int i;
	int j;

	if (sizeOf >= 1 && sizeOf <= 20)
	{
		i = 0;
		while (i < sizeOf)
		{
			i++;
			j = 0;
			while (j <= sizeOf)
			{
				if (((j > 1) && (j < sizeOf))&&((i > 1) && (i < sizeOf)))
				{
					cout << " ";
				}
				else if ((j != 0) && (i != 0))
				{
					cout << "*";
				}
				j++;
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Too large! The size of the square must be between 1 and 20\n";
	}

	return 0;
}

int main()
{
	int squareSize;

	cout << "I'm going to draw a square! How large would you like it? ";
	cin >> squareSize;

	buildSquare(squareSize);

	//cross-platform pause
	cin.ignore();
	cin.get();
	return 0;
}
