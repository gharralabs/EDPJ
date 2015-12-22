#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>

using namespace std;

void ImprimirVetor(vector<int> &p_array)
{
	cout << "Tamanho: " << p_array.size()
		<< ", Max: " << p_array.capacity() << endl;

	// Ostream iterators are output iterators that write sequentially 
	// to an output stream (such as cout).

	// parametros
	// 1. stream
	// 2. delimitador
	ostream_iterator<int> output(cout, " ");
	copy(p_array.begin(), p_array.end(), output);

}

int main()
{

	vector<int> arr;
	arr.reserve(5); // Reserves the minimum size n for the container

	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);
	arr.push_back(40);
	arr.push_back(50);

	vector<int> arr2;
	for (int i = 0; i < 5; i++)
		arr2.push_back(0);

	cout << " Array 2 antes da copia: " << endl;
	ImprimirVetor(arr2);


	// Whenever possible use STL algorithms for traditional arrays
	//	and containers because the performance is efficient.
	copy(arr.begin(), arr.end(), arr2.begin());
	

	cout << " Array 2 depois da copia: " << endl;
	ImprimirVetor(arr2);


	cout << "Acumulado: "
		 << accumulate(arr.begin(), arr.end(), 0);

	// Manually delete pointers of new-ed memory that was stored in a container, because
	// the container will not delete that memory for you

	for_each(arr.begin(), arr.end())
	{

	}
	return 0;
}