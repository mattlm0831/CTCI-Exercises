#include <string>
#include <map>
#include <iostream>
//Given two strings s1, and s2, check if s1 is a permutation of s2
bool isPermutation(std::string s1, std::string s2){
	if(s1.size() != s2.size()) return false;

	std::map<char, int> freq_map;
	for(auto ch : s1) ++freq_map[ch];

	for(auto ch : s2){
		if(freq_map[ch] == 0){
			return false;
		}else{
			--freq_map[ch];
		}
		
	}
	return true;

}


int main(){
	using namespace std;
	std::string s1 = "abc";
	std::string s2 = "cab";

	cout << isPermutation(s1, s2) << endl;

	return 0;
}
