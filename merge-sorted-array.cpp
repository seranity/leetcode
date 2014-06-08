#include <iostream>
using namespace std;

class Solution {
  public:
    bool cmp(int a, int b){
      if(a < b)return true;
      else return false;
    }
    void merge(int A[], int m, int B[], int n) {
      int size = n + m - 1;
      int pt = size;
      int pa = m-1, pb = n-1;
      while(pa >= 0 && pb >= 0) {
        if(cmp(A[pa], B[pb]) == false) {
          A[pt] = A[pa];
          pt--;
          pa--;
        } else {
          A[pt] = B[pb];
          pt--;
          pb--;
        }

      }
      //while(pa >= 0) {
        //do nothing;
      //}
      while(pb >= 0) {
        A[pt] = B[pb];
        pt--;
        pb--;
      }
    }
};

int main(){
  int a[] = {1};
  int b[] = {};
  Solution sol;
  sol.merge(a,1,b,0);
  return 0;
}
