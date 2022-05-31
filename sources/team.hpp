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

using namespace std;

class team {
    public:
    string _name;
    double _skill;
    int _points_for;
    int _points_against;
    int _num_wins;
    int _num_losses;
    
    team(string s, double sk) : _name(s), _skill(sk), _points_for(0),_points_against(0),_num_wins(0),_num_losses(){}

    void print(){
        cout<<"name= "<<this->_name<<endl;
        cout<<"skill= "<<this->_skill<<endl;
        cout<<"points for= "<<this->_points_for<<endl;
        cout<<"points against= "<<this->_points_against<<endl;
        cout<<"num wins= "<<this->_num_wins<<endl;
        cout<<"num losses= "<<this->_num_losses<<endl;
    }

    void update_points_for(int x){
        this->_points_for=this->_points_for+x;
    }

    void update_points_against(int x){
        this->_points_against=this->_points_against+x;
    }

    void update_num_wins(){
        this->_num_wins=this->_num_wins+1;
    }

    void update_num_losses(){
        this->_num_losses=this->_num_losses+1;
    }
};