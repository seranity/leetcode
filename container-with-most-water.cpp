#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int maxArea(vector<int> &height) {
	//O(n)
	int n = height.size();

	int beg = 0;
	int end = n - 1;
	int newpos = 0;
	int maxarea = 0;
	int area = 0;

	while(beg < end) {
		area = min(height[beg], height[end])* (end - beg);
		if(maxarea < area) maxarea = area;
		if(height[beg] <= height[end]) {
			newpos = beg;
			while(height[newpos] <= height[beg] && newpos < end) newpos++;
			beg = newpos;
		}else {
			newpos = end;
			while(height[newpos] <= height[end] && newpos > beg) newpos--;
			end = newpos;
		}
	}
	return maxarea;
    }
};

int main() {
	Solution sol;
	vector<int> h;
	h.push_back(2);
	h.push_back(1);
	h.push_back(4);
	h.push_back(3);
	cout << sol.maxArea(h) << endl;
	return 0;
}
