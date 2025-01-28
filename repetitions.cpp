#include<iostream>
#include<set>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    string s;
    cin  >> s;
    map<char,int> mp;
    for(char ch : s){
        mp[ch]++;
    }
    int c = 0;
    for(auto pair : mp){
        if(pair.second > c){
            c=pair.second;
        }
    }
    cout << c <<endl;
}