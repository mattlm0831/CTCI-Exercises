#include <string>
#include <iostream>


//Converts all spaces to %20 in place, O(N).
std::string urlify(std::string non_valid_string, int true_len){
	
	for(int i = 0; i < true_len; i++){
		if(non_valid_string[i] == ' '){
			non_valid_string.erase(non_valid_string.begin() + i);
			non_valid_string.insert(i, "%20");
		}
	}	
	return non_valid_string;
}



int main(){
	
	using namespace std;
	string name = "Mattlm0831 can program!";
	cout << urlify(name, name.size()) << endl;

	return 0;
}
