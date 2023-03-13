// Joseph Problem  

//in circular array, remove every kth element in array and tell which number remain in end


// ll joseph(ll n, ll k){
//     if(n<=1){
//         return 1;
//     }
//     // cout<<"HERE\n";
//     ll val = (joseph(n-1,k)+k)%n;
//     return  val;

// }

// Tower Of Hanoi

// void toh(int n, string from, string to, string help){
//     if(n==0){return;}

//     toh(n-1,from,help,to);

//     cout << "Move disk " << n << " from rod " << from << " to rod " << to << endl;

//     toh(n-1, help, to ,from);
// }
