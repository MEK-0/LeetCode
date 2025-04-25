/*
You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

Return true if you can reach the last index, or false otherwise.

 

Example 1:

Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
Example 2:

Input: nums = [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.
*/

/*
max_reach adında bir değişkenle, o ana kadar ulaşabileceğimiz en uzak indeksi takip ederiz.
Eğer mevcut indeks, max_reach'ten büyükse, sona ulaşılamaz
*/
bool canJump(int* nums, int numsSize) {
     int max_reach = 0;
    for (int i = 0; i < numsSize; i++) {
        if (i > max_reach) return false; // Sona ulaşılamaz
        max_reach = (i + nums[i]) > max_reach ? (i + nums[i]) : max_reach;
        if (max_reach >= numsSize - 1) return true; // Sona ulaşıldı
    }
    return false;
}
