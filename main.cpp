#include<iostream>
#include<vector>
#include "header/welcome.h"
#include "header/createMatrix.h"
#include "header/createMatrices.h"
#include "header/addition.h"
#include "header/subtraction.h"
#include "header/multiplication.h"
#include "header/determinant.h"
#include "header/cofactor.h"
#include "header/transpose.h"
#include "header/inverse.h"

using namespace std;

int main(){
    // Welcoming screen.
    welcome();
    // Empty vectors to hold the matrices entered by user.
    vector<vector<int> > vec;
    vector<vector<int> > vec2;


    // Choosing operation Algorithm
    char operation;
    cout << "Pick up an operation : \nA for Addition of Two Matrices \nS for Subtraction of Two Matrices \nM for Multiplication of Two Matrices\nD for Determinant of Matrix \nC for Cofactor of Matrix \nT for Transpose of Matrix \nI for Inverse of Two Matrices"<< endl;
    cin >> operation;
    
    // Comparing user inputs with the program arithemtics.
    if (operation == 'A' || operation =='a'){
        createMatrices(vec, vec2); // Creating two matrices
         if ((vec.size() != vec2.size()) || (vec[0].size() != vec2[0].size())){
             cout << "Two matrices should have same dimensions, Ex: two 4x4 matrices" << endl;
            return 1;
        }
        add(vec,vec2);
    } else if (operation == 'S' || operation == 's'){
        createMatrices(vec, vec2); // Creating two matrices
        if ((vec.size() != vec2.size()) || (vec[0].size() != vec2[0].size())){
             cout << "Two matrices should have same dimensions, Ex: two 4x4 matrices" << endl;
            return 1;
        }

        subtract(vec,vec2);
    } else if (operation == 'M' || operation == 'm'){
        createMatrices(vec, vec2); // Creating two matrices
        if (vec[0].size() != vec2.size()){
             cout << "Two matrices should have compatible dimensions (The number of columns in A should equal the number of rows of B)" << endl;
        return 1 ;
        }
      
        multiply(vec,vec2);
    } else if (operation == 'D' || operation == 'd'){
        createMatrix(vec); // Creating one matrix
        // Controls user input to not cause an arithmetic error.
        if (vec.size() != vec[0].size()){
             cout << "Matrix should be a square matrix, Ex: 4x4 matrix" << endl;
            return 1;
        }
        cout << determinant(vec) << endl;
        
    } else if (operation == 'C' || operation == 'c'){
        createMatrix(vec); // Creating one matrix
         // Controls user input to not cause an arithmetic error.
        if (vec.size() != vec[0].size()){
             cout << "Matrix should be a square matrix, Ex: 4x4 matrix" << endl;
            return 1;
        }
        cofactor(vec, vec2); 
    } else if (operation == 'T' || operation == 't'){
        createMatrix(vec); // Creating one matrix
        transpose(vec, vec2); 
    } else if (operation == 'I' || operation == 'i'){
        createMatrix(vec); // Creating one matrix
        // Controls user input to not cause an arithmetic error.
         if (vec.size() != vec[0].size()){
             cout << "Matrix should be a square matrix, Ex: 4x4 matrix" << endl;
            return 1;
        }
        inverse(vec);
    } else {
        cout << "Invalid operation" << endl;
        return 1;
    }
    return 0;

}