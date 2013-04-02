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

class GradingSystem {
public:
	int fairness(vector <int>, vector <int>);
};

int GradingSystem::fairness(vector <int> scores, vector <int> grades) {
	int sum = 0,sum1=0;
	int highest = 0,lowest=INF;
	rep(i,sz(scores)){
	    if (grades[i]>highest) highest = grades[i];
    	sum += highest;
	}
	for(int i=sz(grades)-1;i>=0;i--){
		if(grades[i]<lowest) lowest=grades[i];
		sum1+=lowest;
	}
	return abs(sum-sum1);
}


double test0() {
	int t0[] = {60,80,80};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {3,8,6};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GradingSystem * obj = new GradingSystem();
	clock_t start = clock();
	int my_answer = obj->fairness(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 4;
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
	int t0[] = {0,25,50,75,100};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0,1,3,6,8};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GradingSystem * obj = new GradingSystem();
	clock_t start = clock();
	int my_answer = obj->fairness(p0, p1);
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
	int t0[] = {0,25,50,75,100};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {8,6,3,1,0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GradingSystem * obj = new GradingSystem();
	clock_t start = clock();
	int my_answer = obj->fairness(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 40;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
