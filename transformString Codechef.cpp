#include<iostream>
#include<vector>
#include<map>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin >> t;
	vector<int> freq1(26,0);
	vector<int> freq2(26,0);
	priority_queue<pair<int,char>>,vector<pair<int,char>>,greater<pair<int,char>> pq;
	
	while(t--){
	    string word1,word2;
	    cin >> word1 >> word2;
	    for(char ch : word1) freq1[ch - 'a']++;
	    for(char ch : word2) freq2[ch-'a']++;
	    for(int i =0;i<a.size();i++) pq.push({i+1,a[i]});
	    while(!pq.empty()){
	        char ch = pq.top().second;
	        int freq = pq.top().first;
	        if();
	    }
	    
	    
	}
	

}
