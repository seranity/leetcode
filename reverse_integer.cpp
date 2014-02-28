#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class Solution {
public:
	int reverse(int x) {
		string str;
		stringstream ss;
		int sgn = x >= 0? 1: -1;
		ss << abs(x);
		ss >> str;
		std::reverse(str.begin(),str.end());
		return atoi(str.c_str())*sgn;
	}
};

int main() {
	Solution sol;
	cout << sol.reverse(-100) << endl;
	return 0;
}
