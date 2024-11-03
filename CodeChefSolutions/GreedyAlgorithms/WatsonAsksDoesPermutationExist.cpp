//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) 
        {
            cin >> A[i];
        }

        sort(A, A + N);
        bool flag = true;
        for (int i = 0; i < N - 1; i++) 
        {
            int diff = abs(A[i] - A[i + 1]);
            if (diff > 1) 
            {
                flag = false;
                break;
            } 
        }
        if (flag)
            cout << "YES" << endl ;
        else
            cout << "NO" << endl ;

    }

}

/* Example Input
2
4
3 2 2 3 
2
1 5
*/