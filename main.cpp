#include <iostream>
#include <sstream>
#include <vector>

#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
  std::string input;
  std::getline(std::cin, input);

  std::istringstream iss(input);
  int num;
  std::vector<int> list;
  while (iss >> num) {
    list.push_back(num);
  }

  QuickSort quicksort;
  list = quicksort.sort(list);

  RecursiveBinarySearch binarySearch;
  bool found = binarySearch.search(list, 1);

  std::cout << (found ? "true" : "false") << " ";
  for (int i = 0; i < list.size(); i++) {
    std::cout << list[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}