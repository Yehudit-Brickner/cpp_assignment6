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
};