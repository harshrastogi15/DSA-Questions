// Subset Sum
// https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

// bool isSubsetSum(vector<int>arr, int sum){
//         // code here 
//         int M = arr.size();
//         int dp[sum+1][M+1];
//         for(int i=0;i<=sum;i++){
// 	        for(int j=0;j<=M;j++){
// 	            if(i==0){
// 	                dp[i][j]=1;
// 	            }else if(j==0){
// 	                dp[i][j]=0;
// 	            }else if(i>=arr[j-1]){
// 	                dp[i][j] = dp[i][j-1] | dp[i-arr[j-1]][j-1];
// 	            }else{
// 	                dp[i][j] = dp[i][j-1];
// 	            }
// 	        }
// 	    }
	   
// 	   return dp[sum][M];
//     }