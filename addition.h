#include <iostream>
#include <vector>

using namespace std;
void add(vector<vector<int>> vec1, vector<vector<int>> vec2){

for (int i = 0; i < vec1.size(); i++) {
        for (int j = 0; j < vec2[i].size(); j++)
            cout << vec2[i][j] + vec1[i][j] << " ";
        cout << endl;
    }
}