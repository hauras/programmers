#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    for(int i = 0; i< photo.size(); i++)
    {
        int sum =0;
        for(const string& person : photo[i])
        {
            for(int j =0; j<name.size(); j++)
            {
                if(person == name[j])
                {
                    sum +=yearning[j];
                }
            }
        }
        answer.push_back(sum);
    }
    return answer;
}