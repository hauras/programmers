#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days;
    for(int i= 0; i<progresses.size(); i++)
    {
        int day = (100 - progresses[i] + speeds[i] -1) / speeds[i];
        days.push_back(day); // days 벡터에 값 저장
    }
    
    int index = 0;
    while(index<days.size())
    {
        int count = 1;
        int nowday = days[index];

        for(int i = index+1; i<days.size(); i++)
        {
            if(nowday >= days[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        
        answer.push_back(count);
        index += count;
    }
    return answer;
}