#include <cstdlib>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;



int theRow, theCol;
int theRow1, theCol1;

void multiply_matrices(vector <vector <int> > &matrix,
                       vector <vector <int> > &matrix1);

int main()
{
    vector< vector<int> > matrix(10, vector<int>(10));
    cout << "Enter the row and column of first matrix: " << endl;
    cin >> theRow >> theCol;
    int num;
    
    cout <<"Enter the matrix numbers: "<< endl;
    
    for (int row = 0; row < theRow; row++) {
        matrix.push_back(vector<int>());
        
        for (int col = 0; col < theCol; col++) {
            cin >> num;
            matrix[row].push_back(num);
            
        }
        
    }
    
    cout << setw(5);
    for (int row = 0; row < matrix.size(); row++) {
        for (int col = 0; col < matrix[0].size(); col++) {
            cout << matrix[row][col] << setw(5);
        }
        cout << endl;
    }
    
    vector< vector<int> > matrix1;
    cout << "Enter the row and column of second matrix: "<< endl;
    cin >> theRow1 >> theCol1;
    
    while( theRow1 != theCol){
         cout<< "1st martix column and 2nd matrix row number is the same: ";
         cout<< endl;
         cout<<"Enter the row and column again: "<< endl;
         cin >> theRow1 >> theCol1;
    }
    int num1;
    
    cout <<"Enter the matrix numbers: "<< endl;
    
    for (int row = 0; row < theRow1; row++) {
        matrix1.push_back(vector<int>());
        
        for (int col = 0; col < theCol1; col++) {
            cin >> num1;
            matrix1[row].push_back(num1);
        }
    }
    
    cout << setw(5);
    for (int row = 0; row < matrix1.size(); row++) {
        for (int col = 0; col < matrix1[0].size(); col++) {
            cout << matrix1[row][col] << setw(5);
        }
        cout << endl;
    }
    cout << endl;
    multiply_matrices( matrix, matrix1);
    
    return 0;
}

double sum = 0;

void multiply_matrices(vector<vector <int> > &matrix,
                       vector<vector <int> > &matrix1)
{
    
    vector<vector<int> > result;
    
    for( int i = 0; i < matrix.size(); i++){
        
        for( int j = 0; j < matrix1[0].size(); j++){
            
            for( int k = 0; k < matrix[0].size(); k++){
                
                sum += matrix[i][k] * matrix1[k][j];
            }
          
        }
        
    }
    
    for (int row = 0; row < theRow; row++) {
        result.push_back(vector<int>());
        
        
        for (int col = 0; col < theCol1; col++) {
            result[row].push_back(sum);
            
        }
    }
    
    cout << "The result matrix is : " << endl;
    cout << setw(5);
    for (int row = 0; row < result.size(); row++) {
        for (int col = 0; col < result[0].size(); col++) {
            cout << result[row][col] << setw(5);
        }
        cout << endl;
    }
    
    
}




