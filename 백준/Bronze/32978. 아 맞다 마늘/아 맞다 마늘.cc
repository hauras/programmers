#include <iostream>
#include <set>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore(); // 개행 문자 제거

    set<string> allIngredients;
    set<string> hyunbinIngredients;

    // 첫 번째 줄 입력
    string line;
    getline(cin, line);
    stringstream ss1(line);
    string ingredient;
    while (ss1 >> ingredient) {
        allIngredients.insert(ingredient);
    }

    // 두 번째 줄 입력
    getline(cin, line);
    stringstream ss2(line);
    while (ss2 >> ingredient) {
        hyunbinIngredients.insert(ingredient);
    }

    // 결과 계산 및 출력
    for (const string& item : allIngredients) {
        if (hyunbinIngredients.find(item) == hyunbinIngredients.end()) {
            cout << item << endl;
        }
    }

    return 0;
}