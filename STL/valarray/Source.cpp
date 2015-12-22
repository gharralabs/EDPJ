#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	bitset<16> bitArray;

	cout << "Sequencia: " << bitArray.to_string().c_str() << endl;

	bitArray[2] = true;
	bitArray[14] = true;
	

	// printf("%d", bitArray.test(14));
	std::cout << std::boolalpha;
	
 	cout << "Sequencia: " << bitArray.to_string().c_str() << endl;

	cout << "Bit  2: " << bitArray[2] << endl;
	cout << "Bit  3: " << bitArray[3] << endl;
	cout << "Bit 14: " << bitArray.test(14) << endl; // test() checa o limite superior e inferior do array




	return 0;
}