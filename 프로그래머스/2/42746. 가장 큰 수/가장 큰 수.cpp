#include <string>
#include <vector>
#include <algorithm> 

using namespace std;
bool cmp(string a, string b)
{
    return a + b > b + a;
}
string solution(vector<int> numbers) {
    vector<string> str_number;
    string answer = "";
    for(int i = 0; i<numbers.size(); i++)
    {
        str_number.push_back(to_string(numbers[i]));
    }
    
    sort(str_number.begin(), str_number.end(), cmp);
    
    if (str_number[0] == "0") 
    {
        return "0"; 
    }
    
    for(int i = 0; i<str_number.size(); i++)
    {
        answer += str_number[i];
    }
    return answer;
}

