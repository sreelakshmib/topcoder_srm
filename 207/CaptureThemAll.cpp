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

class CaptureThemAll {
public:
	int fastKnight(string, string, string);
};

struct node{
	int x,y,steps;
	node(int _x,int _y,int _steps){
		x=_x,y=_y,steps=_steps;
	}
};

int CaptureThemAll::fastKnight(string knight, string rook, string queen) {
	int board[8][8];
	rep(i,8)
		rep(j,8)
			board[i][j]=0;
	
	int sx,sy,rx,ry,qx,qy,m1,m2;
	sx=knight[0]-'a';
	sy=knight[1]-'0'-1;
	rx=rook[0]-'a';
	ry=rook[1]-'0'-1;
	qx=queen[0]-'a';
	qy=queen[1]-'0'-1;
		
	queue<node> q;
	queue<node> q1;
	queue<node> q2;
	queue<node> q3;
	q.push(node(sx,sy,0));
	while(!q.empty()){
		node n=q.front(); q.pop();
		if(n.x==rx && n.y==ry){
			q1.push(n);
			rep(a,8)
			rep(b,8)
			board[a][b]=0;
			break;
		}
		if(n.x<0 || n.x>7)continue;
		if(n.y<0 || n.y>7)continue;
		
		if(board[n.x][n.y])continue;
		board[n.x][n.y]=1;		
		q.push(node(n.x-2,n.y-1,n.steps+1));
		q.push(node(n.x-2,n.y+1,n.steps+1));
		q.push(node(n.x-1,n.y-2,n.steps+1));
		q.push(node(n.x-1,n.y+2,n.steps+1));
		q.push(node(n.x+1,n.y-2,n.steps+1));
		q.push(node(n.x+1,n.y+2,n.steps+1));
		q.push(node(n.x+2,n.y-1,n.steps+1));
		q.push(node(n.x+2,n.y+1,n.steps+1));
	}
	
	while(!q1.empty()){
		node n=q1.front(); q1.pop();
		if(n.x==qx && n.y==qy){
			m1=n.steps;
			break;
		}
		if(n.x<0 || n.x>7)continue;
		if(n.y<0 || n.y>7)continue;
		
		if(board[n.x][n.y])continue;
		board[n.x][n.y]=1;		
		q1.push(node(n.x-2,n.y-1,n.steps+1));
		q1.push(node(n.x-2,n.y+1,n.steps+1));
		q1.push(node(n.x-1,n.y-2,n.steps+1));
		q1.push(node(n.x-1,n.y+2,n.steps+1));
		q1.push(node(n.x+1,n.y-2,n.steps+1));
		q1.push(node(n.x+1,n.y+2,n.steps+1));
		q1.push(node(n.x+2,n.y-1,n.steps+1));
		q1.push(node(n.x+2,n.y+1,n.steps+1));
	}	

	rep(i,8)
		rep(j,8)
			board[i][j]=0;

	q2.push(node(sx,sy,0));
	while(!q2.empty()){
		node n=q2.front(); q2.pop();
		if(n.x==qx && n.y==qy){
			q3.push(n);
			rep(a,8)
			rep(b,8)
			board[a][b]=0;
			break;
		}
		if(n.x<0 || n.x>7)continue;
		if(n.y<0 || n.y>7)continue;
		
		if(board[n.x][n.y])continue;
		board[n.x][n.y]=1;		
		q2.push(node(n.x-2,n.y-1,n.steps+1));
		q2.push(node(n.x-2,n.y+1,n.steps+1));
		q2.push(node(n.x-1,n.y-2,n.steps+1));
		q2.push(node(n.x-1,n.y+2,n.steps+1));
		q2.push(node(n.x+1,n.y-2,n.steps+1));
		q2.push(node(n.x+1,n.y+2,n.steps+1));
		q2.push(node(n.x+2,n.y-1,n.steps+1));
		q2.push(node(n.x+2,n.y+1,n.steps+1));
	}
	
	while(!q3.empty()){
		node n=q3.front(); q3.pop();
		if(n.x==rx && n.y==ry){
			m2=n.steps;
			break;
		}
		if(n.x<0 || n.x>7)continue;
		if(n.y<0 || n.y>7)continue;
		
		if(board[n.x][n.y])continue;
		board[n.x][n.y]=1;		
		q3.push(node(n.x-2,n.y-1,n.steps+1));
		q3.push(node(n.x-2,n.y+1,n.steps+1));
		q3.push(node(n.x-1,n.y-2,n.steps+1));
		q3.push(node(n.x-1,n.y+2,n.steps+1));
		q3.push(node(n.x+1,n.y-2,n.steps+1));
		q3.push(node(n.x+1,n.y+2,n.steps+1));
		q3.push(node(n.x+2,n.y-1,n.steps+1));
		q3.push(node(n.x+2,n.y+1,n.steps+1));
	}	
	return min(m1,m2);
}


double test0() {
	string p0 = "a1";
	string p1 = "b3";
	string p2 = "c5";
	CaptureThemAll * obj = new CaptureThemAll();
	clock_t start = clock();
	int my_answer = obj->fastKnight(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 2;
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
	string p0 = "b1";
	string p1 = "c3";
	string p2 = "a3";
	CaptureThemAll * obj = new CaptureThemAll();
	clock_t start = clock();
	int my_answer = obj->fastKnight(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 3;
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
	string p0 = "a1";
	string p1 = "a2";
	string p2 = "b2";
	CaptureThemAll * obj = new CaptureThemAll();
	clock_t start = clock();
	int my_answer = obj->fastKnight(p0, p1, p2);
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
double test3() {
	string p0 = "a5";
	string p1 = "b7";
	string p2 = "e4";
	CaptureThemAll * obj = new CaptureThemAll();
	clock_t start = clock();
	int my_answer = obj->fastKnight(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 3;
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
	string p0 = "h8";
	string p1 = "e2";
	string p2 = "d2";
	CaptureThemAll * obj = new CaptureThemAll();
	clock_t start = clock();
	int my_answer = obj->fastKnight(p0, p1, p2);
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
