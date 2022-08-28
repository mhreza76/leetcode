#include<bits/stdc++.h>
using namespace std;

class Solution {
        public:
            int pivotIndex(vector<int>& nums) {
                int sum = 0 ;
                for(auto i : nums)
                    sum+=i;

                int left_sum = 0 ;
                int right_sum = 0;
                right_sum = sum-nums[0];
                if(left_sum == right_sum)
                    return 0;

                for(auto i = 1; i < nums.size(); i++){
                    left_sum += nums[i-1];
                    right_sum -= nums[i];
                    if(left_sum == right_sum){
                        return i;
                    }
                }
                return -1;
        }
    };

int main(){

    vector <int> nums;
    int input, t;
    cout << "Number of test case: ";
    cin >> t;
    cout << endl << "Input test cases" << endl;
    while(t--){
        cin >> input;
        nums.push_back(input);
    }

    //cout << nums[0];

    Solution solObj;     // Create an object of MyClass
    auto result = solObj.pivotIndex(nums);  // Call the method
    cout << result;
return 0;
}
