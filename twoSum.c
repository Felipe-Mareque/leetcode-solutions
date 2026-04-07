/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2 ;
    //tenho que pegar um numero e fazer a soma com todos os outros numeros, se der certo
    for(int x=0; x<numsSize;x++){
        for(int y=x+1;y<numsSize;y++){
            if( nums[x] + nums[y] == target ){
                int *result = malloc(sizeof(int) * 2);
                result[0] = x;
                 result[1] = y;
                return result;
            }
        }
    }
    return NULL;
}