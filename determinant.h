#include <iostream>
#include <vector>

using namespace std;

int determinant(vector<vector<int>> matrix){
    int n = matrix.size();
    if (n == 1){
        return matrix[0][0];
    }
    int det = 0;
    for (int i = 0; i < n; i++){
        vector<vector<int>> temp(n - 1, vector<int>(n - 1));
        for (int j = 1; j < n; j++){
            for (int k = 0, l = 0; k < n; k++){
                if (k == i){
                    continue;
                }
                temp[j - 1][l++] = matrix[j][k];
            }
        }
        det += matrix[0][i] * (i % 2 == 0 ? 1 : -1) * determinant(temp);
    }
    return det;
}

