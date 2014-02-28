#include <iostream>
using namespace std;
class Solution {
public:
    double pow(double x, int n){
    if(n < 0)return 1/pow(x, -n);
    if(n==0) return 1;
    
    double val = pow(x,n/2);
    if(n/2*2 - n==0)
         return val*val;
    else return val*val*x;
    }
};

int main() {
	Solution sol;

	cout << sol.pow(1, 1) << endl;
	return 0;
}
