#include <iostream>
#include <vector>
#include<cmath>

using namespace std;
    
int determinant(vector<vector<int>> matrix){
    int det = 0;
    
   
    if ((matrix[0].size() == 1) & (matrix.size() == 1)){

        return matrix[0][0]; //Base case
    }
    
        
    for (int i = 0; i < matrix[0].size(); i++){
    vector<vector<int>> temp;
        for (int h = 1; h < matrix.size(); h++){
        vector<int> v1;
            for(int j = 0; j < matrix[0].size(); j++){
                if (j == i){
                    continue;
                }
                v1.push_back(matrix[h][j]); 
            }
            temp.push_back(v1);
        }

        det += matrix[0][i] * (i % 2 == 0 ? 1 : -1) * determinant(temp);
    }
    return det;
 }

