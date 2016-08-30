#ifndef KRUSKAL_H
#define KRUSKAL_H

#include <string>
#include <queue>
#include <vector>

#include "edge.h"
#include "unionfind.h"

using namespace std;

class Kruskal
{
	public:
		Kruskal();
		void readInputFile(string file_name);
		void initForest();
		int doKruskal();
	protected:
	private:
		Edge* e;
		priority_queue<Edge, vector<Edge>, Edge> pq;
		int n, m, expected_mst_weight;
		UnionFind* uf_forest;
};
#endif
