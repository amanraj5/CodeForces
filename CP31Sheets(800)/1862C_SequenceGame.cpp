#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> ans;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            if(i && ans.back()>num){
                ans.push_back(1);
            }
            ans.push_back(num);
        }
        cout<<ans.size()<<endl;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}