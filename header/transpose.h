#include<iostream>
#include<vector>

using namespace std;






void transpose(vector< vector<int> > matrix, vector< vector<int> > &transpose){
    
    cout << "Transpose for this matrix is: " << endl;
    for (int i = 0; i < matrix[0].size(); i++){
        vector<int> v1;
        for (int j = 0; j < matrix.size(); j++){

            v1.push_back(matrix[j][i]);
            cout << matrix[j][i] << " ";

        }
        cout << endl;

    transpose.push_back(v1);

    }
}