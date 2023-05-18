#include <iostream>
#include <vector> 

using namespace std;
void createMatrix(vector<vector<int>> &vec) {
    int rows, cols, num;
   
    cout << "Enter the number of rows in the matrix:\n";
    cin >> rows; 
    cout << "Enter the number of columns in the matrix:\n";
    cin >> cols;

    // Initializing the vector of vectors

   for (int i = 0; i < rows; i++) {
        // Vector to store column elements
        vector<int> v1;
  
        for (int j = 0; j < cols; j++) {
            cout << "Enter element: ";
            cin >> num;
            v1.push_back(num);
        }
        // Pushing back above 1D vector
        // to create the 2D vector
        vec.push_back(v1);
    }
}
