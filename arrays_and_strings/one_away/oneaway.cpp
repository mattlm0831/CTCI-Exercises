#include <string>
#include <map>
#include <iostream>


bool one_away(std::string s1, std::string s2){
	std::map<char, int> freq_map;
	if(abs(s1.size() - s2.size()) > 1) return false;

	for(auto ch : s1) ++freq_map[ch];
	
	int diff = 0;
	for(auto ch : s2){
		if(freq_map[ch] == 0)++diff;
		else --freq_map[ch];
	}
	bool ans = diff <= 1 ? true : false;
	return ans;
	
}
int main(){

	std::string s1 = "pale";
	std::string s2 = "pole";
	std::string s3 = "hello world!";
	std::string s4 = "ple";	
	std::cout << one_away(s1, s2) << std::endl;
	std::cout << one_away(s3, s2) << std::endl;
	std::cout << one_away(s1, s4) << std::endl;
	return 0;
}
