#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <set>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> res;
    
    set<string> reports(report.begin(), report.end());// 중복 제거/ 중복 제거
    
    map<string, set<string>> report_log; 
    map<string, int> count; // 신고 당한이름, 횟수
    
    for(string s : reports)
    {
        stringstream ss(s);
        string from, to;
        ss >> from >> to; // from에 보낸사람, to에 누구를
        
        report_log[from].insert(to);
        count[to]++;
    }
    
    for(string id : id_list)
    {
        int mail = 0;
        
        for(string target : report_log[id])
        {
            if(count[target] >= k)
            {
                mail++;
            }
        }
        res.push_back(mail);
    }
    
    return res;
}