#include <iostream>
#include <cstdio>
using namespace std;

class Solution {
public:
	char* strStr(char* haystack, char* needle) {
		if(haystack == NULL || needle == NULL) return NULL;
		char* ph = haystack;
		char* pi = ph;
		char* pj = needle;
		do {
			if(*pj == '\0') return ph;
			if(*pi == *pj) {
				pi++;
				pj++;
			}else{
				ph++;
				pi=ph;
				pj=needle;
			}
		}while(*pi != '\0');
		if(*pj == '\0') return ph;

		return NULL;
	}
};

int main(){
	Solution sol;
	char p1[10] = "a";
	char p2[10] = "a";
	printf("s: %s\n",sol.strStr(p1,p2));
	return 0;
}
