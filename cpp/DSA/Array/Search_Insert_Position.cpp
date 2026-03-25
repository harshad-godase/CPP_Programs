#include <vector>
#include <iostream>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            return mid;
        } 
        else if (nums[mid] < target) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }
    
    return left; // insertion position
}

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    
    int result = searchInsert(nums, target);
    
    // Output the result
    cout << "The target " << target << " is at index: " << result << endl;
    
    return 0;
}