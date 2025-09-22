#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> map;

    for(auto& cloth : clothes)
    {
        string type = cloth[1]; // 의상 종류
        map[type]++; // 의상 종류 추가
    }
    
    for(auto& pair : map)
    {
        int num = pair.second;
        answer *= (pair.second +1);
    }
    answer -= 1;
    return answer;
}