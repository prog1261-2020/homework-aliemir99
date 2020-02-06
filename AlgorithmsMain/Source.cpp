#include<iostream>
#include"sortFunctions.h"
#include<vector>
#include<algorithm>


int main() {
    std::vector<int> v = { 73, 42, 12, 19 };
    
    //bsort(v);
    selectSort(v);
    for (auto it : v)
    {
        std::cout << it<< " ";
    }
}