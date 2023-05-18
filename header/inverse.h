#include<iostream>
#include<vector>
#ifndef TRANSPOSE_H
#ifndef COFACTOR_H
#define TRANSPOSE_H
#define COFACTOR_H




using namespace std;

int inverse(vector<vector<int>> v1){
    int det = determinant(v1);
    if (det == 0){
        cout << "This matrix has no inverse." << endl;
        return 1;
    }

    vector<vector<int>> v2;
    vector<vector<int>> v3;
    cofactor(v1,v2);
    transpose(v2,v3);
    cout << "Inverse for this matrix is:" << endl;
    for (int i = 0; i < v1.size(); i++){
        for (int j = 0; j < v1.size(); j++){
            cout << (v3[i][j]*(1.0/det)) << " ";        
        }
        cout << endl;
   
    }
    return 0;
}


#endif
#endif