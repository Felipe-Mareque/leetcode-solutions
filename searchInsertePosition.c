#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int searchInsert(int* nums, int numsSize, int target);

int main (){
    int resultado;
    int vector[10];
    int target;

    scanf("%d",vector);
    scanf("%d",&target);
    resultado  = searchInsert(vector, strlen(vector), target);

}


    
int searchInsert(int* nums, int numsSize, int target) {
    int retorno;
    for(int x = 0; x<numsSize; x++){
        if ( nums[x] == target ){
            return x;
        }
        if (nums[x] > target ){
            return x;
        }
        retorno = x;
    }
    return retorno + 1;
}
