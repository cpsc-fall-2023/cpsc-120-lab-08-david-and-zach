// Zach Dunlavey
// Zdunlavey9@csu.fullerton.edu
// @ZachDunlavey
// Partners: @wsdavidb

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

if (arguments.size() <= 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
}

double sum{0.};
int count{0};
bool first{true};
for (std::string const& argument: arguments) {
  if (first) {
    first = false;
    continue;
  }
  sum += std::stod(argument);
  count++;
}
double average = sum/count;
std::cout <<"average = " << average;
  return 0;
}