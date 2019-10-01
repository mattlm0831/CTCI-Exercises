#include <vector>
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void print(vector<vector<int>> matrix){

	for(int i = 0; i < matrix.size(); i++){
		int sub_size = matrix[i].size();
		for(int j = 0; j < sub_size; j++){
			std::cout << matrix[i][j] << ' ';	
		}
		std::cout << std::endl;
	}
}

void rotate_vec(vector<vector<int>>& matrix){
	
	
}
int main(){

	vector<vector<int>> matrix;
	srand(time(NULL));
	int n = 10;
	vector<int> this_row;
	for(int i = 0; i < n; i++){
	
		for(int j = 0; j < n; j++){
			std::cout << "forever?" << endl;
			this_row.push_back(rand() % 1000);
		}
		matrix.push_back(this_row);
		this_row.clear();
	}
	print(matrix);
	return 0;
}
