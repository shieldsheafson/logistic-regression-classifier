#pragma once

#include <istream>
#include <string>
#include <vector>

class FileReader {
  public:
    virtual std::string Read(std::istream& ifs) = 0;
    virtual std::vector<std::string> ReadLines(std::istream& ifs) = 0;
};

class GZFileReader : FileReader {
  public:
    std::string Read(std::istream& ifs) override;
    std::vector<std::string> ReadLines(std::istream& ifs) override;
};