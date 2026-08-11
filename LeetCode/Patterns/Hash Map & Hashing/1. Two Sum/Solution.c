#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int x,y;
    for(int i = 0; i < numsSize; i++){
        x = nums[i];
        for(int j = i+ 1; j < numsSize; j++){
            y = nums[j];
            if(x + y == target){
                int* answer = malloc(2 * (sizeof(int)));
                answer[0] = i;
                answer[1] = j;
                *returnSize = 2;
                return answer;
            }
            

        }
    }
    return NULL;
    

}