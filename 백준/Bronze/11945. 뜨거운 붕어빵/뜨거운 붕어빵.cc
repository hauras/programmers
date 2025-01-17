#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M; // 붕어빵의 세로 크기와 가로 크기 입력받기

    vector<string> fish(N); // 붕어빵 모양 저장할 문자열 벡터

    // 붕어빵 모양 입력받기
    for (int i = 0; i < N; i++) {
        cin >> fish[i]; // 한 줄씩 입력받기
    }

    // 땅에 떨어졌을 때의 모양 출력 (좌우 반전)
    for (int i = 0; i < N; i++) {
        for (int j = M - 1; j >= 0; j--) { // 각 행을 거꾸로 출력
            cout << fish[i][j];
        }
        cout << endl; // 한 줄 출력 후 개행
    }

    return 0;
}