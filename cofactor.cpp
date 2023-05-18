    #include <iostream>
    #include <vector>
    #include "header/determinant.h"

    using namespace std;
    void cofactor(vector< vector<int> > matrix) {
            for (int z = 0; z < matrix.size(); z++){
                for (int i = 0; i < matrix.size(); i++){
                    vector<vector<int>> temp;
                    for (int j = 0; j < matrix.size(); j++) {
                        if (j == i) continue;
                        vector<int> v1;
                        for (int k = 0; k < matrix.size(); k++){
                            if (k == i) {
                                continue;
                            }
                            v1.push_back(matrix[j][k]); 
                        }
                        temp.push_back(v1); 
                    }
                    for (int l = 0; l < matrix.size() - 1; l++){
                        for (int m = 0; m < matrix.size() - 1; m++){
                            cout << temp[l][m] << " ";
                        }
                        cout << endl;
                    }
                    cout << endl;
                    
                }
            }
    }
    int main () {
        vector< vector<int> > matrix = {
            {14,12,33,9},
            {2,2,13,8},
            {7,24,50,1},
            {3,4,71,3}
        };
        cofactor(matrix);
        return 0;
    }
