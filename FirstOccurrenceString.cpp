#include <iostream>
using namespace std;


class Solution{
public:

	int strStr(std::string haystack, std::string needle){


		if(haystack.length() >= needle.length()){
			for(int i=0; i <= haystack.length() - needle.length(); i++){
				if (haystack.substr(i,needle.length()) == needle){
					return i;
				}
			}
		}
		return -1;

}
};


int main(){

	Solution sl;

	cout << sl.strStr("leetcode","leeto");
	return 0;


}