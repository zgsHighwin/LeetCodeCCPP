//
// Created by zgsHighwin on 2024/5/15.
//

#include <iostream>
#include "array/_136_只出现一次的数字.h"

int singleNumber(std::vector<int> &nums) {
    int ret = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        ret = ret ^ nums[i];
    }
    return ret;
}

void run() {
    std::vector<int> nums = {2, 2, 1};
    std::cout << singleNumber(nums) << std::endl;
}
