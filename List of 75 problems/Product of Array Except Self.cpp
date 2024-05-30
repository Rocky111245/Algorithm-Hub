#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> right(size, 0);
        vector<int> left(size, 0);
        vector<int> result(size, 0);


        //{1,2,3,4}
        //first find all the possible multiplications for the prefix
        for (int i=0;i<size;i++){
            if(i==0) left[i]=1; //because there is no one to actually multiply with

            //the value of the prefix for a left side will eb equal to the combined multiplication fo the previous values
            //
            else{
                left[i]=nums[i-1]*left[i-1];
            }
        }
        //similarly this logic is the same fo rthe right hand side
        for (int i=size-1;i>=0;i--){
            if(i==size-1){
                right[i]=1;
            }
            else{
                right[i]=nums[i+1]*right[i+1];
            }
        }
        for(int i=0;i<size;i++){
            result[i]=left[i]*right[i];
            cout<<result[i]<<endl;
        }
        return result;

    }

};

int main() {
    Solution solution;
    vector<int> array = {-1,1,0,-3,3};
    vector<int> result = solution.productExceptSelf(array);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
