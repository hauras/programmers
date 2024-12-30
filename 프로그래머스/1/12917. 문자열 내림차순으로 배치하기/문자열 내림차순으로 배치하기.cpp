#include <string>
#include <vector>
#include<algorithm>

using namespace std;

string solution(string s) {
    sort(s.begin(), s.end()); // 오름차순 정렬
    string answer(s.rbegin(), s.rend()); // 역순으로 저장
    return answer;
}