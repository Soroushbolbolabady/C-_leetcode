#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:

	string longestCommenPrefix(vector<string>& strs){
		if (strs.empty()) return "";
		string ans = strs[0];
		int ansLength = ans.length();
		for(int i=1; i < strs.size(); i++){
			string str = strs[i];
			for(int j=0; j< str.length(); j++){
				if (ans[j] != str[j]){
					ansLength--;
					if(ansLength == 0){
						return "";
					}
				}
			}

		}
		return ans.substr(0,ansLength) ;

	}
};



int main()
{
	Solution sl;
	vector<string> test =vector<string> {"ab", "a"};
	cout << sl.longestCommenPrefix(test);
	return 0;
}