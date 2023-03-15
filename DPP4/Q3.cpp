// Rod cutting

// int cutRod(int price[], int n) {
//         //code here
//         int dp[n+1][n+1];
//         memset(dp,-1,sizeof dp);
        
//         for(int i=0;i<=n;i++){
//             for(int j=0;j<=n;j++){
//                 if(i==0 || j==0){
//                     dp[i][j]=0;
//                 }else if(i>=j){
//                     dp[i][j]=max(dp[i][j-1],price[j-1]+dp[i-j][j]);
//                 }else{
//                     dp[i][j]=dp[i][j-1];
//                 }
//             }
//         }
//         return dp[n][n];
        
//     }