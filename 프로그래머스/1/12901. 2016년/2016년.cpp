#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector<string> days  = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int month_days[12] = {31, 29, 31, 30, 31, 30, 
                          31, 31, 30, 31, 30, 31};
    int total_days = 0;
    for(int month =0; month<a; month++)
    {
        total_days += month_days[month - 1];
    }
    total_days +=b;
    
    int day = (total_days - 1) % 7;
    return days[day];
}