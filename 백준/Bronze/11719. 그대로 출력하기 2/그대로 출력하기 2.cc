#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;

    // 입력이 EOF(End Of File)까지 주어지므로, getline을 사용하여 한 줄씩 처리
    while (getline(cin, line)) {
        cout << line << endl; // 입력받은 줄을 그대로 출력
    }

    return 0;
}