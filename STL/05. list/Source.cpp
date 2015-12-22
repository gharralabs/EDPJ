#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void ImprimirLista(list<int>& lista)
{
	ostream_iterator<int> output(cout, " ");
	copy(lista.begin(), lista.end(), output);
}

int main()
{
	// list container, implementado como doubly linked list

	list<int> minhaLista;
	minhaLista.push_back(60);
	minhaLista.push_back(30);
	minhaLista.push_back(40);
	minhaLista.push_back(90);
	minhaLista.push_back(10);

	ImprimirLista(minhaLista);

	minhaLista.sort();

	cout << endl
		<< "Ordernado: " << endl;

	ImprimirLista(minhaLista);

	minhaLista.reverse();

	cout << endl
		<< "Reverso: " << endl;

	ImprimirLista(minhaLista);
		
	cout << endl
		<< "Prepend: " << endl;
	minhaLista.push_front(40);
	ImprimirLista(minhaLista);


	cout << endl
		<< "RemoveTail: " << endl;

	minhaLista.pop_back();
	ImprimirLista(minhaLista);


	cout << endl
		<< "RemoveHead: " << endl;

	minhaLista.pop_front();
	ImprimirLista(minhaLista);

	

	return 0;
}