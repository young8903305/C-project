/*
 *  i : the output index
 *  j : where is the index on array now
 */
int removeDuplicates(int* nums, int numsSize){
    if(numsSize <= 1){
        return numsSize;
    }
    
    int length = 0, index;
    
    for(index = 1; index < numsSize; index++){
        if(nums[length] != nums[index] ){
            length++;
            nums[length] = nums[index];
        }
    }
    return length + 1;
}