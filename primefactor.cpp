#include <iostream>
using namespace std;
// prime factor

bool isprime(int n){
    bool isprime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    return isprime;
}

void prime_factors(int n){
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            if(n%i==0){
                cout<<i<<endl;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    prime_factors(n);

    return 0;
}



modifying the feature branch and saving it for use 
