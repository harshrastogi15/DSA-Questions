// Unbounded KnapSack 
// https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1

// int knapSack(int M, int V, int val[], int wt[])
//     {
//         int dp[V+1][M+1];
//         for(int i=0;i<=V;i++){
// 	        for(int j=0;j<=M;j++){
// 	            if(i==0){
// 	                dp[i][j]=0;
// 	            }else if(j==0){
// 	                dp[i][j]=0;
// 	            }else if(i>=wt[j-1]){
// 	                dp[i][j] = max(dp[i][j-1],val[j-1]+dp[i-wt[j-1]][j]);
// 	            }else{
// 	                dp[i][j] = dp[i][j-1];
// 	            }
// 	        }
// 	    }
	   
// 	   return dp[V][M];
//     }