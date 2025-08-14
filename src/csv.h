#pragma once

#include <map>
#include <fstream>
#include <string>
#include <vector>

class CSV {
  private:
    std::map<std::string, std::vector<std::string> > data;
  public:
    CSV(std::string filePath);

    const std::vector<std::string>& Get(std::string it) { return data[it]; }
};