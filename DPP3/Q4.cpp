// MCM
// gfg - https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1

// int dp[105][105];
//     int mcm(int i,int j, int arr[]){
//         if(i==j){
//             return 0;
//         }
//         if(dp[i][j]!=-1){
//             return dp[i][j];
//         }
//         int ans = INT_MAX;
//         for(int k=i+1;k<=j;k++){
//             int temp = mcm(i,k-1,arr)+mcm(k,j,arr);
//             // cout<<temp<<"\n";
//             ans = min(ans,temp+arr[i]*arr[k]*arr[j+1]);
//             // cout<<ans<<" "<<i<<" "<<j<<" "<<k<<"\n";
//         }
//         return dp[i][j] = ans;
//     }
    
    
//     int matrixMultiplication(int N, int arr[])
//     {
//         // code here
//         memset(dp,-1,sizeof dp);
//         return mcm(0,N-2,arr);
//     }