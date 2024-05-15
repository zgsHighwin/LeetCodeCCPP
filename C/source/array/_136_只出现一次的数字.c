//
// Created by zgsHighwin on 2024/5/15.
//

#include "array/_136_只出现一次的数字.h"
#include <stdio.h>

int singleNumber(int *nums, int numsSize) {
    int ret = 0;
    for (int i = 0; i < numsSize; i++) {
        ret = ret ^ nums[i];
    }
    return ret;
}

void run() {
    int arr[] = {1, 2, 2};
    printf("%d", singleNumber(arr, sizeof(arr) / sizeof(int)));
}
