#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <dirent.h>
#include <unistd.h>
#include <sstream>
#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <set>

typedef std::function<bool(std::pair<std::string, int>, std::pair<std::string, int>)> Comparator;

class DataManager
{
public:
    DataManager() {};
    ~DataManager() {};

    std::map<std::string, int> ReadGameHistoryMap();
    void WriteGameHistoryMapSorted(std::map<std::string, int> aux_map);
    void WriteGameHistoryMap(std::map<std::string, int> players_map);
    void DisplaySortedPlayers(std::map<std::string, int> aux_map);
};

#endif