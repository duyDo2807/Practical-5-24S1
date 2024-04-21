#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>

class RecursiveBinarySearch {
 private:
  bool binarySearch(std::vector<int>& list, int element, int start, int end);

 public:
  bool search(std::vector<int> list, int element);
};

#endif