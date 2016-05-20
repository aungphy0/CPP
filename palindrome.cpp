#include <iostream>
using namespace std;

bool isPalindrome(const string& input) 
{     
      
      
      if( input.length() == 0 || input.length() == 1 )
      {
      	    cout<< "true" << endl;
            return true;
      }
      else if( input.front() == input.back() )
      {  
          //input.substr(1, input.length() - 2);
          return isPalindrome(input.substr(1,input.length() - 2));                         
      }
      else
      {    
          cout << "false" << endl;
      	  return false;
      }


}	
int main()
{ 
  string s;
  getline(cin,s);
	isPalindrome(s);
  
  return 0; 
}