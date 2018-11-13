#include <bits/stdc++.h>
#define DESYNC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
using namespace std;

int main(){
    DESYNC;
    int i,n;
    cin >> n;
    vector<int> v(n*4, -1);
    //2*1+1 = 3
    for(i=0;i<n;i++){
        //2*i+1, 2*i+2
       // cout << "fe " << (2*i+1) << " p " << i << endl; 
        //cout << "fd " << (2*i+2) << " p " << i << endl; 
        v[2*i+1] = i;
        v[2*i+2] = i;
        //2*i, 2*i+1
    }
    for(auto j:v)
        cout << j << endl;
    // filho = 2*pai+1 ou +2 <==> pai = (filho-1)/2
    return 0;
}
