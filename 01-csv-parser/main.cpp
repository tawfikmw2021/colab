# include "fast-cpp-csv-parser/csv.h"
#include <iostream>


int main(){
  io::CSVReader<3> in("ram.csv");
  in.read_header(io::ignore_extra_column, "vendor", "size", "speed");
  std::string vendor; int size; double speed;
  while(in.read_row(vendor, size, speed)){
    std::cout << size;
    // do stuff with the data
  }
  return 0;
}