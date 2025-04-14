#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> L(N); 
    vector<int> J(N); 

    for (int i = 0; i < N; ++i) cin >> L[i];
    for (int i = 0; i < N; ++i) cin >> J[i];

    vector<int> dp(101, 0); 

    for (int i = 0; i < N; ++i) {
        for (int hp = 100; hp >= L[i]; --hp) {
            dp[hp] = max(dp[hp], dp[hp - L[i]] + J[i]);
        }
    }

    int answer = 0;
    for (int hp = 1; hp < 100; ++hp) {
        answer = max(answer, dp[hp]);
    }

    cout << answer << endl;
    return 0;
}

