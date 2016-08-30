#ifndef UNIONFIND_H
#define UNIONFIND_H

class UnionFind
{
	public:
		UnionFind(int length);
		int find(int);
		bool merge(int x, int y);
	private:
		int* uf;
		int* rank;		
};

#endif
