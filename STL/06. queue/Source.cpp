#include <iostream>
#include <stack>
#include <list>
#include <vector>


using namespace std;
void MostrarPilha(stack<int, list<int>>& p_pilha)
{

	while (p_pilha.empty() == false)
	{
		cout << " " << p_pilha.top();
		p_pilha.pop();
	}
}

int main()
{
	stack<int, vector<int>> vecStack;
	stack<int, list<int>> listStack;

	listStack.push(10);
	listStack.push(20);
	listStack.push(30);

	MostrarPilha(listStack);

	return 0;
}