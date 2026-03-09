#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    
    map<string, int> parking;
    map<string, int> totalTimes;
    
    for (string record : records) 
    {
        stringstream ss(record);
        string time, carNum, status;
        ss >> time >> carNum >> status; // 공백 기준으로 세 변수에 나눠 담김!
        
        int hour = stoi(time.substr(0, 2));
        int min = stoi(time.substr(3, 2));
        int totalmin = hour*60 + min;
        
        if( status == "IN")
        {
            parking[carNum] = totalmin;
        }
        else
        {
            totalTimes[carNum] += totalmin - parking[carNum];
            parking.erase(carNum);
        }
    }
    
    for(auto [num, intime] : parking)
    {
        totalTimes[num] += (1439 - intime);
    }
    
    for(auto [num, totalTime] : totalTimes) 
    {
        int fee = fees[1]; // 기본 요금 시작
        
        if (totalTime > fees[0]) { 
            // 초과 시간에 대한 올림 계산 로직
            fee += ((totalTime - fees[0] + fees[2] - 1) / fees[2]) * fees[3];
        }
        answer.push_back(fee); // 차량 번호 순서대로(map이니까!) 정답에 추가
    }
    return answer;
}