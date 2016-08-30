#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include "unionfind.h"
#include "kruskal.h"

using namespace std;

void testUnionFind()
{
	// constructor
	UnionFind* obj_uf = new UnionFind(10);
	
	// find
	cout << "find(0):" << setw(5) << obj_uf->find(0) << endl;
	cout << "find(9):" << setw(5) << obj_uf->find(9) << endl;
	
	// union
	cout << boolalpha << obj_uf->merge(0, 9) << endl;
	
	// find
	cout << "find(0):" << setw(5) << obj_uf->find(0) << endl;
	cout << "find(9):" << setw(5) << obj_uf->find(9) << endl;
}

int main()
{
	testUnionFind();
	Kruskal kruskal;
	return(0);
}
