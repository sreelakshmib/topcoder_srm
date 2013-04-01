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

class Medici {
public:
	int winner(vector <int>, vector <int>, vector <int>);
};

int Medici::winner(vector <int> fame, vector <int> fortune, vector <int> secrets) {
	vector<int> s=fame;
	int m=-1;
	for(int i=0;i<fame.size();i++){
		s[i]=min(fame[i],min(fortune[i],secrets[i]));
		m=max(m,s[i]);
	}
	int winner=-1;
	for(int i=0;i<fame.size();i++){
		if(s[i]==m){
			if(winner==-1)
				winner=i;
			else 
				return -1;
		}
	}
	return winner;
}


double test0() {
	int t0[] = { 20, 30, 50 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = { 60, 80, 40 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = { 40, 30, 50 };
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	Medici * obj = new Medici();
	clock_t start = clock();
	int my_answer = obj->winner(p0, p1, p2);
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
	int t0[] = {   0, 100, 100, 100 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = { 100,   0, 100,  50 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {  50,  50,  50, 100 };
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	Medici * obj = new Medici();
	clock_t start = clock();
	int my_answer = obj->winner(p0, p1, p2);
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
	int t0[] = { 1, 0 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = { 1, 99 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = { 1, 99 };
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	Medici * obj = new Medici();
	clock_t start = clock();
	int my_answer = obj->winner(p0, p1, p2);
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
	int t0[] = { 39, 42, 57 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = { 42, 39, 57 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = { 57, 39, 42 };
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	Medici * obj = new Medici();
	clock_t start = clock();
	int my_answer = obj->winner(p0, p1, p2);
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
double test4() {
	int t0[] = { 3, 98, 0, 71, 81, 85, 99, 58, 93, 79, 100, 98, 73, 83, 52, 100, 37, 93, 39, 27 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = { 96, 34, 45, 20, 72, 71, 7, 18, 47, 35, 54, 51, 52, 21, 49, 20, 44, 72, 90, 93 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = { 15, 72, 50, 84, 41, 49, 35, 71, 20, 29, 73, 18, 35, 61, 70, 34, 59, 68, 90, 18 };
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	Medici * obj = new Medici();
	clock_t start = clock();
	int my_answer = obj->winner(p0, p1, p2);
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
	
	time = test4();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
