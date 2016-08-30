#ifndef EDGE_H
#define EDGE_H
class Edge
{
	public:
	Edge(){
		};

	Edge(int _u, int _v, int _w):
	u(_u), v(_v), w(_w) {};
	
	bool operator() (const Edge& lhs, const Edge& rhs) const
	{
		return (lhs.w > rhs.w);
	}
	
	int u, v, w;
};
#endif
