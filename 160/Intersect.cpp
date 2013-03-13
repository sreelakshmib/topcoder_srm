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

typedef long long ll;

const int INF = 1<<30;

using namespace std;

class Intersect {
public:
	int area(vector <int>, vector <int>);
};

int Intersect::area(vector <int> x, vector <int> y) {
	int top,bottom,left,right;
	top=max(y[0],y[1]);
	bottom=min(y[0],y[1]);
	left=min(x[0],x[1]);
	right=max(x[0],x[1]);
	int h,w;
	for(int i=2;i<x.size();i+=2){
		h=max(y[i],y[i+1]); top=min(h,top);
		h=min(y[i],y[i+1]); bottom=max(h,bottom);
		w=min(x[i],x[i+1]); left=max(w,left);
		w=max(x[i],x[i+1]); right=min(w,right);
	}
	if(top<bottom || left>right) return 0;
	return (top-bottom)*(right-left); 
	
}


double test0() {
	int t0[] = {0,2,3,-4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {17,1000,18,6};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	Intersect * obj = new Intersect();
	clock_t start = clock();
	int my_answer = obj->area(p0, p1);
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
	int t0[] = {10000,-10000};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {-10000,10000};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	Intersect * obj = new Intersect();
	clock_t start = clock();
	int my_answer = obj->area(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 400000000;
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
	int t0[] = {3,8,6,12,10,15};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {7,17,7,17,7,17};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	Intersect * obj = new Intersect();
	clock_t start = clock();
	int my_answer = obj->area(p0, p1);
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
	int t0[] = {0,0,0,0,0,0,0,0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {5,5,5,5,5,5,5,5};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	Intersect * obj = new Intersect();
	clock_t start = clock();
	int my_answer = obj->area(p0, p1);
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
double test4() {
	int t0[] = {2,100,5,32,1000,-20,47,12};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {29,-1000,-800,-200,-900,300,-600,-650};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	Intersect * obj = new Intersect();
	clock_t start = clock();
	int my_answer = obj->area(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 1000;
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
	int t0[] = {1,7,12,3,16,8,3,12}	;
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {-90,-60,-70,3,-60,-90,-80,-100};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	Intersect * obj = new Intersect();
	clock_t start = clock();
	int my_answer = obj->area(p0, p1);
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
