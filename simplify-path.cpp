#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        stack<string> sst;
	int n = path.size();
	char *str = new char[n+1];
	strcpy(str, path.c_str());
	char *tok = NULL;
	while ( (tok = strsep(&str, "/")) != NULL ) {
		if(strcmp(tok, ".") == 0)continue;
		else if(strcmp(tok, "") == 0)continue;
		else if(strcmp(tok, "..") == 0) { 
			if(sst.size()!=0)sst.pop(); //size cannot be zero
			continue;
		}
		string s1(tok);
		sst.push(s1);
	}
	string outstr;
	if(sst.size() != 0) {
		stack<string> sst_rev;
		while(sst.size()!=0) {
			sst_rev.push(sst.top());
			sst.pop();
		}
		while(sst_rev.size()!=0) {
			outstr.append("/");
			outstr.append(sst_rev.top());
			sst_rev.pop();
		}
	}
	else {
		outstr.append("/");
	}
	return outstr;
    }
};

int main() {
	Solution sol;
	//string s1("/a/./b/../../c/");
	string s1("/.aa/....hidden/");
	cout << sol.simplifyPath(s1) << endl;
	
	return 0;
}
