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
    vector<vector<vector<team*>>> overall;
    // league(){
    //     for (int i=0; i<20;i++){
    //         team t;
    //         _teams.push_back(t);
    //     }
    // }
    league(vector<team*> t){
        this->_teams=t;
        // vector<vector<vector<team*>>> x(t.size(), vector<vector<team*>>(t.size(), vector<team*>(t.size())));
        // this->overall=x;
        
    }

    void play(){
        
        for ( unsigned long i=1; i<this->_teams.size();i++){
            for (unsigned long j=0; j<this->_teams.size();j++){
                game g(this->_teams[j],this->_teams[(i+j)%this->_teams.size()]);
                // if(g._score_home>=g._score_away){
                //     overall[j][i][0] = this->_teams[j] ; //winner
                //     overall[j][i][0]  = this->_teams[(i+j)%this->_teams.size()] ; //loser
                // }
                // else{
                //     overall[j][i][0] = this->_teams[(i+j)%this->_teams.size()] ; //winner
                //     overall[j][i][0]  = this->_teams[j] ; //loser 
                // }
            }

        }
        for (unsigned long i=0; i<this->_teams.size();i++){
            this->_teams[i]->print();
            cout<<endl;
        }    
    }


    void longest_winning_strek(){
    

    }

};