#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<string> words(n);
    for(int i=0;i<n;i++){
        cin>>words[i];
    }

    for(int i=0;i<n;i++){

        
    

    int length = words[i].size();
    if(length<=10){
        cout<<words[i]<<endl;
    }else{
        char first=words[i][0];
        char last=words[i][length-1];
        int middle = length-2;
        cout<<first<<middle<<last<<endl;
    }

    }

    return 0;
}