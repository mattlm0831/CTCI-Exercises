#include <string>
#include <iostream>
#include <map>

bool isspace(char c){
	return c == ' ';
}

int charcount(std::string s1){
	int count = 0;

	for(char c : s1){
		if(!isspace(c)){
		       	++count;
		}
	}
	return count;
}

bool palindromePermutation(std::string s1){
	std::map<char, int> freq_map;
	int ccount = charcount(s1);
	for(auto ch : s1){
		if(ch == ' ') continue;
		else ++freq_map[ch];
	}

	if(ccount % 2 == 0){
		int start = 0;
		for(auto entry : freq_map){
			if(start == 0){
				start = entry.second;
			}else{
				if(entry.second != start){
					return false;
				}
			}
		}
		return true;
	}else{
		int differences = 0;
		int start = 0;
		for(auto entry : freq_map){
			if(start == 0){
				start = entry.second;
			}else{
				if(entry.second != start && differences == 1){
					return false;
				}else if(entry.second != start && (start - entry.second) == 1){
					++differences;
				}
			}
		}
		return true;
	}
}



int main(){

	std::string example = "tact coa";
	std::string example2 = "acer rac";
	std::cout << palindromePermutation(example) << " " << palindromePermutation(example2) << std::endl;

	return 0;
}




