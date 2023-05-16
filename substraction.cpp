#include<iostream>
#include<vector>

using namespace std;

int substraction (vector<vector<int>> vec1, vector<vector<int>> vec2){

    vector<vector<int>> sub;
    
    cout << "Operation A - B" << endl;

    for (int i = 0; i < vec1.size(); i++){

        for (int j = 0; j < vec1[i].size(); j++){

            sub[i][j] = vec1[i][j] - vec2[i][j];
            cout << sub[i][j] << " ";
        }

        cout << endl;
    }
}


int main () {



}