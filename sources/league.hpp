#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <unordered_map>
#include <string>
#include <algorithm>
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
        // for (unsigned long i=0; i<this->_teams.size();i++){
        //     this->_teams[i]->print();
        //     cout<<endl;
        // }    
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
        cout<< "\nlongest win streek is: "<<win<<endl; 

        cout<< "the teams with the longest win streek are: "<<endl;

        for (unsigned long i=0; i<this->_teams.size();i++){
            if (this->_teams[i]->_win_streek==win){
                cout<<_teams[i]->_name<<"  ";
            }
        }
        cout<<endl;
         
        cout<< "\nlongest lose streek is: "<<win<<endl; 

        cout<< "the teams with the longest lose streek are: "<<endl;

        for (unsigned long i=0; i<this->_teams.size();i++){
            if (this->_teams[i]->_lose_streek==lose){
                cout<<_teams[i]->_name<<"  ";
            }
        }
        cout<<endl;
          
    }

    void top_teams(unsigned long num){
        
        std::sort(_teams.begin(), _teams.end(), numwins);
        if (num<=this->_teams.size()){
            cout<< "\ntop "<< num<<" teams are: "<<endl;
            for (unsigned long i=0; i<num;i++){
            cout<<"team: "<<_teams[i]->_name<<endl;
            }  
        }
        else{
            cout<< "\ntop "<<this->_teams.size()<<" teams are: "<<endl;
            for (unsigned long i=0; i<this->_teams.size();i++){
            cout<<"team: "<<_teams[i]->_name<<endl;
            }  

        }
    }


    void points_win_lose(){
        cout<< "\nthe prder of teams by the amount of games won"<<endl;
        std::sort(_teams.begin(), _teams.end(), numwins);
        for (unsigned long i=0; i<this->_teams.size();i++){
            cout<<"team: "<<_teams[i]->_name<<"   num wins: "<<_teams[i]->_num_wins<< "   num losses: "<< _teams[i]->_num_losses<< 
            "   points for: "<<_teams[i]->_points_for <<"   points against: "<<_teams[i]->_points_against<<endl;;
        }
        cout<<endl;
    }


    static bool numwins(const team *a, const  team *b){
        return a->_num_wins > b->_num_wins;
    }


    void points_diff(){
        cout << "\nthe order of teams by points diff between for and against"<<endl; 
        std::sort(_teams.begin(), _teams.end(), pointdif);
        for (unsigned long i=0; i<this->_teams.size();i++){
            cout<<"team: "<<_teams[i]->_name<<"   num wins: "<<_teams[i]->_num_wins<< "   num losses: "<< _teams[i]->_num_losses<< 
            "   points for: "<<_teams[i]->_points_for <<"   points against: "<<_teams[i]->_points_against<<endl;;
        }
        cout<<endl;
    }

    static bool pointdif(const team *a, const  team *b){
        return a->_points_for-a->_points_against > b->_points_for-b->_points_against;
    }


    void score_more(){
        int count=0;
        for (unsigned long i=0; i<this->_teams.size();i++){
            if( this->_teams[i]->_points_for > this->_teams[i]->_points_against){
                count++;
            }
        }
        cout<< "\nthe number of teams who score more than they were scored on is: "<< count<<endl;
    }


 void all_stats(){
    top_teams(5);
    score_more();
    longest_streeks();
 }
};