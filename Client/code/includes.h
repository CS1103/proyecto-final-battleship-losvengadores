//
// Created by Maor Roizman Gheiler on 26/11/19.
//

#ifndef CODE_INCLUDES_H
#define CODE_INCLUDES_H

#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

enum class model_t{ aicraft_carrier= 'A', battle_cruiser= 'B', submarine= 'S', torped_boat= 'T'};
enum class orientation_t{ horizontal= 'H', vertical= 'V'};
using position_t = size_t;

struct location_t{
    position_t x;
    position_t y;
};




#endif //CODE_INCLUDES_H
