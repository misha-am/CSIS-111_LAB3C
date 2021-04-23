// Michael Ubinas

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void arrayA()
{
	string myNum;
	ifstream myReadFile("a.txt");

	cout << "Here is Array A" << endl;
	int i = 0;
	int j = 0;
	int arrayA[3][4];


for (int i = 0; i < 3; i++) 
{
	for (int j = 0; j < 4; j++)
	{
		getline(myReadFile, myNum); 
		cout << myNum << "\t";
	}	 
	cout << endl;
}
	myReadFile.close();

	cout << endl;
}

void arrayB()
{
	string myNum;
	ifstream myReadFile("b.txt");

	cout << "Here is Array B" << endl;
	int i = 0;
	int j = 0;
	int arrayB[3][4];


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			getline(myReadFile, myNum);
			cout << myNum << "\t";
		}
		cout << endl;
	}
	myReadFile.close();

	cout << endl;
}

void arrayC()
{
	string myNumA;
	string myNumB;
	string largestNum;
	ifstream myReadFileA("a.txt");
	ifstream myReadFileB("b.txt");

	cout << "Here is Array C" << endl;
	int i = 0;
	int j = 0;
	int arrayB[3][4];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			getline(myReadFileA, myNumA);
			getline(myReadFileB, myNumB);
			
			if (myNumA > myNumB)
			{
				cout << myNumA << "\t";
			}

			else
			{
				cout << myNumB << "\t";
			}
		}
		cout << endl;
	}
	myReadFileA.close();

	cout << endl;
}

int main()
{
	arrayA();
	arrayB();
	arrayC();
}
