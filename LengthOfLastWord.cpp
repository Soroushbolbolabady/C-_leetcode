#include <iostream>
using namespace std;


class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.length() - 1;

        while (end >= 0 && s[end] == ' ') {
            end--;
        }

        int start = end;
        while (start >= 0 && s[start] != ' ') {
            start--;
        }

        return end - start;        
    }
};


int main(){
	Solution sol;

	sol.lengthOfLastWord("   fly me   to   the moon  ");


	return 0;
};