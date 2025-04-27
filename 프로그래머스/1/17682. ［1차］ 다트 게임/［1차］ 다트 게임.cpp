#include <string>
#include <vector>

using namespace std;

int solution(string dartResult) {
    vector<int> scores(3);  
    int count = -1;

    for(int i=0; i<dartResult.length(); i++)
    {
        int score = 0;
        if (dartResult[i] >= '0' && dartResult[i] <= '9')
        {
            if(dartResult[i] == '1' && dartResult[i+1] == '0')
            {
                score = 10;
                i++;
            }
            else
                score = dartResult[i] - '0';
            count++;
            scores[count] = score;
        }
        else if(dartResult[i] == 'D')
        {
            scores[count] = scores[count] * scores[count];
        }
        else if(dartResult[i] == 'T')
        {
            scores[count] = scores[count] * scores[count] * scores[count];
        }
        else if(dartResult[i] == '*')
        {
            scores[count] *= 2;
            if(count > 0) scores[count-1] *= 2;
        }
        else if(dartResult[i] == '#')
        {
            scores[count] *= -1;
        }
    }

    int answer = 0;
    for(int i=0; i<scores.size(); i++)
    {
        answer += scores[i];
    }
    return answer;
}
