#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list) {
  qsort(list, 0, list.size() - 1);
  return list;
}

void QuickSort::qsort(std::vector<int>& list, int left, int right) {
  if (left < right) {
    int pivotIndex = pivot(list, left, right);
    qsort(list, left, pivotIndex - 1);
    qsort(list, pivotIndex + 1, right);
  }
}

int QuickSort::pivot(std::vector<int>& list, int left, int right) {
  int pivot = list[right];
  int i = left - 1;

  for (int j = left; j < right; j++) {
    if (list[j] <= pivot) {
      i++;
      std::swap(list[i], list[j]);
    }
  }
  std::swap(list[i + 1], list[right]);
  return i + 1;
}