#include <iostream>
#include "solution.h"
int main() {
    Solution s;
    std::vector<int> nums = {4,3,2,7,8,2,3,1};
    std::vector<int> res;
    res = s.findDuplicates(nums);

    return 0;
}