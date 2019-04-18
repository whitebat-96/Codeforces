/*
Ternary numeric notation is quite popular in Berland. To telegraph the ternary number the Borze alphabet is used.
Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--».
You are to decode the Borze code, i.e. to find out the ternary number given its representation in Borze alphabet.

Input
The first line contains a number in Borze code. The length of the string is between 1 and 200 characters.
It's guaranteed that the given string is a valid Borze code of some ternary number (this number can have leading zeroes).

Output
Output the decoded ternary number. It can have leading zeroes.
*/

#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

string bor;
cin>>bor;
for(int i=0;i<bor.length();i++){

    if(bor[i]==46){
        cout<<0;
    }
    else if(bor[i]==45){      // ascii value of "-" is 45 and "." is 46
        if(bor[i+1]==46){
            cout<<1;
            i++;
        }
        else if(bor[i+1]==45){
            cout<<2;
            i++;
        }
    }
}



return 0;
}
