#include <iostream>
#include <vector>
#include <algorithm>



using namespace std;

void mostrar(vector<int>& p_vet)
{
	for (vector<int>::iterator it = p_vet.begin(); p_vet.end() != it; it++)
	{
		cout << *it << " ";
	}

	cout << endl;
}

int main()
{
	vector<int> vet;
	vet = {1, 2, 3, 4};

	mostrar(vet);
	make_heap(vet.begin(), vet.end());


	// o primeiro elemento e o maior
	mostrar(vet);

	// remover
	cout << "REMOVER" << endl;
	pop_heap(vet.begin(), vet.end());
	vet.pop_back();
	mostrar(vet);

	// adicionar
	
	vet.push_back(15);
	mostrar(vet);

	push_heap(vet.begin(), vet.end());
	mostrar(vet);

	sort_heap(vet.begin(), vet.end());
	mostrar(vet);

	/*std::priority_queue<int> q;

	for (int n : {1, 8, 5, 6, 3, 4, 0, 9, 3, 2})
		q.push(n);*/


	return 0;
}