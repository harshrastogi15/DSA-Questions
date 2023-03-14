// Coin Change : Minimum Number of Coins
// https://practice.geeksforgeeks.org/problems/number-of-coins1824/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

// int minCoins(int coins[], int M, int V) 
// 	{ 
// 	    // Your code goes here
// 	    int dp[V+1][M+1];
// 	    sort(coins,coins+M);

// 	    for(int i=0;i<=V;i++){
// 	        for(int j=0;j<=M;j++){
// 	            if(i==0){
// 	                dp[i][j]=0;
// 	            }else if(j==0){
// 	                dp[i][j]=1e9;
// 	            }else if(i>=coins[j-1]){
// 	               // cout<<i<<" "<<j<<" check\n";
	                
// 	                dp[i][j] = min(dp[i][j-1],1+dp[i-coins[j-1]][j]);
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
// 	    return (dp[V][M]>=1e9?-1:dp[V][M]);
// 	} 