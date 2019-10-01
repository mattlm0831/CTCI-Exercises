#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <vector>
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

void zero_mat(vector<vector<int>>& matrix){
	int n = matrix.size(), m = matrix[0].size();
	vector<bool> rows(n,false);
	vector<bool> columns(m, false);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(matrix[i][j] == 0){
			       rows[i] = true;
			       columns[j] = true;
			}
		}
	}	
	for(int i = 0; i < n; i++){
		if(rows[i]){
			fill(matrix[i].begin(), matrix[i].end(), 0);
		}
	}

	for(int j = 0; j < m; j++){
		if(columns[j]){
			for(int i = 0; i < n; i++)matrix[i][j] = 0;
		}
	}
	
}
int main(){

	vector<vector<int>> matrix;
	srand(time(NULL));
	int n = 10;
	vector<int> this_row;
	for(int i = 0; i < n; i++){
	
		for(int j = 0; j < n; j++){
			if(i == 2 && j == 2){
				this_row.push_back(0);
				continue;
			}
			this_row.push_back(rand() % 1000);
		}
		matrix.push_back(this_row);
		this_row.clear();
	}
	print(matrix);
	zero_mat(matrix);
	std::cout << endl;
	print(matrix);
	return 0;
}
