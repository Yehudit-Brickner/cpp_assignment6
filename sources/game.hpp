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
#include <string>
#include <random>

#include "team.hpp"

const int awaymean=75;
const double homemean=77.5;
const int eight=8;
const int ten=10;

using namespace std;
std::random_device rd{};
std::mt19937 gen{rd()};
std::normal_distribution<double> away{awaymean,eight};
std::normal_distribution<double> home{homemean,eight};

class game {
    public:
    team* _home;
    team* _away;
    int _score_home;
    int _score_away;

    
    game(team* h, team* a) :_home(h), _away(a){
        this->_home=h;
        this->_away=a;
        this->_score_away=int(away(gen)+ten*a->_skill);
        this->_score_home=int(home(gen)+ten*h->_skill);
        h->update_points_for(this->_score_home);
        h->update_points_against(this->_score_away);
        a->update_points_for(this->_score_away);
        a->update_points_against(this->_score_home);
        if (this->_score_home>=this->_score_away){
            h->update_num_wins();
            a->update_num_losses();
            h->update_tmp_win(1);
            h->update_win_streak(h->_tmp_win);
            a->update_tmp_win(0);
            a->update_tmp_lose(1);
            a->update_lose_streak(a->_tmp_lose);
        }
        else{
            a->update_num_wins();
            h->update_num_losses(); 
            a->update_tmp_win(1);
            a->update_win_streak(a->_tmp_win);
            h->update_tmp_win(0);
            h->update_tmp_lose(1);
            h->update_lose_streak(a->_tmp_lose);
        }


    }

    void print() const{
        cout<<"home= " << this->_home->_name<<endl;
        cout<<"away= " << this->_away->_name<<endl;
        cout<<"score away= "<<this->_score_away<<endl;
        cout<<"score home= "<<this->_score_home<<endl;
    }

};