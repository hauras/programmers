#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    auto last = unique(nums.begin(), nums.end());         
    int count = distance(nums.begin(), last); 
    int select = nums.size() / 2;
    return min(count, select);
}
