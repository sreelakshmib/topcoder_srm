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
#include <queue>
#include <cstring>

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

class SmartWordToy {
public:
	int minPresses(string, string, vector <string>);
};

struct abcd{
	int a,b,c,d;
	abcd(int _a,int _b,int _c,int _d){
		a=_a,b=_b,c=_c,d=_d;
	}
	bool operator < (const abcd _abcd)const{
		if(a!=_abcd.a) return a<_abcd.a;
		if(b!=_abcd.b) return b<_abcd.b;
		if(c!=_abcd.c) return c<_abcd.c;
		return d<_abcd.d;
	}
};

int f[26][26][26][26];

int SmartWordToy::minPresses(string start, string finish, vector <string> forbid) {
	queue<abcd> q;
	abcd st=abcd(start[0]-'a',start[1]-'a',start[2]-'a',start[3]-'a');
	q.push(st);
	struct abcd fi=abcd(finish[0]-'a',finish[1]-'a',finish[2]-'a',finish[3]-'a');	

	rep(i,26)
	rep(j,26)
	rep(k,26)
	rep(l,26)
	f[i][j][k][l]=0;
			
	f[st.a][st.b][st.c][st.d]=1;
	rep(i,sz(forbid)){
		char a[50],b[50],c[50],d[50];
		sscanf(forbid[i].c_str(),"%s %s %s %s",a,b,c,d);
		rep(aa,strlen(a))
		rep(bb,strlen(b))
		rep(cc,strlen(c))
		rep(dd,strlen(d))
		//m[abcd(a[aa]-'a',b[bb]-'a',c[cc]-'a',d[dd]-'a')]=-1;
		f[a[aa]-'a'][b[bb]-'a'][c[cc]-'a'][d[dd]-'a']=-1;
	}
	while(!q.empty()){
		abcd now=q.front();
		q.pop();
		if(now.a==fi.a && now.b==fi.b && now.c==fi.c && now.d==fi.d)return f[now.a][now.b][now.c][now.d]-1;
		
		//1
		abcd x((now.a+1)%26,now.b,now.c,now.d);
		if(f[x.a][x.b][x.c][x.d]==0){
			f[x.a][x.b][x.c][x.d]=f[now.a][now.b][now.c][now.d]+1;
			q.push(x);
		}
		//2
		abcd x1((now.a+25)%26,now.b,now.c,now.d);
		if(f[x1.a][x1.b][x1.c][x1.d]==0){
			f[x1.a][x1.b][x1.c][x1.d]=f[now.a][now.b][now.c][now.d]+1;
			q.push(x1);
		}
		//3
		abcd x2(now.a,(now.b+1)%26,now.c,now.d);
		if(f[x2.a][x2.b][x2.c][x2.d]==0){
			f[x2.a][x2.b][x2.c][x2.d]=f[now.a][now.b][now.c][now.d]+1;
			q.push(x2);
		}
		//4		
		abcd x3(now.a,(now.b+25)%26,now.c,now.d);
		if(f[x3.a][x3.b][x3.c][x3.d]==0){
			f[x3.a][x3.b][x3.c][x3.d]=f[now.a][now.b][now.c][now.d]+1;
			q.push(x3);
		}
		//5						
		abcd x4(now.a,now.b,(now.c+1)%26,now.d);
		if(f[x4.a][x4.b][x4.c][x4.d]==0){
			f[x4.a][x4.b][x4.c][x4.d]=f[now.a][now.b][now.c][now.d]+1;
			q.push(x4);
		}
		//6
		abcd x5(now.a,now.b,(now.c+25)%26,now.d);
		if(f[x5.a][x5.b][x5.c][x5.d]==0){
			f[x5.a][x5.b][x5.c][x5.d]=f[now.a][now.b][now.c][now.d]+1;
			q.push(x5);
		}
		//7
		abcd x6(now.a,now.b,now.c,(now.d+1)%26);
		if(f[x6.a][x6.b][x6.c][x6.d]==0){
			f[x6.a][x6.b][x6.c][x6.d]=f[now.a][now.b][now.c][now.d]+1;
			q.push(x6);
		}
		//8
		abcd x7(now.a,now.b,now.c,(now.d+25)%26);
		if(f[x7.a][x7.b][x7.c][x7.d]==0){
			f[x7.a][x7.b][x7.c][x7.d]=f[now.a][now.b][now.c][now.d]+1;
			q.push(x7);
		}
	}
	return -1;
}


double test0() {
	string p0 = "aaaa";
	string p1 = "zzzz";
	string t2[] = {"a a a z", "a a z a", "a z a a", "z a a a", "a z z z", "z a z z", "z z a z", "z z z a"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	SmartWordToy * obj = new SmartWordToy();
	clock_t start = clock();
	int my_answer = obj->minPresses(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 8;
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
	string p0 = "aaaa";
	string p1 = "bbbb";
	vector <string> p2;
	SmartWordToy * obj = new SmartWordToy();
	clock_t start = clock();
	int my_answer = obj->minPresses(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 4;
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
	string p0 = "aaaa";
	string p1 = "mmnn";
	vector <string> p2;
	SmartWordToy * obj = new SmartWordToy();
	clock_t start = clock();
	int my_answer = obj->minPresses(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 50;
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
	string p0 = "aaaa";
	string p1 = "zzzz";
	string t2[] = {"bz a a a", "a bz a a", "a a bz a", "a a a bz"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	SmartWordToy * obj = new SmartWordToy();
	clock_t start = clock();
	int my_answer = obj->minPresses(p0, p1, p2);
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
double test4() {
	string p0 = "aaaa";
	string p1 = "zzzz";
	string t2[] = {"cdefghijklmnopqrstuvwxyz a a a", 
 "a cdefghijklmnopqrstuvwxyz a a", 
 "a a cdefghijklmnopqrstuvwxyz a", 
 "a a a cdefghijklmnopqrstuvwxyz"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	SmartWordToy * obj = new SmartWordToy();
	clock_t start = clock();
	int my_answer = obj->minPresses(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 6;
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
double test5() {
	string p0 = "aaaa";
	string p1 = "bbbb";
	string t2[] = {"b b b b"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	SmartWordToy * obj = new SmartWordToy();
	clock_t start = clock();
	int my_answer = obj->minPresses(p0, p1, p2);
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
double test6() {
	string p0 = "zzzz";
	string p1 = "aaaa";
	string t2[] = {"abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk",
 "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	SmartWordToy * obj = new SmartWordToy();
	clock_t start = clock();
	int my_answer = obj->minPresses(p0, p1, p2);
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
	
	time = test6();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
