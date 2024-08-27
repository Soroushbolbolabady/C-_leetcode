#include <iostream>
#include <unordered_map>
using namespace std;


class Solution{
public:

	bool isIsomorphic(string s, string t){
        unordered_map<char, char> mapST, mapTS;

        if (s.length() != t.length()) return false;

        for (int i = 0; i < s.length(); i++) {
            char c1 = s[i], c2 = t[i];

            if (mapST.find(c1) != mapST.end() && mapST[c1] != c2) {
                return false;
            }
            if (mapTS.find(c2) != mapTS.end() && mapTS[c2] != c1) {
                return false;
            }

            mapST[c1] = c2;
            mapTS[c2] = c1;
        }

        return true;
}
    };



int main(){

	Solution sl;

	cout <<sl.isIsomorphic("egg", "add");

	return 0;
}