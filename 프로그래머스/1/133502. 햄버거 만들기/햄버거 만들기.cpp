#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    vector<int> s;
    int answer = 0;

    for (int i = 0; i < ingredient.size(); i++) {
        s.push_back(ingredient[i]);

        if (s.size() >= 4) {
            int n = s.size();
            if (s[n-4] == 1 && s[n-3] == 2 && s[n-2] == 3 && s[n-1] == 1) {
                answer++;
                s.pop_back();
                s.pop_back();
                s.pop_back();
                s.pop_back();
            }
        }
    }

    return answer;
}
