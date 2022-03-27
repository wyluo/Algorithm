/*
 *双指针的用法
 *删除排序数组中的重复项
 */
int removeDuplicates(int *nums, int numSizes)
{
    int count = 0;

    if(nums == NULL || numSizes == 0)
        return -1;

    int left = numSizes;

    for(int right = 1; right < numSizes; right++)
    {
        if(left > 0)
        {
            left = 1;
            if(nums[i] == nums[i - 1])
            {
                continue;
            }
            else
            {
                nums[left] = nums[right];
                left++; 
            }
        }
    }
}