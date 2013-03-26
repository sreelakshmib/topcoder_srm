#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

#define pb push_back
#define VI vector<int>
#define VS vector<string>
#define sz(v) v.size()
#define len(s) s.length()
#define full(v) v.begin(),v.end()

#define repx(i,x,n) for(int i=x;i<n;i++)
#define rep(i,n) repx(i,0,n)

typedef long long ll;

const int INF = 1<<30;

using namespace std;

class EllysPlaylists {
public:
	int countPlaylists(vector <string>, int);
};

int MOD=1000000007;
int dp[51][1000];
int smooth[51][51];
int len;

int isSmooth(string a, string b){
	if(a.substr(a.length()-3)==b.substr(0,3))
		return 1;
	return 0;
}

int dfs(int i,int k){
	if(k==0)return 1;
	if(dp[i][k]!=-1) return dp[i][k];
	int ans=0;
	for(int j=0;j<len;j++){
		if(smooth[i][j]){
			ans=(ans+dfs(j,k-1))%MOD;
		}
	}
	dp[i][k]=ans;
	return dp[i][k];
}

int EllysPlaylists::countPlaylists(vector <string> songs, int K) {
	len=songs.size();
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			smooth[i][j]=isSmooth(songs[i],songs[j]);
		}
	}
	for(int i=0;i<51;i++)
		for(int j=0;j<1000;j++)
			dp[i][j]=-1;
	int ans=0;
	for(int i=0;i<len;i++){
		ans=(ans+dfs(i,K-1))%MOD;
	}
	return ans;
}


double test0() {
	string t0[] = { "abcxxx", "xxxabc", "entersandman", "toxicity", "maneater", "heavensalie",
  "liebe", "citylights", "fadetoblack", "breakingthehabit", "yyydefg", "defgyyy" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 2;
	EllysPlaylists * obj = new EllysPlaylists();
	clock_t start = clock();
	int my_answer = obj->countPlaylists(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 5;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = { "aaaaaa", "aaabcd", "bcdaaa" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 4;
	EllysPlaylists * obj = new EllysPlaylists();
	clock_t start = clock();
	int my_answer = obj->countPlaylists(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 13;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = { "aaa", "aaaa", "aaaaa" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 3;
	EllysPlaylists * obj = new EllysPlaylists();
	clock_t start = clock();
	int my_answer = obj->countPlaylists(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 27;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = { "elly", "looks", "lovely" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 1;
	EllysPlaylists * obj = new EllysPlaylists();
	clock_t start = clock();
	int my_answer = obj->countPlaylists(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	string t0[] = { "life", "universe", "everything" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 42;
	EllysPlaylists * obj = new EllysPlaylists();
	clock_t start = clock();
	int my_answer = obj->countPlaylists(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	string t0[] = { "aaaaaaaaa", "aaabbbaaa", "aaacccaaa", "aaadddaaa", "aaaeeeaaa", "aaafffaaa" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 12;
	EllysPlaylists * obj = new EllysPlaylists();
	clock_t start = clock();
	int my_answer = obj->countPlaylists(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 176782322;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}

int main() {
	int time;
	bool errors = false;
	
	time = test0();
	if (time < 0)
		errors = true;
	
	time = test1();
	if (time < 0)
		errors = true;
	
	time = test2();
	if (time < 0)
		errors = true;
	
	time = test3();
	if (time < 0)
		errors = true;
	
	time = test4();
	if (time < 0)
		errors = true;
	
	time = test5();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
