#include <iostream>
using namespace std;

int main()
{//pointers and arrays support the same set of operations, with the same meaning for both. The main difference being that pointers can be assigned new addresses, while arrays cannot
	
	int array[5] = { 0, 1, 2, 3, 4 };
	int* p;

	cout << "array[5] = { 0, 1, 2, 3, 4 }" << endl;
	for (int x = 0; x < 5; x++)
		cout << array[x] << ", ";
	cout << endl << endl;

	/*********************************/
	p = array; *p = 10;
	/*********************************/
	cout << "p = array; *p = 10" << endl;
	for (int x = 0; x < 5; x++)
		cout << array[x] << ", ";
	cout << endl << endl;

	/*********************************/
	p++; *p = 20;
	/*********************************/
	cout << "p++; *p = 20" << endl;
	for (int x = 0; x < 5; x++)
		cout << array[x] << ", ";
	cout << endl << endl;

	/*********************************/
	p = &array[2]; *p = 30;
	/*********************************/
	cout << "p = &array[2]; *p = 30" << endl;
	for (int x = 0; x < 5; x++)
		cout << array[x] << ", ";
	cout << endl << endl;

	/*********************************/
	p = array + 3; *p = 40;
	/*********************************/
	cout << "p = array + 3; *p = 40" << endl;
	for (int x = 0; x < 5; x++)
		cout << array[x] << ", ";
	cout << endl << endl;

	/*********************************/
	p = array; *(p + 4) = 50;
	/*********************************/
	cout << "p = array; *(p + 4) = 50" << endl;
	for (int x = 0; x < 5; x++)
		cout << array[x] << ", ";

	cout << endl << endl;
	system("pause");
	return 0;
}
