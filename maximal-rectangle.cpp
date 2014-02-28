#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int maximalRectangle(vector<vector<char> > &matrix) {
        int n = matrix.size();
	if(n <= 0)return 0;

        int m = matrix[0].size();
//	cout << n << " " << m << endl; 
        int max_area = 0;
	
	vector<vector<int> >f(2, vector<int>(n));

	int now = 1, pre = 0;
        
        for (int i = 0; i < n; i++)
            for(int j = 0; j < m; j++) {
		for(int k = i; k >= 0; k--) {
			f[now][k] = 0;
                	int val = matrix[k][j] == '1' ? 1 : 0;

			if(val == 0) {
				for(int l = k-1; l >= 0; l--)
					f[now][l] = 0;
				break;
			}
			
			if(j == 0)
				f[now][k] = i-k+1;
			else
                		f[now][k] = f[pre][k] + (i-k+1);
			//cout << i << " " << j << " " << k << " : " << f[i][now][k] << " " << f[i][pre][k] << endl;
                
	                if(f[now][k] > max_area)
        	        {
                	    max_area = f[now][k];
                	}
		}
		int tmp = now;
		now = pre;
		pre = tmp;
            }
        return max_area;
    }
};

int main(){
	vector<vector<char> > matrix;
	string str;
	cin >> str;
	
	while(true){
		if(str == "q")break;
		vector<char> tmp;
		for(int i = 0; i < str.size(); i++)
			tmp.push_back(str[i]);
		matrix.push_back(tmp);
		cin >> str;
	}
	
	Solution sol;
	cout << sol.maximalRectangle(matrix) << endl;
	return 0;
}
