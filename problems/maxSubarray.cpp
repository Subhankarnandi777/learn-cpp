// Brute force Approch

#include <iostream>
#include<vector>
#include<climits>

using namespace std;

int main(){
    int  n= 5;
    int arr[5] = {1,2,3,4,5};

    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++){
        int currsum = 0; 
        for(int end = st ; end < n ; end++){
            currsum += arr[end];
            maxSum = max(currsum, maxSum);
        }
    }
    
    cout << "maximum subarray sum : " << maxSum << endl;
    return 0;
}

// kadane Algorithm 

class solution {
public:
    int maxSubarray (vector<int> & nums){
        int currsum = 0;
        int maxsum = INT_MIN;
        for (int val : nums){
            currsum += val;
            maxsum = max(currsum,maxsum);
            if(currsum < 0){
                currsum = 0;
            }
        }
        return maxsum;
}
};