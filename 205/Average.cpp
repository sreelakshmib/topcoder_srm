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

class Average {
public:
	int belowAvg(vector <int>, vector <int>);
};

int Average::belowAvg(vector <int> math, vector <int> verbal) {
	int res=0;
	double avg=0;
	for(int i=0;i<math.size();i++){
		avg+=math[i]*1. +verbal[i]*1. ;
	}
	avg/=math.size();
	cout<<avg<<endl;
	for(int i=0;i<math.size();i++){
		if((math[i]*1. + verbal[i]*1.)<avg)res++;
	}
	return res;
}


double test0() {
	int t0[] = {200,250,700,700};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {400,400,400,400};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	Average * obj = new Average();
	clock_t start = clock();
	int my_answer = obj->belowAvg(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 2;
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
	int t0[] = {500,400};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {300,400};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	Average * obj = new Average();
	clock_t start = clock();
	int my_answer = obj->belowAvg(p0, p1);
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
double test2() {
	int t0[] = {293};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {799};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	Average * obj = new Average();
	clock_t start = clock();
	int my_answer = obj->belowAvg(p0, p1);
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
double test3() {
	int t0[] = {400,400,400,400,400,400,401};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {400,400,400,400,400,400,400};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	Average * obj = new Average();
	clock_t start = clock();
	int my_answer = obj->belowAvg(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 6;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
