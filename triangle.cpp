#include <iostream>
#include <vector>
#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        int n = triangle.size();
	
	int now[n];
	int pre[n];
	
	for(int i = 0; i < n; i++)
		pre[i] = 0;

	//row 1
	now[0] = pre[0] = triangle[0][0];
	
	//row 2+
	for(int i = 1; i < n; i++ ) {
		for(int j = 0; j <= i; j++){
			if(j-1 >= 0)
				now[j] = min(pre[j-1], pre[j]) + triangle[i][j];
		}
		
		for(int j = 0; j < i; j++)
			pre[j] = now[j];
	}

	int minnum = now[0];
	for(int i = 0 ; i < n; i++ )
	{
		if(minnum > now[i]) minnum = now[i];
	}

	return minnum;
    }
};

int main(){
	return 0;
}
