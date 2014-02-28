#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
	int dirx = 0;
	int diry = 0;
	int level = 0;
	int posx = 0;
	int posy = 0;
	vector<vector<int> > matrix;
	for(int i = 0; i < n; i++){
		vector<int> v1 = vector<int>(n,0);
		matrix.push_back(v1);
	}

	bool firstround = true;
	int num = 1;
	
	while(1) {
		if(posx == level && posy == level && firstround ) {
			dirx = 1;
			diry = 0;
			firstround = false;
		}else if(posx == level && posy == level && !firstround) {
			dirx = 1;
			diry = 0;
			level++;
			posx = posy = level;
		}
		else if(posx == n-level-1 && posy == level){
			dirx = 0;
			diry = 1;
		}else if(posx == n-level-1 && posy == n-level-1){
			dirx = -1;
			diry = 0;
		}else if(posx == level && posy == n-level-1){
			dirx = 0;
			diry = -1;
		}
		if(level*2 == n) { //even
		    	break;	
		}else if(level*2 == n-1){ //odd
			matrix[posy][posx] = num;
			break;
		}
		matrix[posy][posx] = num;
		posx += dirx;
		posy += diry;
		num++;
	}
	return matrix;
    }
};

int main(){
	Solution sol;
	vector<vector<int> > matrix = sol.generateMatrix(5); 
	int n = matrix.size();
	for(int i = 0; i < n; i++){
		
		for(int j = 0; j < n; j++ )
			cout << matrix[i][j]<<" ";
		cout << endl;
	}
	return 0;
}
