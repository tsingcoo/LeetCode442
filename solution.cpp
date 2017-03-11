//
// Created by 王青龙 on 2017/3/10.
//


#include <iostream>
#include "solution.h"

std::vector<int> Solution::findDuplicates(std::vector<int> &nums) {
    std::vector<int> res;
    for (auto &n : nums) {
        int m = n > 0 ? n : -n;

        m = m - 1;
        nums[m] = -nums[m];
        std::cout << nums[m] << " ";

    }
    std::cout << std::endl;
    for (auto &n:nums) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] > 0) {
            res.push_back(i + 1);
        }
    }
    return res;

}
