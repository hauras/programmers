#include <string>
#include <vector>
#include <set>     
#include <numeric>
using namespace std;

int solution(vector<int> elements) {
    vector<int> res;
    set<int> unique_sums;
    for(int i =0; i<elements.size(); i++)
    {
        res.push_back(elements[i]);
    }
    for(int i =0; i<elements.size(); i++)
    {
        res.push_back(elements[i]);
    }
    
    for (int len = 1; len <= elements.size(); len++)
    {
        for (int start = 0; start < elements.size(); start++)
        {
            int current_sum = std::accumulate(res.begin() + start, res.begin() + start + len, 0);

            unique_sums.insert(current_sum);
        }
    }
    
    return unique_sums.size();
}