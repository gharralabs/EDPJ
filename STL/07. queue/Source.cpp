#include <queue>
#include <iostream>

using namespace std;

int main()
{
	std::queue<int> myqueue;
	myqueue.push(77);
	myqueue.push(16);
	myqueue.push(40);
	myqueue.push(50);

	while (!myqueue.empty())
	{
		cout << myqueue.front() << endl;
		myqueue.pop();
	}

	return 0;
}