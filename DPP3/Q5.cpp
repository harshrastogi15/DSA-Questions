// Egg Droping 
// GFG - https://practice.geeksforgeeks.org/problems/egg-dropping-puzzle-1587115620/1


// int dp[205][205];
    
//     int drop(int n, int k){
//         if(n==1 || k==0 || k==1){return k;}
//         if(dp[n][k]!=-1){
//             return dp[n][k];
//         }
//         int ans =INT_MAX;
//         for(int i=1;i<=k;i++){
//             int temp = max(drop(n-1,i-1),drop(n,k-i))+1;
//             ans = min(temp,ans);
//         }
//         return dp[n][k]= ans;
//     }
    
//     int eggDrop(int n, int k) 
//     {
//         // your code here
//         memset(dp,-1,sizeof dp);
//         return drop(n,k);
        
//     }