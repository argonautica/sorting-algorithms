#include <stdio.h>
#include <cs50.h>

int main(void){
    int nums[] = {5,1,4,2,8};
    for (int outer = 0; outer < 4; outer++)
    {
        int didSwap = 0;
        for (int inner = outer; inner < 4; inner++)
        {
            if(nums[inner] > nums[inner+1])
            {
                int temp = nums[inner];
                nums[inner] = nums[inner+1];
                nums[inner+1] = temp;
                didSwap = 1;
            }

        }

    }
    for (int i = 0; i<5; i++)
    {
        printf("%i\n", nums[i]);
    }
}
