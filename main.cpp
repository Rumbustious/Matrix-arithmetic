#include<iostream>
#include<vector>
#include "header/addition.h"
#include "header/subtraction.h"
#include "header/multiplication.h"
#include "header/determinant.h"

using namespace std;

void createMatrices(vector<vector<int> > &vec, vector<vector<int> > &vec2) {
    int rows, cols, num;
   
    cout << "Enter the number of rows in the first matrix:\n";
    cin >> rows; 
    cout << "Enter the number of columns in the first matrix:\n";
    cin >> cols;

    // Initializing the vector of vectors
    vector<vector<int> > vec;

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

    if (vec2.size() == 1){
        vector<vector<int> > vec2;
        cout << "Enter the number of rows in the second matrix:\n";
        cin >> rows; 
        cout << "Enter the number of columns in the second matrix:\n";
        cin >> cols;

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
    }
}
void createMatrices(vector<vector<int> > &vec) {
    int rows, cols, num;
   
    cout << "Enter the number of rows in the matrix:\n";
    cin >> rows; 
    cout << "Enter the number of columns in the matrix:\n";
    cin >> cols;

    // Initializing the vector of vectors
    vector<vector<int> > vec;

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
}


int main(){

    vector<vector<int> > vec;
    vector<vector<int> > vec2;

    // choose the operation
    char operation;
    cout << "Pick up an operation : \nA for Addition of Two Matrices \nS for Subtraction of Two Matrices \nM for Multiplication of Two Matrices\nC for Cofactor of Matrix \nT for Transpose of Matrix \nI for Inverse of Two Matrices"<< endl;
    cin >> operation;
    if (operation == 'A' || 'a'){
        createMatrices(vec, vec2);
         if ((vec.size() != vec2.size()) || (vec[0].size() != vec2[0].size())){
             cout << "Two matrices should have same dimensions, Ex: two 4x4 matrices" << endl;
            return 1;
        }
        add(vec,vec2);
    } else if (operation == 'S' || operation == 's'){
        createMatrices(vec, vec2);
        if ((vec.size() != vec2.size()) || (vec[0].size() != vec2[0].size())){
             cout << "Two matrices should have same dimensions, Ex: two 4x4 matrices" << endl;
            return 1;
        }

        subtract(vec,vec2);
    } else if (operation == 'M' || operation == 'm'){
        createMatrices(vec, vec2);
        if (vec[0].size() != vec2.size()){
             cout << "Two matrices should have compatible dimensions (The number of columns in A should equal the number of rows of B)" << endl;
        return 1 ;
        }
      
        multiply(vec,vec2);
    } else if (operation == 'C' || operation == 'c'){
        createMatrices(vec);
        if (vec.size() != vec[0].size()){
             cout << "Matrix should be a square matrix, Ex: 4x4 matrix" << endl;
            return 1;
        }
    }
    








}