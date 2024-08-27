#include <iostream>
#include <unordered_map>
using namespace std;


class Solution{

public:

	bool wordPattern(string pattern, string s){
		unordered_map<char, string> SPMap;
		string word[];
		int counter = 0;
		int num = 0;
		for(int i=0, i < s.length(), i++){
			if(s[i] == " "){
				word[num] = s.substr(counter, i);
				counter = i;
			}

		}


	}

}