#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    for(int i=0; i<arr.size(); i++)
    {
        answer.push_back(arr[i]);
    }
    
    auto min = min_element(answer.begin(), answer.end());

    answer.erase(min);
    
    if(answer.empty())
        answer.push_back(-1);
    return answer;
    
}