#include "sortFunctions.h"
#include <algorithm>


void bsort(std::vector<int>& v)
{
	bool flag = true;
	while (flag) {
		flag = false;
		for (int i = 0; i < v.size() - 1; i++) {
			if (v.at(i) > v.at(i + 1))
			{
				std::swap(v.at(i), v.at(i++));
				flag = true;
			}
		}
	}

}

void selectSort(std::vector<int>& v)
{
	
	for (int i = 0; i < v.size() - 1; i++) {
		auto tmp = std::min_element(v.begin() + i, v.end());
		for (int j = i; j < v.size(); j++) {
			
			if(v.at(j)== *tmp){
				std::swap(v.at(i), v.at(j));
				break;
			}
		}
	}
}

std::vector<int> qSort(std::vector<int>& v)
{
	qsortWork(0, v.size() - 1, v);
	return v;

}

void qsortWork(int low, int high, std::vector<int>& v)
{
	if (high <= low)
		return;

	int p = partition(low, high, v);
	qsortWork(low, p - 1, v);
	qsortWork(p + 1, high, v);
	return;
}
//returns the index of the pivot
int partition(int low, int high, std::vector<int>& v)
{
	int p = v[high];

	int i = low - 1;

	for (int j = low; j <= high; j++) {
		if (v[j] < p) {
			++i;
			std::swap(v[i], v[j]);
		}
	}
	std::swap(v[i + 1], v[high]);
	return i + 1;
}

