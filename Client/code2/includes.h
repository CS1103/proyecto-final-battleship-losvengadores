//
// Created by Usuario on 11/27/2019.
//

#ifndef CODE2_INCLUDES_H
#define CODE2_INCLUDES_H

#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>

using namespace std;


namespace filesystem = std::filesystem;
using text_t = std::string;
using position_t = size_t;
using length_t = size_t;
using input_file_t = std::ifstream;
using output_file_t = std::ofstream;
using path_t = filesystem::path;
using uuid_t = size_t;

enum class orientation_t { horizontal = 'H', vertical = 'V'};
enum class message_t { model_full, fleet_full, busy, outside, ok, winner, game_over, failed, damaged, destroyed};
enum class status_t{ accepted, rejected};
enum class model_t { aircraft_carrier = 'A', battle_cruiser = 'B', submarine = 'S', torped_boat = 'T' };
enum class navy_status_t { healthy, damaged, destroyed };
enum class action_t { start, build, attack };

#endif //CODE2_INCLUDES_H
