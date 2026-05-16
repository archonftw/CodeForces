#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;

    while(n--) {
        int s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        if(s1 + s2 + s3 >= 2) {
            ans++;
        }
    }

    cout << ans;

    return 0;
}