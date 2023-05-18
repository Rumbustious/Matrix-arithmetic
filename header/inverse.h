#include<iostream>
#include<vector>


using namespace std;

void inverse(vector<vector<int>> v1, int determinante){
 for (int i = 0; i < v1.size(); i++){
        for (int j = 0; j < v1.size(); j++){
            cout << (v1[i][j]*(1.0/determinante)) << " ";        
        }
        cout << endl;
   
    }
}