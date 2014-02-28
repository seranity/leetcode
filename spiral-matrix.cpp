#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
	int dirx = 1;
	int diry = 0;
	int level = 0;
	int posx = 0;
	int posy = 0;
	vector<int> vi;
	int n = matrix.size();
	if(n==0) return vi;

	int m = matrix[0].size();
	
	while(1) {
		if(posx == level && posy == n-level-1 && dirx == -1 && diry == 0){
			dirx = 0;
			diry = -1;
		}

		if(posx == m-level-1 && posy == n-level-1 && dirx == 0 && diry == 1){
			dirx = -1;
			diry = 0;
		}

		if(posx == m-level-1 && posy == level && dirx == 1 && diry == 0){
			dirx = 0;
			diry = 1;
		}

		if(posx == level && posy == level && dirx == 0 && diry == -1) {
			dirx = 1;
			diry = 0;
		}

		if(posx == level && posy == level+1 && dirx == 0 && diry == -1 ) {
			dirx = 1;
			diry = 0;
			level++;
		}
//		cout <<posx << " " << posy << " " <<  matrix[posy][posx] <<  " " << level  <<  " " << m-level-1 <<" "  << level << " " << dirx << " " << diry << endl;
		vi.push_back(matrix[posy][posx]);
		posx += dirx;
		posy += diry;
		if(posx < level || posx > m - level - 1 || posy < level || posy > n - level - 1)
			break;
	}
	return vi;
    }
};

int main(){
	Solution sol;
	vector<vector<int> > matrix;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4 = vector<int>(4,4);
	v1.push_back(2);
	v2.push_back(3);
	v3.push_back(4);
	matrix.push_back(v1);
	matrix.push_back(v2);
	matrix.push_back(v3);
	vector<int>vi = sol.spiralOrder(matrix);
	vector<int>::iterator viiter;
	for(viiter = vi.begin(); viiter != vi.end(); viiter++){
		cout << *viiter << " ";
	}
	cout << endl;
	return 0;
}
