#include <array>
#include <iostream>

using namespace std;
int main()
{
	array<int, 4> myarray;

	myarray[0] = 2;
	myarray[1] = 22;
	myarray[2] = 222;
	
	cout << myarray.size();

	return 0;
}