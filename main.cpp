#include<iostream>
#include<vector>
#include"addition.h"

using namespace std;

void sub(vector<vector<int>> vec1, vector<vector<int>> vec2){

for (int i = 0; i < vec1.size(); i++) {
        for (int j = 0; j < vec1[i].size(); j++)
            cout << (vec1[i][j] - vec2[i][j] )<< " ";
        cout << endl;
    }

}

void mul(vector<vector<int>> vec1, vector<vector<int>> vec2){

for (int i = 0; i < vec1.size(); i++) {
    
        for (int j = 0; j < vec2[0].size(); j++){
            int sum = 0;
            for (int k = 0; k < vec1[0].size(); k++){
                
                sum += (vec1[i][k]*vec2[k][j]);
            }
            cout << sum << " ";
        }
        cout << endl;
    }

}




int main(){

        int rows, cols, num;
        char operation;
cout << "enter frist matrix dimentions" << endl;
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

    cout << "enter second matrix dimentions"<< endl;
    cin >> rows >> cols;
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


    // choose the operation

    cout << "To choose the operation enter : \n A for addition \n S for substraction \n M for multiblication \n I for inverse"<< endl;
    cin >> operation;
    if (operation == 'A'){

        if ((vec.size() != vec2.size()) || (vec[0].size() != vec2[0].size())){
             cout << "please enter two matrices with the same dimentions, Ex: two 4x4 matrices" << endl;
        return 1 ;
        }

        add(vec,vec2);
    }
    else if (operation == 'S'){

        if ((vec.size() != vec2.size()) || (vec[0].size() != vec2[0].size())){
             cout << "please enter two matrices with the same dimentions, Ex: two 4x4 matrices" << endl;
        return 1 ;
        }

        sub(vec,vec2);
    }
    else if (operation == 'M'){

        if (vec[0].size() != vec2.size()){
             cout << "please enter two matrices with the compatible dimentions, The number of columns in A should equal the number of rows of B" << endl;
        return 1 ;
        }

        mul(vec,vec2);
    }



}