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
    

    // team a("a",0.3);
    // a.print();
    // cout<<""<<endl;
    // team b("b", 0.5);
    // b.print();
    // cout<<""<<endl;
    // game g1( &a, &b);
    // g1.print();
    // cout<<""<<endl;
    // a.print();
    // cout<<""<<endl;
    // b.print();

    // vector<team*> teams{new team("a",0.1),new team("b",0.2),new team("c",0.3),new team("d",0.4),new team("e",0.5)};
    // league l(teams);
    // l.play();
    // l.longest_streeks();


    league l2;
    l2.play();
    // l2.longest_streeks();
    // l2.points_win_lose();
    // l2.points_diff();

    // l2.top_teams(12);
    // l2.score_more();

    l2.all_stats();





  return 0;
}