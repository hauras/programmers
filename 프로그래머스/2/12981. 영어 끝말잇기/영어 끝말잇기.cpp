#include <string>
#include <vector>
#include <iostream>
#include <set>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    
    set<string> used_word;
    used_word.insert(words[0]);
    
    for(int i =1; i<words.size(); i++)
    {
        string current_word = words[i];
        string prev_word = words[i-1];
        if(prev_word.back() != current_word.front() || used_word.count(current_word))
        {
            answer.push_back((i % n) + 1); // 번호
            answer.push_back((i / n) + 1); // 차례
            return answer;
        }
        used_word.insert(current_word);
    }
    answer.push_back(0);
    answer.push_back(0);
    return answer;
}