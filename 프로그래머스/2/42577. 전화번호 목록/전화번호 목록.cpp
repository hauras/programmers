#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

bool solution(vector<string> phone_book) {
    unordered_set<string> num(phone_book.begin(), phone_book.end());
    
    for(string& number : phone_book)
    {
        for(int i = 1; i<number.length(); i++)
        {
            string str = number.substr(0,i);
            
            if(num.count(str))
            {
                return false;
            }
        }
    }
    return true;
}