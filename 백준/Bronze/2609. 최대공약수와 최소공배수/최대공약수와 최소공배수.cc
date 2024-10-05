#include <iostream>
using namespace std;

int FindGcd(int n, int m){
    if(m == 0){
        return n;
    }else{
        return FindGcd(m, (n%m));
    }
}

int FindLcm(int n, int m, int gcd){
    return (n*m)/gcd;
}

int main(){
    int n,m;
    cin >> n >> m;
    
    int gcd = FindGcd(n,m);
    int lcm = FindLcm(n,m,gcd);
    
    cout << gcd << endl;
    cout << lcm << endl;
}