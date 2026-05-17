#include<iostream>
#include<vector>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        int count0=0,count1=0,count2=0;
        cin>>n;
        vector<int> w(n);
        for(int i=0;i<n;i++){
            cin>>w[i];
        }
        int ans=0;
        for(int n:w){
            if(n==1) count1++;
            if(n==2) count2++;
            if(n==0) count0++;
        }
        ans+=count0;
        // int s=min(count1,count2);
        int sum=count1+count2*2;
        if(sum%3==0){
            ans+=sum/3;
        }
        if(count1==0){
            ans+=count2/3;
        }else if(count2==0){
            ans+=count1/3;
        }

        cout<<ans<<endl;
    }


    return 0;
}