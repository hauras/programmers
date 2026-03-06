#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    
    int current_health = health;
    int last_attack = 0;
    
    int time = 0;
    
    for(int i = 0; i<attacks.size(); i++)
    {
        int attack_time = attacks[i][0];
        int damage = attacks[i][1];
        
        int duration = attack_time - last_attack - 1;
        
        
        current_health += (duration * bandage[1]) + ((duration / bandage[0]) * bandage[2]);
        
        if(current_health > health) { current_health = health; }
        current_health -= damage;
        
        if(current_health <= 0) 
        {
            return -1;
            
        }
        last_attack = attack_time;   

    }
    return current_health;
}