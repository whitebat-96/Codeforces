/*
You've got a 5?×?5 matrix, consisting of 24 zeroes and a single number one. 
Let's index the matrix rows by numbers from 1 to 5 from top to bottom,
let's index the matrix columns by numbers from 1 to 5 from left to right. 
In one move, you are allowed to apply one of the two following transformations to the matrix:

1. Swap two neighboring matrix rows, that is, rows with indexes i and i?+?1 for some integer i (1?=?i?<?5).
2. Swap two neighboring matrix columns, that is, columns with indexes j and j?+?1 for some integer j (1?=?j?<?5).

You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle
 (in the cell that is on the intersection of the third row and the third column). 
Count the minimum number of moves needed to make the matrix beautiful.
*/



#include<bits/stdc++.h>
using namespace std;
int main(){

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
int i=0,j=0,p=0,q=0;
int arr[5][5]={};
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
           cin>>arr[i][j];
        }
    }
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
           if(arr[i][j]==1){
            p=i+1;
            q=j+1;
           }
        }
    }
int steps=0;
steps = abs(3-p) + abs(3-q);
cout<<endl<<steps;



return 0;
}
