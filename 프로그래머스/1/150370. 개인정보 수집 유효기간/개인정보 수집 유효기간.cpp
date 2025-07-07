#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

int dateToDay(string date)
{
    stringstream ss(date);
    string part;
    int y,m,d;
    
    getline(ss, part, '.');
    y = stoi(part);
    getline(ss, part, '.');
    m = stoi(part);
    getline(ss,part, '.');
    d = stoi(part);
    
    return (y *12 * 28) + (m * 28) + d;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    int todayInDay = dateToDay(today);
    
    map<char, int> termsMap;
    
    for(const string& term : terms)
    {
        stringstream ss(term);
        char type;
        int duration;
        ss >> type>> duration;
        termsMap[type] = duration;
    }
    
    for(int i=0; i<privacies.size(); ++i)
    {
        stringstream ss(privacies[i]);
        string collectionDate;
        char termType;
        ss >> collectionDate >> termType;
        
        int collectionDateInDays = dateToDay(collectionDate);
        int validityInMonths = termsMap[termType];
        int expirationDateInDays = collectionDateInDays + (validityInMonths * 28);
        
        if (todayInDay >= expirationDateInDays) {
            answer.push_back(i + 1); 
        }
    }
    return answer;
}