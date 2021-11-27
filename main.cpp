#include <bits/stdc++.h>
//https://khmt.uit.edu.vn/wecode/truonganpn/assignment/34/144
using namespace std;

int main()
{
    long long a,s=0,i=2;
    cin>>a;
    for (; i<sqrt(a); ++i) {
        if (a%i==0) {
            s+=i;
            s+=a/i;
        }
    }
    if (i*i==a) s+=i;
    cout<<s+1;
    return 0;
}
