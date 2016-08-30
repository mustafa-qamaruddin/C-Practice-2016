#include "unionfind.h"

UnionFind::UnionFind(int length)
{
	uf = new int[length];
	rank = new int[length];
	
	for(int i = 0; i < length; i++)
	{
		uf[i] = i;
		rank[i] = 0;
	}
}

int UnionFind::find(int x)
{
	if(uf[x] == x) return x;
	return find(uf[x]);
}

// Union by Rank
bool UnionFind::merge(int x, int y)
{
	int x_parent = find(x), y_parent = find(y);
	
	// already merged
	if(x_parent == y_parent)
		return false;
		
	// switch higher rank with lower
	if(rank[x_parent] > rank[y_parent])
	{
		int temp = x_parent;
		x_parent = y_parent;
		y_parent = temp;
	}
	
	// perform merge
	uf[x_parent] = y_parent;

	if(rank[x_parent] == rank[y_parent])
		rank[y_parent] += 1;
	
	return true;
}
