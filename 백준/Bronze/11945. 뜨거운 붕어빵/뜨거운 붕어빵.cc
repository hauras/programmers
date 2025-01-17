#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M; 

    vector<string> fish(N); 

   
    for (int i = 0; i < N; i++) {
        cin >> fish[i]; 
    }

    for (int i = 0; i < N; i++) {
        for (int j = M - 1; j >= 0; j--) {
            cout << fish[i][j];
        }
        cout << endl; 
    }

    return 0;
}