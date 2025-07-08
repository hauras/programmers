#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    
    for(int i=0; i<schedules.size(); i++)
    {
        bool schedule = true;
        
        // 1. 올바른 마감 시각(deadline) 계산하기
        int hour = schedules[i] / 100;
        int minute = schedules[i] % 100;

        minute += 10;
        if (minute >= 60) {
            hour += 1;
            minute -= 60;
        }
        int deadline = hour * 100 + minute;

        for(int j= 0; j< 7; j++)
        {
            int currentday = (startday + j - 1) % 7 + 1;
            if(currentday == 6 || currentday == 7)
            {
                continue;
            }
            
            // 2. 실제 출근 시각과 '마감 시각'을 비교
            if(timelogs[i][j] > deadline)
            {
                schedule = false;
                break;
            }
        }
        if(schedule)
        {
            answer++;
        }
    }
    return answer;
}