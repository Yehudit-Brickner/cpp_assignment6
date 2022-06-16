#include <iostream>
using namespace std;
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
# include <ctime>

#include "team.hpp"
#include "game.hpp"
#include "league.hpp"


int main(){
    
    vector<team*> teams{new team("a",0.1),new team("b",0.2),new team("c",0.3),new team("d",0.4),new team("e",0.5)};
    league l(teams);
    l.play();
    l.all_stats(2);
    l.points_win_lose();
    l.score_more();
    cout<<"/n/n/n"<<endl;
    league l2;
    l2.play();
    l.points_win_lose();
    l2.all_stats(3);
  
    return 0;
}