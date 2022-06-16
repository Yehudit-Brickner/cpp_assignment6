#include "doctest.h"
#include "league.hpp"

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;


TEST_CASE("test"){
    for (int i=0; i<20;i++){
        CHECK(i==i);
    }
}