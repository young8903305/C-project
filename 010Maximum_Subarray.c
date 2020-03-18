/**
 *  dynamic programming
 **/

int maxSubArray(int* nums, int numsSize){
    
    if(numsSize == 1){
        return nums[0];
    }
    
    int i = 0, max = nums[0], sum = nums[0];
    
    for(i = 1; i < numsSize; i++){
        if(sum < 0){
            sum = 0;
        }
        sum += nums[i];
        if(sum > max){
            max = sum;
        }
    }
    return max;
}