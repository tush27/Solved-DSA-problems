class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int j=0;
        int i=1;
        while(1){
            if(j<arr.size()){
                if(arr[j]!=i){
                    k--;
                }
                else
                    j++;    
            }
            else
                k--;
            if(!k)
                return i;
            i++;
        }
        return -1;
    }
};