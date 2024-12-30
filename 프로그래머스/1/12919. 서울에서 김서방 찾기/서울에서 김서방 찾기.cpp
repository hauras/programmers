#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

string solution(vector<string> seoul) {
    
    auto answer = find(seoul.begin(), seoul.end(), "Kim"); // find를 이용해 kim이 있는지 확인
    int res = distance(seoul.begin(), answer); // 그 후 dinstace를 이용해 그 값의 위치를 확인 해 저장
    
    return "김서방은 " + to_string(res) + "에 있다";
}