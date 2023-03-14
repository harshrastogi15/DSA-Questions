// Palindromic Partitioning

// class Solution{
    
//     int dp[505][505];
    
//     bool Ispalindrome(string s, int i, int j){
//         // int i=0,j=s.size()-1;
//         while(i<=j){
//             if(s[i]!=s[j]){
//                 return false;
//             }
//             i++;j--;
//         }
//         return true;
//     }
    
//     int subset(string str,int i, int j){
//         if(i>=j){
//             return 1;
//         }
//         if(dp[i][j]!=-1){return dp[i][j];}
//         if(Ispalindrome(str,i,j)){
//             return dp[i][j] = 1;
//         }else{
//             int mn = INT_MAX;
//             for(int k=i;k<j;k++){
//                 int temp1=0,temp2=0;
//                 if(dp[i][k]!=-1){
//                     temp1 = dp[i][k];
//                 }else{
//                     temp1 = subset(str,i,k);
//                 }
//                 if(dp[k+1][j]!=-1){
//                     temp2 = dp[k+1][j];
//                 }else{
//                     temp2= subset(str,k+1,j);
//                 }
//                 mn = min(mn,temp1+temp2);
//             }
//             return dp[i][j]=mn;
//         }
//     }
    
    
// public:
//     int palindromicPartition(string str)
//     {
//         // code here
//         memset(dp,-1,sizeof dp);
//         return subset(str,0,str.size()-1)-1;
//     }
// };