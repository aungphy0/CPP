#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>

using namespace std;


void getLeastFreqLetter(string s)
{
	 int charCounts[128];
  for (int i = 0; i < 128; i++) {
    charCounts[i] = 0;
  }

  for (int i = 0; i < s.size(); i++) {
    char nextChar = s[i];
    charCounts[nextChar]++;
  }

  char nextChar = 0;
  while (true) {
    if (charCounts[nextChar] > 0) {
      cout << "You have " << charCounts[nextChar] << " of the letter " << nextChar << endl;
    }   
    if (nextChar == 127) {
      break;
    }   
   
    nextChar++;
  }
   

}

void countWordFreq(string s)
{   


	for (int i = 0; i <= s.size(); ++i) {
    char c = s[i];
    if (ispunct(c)) {
       s.erase(i, 1);
    
      }
  }
     int numspaces = 0;
	 char nextChar;
	// checks each character in the string
	for (int i=0; i<int(s.length()); i++)
	{
		nextChar = s.at(i); // gets a character
		if (isspace(s[i]))
			numspaces++;
	}
	cout << "\nThere are " << numspaces + 1 << " words in this string."<<endl;

}

void getMostFreqWord(string s)
{
	      char wordCounts;
        for( int i = 0; i < s.size(); ++i)
        {
             if( s.at(i) <= 122 && s.at(i) >= 65)
             {
             	  wordCounts++;
             }
        }

        cout<< wordCounts << endl;

        
}



int main()
{
	string s;
	cout << "Enter the sentences: "<< endl;
	getline(cin,s);
	getLeastFreqLetter(s);
  countWordFreq(s);
  getMostFreqWord(s);
}
