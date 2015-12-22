#include <iostream>
#include <string>
#include <unordered_map>
#include <hash_map>

#include <map>

using namespace std;
int main()
{

	// http://www.cplusplus.com/reference/unordered_map/unordered_map/unordered_map/
	// http://www.cplusplus.com/reference/functional/hash/
	
	// collection of key-value pairs, hashed by keys, keys are unique 
	std::unordered_map<string, int> personagem;

	personagem["energia"] = 10;
	personagem["posicao_x"] = 100;
	personagem["posicao_y"] = 200;


	cout << "Energia: " << personagem["energia"] << endl
		 << "X: " << personagem["posicao_x"] << endl
		 << "Y: " << personagem["posicao_y"] << endl;


	hash_map<const char*, char*, hash<const char*>, cmp> hs;
	hs["nickname"] = "Tiger Jo";
	cout << "abc" << hs["nickname"];

	// collection of key - value pairs, sorted by keys, keys are unique
	map<const char*, int> ma;
	ma["vida"] = 10;

	return 0;
}