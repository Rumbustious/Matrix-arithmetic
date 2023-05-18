#include<iostream>
#include<vector>

using namespace std;

void subtract(vector<vector<int>> vec1, vector<vector<int>> vec2){

for (int i = 0; i < vec1.size(); i++) {
        for (int j = 0; j < vec1[i].size(); j++)
            cout << (vec1[i][j] - vec2[i][j] )<< " ";
        cout << endl;
    }

}
