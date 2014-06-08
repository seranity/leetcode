#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
  public:
    string str;
    vector<string> vs;
    void r(int n, int pos) {
      if(n <= 0) {
        vs.push_back(str);
        return;
      }
      for(int i = pos+1; i <= str.size(); i++) {
        str.insert(i,"()");
        r(n-1, i);
        str.erase(i, 2);
      }
    }
    vector<string> generateParenthesis(int n) {
      r(n,-1);
      return vs;
    }
};

int main() {
  Solution sol;
  vector<string> vans = sol.generateParenthesis(4);
  for(int i = 0; i < vans.size(); i++) {
    cout << vans[i] << endl;
  }
}
