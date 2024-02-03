#include <iostream>
using namespace std;

int main()
{//pointers and arrays support the same set of operations, with the same meaning for both. The main difference being that pointers can be assigned new addresses, while arrays cannot
	
	int array[5];
	int* p;
	p = array; *p = 10;
	p++; *p = 20;
	p = &array[2]; *p = 30;
	p = array + 3; *p = 40;
	p = array; *(p + 4) = 50;

	for (int x = 0; x < 5; x++)
		cout << array[x] << ", ";

	cout << endl << endl;
	system("pause");
	return 0;
}