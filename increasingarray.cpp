#include<iostream>
#include<set>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
   int n;
   cin >> n;
   vector<long long> vec(n,0);
   for(int i =0;i < n;i++){
       cin >> vec[i];
   }
    long long  prev = vec[0];
    long long ans = 0;
   for(int i = 1;i<n;i++){
       if(vec[i] < prev){
           ans+= prev - vec[i];
           vec[i] = prev;
       }
       prev = vec[i];
       
   }
  cout <<  ans;
}