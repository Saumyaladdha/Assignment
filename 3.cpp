#include <iostream>
#include <vector>
using namespace std;

int subsetXORSum(vector<int>& nums) {
    int total = 0;
    int n = nums.size();
    int subsets = 1 << n;

    for (int i = 0; i < subsets; i++) {
        int currentXOR = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                currentXOR ^= nums[j];
            }
        }
        total += currentXOR;
    }
    return total;
}

// Test case
int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    cout << "Sum of All Subset XOR Totals: " << subsetXORSum(nums) << endl;
    return 0;
}
