#include <string>
#include <iostream>


int nextUnlike(int start, std::string str, char cmp){
	for(int i = start; i < str.size(); i++){
		if(str[i] != cmp) return i;
	}	
}

std::string compress(std::string comp){
	int len = comp.size();
	int i = 0;
	std::string output;
	while(i < len){
		if(comp[i] == comp[i+1]){
			output.push_back(comp[i]);
			int next = nextUnlike(i, comp, comp[i]);
			output.append(std::to_string(next-i));
			i = next;
		}else{
			output.push_back(comp[i]);
			++i;
		}
	}
	return output;
}


int main(){

	std::string s1 = "aaaabbbabbbaccbc";
	std::cout << compress(s1) << std::endl;
	return 0;
}

