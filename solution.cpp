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

        if (nums[m] < 0) {
            res.push_back(m + 1);
        }

        nums[m] = -nums[m];

    }

    return res;

}
