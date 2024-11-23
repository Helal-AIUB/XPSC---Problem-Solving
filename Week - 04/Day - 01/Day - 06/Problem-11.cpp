
int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        
        //check Editorial - solve from editorial
        unordered_map<int,int>mp;
        int sum=0,maxLength=0;
        for(int i=0; i<arr.size(); i++){
            sum +=arr[i];
            if(sum==k){
                maxLength = i+1;
            }
            if(mp.find(sum-k) != mp.end()){
                maxLength = max(maxLength,i-mp[sum-k]);
            }
            if(mp.find(sum) == mp.end()){
                mp[sum]=i;
            }
        }
        return maxLength;
    }
