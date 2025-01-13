#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> result;
    for(int i=0; i<score.size(); i++)
    {
        if(answer.size()<k)
        {
            answer.push_back(score[i]);
            sort(answer.begin(), answer.end());
        }
        else
        {
            if(score[i]> answer[0])
            {
                answer[0] = score[i];
                sort(answer.begin(), answer.end());
            }
            
        }
        result.push_back(answer[0]);
       
    }
    
    return result;
}