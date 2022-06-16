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

int const one=1;
int const zero=0;

using namespace std;

class team {
    public:
        string _name;
        double _skill;
        int _points_for;
        int _points_against;
        int _num_wins;
        int _num_losses;
        int _win_streek;
        int _lose_streek;
        int _tmp_win;
        int _tmp_lose;
        
        team(string s, double sk) : _name(std::move(s)), _skill(sk), _points_for(0),_points_against(0),_num_wins(0),_num_losses(),_win_streek(0),_tmp_win(0),_lose_streek(0),_tmp_lose(0){}

    

        void print() const{
            cout<<"name= "<<this->_name<<endl;
            cout<<"skill= "<<this->_skill<<endl;
            cout<<"points for= "<<this->_points_for<<endl;
            cout<<"points against= "<<this->_points_against<<endl;
            cout<<"num wins= "<<this->_num_wins<<endl;
            cout<<"num losses= "<<this->_num_losses<<endl;
            cout<<"win streek= "<<this->_win_streek<<endl;
            cout<<"lose streek= "<<this->_lose_streek<<endl;
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

        void update_win_streak(int x){
            if (x>this->_win_streek){
                this->_win_streek=x;
            }
        }

        void update_lose_streak(int x){
            if (x>this->_lose_streek){
                this->_lose_streek=x;
            }
        }


        void update_tmp_win(int x){
            if (x==zero){
                this->_tmp_win=zero;
            }
            else if(x==one){
                this->_tmp_win=this->_tmp_win+one;
            }
            else{
                throw std::invalid_argument( "wrong num" );
            }
        }

        void update_tmp_lose(int x){
            if (x==zero){
                this->_tmp_lose=zero;
            }
            else if(x==one){
                this->_tmp_lose=this->_tmp_lose+one;
            }
            else{
                throw std::invalid_argument( "wrong num" );
            }
        }
};