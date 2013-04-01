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
#include <iterator>

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

class BalancedGame {
public:
	int result(vector <string>, int, int);
};

int BalancedGame::result(vector <string> conflicts, int p, int q) {
	rep(i,sz(conflicts)){
		int N=len(conflicts[i]);
		int req=(((N-1)*p)+99)/100;
		int req2=(((N-1)*q)+99)/100;
		int cnt=count(full(conflicts[i]),'W');
		int cnt2=count(full(conflicts[i]),'L');
		if(cnt<req)
			return i;
		if(cnt2<req2)
			return i;
	}
	return -1;
}


double test0() {
	string t0[] = {"TWWW",
 "LTWW",
 "LLTW",
 "LLLT"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 20;
	int p2 = 20;
	BalancedGame * obj = new BalancedGame();
	clock_t start = clock();
	int my_answer = obj->result(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"TWWW",
 "LTWW",
 "LLTW",
 "LLLT"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 0;
	int p2 = 0;
	BalancedGame * obj = new BalancedGame();
	clock_t start = clock();
	int my_answer = obj->result(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = -1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"TTT",
 "TTT",
 "TTT"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 1;
	int p2 = 1;
	BalancedGame * obj = new BalancedGame();
	clock_t start = clock();
	int my_answer = obj->result(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"TLLLLLTWWWWTLLWWWT",
 "WTTWTTLLWLLWWLTLWW",
 "WTTWWTLWTWLWWWWLTW",
 "WLLTLTWWWTWLWLLWLT",
 "WTLWTLWWWWLLWLLWTW",
 "WTTTWTWLLWTLLWWWLW",
 "TWWLLLTLLWTWWWLLWW",
 "LWLLLWWTWLLWWLLLWT",
 "LLTLLWWLTTWLTWTLWT",
 "LWLTLLLWTTTLLLLWTW",
 "LWWLWTTWLTTTLLWWLL",
 "TLLWWWLLWWTTLWTTLL",
 "WLLLLWLLTWWWTWLLWW",
 "WWLWWLLWLWWLLTTWLL",
 "LTLWWLWWTWLTWTTTWT",
 "LWWLLLWWWLLTWLTTLW",
 "LLTWTWLLLTWWLWLWTW",
 "TLLTLLLTTLWWLWTLLT"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 18;
	int p2 = 6;
	BalancedGame * obj = new BalancedGame();
	clock_t start = clock();
	int my_answer = obj->result(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 17;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
