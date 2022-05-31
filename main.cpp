#include <iostream>
using namespace std;
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
# include <ctime>

#include "sources/team.hpp"
#include "sources/game.hpp"
#include "sources/league.hpp"


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

    vector<team*> teams{new team("a",0.1),new team("b",0.2),new team("c",0.3),new team("d",0.4),new team("e",0.5)};
    league l(teams);
    l.play();
//     std::random_device rd{};
//     std::mt19937 gen{rd()};
//     std::normal_distribution<double> d{77.5,8};
 
   
//     const int nrolls=10000;  // number of experiments
//     const int nstars=1000;    // maximum number of stars to distribute



//     int p[200]={};
//     int count=0;
//     for (int i=0; i<nrolls; ++i) {
//         double num=d(gen);
       
//         if(num>=67 and num<=83){
//             count++;
//         }
  
//         if ((num>=50.0)&&(num<=100.0)) ++p[int(num)];
//     }


//   for (int i=50; i<100; ++i) {
//     std::cout << i << "-" << (i+1) << ": ";
//     std::cout << std::string(p[i]*nstars/nrolls,'*') << std::endl;
//   }

  return 0;
}