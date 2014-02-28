#include <iostream>
using namespace std;

class Solution {
public:
    int sqrt(int x) {
	int beg = 0;
	int end = x;
	while(beg + 1 < end) {
		int mid = (beg + end)/2;
		double res = mid*1.0*mid;
		if(res == x){
			return mid;
		}else if(res < x){
			beg = mid;
		}else {
			end = mid;
		}
	}
	return beg;
    }
};

int main() {
	Solution sol;
	cout << sol.sqrt(2147483647) << endl;
	return 0;
}
