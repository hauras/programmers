#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(int i=0; i<numbers.size(); i++)
    {
        for(int j = i+1; j<numbers.size(); j++)
        {
            answer.push_back(numbers[i]+numbers[j]);
            
        }
    }
    sort(answer.begin(), answer.end());
    auto last = unique(answer.begin(), answer.end()); 
    answer.erase(last, answer.end());
    
    return answer;
}