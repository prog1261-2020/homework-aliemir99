#pragma once
#include<vector>

void bsort(std::vector<int>& v);

void selectSort(std::vector<int>& v);

std::vector<int> qSort(std::vector<int>& v);

void qsortWork(int low, int high, std::vector<int>& v);

int partition(int low, int high, std::vector<int>& v);

