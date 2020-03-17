// Binary Search
int searchInsert(int* nums, int numsSize, int target){
    if(numsSize == 0){
        return 0;
    }
    
    int low = 0, up = numsSize-1;
    int middle_index;
    
    while(low <= up){
        middle_index = (low + up) / 2;
        if(nums[middle_index] == target){
            return middle_index;
        }else if(nums[middle_index] > target){
            up = middle_index - 1;
        }else{
            low = middle_index + 1;
        }
    }
    return low;
}