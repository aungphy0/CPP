#include <iostream>
using namespace std;
void tower(int n,int i, int j, int k);

int main()
{
    int n;
    cout << "enter a number n: " << endl;
    cin >> n;
    tower(n,1,3,2);
}

void tower(int n, int i, int j, int k)
{
	if(n == 1)
	{
	    cout <<"move top disk from pole " << i << "to pole"
	         << j << endl;
	}
	else
	{
	    tower(n - 1,i,k,j);
	    tower(1,i,j,k);
	    tower(n - 1,k,j,i);
	}
}
