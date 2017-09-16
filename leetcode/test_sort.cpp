#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

bool compare(int a, int b){
	return a > b;
}

int main()
{
	vector<int> v = {32, 71, 12, 45, 26, 80, 53, 33};
        sort(v.begin(), v.end(), compare);
       
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " " ;
	}
        return 0;
}
