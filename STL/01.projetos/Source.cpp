#include <iostream>
#include <vector>

using namespace std;

void ImprimirVector(vector<int> &p_array)
{
	cout << "Tamanho: " << p_array.size()
		 << ", Max: " << p_array.capacity() << endl;

	for (int i = 0; i < p_array.size(); i++)
	{
		cout << p_array[i] << " " ;
	}

	cout << endl;

}

int main()
{
	vector<int> arr;
	arr.reserve(5); // Reserves the minimum size n for the container

	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);
	arr.push_back(40);

	ImprimirVector(arr);


	arr.pop_back();
	arr.pop_back();

	// removido dois do vetor
	ImprimirVector(arr);

	arr.clear();
	ImprimirVector(arr);


	if (arr.empty() == true)
		cout << "Vector esta vazio";
	else
		cout << "Vector NAO esta vazio";

	main();
	return 0;
}