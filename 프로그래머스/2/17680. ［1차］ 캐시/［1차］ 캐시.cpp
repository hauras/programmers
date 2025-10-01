#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int cacheSize, vector<string> cities) {
    vector<string> cache;
    int answer = 0;
    if (cacheSize == 0) {
        return cities.size() * 5;
    }
    for (string city : cities) 
    {
        transform(city.begin(), city.end(), city.begin(), ::tolower);
        auto it = find(cache.begin(), cache.end(), city);
        
        if (it != cache.end()) {
            answer += 1;
            cache.erase(it); 
            cache.push_back(city); 
        }
        else {
            answer += 5;
            if (cache.size() == cacheSize) 
            {
                cache.erase(cache.begin());
            }
            cache.push_back(city);
        }
    }
    return answer;
}