// Coin Change : Minimum Number of Coins
//https://practice.geeksforgeeks.org/problems/coin-change2448/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

// long long int count(int coins[], int M, int V) {

//         // code here.
//         long long int dp[V+1][M+1];
// 	    sort(coins,coins+M);

// 	    for(long long int i=0;i<=V;i++){
// 	        for(long long int j=0;j<=M;j++){
// 	            if(i==0){
// 	                dp[i][j]=1;
// 	            }else if(j==0){
// 	                dp[i][j]=0;
// 	            }else if(i>=coins[j-1]){
// 	                dp[i][j] = dp[i][j-1]+dp[i-coins[j-1]][j];
// 	            }else{
// 	                dp[i][j] = dp[i][j-1];
// 	            }
// 	        }
// 	    }
// 	   // for(int i=0;i<=V;i++){
// 	   //     for(int j=0;j<=M;j++){
// 	   //         cout<<dp[i][j]<<" ";
// 	   //     }
// 	   //     cout<<"\n";
// 	   // }
	   
// 	   return dp[V][M];
// }