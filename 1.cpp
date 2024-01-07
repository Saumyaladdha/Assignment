
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findLeaders(const vector<int>& nums) {
    int n = nums.size();
    vector<int> leaders;
    int max_from_right = nums[n - 1];
    leaders.push_back(max_from_right);

    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] > max_from_right) {
            max_from_right = nums[i];
            leaders.push_back(max_from_right);
        }
    }
    return leaders;
}

// Test case
int main() {
    vector<int> arr;
    arr.push_back(7);
    arr.push_back(10);
    arr.push_back(4);
    arr.push_back(10);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(2);
    vector<int> leaders = findLeaders(arr);
    reverse(leaders.begin(), leaders.end()); // Reverse the vector

    for (size_t i = 0; i < leaders.size(); i++) {
        cout << leaders[i] << " ";
    }
    cout << endl;
    return 0;
}
