#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <vector>

#include "kruskal.h"
#include "edge.h"

using namespace std;

void Kruskal::readInputFile(string file_name)
{
	ifstream fs(file_name.c_str());
	
	if(fs.is_open())
	{
		fs >> n >> m;
	}

	e = new Edge[m];
	int temp_u, temp_v, temp_w;
	int i = 0;
	while(i < m)
	{
		fs >> temp_u >> temp_v >> temp_w;
		pq.push(Edge(temp_u, temp_v, temp_w));
		i++;
	}
	
	fs >> expected_mst_weight;
}

int Kruskal::doKruskal()
{
	uf_forest = new UnionFind(n);
	int ret = 0;
	int len = 0;
	while(len < n - 1)
	{
		Edge x = pq.top();
		pq.pop();
		if(uf_forest->find(x.u) != uf_forest->find(x.v))
		{
			ret += x.w;
			uf_forest->merge(x.u, x.v);
			len++;
		}
	}
	return ret;
}

Kruskal::Kruskal()
{
	cout << "Operation Kruskal Started" << endl;
	string f("tests/tc3.txt");
	readInputFile(f);
	cout << boolalpha << (doKruskal() == expected_mst_weight) << endl;
	cout << "Operation Kruskal Terminated" << endl;
}
