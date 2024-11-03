//#include <bits/stdc++.h>
#include<iostream>
#include<numeric>   //include for accumulate
#include<algorithm>     //include for sort 

using namespace std;

int main() {
    cout << "reached here";
    int T, N, K;
    cin >> T;
    cout << "reached here";
    for (int i = 0; i < T; i++) {
        cin >> N >> K;
        int W[N];
        for (int j = 0; j < N; j++) {
            cin >> W[j];
        }
        sort(W, W+N);

        // for (int Wi : W){
        //     cout << Wi << " " ;
        // }
        // cout << endl;

        int sum = accumulate(W, W+N, 0);
        int sumL = 0, sumH = 0;
        for (int j = 0; j < K; j++) {
            sumL += W[j];
            sumH += W[N - 1 - j];
        }

        cout << max(abs(2 * sumL - sum), abs(2 * sumH - sum)) << endl;
    }

}

/* Example Input
2
5 2
8 4 5 2 10
8 3
1 1 1 1 1 1 1 1
*/