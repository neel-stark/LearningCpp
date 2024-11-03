//#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>

using namespace std;

#define ll long long

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    ll N, M, H;
	    cin >> N >> M >> H;
	    ll A[N];
	    ll B[M];
	    for (int i=0; i<N; i++)
	    {
	        cin >> A[i];
	    }
	    for (int j=0; j<M; j++)
	    {
	        cin >> B[j];
	    }
	    
	    sort(A, A+N, greater<ll>());
	    sort(B, B+M, greater<ll>());
	    
	    
	    ll charge=0;
	    for (int i=0; i<min(M, N); i++)
	    {
	        charge += min(A[i], B[i]*H);
	    }
	    
	    cout << charge << endl;
	    
	}

}

/* Example Input
3
1 2 2
100
20 40
2 1 2
10 20
11
3 2 1
30 30 30
40 20
*/