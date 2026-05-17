#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    while(t--){
        //x1->Chases
        //x2->Runs
        int n,x1,x2,k;
        cin>>n>>x1>>x2>>k;
        if(x2>x1){
            x2+=k;
            cout<<x2-x1;
        }else{
            x2-=k;
            
            cout<<x1-x2;
        }
        
    }



    return 0;
}