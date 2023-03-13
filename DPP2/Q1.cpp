// Rotate Matrix by 90 degree anticlock wise
// https://practice.geeksforgeeks.org/problems/rotate-a-2d-array-without-using-extra-space1004/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


	// void rotateMatrix(vector<vector<int>>& arr, int n) {
	//     // code here   
	//     for(int i=0;i<n;i++){
	//         for(int j=i;j<n-i-1;j++){
	//             int temp = arr[i][j];
	//             arr[i][j] = arr[j][n-1-i];
	//             arr[j][n-1-i] = arr[n-1-i][n-1-j];
	//             arr[n-1-i][n-1-j] = arr[n-1-j][i];
	//             arr[n-1-j][i] = temp;
	//         }
	//     }
	// }