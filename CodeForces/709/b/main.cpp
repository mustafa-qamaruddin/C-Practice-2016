#include <iostream>
#include <set>

using namespace std;

int main()
{
	int n, a;
	cin >> n >> a;
	set<int> x_coords;
	for(int i = 0;i < n; i++)
	{
		int temp_x;
		cin >> temp_x;
		x_coords.insert(temp_x);
	}
	
	set<int>::iterator itr_lower = x_coords.lower_bound(a);
	set<int>::iterator itr_upper = x_coords.upper_bound(a);
	cout << *itr_lower << endl;
	cout << *itr_upper << endl;
	
	return(0);
}
