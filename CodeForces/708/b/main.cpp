#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// inputs
	int n, b, d;
	cin >> n >> b >> d;
	vector<int> oranges_sizes;
	int temp_size;
	for(int i = 0; i < n; i++)
	{
		cin >> temp_size;
		oranges_sizes.push_back(temp_size);
	}
	
	int waste_acc = 0, num_flushes = 0;
	vector<int>::iterator itr = oranges_sizes.begin();
	while(itr != oranges_sizes.end())
	{
		if(*itr > b)
		{
			++itr;
			continue;
		}
		
		waste_acc += *itr;
		
		if(waste_acc > d){
			num_flushes++;
			waste_acc = 0;
		}
			
		++itr;
	}
	cout << num_flushes;
	return(0);
}
