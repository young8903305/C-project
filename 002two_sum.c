int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
    int i, j;
    returnSize = (int*)malloc(sizeof(int)*2);
    for(i = 0; i < numsSize; i++){
        for(j = i+1; j < numsSize; j++) {
            if(nums[i] + nums[j] == target){

                returnSize[0] = i;
                returnSize[1] = j;
                return returnSize;
            }
        }
    }
    // return NULL;
}

int main(){
    int nums[] = {2, 7, 11, 15};
    int* array;
	int *data = twoSum(nums, 4, 9, array);

	printf("First: %d, second: %d\n", data[0], data[1]);

	return 0;
}