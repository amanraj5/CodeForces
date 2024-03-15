#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if(num<0) num=-1*num;
        ans=min(ans,num);
    }
    cout<<ans;
    return 0;
}