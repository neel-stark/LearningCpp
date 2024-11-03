//#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() 
{
	int T;
	cin >> T;
	while(T--)
	{
	    string S;
	    cin >> S;
	    int N = S.size();
	    int pairs=0;
	    for (int i = 0; i<N-1; i++)
	    {
	        if (S[i]=='x')
	        {
	            if (S[i+1]=='y')
	            {
	                pairs++;
	                S[i+1]='p';
	            }
	        }
	        else if (S[i]=='y')
	        {
	            if (S[i+1]=='x')
	            {
	                pairs++;
	                S[i+1]='p';
	            }
	        }
	    }
	    cout << pairs << endl;
	}
	

}

/* Example input
3
xy
xyxxy
yy
*/