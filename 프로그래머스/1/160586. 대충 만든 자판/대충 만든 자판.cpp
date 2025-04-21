#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    unordered_map<char, int> keyPress;
    vector<int> answer;

    // Step 1: keymap 정보를 바탕으로 최소 입력 횟수 맵 생성
    for (const string& key : keymap) {
        for (int i = 0; i < key.length(); ++i) {
            char c = key[i];
            int pressCount = i + 1;
            if (keyPress.find(c) == keyPress.end()) {
                keyPress[c] = pressCount;
            } else {
                keyPress[c] = min(keyPress[c], pressCount);
            }
        }
    }

    // Step 2: 각 target 문자열 처리
    for (const string& word : targets) {
        int total = 0;
        bool valid = true;
        for (char c : word) {
            if (keyPress.find(c) == keyPress.end()) {
                total = -1;
                valid = false;
                break;
            }
            total += keyPress[c];
        }
        answer.push_back(total);
    }

    return answer;
}
