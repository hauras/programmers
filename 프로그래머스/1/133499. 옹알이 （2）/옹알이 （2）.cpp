#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    
    int count=0;

    for(string str : babbling)
    {
        int flag=0; bool j=true;
        for(int i=0; i<str.length(); i++)
        {
            if(str.substr(i,3)=="aya" && flag!=1) { flag=1; i+=2; }
            else if(str.substr(i,2)=="ma" && flag!=2) { flag=2; i+=1; }
            else if(str.substr(i,3)=="woo" & flag!=3) { flag=3; i+=2; }
            else if(str.substr(i,2)=="ye" && flag!=4) { flag=4; i+=1; }
            else { j=false; break; }
        }
        if(j==true) count++;
    }

    return count;
}