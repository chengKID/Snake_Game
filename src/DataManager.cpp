#include "DataManager.h"

std::map<std::string, int> DataManager::ReadGameHistoryMap() {
    std::string line;
    std::string player_name;
    int player_score;
    std::map<std::string, int> players_map;
    std::map<std::string, int>::iterator it;
    
    const std::string gameDataDirectory{"../data"};
    std::ifstream filestream(gameDataDirectory + "/" + "game_record.txt");

    if (filestream.is_open()) {
        while (std::getline(filestream, line))
        {
            std::istringstream linestream(line);
            while (linestream >> player_name >> player_score)
                players_map.insert(std::make_pair(player_name, player_score));
        }

        filestream.close();
        std::cout << "finishing reading file ..." << std::endl;
        return players_map;
    }
    else {
        std::ofstream outfile("game_record.txt");
        std::cout << "RECORD file does not exist. New is created." << std::endl;
    }
}

void DataManager::WriteGameHistoryMapSorted(std::map<std::string, int> aux_map) {
    std::ofstream dataFile;
    dataFile.open("game_record.txt", std::ios::in | std::ios::out | std::ios::app);
    if (!dataFile.is_open())
    {
        std::cout << " not possible to open file" << std::endl;
    }
    else
    {
        std::map<std::string, int> sorted_aux_map;

        Comparator compFunctor = [](std::pair<std::string, int> elem1, std::pair<std::string, int> elem2) {
                                        return elem1.second > elem2.second;
                                    };

        // Declaring a set that will store the pairs using above comparision logic
        std::set<std::pair<std::string, int>, Comparator> sorted_map(aux_map.begin(), aux_map.end(), compFunctor);

        // Iterate over a set using range base for loop
        // It will display the items in sorted order of values
        int index = 1;
        for (std::pair<std::string, int> element : sorted_map)
        {
            dataFile << index << ". player : " << element.first << ", score : " << element.second << "\n";
            index++;
        }

        dataFile.close();
    }
}

void DataManager::WriteGameHistoryMap(std::map<std::string, int> players_map) {
    std::map<std::string, int>::iterator it;

    std::ofstream dataFile;
    dataFile.open("game_record.txt", std::ios::in | std::ios::out | std::ios::app);
    if (!dataFile.is_open()) {
        std::cout << " not possible to open file" << std::endl;
    }
    else {
        for (it = players_map.begin(); it != players_map.end(); it++)
            dataFile << (*it).first << " " << (*it).second << "\n";

        dataFile.close();
    }
}

void DataManager::DisplaySortedPlayers(std::map<std::string, int> aux_map) {
    std::cout << "called :: " << __FUNCTION__ << "   size  ::" << aux_map.size() << std::endl;
    std::map<std::string, int> sorted_aux_map;

    Comparator compFunctor = [](std::pair<std::string, int> elem1, std::pair<std::string, int> elem2) {
                                    return elem1.second > elem2.second;
                                };

    // Declaring a set that will store the pairs using above comparision logic
    std::set<std::pair<std::string, int>, Comparator> sorted_map(aux_map.begin(), aux_map.end(), compFunctor);

    // Iterate over a set using range base for loop
    // It will display the items in sorted order of values
    int index = 1;
    for (std::pair<std::string, int> element : sorted_map)
    {
        std::cout << index << ". player : " << element.first << ", score : " << element.second << std::endl;
        index++;
        if (index > 10)
            break;
    }
}