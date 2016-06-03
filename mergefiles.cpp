#include <iostream>
#include <fstream>
using namespace std;

    string name1,name2,name3;
    int x,y;
    ifstream inputFile1, inputFile2;
    ofstream outputFile;

void mergesTwoFiles();

int main()
{
    
    cout << "type the first input file name: "<< endl;
    cin >> name1;
    inputFile1.open(name1);
    if( inputFile1.fail()){
        cout<< "No file!" << endl;
    }
    cout<< "type the second input file name: "<< endl;
    cin >> name2;
    inputFile2.open(name2);
    if( inputFile2.fail()){
        cout<< "No file!" << endl;
    }

    mergesTwoFiles();

    cout<< "type the name of output file to save the sorted numbers: " 
        << endl;
    //z >> outputFile;
    cin >> name3; 
    outputFile.open(name3);
    
       //thefile << outputFile;
    
    
    inputFile1.close();
    inputFile2.close();
    outputFile.close();
    return 0;
}

void mergesTwoFiles()
{
        inputFile1 >> x;
        inputFile2 >> y;

    while( !inputFile1.eof() && !inputFile2.eof())
    {
        //inputFile1 >> x;
        //inputFile2 >> y;
        
        if( x < y){
          cout<< x << endl;
          outputFile << x;
          inputFile1 >> x;
        
        }
        else if( y < x){
          cout << y << endl;
          outputFile << y;
          inputFile2 >> y;
        }
        else if( inputFile1.eof()){
             if( !inputFile2.eof())
            {
                cout << y << endl;
                outputFile << y;
            }
        }
        else if( inputFile2.eof()){
             if( !inputFile1.eof())
             {
                 cout << x << endl;
                 outputFile << x;
             }
        }

        
    }
     
}     
	

    
