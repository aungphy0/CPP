#include <iostream>
#include <cstdlib>
#include <vector>
#include <sstream>
using namespace std;


void readData(vector<int> &list);
void printVector(vector<int> &list);
void selectionSort(vector<int> &list);

int main()
{    
     vector<int> list;
     readData(list);
     cout << "There are "<< list.size() << " numbers." << endl;
     printVector(list);
     cout << endl;
     selectionSort(list);
     cout << endl;
    
}

void readData(vector<int> &list)
{     
	  string line;
	  stringstream ss;
	  
	  cout << "Type some numbers with spaces:  "<< endl;
	  getline(cin,line);

	  ss << line;
	  while(true)
	  {
	  	int next;
	  	ss >> next;
	  	if(ss.fail()){
	  		break;
	  	}

	  	list.push_back(next);
	  }
	  
}

void printVector(vector<int> &list)
{     
	  cout<< "You typed: "<< " ";
	  for(int i =0; i < list.size(); i++)
      {    
          if( list.at(i) > 0){
          	   cout << list[i] << " "; 
          }
      }
}

void selectionSort(vector<int> &list)
{     
	  
      cout<< "The sorted numbers: "<< " ";
	  for(int i = 0; i < list.size(); i++)
	  {
	  	   int small = i;
	  	   for( int j = i + 1; j < list.size(); j++)
	  	   {
	  	   	 if( list[j] < list[small]){
	  	   	 	  small = j;
	  	   	 }
	  	   }
	  	   if( small != i){
	  	   	   swap(list[i], list[small]);
	  	   }
	  	   
	  	   cout<< list[i] << " ";
	  }
	            
}


