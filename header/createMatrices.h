#include <iostream>
#include <vector> 

using namespace std;

void createMatrices(vector<vector<int>> &vec, vector<vector<int>> &vec2) {
  
    int rows, cols, num;
   
    cout << "Enter the number of rows in the first matrix:\n";
    cin >> rows; 
    cout << "Enter the number of columns in the first matrix:\n";
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

   
        cout << "Enter the number of rows in the second matrix:\n";
        cin >> rows; 
        cout << "Enter the number of columns in the second matrix:\n";
        cin >> cols;

        for (int i = 0; i < rows; i++) {
            // Vector to store column elements
            vector<int> v2;
    
            for (int j = 0; j < cols; j++) {
                cout << "Enter element: ";
                cin >> num;
                v2.push_back(num);
            }
            // Pushing back above 1D vector
            // to create the 2D vector
            vec2.push_back(v2);
        }
}