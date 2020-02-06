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
