#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    
    map<string, string> maps;
    
    for(string s : record)
    {
        stringstream ss(s);
        string command, id, nick;
        
        ss >> command >> id;
        
        if(command != "Leave")
        {
            ss >> nick;
            maps[id] = nick;
        }
        
    }
    
    for (string s : record) 
    { 
        stringstream ss(s);
        string command, id, nickname;
        ss >> command >> id; 
    
        if (command == "Enter") 
        {
            answer.push_back(maps[id] + "님이 들어왔습니다.");
        } 
        else if (command == "Leave") 
        {
            answer.push_back(maps[id] + "님이 나갔습니다.");
        }
    }
    
    return answer;
}