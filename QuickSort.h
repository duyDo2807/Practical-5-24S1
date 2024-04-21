#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Sort.h"

class QuickSort : public Sort {
 private:
  void qsort(std::vector<int>& list, int left, int right);
  int pivot(std::vector<int>& list, int left, int right);

 public:
  std::vector<int> sort(std::vector<int> list) override;
};

#endif