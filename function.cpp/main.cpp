#include<iostream>
#include<vector>
#include<limits.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;

bool primes(int n){
    bool flag=true;
    int i=2;


    while(i<n){
        if(n%i==0){
            flag=false;
            return flag;
        }
        i++;
    }

    return flag;

}

void printprime(int n){
    for(int i=2;i<=n;i++){
        int ans=primes(i);
        if(ans==1){
            cout<<i<<endl;
        }
        else{
            continue;
        }
    }
}


int bindigits(int n){
    int count=0;
    int ans;
    while(n>0){

        ans=(n&1);
        cout<<ans<<endl;
        count++;
        n=n>>1;
        
    }
    return count;
}

int digits(int n){
    int count=0;
    int rem;

    while(n>0){
                
    }
}

int main(){
    int n;
    cin>>n;

    // cout<<"prime nos are : "<<endl;
    // printprime(n);



    // int  result=primes(n);
    // if(result==0){
    //     cout<<"not prime";
    // }
    // else{
    //     cout<<"prime";
    // }

    int result=bindigits(n);
    cout<<"binary digits is : "<<endl;
    cout<<result;

return 0;
}