#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    
    map<string, int> maps;
    for (int i = 0; i < want.size(); i++) {
        maps[want[i]] = number[i];
    }

   for(int i=0; i<=discount.size() - 10; i++)
   {
       map<string,int> currentmap;
       
       for(int j= i; j< i+10; j++)
       {
           currentmap[discount[j]]++;
       }
       
       if(maps == currentmap)
       {
           answer++;
       }
   }
        
    
    return answer;
}