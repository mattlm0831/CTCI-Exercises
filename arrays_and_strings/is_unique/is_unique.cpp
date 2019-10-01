#include <string>
#include <map>
#include <iostream>
#include <cstring>
//Implement an algorithm to check if a string has all unique characters, what if you can't use additional data structures?


bool map_version(std::string s1){
	std::map<char, int> x;

	for(auto ch : s1){
		++x[ch];
		if(x[ch] > 1){
			return false;
		}
	}
	return true;
}

bool no_additional(std::string s1){
	int chars[128];
	//std::memset(chars,0, 128);	

	for(auto ch : s1){
		int index = ch;
		if(chars[index] == 1){
			return false;
		}
		chars[index] = 1;
	}
	return true;
}

int main(){
	using namespace std;
	std::cout << map_version("xyz") << std::endl;
	std::cout << no_additional("xyz") << std::endl;

	return 0;
}
