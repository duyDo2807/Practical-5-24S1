#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int element) {
  return binarySearch(list, element, 0, list.size() - 1);
}

bool RecursiveBinarySearch::binarySearch(std::vector<int>& list, int element,
                                         int start, int end) {
  if (start > end) {
    return false;
  }

  int mid = start + (end - start) / 2;

  if (list[mid] == element) {
    return true;
  } else if (element < list[mid]) {
    return binarySearch(list, element, start, mid - 1);
  } else {
    return binarySearch(list, element, mid + 1, end);
  }
}