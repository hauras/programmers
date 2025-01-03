#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(string s) {
    
    map<string, string> num = {
        {"zero", "0"}, {"one", "1"}, {"two", "2"}, {"three", "3"},
        {"four", "4"}, {"five", "5"}, {"six", "6"}, {"seven", "7"},
        {"eight", "8"}, {"nine", "9"}
    };
    
    for (int i = 0; i < s.size(); ++i) {
        for (const auto& pair : num) {
            string sub = s.substr(i, pair.first.size()); 
            if (sub == pair.first) { 
                s.replace(i, pair.first.length(), pair.second);
                i += pair.second.size() - 1; 
            }
        }
    }

    return stoi(s);  // 결과: 1478
    
}