#include <iostream>
using namespace std;

//problem #1
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

//problem #2
int digitSum(int input)
{   
   if(input == 0)
   {
       return 0;
   }
   else
   {
       return (input % 10 + digitSum(input / 10));
   }

}

//problem #3
int waysToClimb(int numStairs) 
{

    if (numStairs < 4) 
    {
        return numStairs;

    } 
    else 
    {
        return waysToClimb(numStairs - 1) + waysToClimb(numStairs - 2);

    }
}

//main method
int main()
{ 
  
	isPalindrome("aaccddcdaa");
  cout << endl;

  int input;
  cout << "enter integer: ";
  cin >> input;
  int sum = digitSum(input);
  cout << "the sum of all digits: " << sum << endl;
  cout << endl; 

  int stairs;
  cout << "Enter the number of stairs you want to climb: ";
  cin >> stairs;
  int theWays = waysToClimb(stairs);
  cout << "The number of ways: " << theWays << endl;
  
  return 0; 
}