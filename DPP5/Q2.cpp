// Edit Distance 
// https://practice.geeksforgeeks.org/problems/edit-distance3702/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

// int editDistance(string s, string t) {
//         // Code here
//         int n = s.size(),m=t.size();
        
//         int dp[n+1][m+1];
        
//         for(int i=0;i<=n;i++){
//             for(int j=0;j<=m;j++){
//                 if(i==0){
//                     dp[i][j]=j;
//                 }else if(j==0){
//                     dp[i][j]=i;
//                 }else{
//                     dp[i][j] = min(dp[i-1][j],dp[i][j-1])+1;
                    
//                     if(s[i-1]==t[j-1]){
//                         dp[i][j] = min(dp[i][j],dp[i-1][j-1]);
//                     }else{
                        
//                         dp[i][j] = min(dp[i][j],dp[i-1][j-1]+1);
//                     }
                    
//                 }
                
//             }
//         }
        
//         return dp[n][m];