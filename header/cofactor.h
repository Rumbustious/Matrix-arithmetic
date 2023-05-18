#include <iostream>
#include <vector>
#include "header/determinant.h"

using namespace std;
void cofactor(vector< vector<int> > matrix, vector< vector<int> > &store) {

    vector<vector<int>> store;
        for (int z = 0; z < matrix.size(); z++){
            vector<int> v2; 

            for (int i = 0; i < matrix.size(); i++){
                vector<vector<int>> temp;
                for (int j = 0; j < matrix.size(); j++) {
                    if (j == z) continue;
                    vector<int> v1;
                    for (int k = 0; k < matrix.size(); k++){
                        if (k == i) {
                            continue;
                        }
                        v1.push_back(matrix[j][k]); 
                    }
                    temp.push_back(v1); 
                }
                v2.push_back( (z+i)%2 == 0 ? determinant(temp) : -1*determinant(temp));
                // for (int l = 0; l < matrix.size() - 1; l++){
                //     for (int m = 0; m < matrix.size() - 1; m++){
                //         cout << temp[l][m] << " ";
                //     }
                //     cout << endl;
                // }
                // cout << endl;
            }
            store.push_back(v2);
               
        }
 for (int l = 0; l < matrix.size(); l++){
                    for (int m = 0; m < matrix.size(); m++){
                        cout << store[l][m] << " ";
                    }
                    cout << endl;
                }
                cout << endl;

}
