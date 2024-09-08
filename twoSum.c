#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *resultSize)
{
    *resultSize = 2;
    int vermelho = 0;
    int azul = 1;
    int *res = (int *)malloc(*resultSize * sizeof(int));
    while (azul < numsSize)
    {
        if (nums[azul] + nums[vermelho] == target)
        {
            res[0] = vermelho;
            res[1] = azul;
            return res;
        }
        else
        {
            if (azul == numsSize - 1)
            {
                vermelho++;
            }
            if (azul + 1 == vermelho)
            {
                azul = vermelho + 1;
            }
            else
            {
                if (azul == numsSize - 1)
                {
                    azul = 0;
                }
                else
                {
                    azul++;
                }
            }
        }
    }
    return res;
}

int main()
{
    int numsSize = 2;
    int *nums = (int *)malloc(numsSize * sizeof(int));
    int target = 6;
    nums[0] = 3;
    nums[1] = 3;
    int *output = (int *)malloc(2 * sizeof(int));
    int *resultSize = (int *)malloc(sizeof(int));
    output = twoSum(nums, numsSize, target, resultSize);
    printf("[%d,%d]", output[0], output[1]);
    return 0;
}