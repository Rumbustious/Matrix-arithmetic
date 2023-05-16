#include <iostream>
#include <vector>

using namespace std;
int main () {
    int rows, cols, num;
    cin >> rows >> cols;
    // Initializing the vector of vectors
    vector<vector<int> > vec;
    vector<vector<int> > vec2;
    for (int i = 0; i < rows; i++) {
        // Vector to store column elements
        vector<int> v1;
  
        for (int j = 0; j < cols; j++) {
            cin >> num;
            v1.push_back(num);
        }
        // Pushing back above 1D vector
        // to create the 2D vector
        vec.push_back(v1);
    }
     for (int i = 0; i < rows; i++) {
        // Vector to store column elements
        vector<int> v2;
  
        for (int j = 0; j < cols; j++) {
            cin >> num;
            v2.push_back(num);
        }
        // Pushing back above 1D vector
        // to create the 2D vector
        vec2.push_back(v2);
    }

    // Displaying the 2D vector
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
        cout << endl;
     for (int i = 0; i < vec2.size(); i++) {
        for (int j = 0; j < vec2[i].size(); j++)
            cout << vec2[i][j] << " ";
        cout << endl;
    }
        cout << endl;

    // addition 

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++)
            cout << vec2[i][j] + vec[i][j] << " ";
        cout << endl;
    }
    return 0;
}