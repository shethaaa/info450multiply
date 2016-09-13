// multiply.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main(void)
{
	cout << "Multiplication Table with Nested Loop" << endl;


	for (int c = 0; c < 11; c++)
	{
		cout << c << "|";
		for (int i = 0; i < 11; i++)
		{
			cout << i * c << '\t';
		}

		cout << endl;
	}

	system("pause");
	return 0;
}
