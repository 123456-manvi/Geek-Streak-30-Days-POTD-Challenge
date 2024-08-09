class Solution{
public:
  
  #define MOD 1000000007;
  
  long long maxSum(vector<int> &arr){
      sort(arr.begin(),arr.end());
      
      long long maxValue=0;
      
      for(int i=0;i<arr.size();i++){
          maxValue=(maxValue+(long long)arr[i]*i)%MOD;
      }
      
      
      return maxValue;
  }
    int Maximize(vector<int> &arr) {
        // Complete the function
        
        long long res=maxSum(arr);
        return res;
    }
};
