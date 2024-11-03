//#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int N, D;
	cin >> N >> D;
	int L[N];
	for (int i=0; i<N; i++)
	{
	    cin >> L[i];
	}
	sort(L, L+N);
	
	int pairs=0;
	for (int i=0; i<N-1; i++)
	{
	    if (L[i+1]-L[i]>D)
	    {
	        continue;
	    }
	    else
	    {
	        pairs++;
	        i++;
	    }
	        
	}
	cout << pairs << endl;

}

/*
5 2
1
3
3
9
4
*/
