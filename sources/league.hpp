#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <unordered_map>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include "team.hpp"

using namespace std;

class league {
    public:
    vector<team*> _teams;

    league(vector<team*> t){
        this->_teams=t; 
        if (t.size()<20){
            for (int i=t.size();i<20;i++){
                int num=i;
                string n="team";
                n+=to_string(num);
                double sk=i/20.0;
                this->_teams.push_back( new team(n,sk));
            }
        }      
    }

    league(){
        vector<team*> t;
        this->_teams=t;
        for (int i=0;i<20;i++){
            int num=i;
            string n="team";
            n+=to_string(num);
            double sk=i/20.0;
            this->_teams.push_back( new team(n,sk));
        }
          
    }

    void play(){
        
        for ( unsigned long i=1; i<this->_teams.size();i++){
            for (unsigned long j=0; j<this->_teams.size();j++){
                game g(this->_teams[j],this->_teams[(i+j)%this->_teams.size()]);
            }

        }
        for (unsigned long i=0; i<this->_teams.size();i++){
            this->_teams[i]->print();
            cout<<endl;
        }    
    }


    void longest_streeks(){
        int win=0;
        int lose=0;
        for (unsigned long i=0; i<this->_teams.size();i++){
            if (this->_teams[i]->_win_streek>win){
                win=_teams[i]->_win_streek;
            }
            if (this->_teams[i]->_lose_streek>lose){
               lose=_teams[i]->_lose_streek; 
            }
        }
        cout<< "longest win streek is: "<<win<<endl; 

        cout<< "the teams with the longest win streek are: "<<endl;

        for (unsigned long i=0; i<this->_teams.size();i++){
            if (this->_teams[i]->_win_streek==win){
                cout<<_teams[i]->_name<<"  ";
            }
        }
        cout<<endl;
         
        cout<< "longest lose streek is: "<<win<<endl; 

        cout<< "the teams with the longest lose streek are: "<<endl;

        for (unsigned long i=0; i<this->_teams.size();i++){
            if (this->_teams[i]->_lose_streek==lose){
                cout<<_teams[i]->_name<<"  ";
            }
        }
        cout<<endl;
          

    }
   


};