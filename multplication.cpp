#include <iostream>
#include <vector>

using namespace std;

void mul(vector<vector<int>> vec1, vector<vector<int>> vec2){

for (int i = 0; i < vec1.size(); i++) {
    
        for (int j = 0; j < vec2[0].size(); j++){
            int sum = 0;
            for (int k = 0; k < vec1[0].size(); k++){
                
                sum += (vec1[i][k]*vec2[k][j]);
            }
            cout << sum << " ";
        }
        cout << endl;
    }

}