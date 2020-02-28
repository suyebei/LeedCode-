/*************************************************************************
	> File Name: leetcode287.cpp
	> Author: suyebei
	> Mail: suyebei@126.com
	> Created Time: 五  2/28 17:39:00 2020
 ************************************************************************/

int findDuplicate(int* nums, int numsSize){
    int p = nums[0], q = nums[0];
    do {
        p = nums[p];
        q = nums[nums[q]];
    } while (p != q);
    q = nums[0];
    while (p != q) {
        p = nums[p];
        q = nums[q];
    }
    return p;

}
