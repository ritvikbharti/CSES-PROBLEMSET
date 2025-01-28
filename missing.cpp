#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> v(n-1,0);
    for(int i =0;i< n-1;i++){
        cin >> v[i];
    }
    
    sort(v.begin(),v.end());
    // for(int i : v){
    //     cout << i <<" ";
    // }
    int cn = 0;
    for(int i =1;i<=n-1;i++){
        if(v[i-1] != i){ 
            cn++;
            cout << i <<endl;
        break;}
    }
    if(cn == 0){
        cout << n <<" ";
    }

}