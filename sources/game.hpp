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
std::random_device rd{};
std::mt19937 gen{rd()};
std::normal_distribution<double> away{75,8};
std::normal_distribution<double> home{77.5,8};

class game {
    public:
    team _home;
    team _away;
    int _score_home;
    int _score_away;

    game(team &h, team &a){
        this->_home=h;
        this->_away=a;
        this->_score_away=int(away(gen)+10*a._skill);
        this->_score_home=int(d(gen)+10*a._skill);
    }
};