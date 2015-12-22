// sort(), stable_sort(), and partial_sort().


/* The function sort() is used to sort objects into ascending or descending order based on a 
   binary predicate.
   
   This function takes as parameters a random access
   iterator to the first element in the data structure to be sorted, a random access iterator
   to the last element in the data structure to be sorted, and the optional binary
   predicate.

   Earlier versions of the sort() STL function used the quick sort algorithm,
   which will be examined later in the book, while more current implementations use
   the intro sort algorithm.

   //  introspective sort 
   //  Ele começa com o quicksort e muda para o heapsort quando a profundidade da recursividade excede um nível baseado no (logaritmo do) número de elementos a ser classificados. 
   // http://pt.wikipedia.org/wiki/Intro_sort
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

inline bool compareNoCase(char lval, char rval)
{
	return tolower(lval) < tolower(rval);
}

int main()
{
	char str1[] = "dcba";
	char str2[] = "hgfe";

	// Equivalent elements are not guaranteed to keep their original relative order
	std::cout << "Original str1: " << str1 << endl;
	sort(str1, str1 + (sizeof(str1) - 1), compareNoCase);
	std::cout << "Sorted Original str1: " << str1 << endl;
	
	//  preserves the relative order of the elements with equivalent values.
	std::cout << "Original str2: " << str2 << endl;
	sort(str2, str2 + (sizeof(str2) - 1), compareNoCase);
	std::cout << "Sorted Original str2: " << str2 << endl;


	/*
	The sort() algorithm is not stable, which means that items in the data
	structure can be equivalent but not equal, so neither element is less than the other
	element.


	The stable_sort() function uses the
	merge sort algorithm, discussed later in this chapter, and takes the same parameters
	as the sort() function. One use of stable sorting algorithms is if you have objects
	that have multiple fields, where some fields are equal but others are not. This can
	occur if you are trying to order a list of names in which the last names of some
	people might be equal but the first names are not (or vice versa).

	*/


	// PARTIAL SORT

	int myints[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	vector<int> myvector(myints, myints + 9);
	
	
	partial_sort(myvector.begin(), myvector.begin() + 5, myvector.end());

	for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
	{
		cout << *it << " ";
	}



	return 0;
}