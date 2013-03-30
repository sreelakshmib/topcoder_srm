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

class PassingGrade {
public:
	int pointsNeeded(vector <int>, vector <int>, int);
};

int PassingGrade::pointsNeeded(vector <int> pe, vector <int> pp, int f) {
	int tot=0;
	for(int i=0;i<pp.size();i++)tot+=pp[i];tot+=f;
	int cur=0;
	for(int i=0;i<pe.size();i++)cur+=pe[i];
	int x=0;
	if(cur*100>=65*tot)return 0;
	while(cur*100<65*tot && x<=f){
		cur++;x++;
	}
	if(x>f)return -1;
	return x;
}


double test0() {
	int t0[] = {55,77,82,60};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {100,100,100,100};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 300;
	PassingGrade * obj = new PassingGrade();
	clock_t start = clock();
	int my_answer = obj->pointsNeeded(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 181;
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
	int t0[] = { 1, 2, 3, 4 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = { 2, 3, 4, 5 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 7;
	PassingGrade * obj = new PassingGrade();
	clock_t start = clock();
	int my_answer = obj->pointsNeeded(p0, p1, p2);
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
	int t0[] = { 1, 2, 2, 1 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = { 9, 9, 9, 9 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 9;
	PassingGrade * obj = new PassingGrade();
	clock_t start = clock();
	int my_answer = obj->pointsNeeded(p0, p1, p2);
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
double test3() {
	int t0[] = { 7, 8, 7, 6 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = { 8, 8, 8, 8 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 9;
	PassingGrade * obj = new PassingGrade();
	clock_t start = clock();
	int my_answer = obj->pointsNeeded(p0, p1, p2);
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
double test4() {
	int t0[] = { 17, 23, 50, 200, 19, 56, 83, 91, 77, 9, 0 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = { 20, 30, 50, 250, 20, 70, 100, 100, 100, 10, 10 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 400;
	PassingGrade * obj = new PassingGrade();
	clock_t start = clock();
	int my_answer = obj->pointsNeeded(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 129;
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
	int t0[] = {600,600,600,600,600,600,600,600,600,600,
 600,600,600,600,600,600,600,600,600,600};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1000,1000,1000,1000,1000,1000,1000,1000,
 1000,1000,1000,1000,1000,1000,1000,1000,
 1000,1000,1000,901};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 3000;
	PassingGrade * obj = new PassingGrade();
	clock_t start = clock();
	int my_answer = obj->pointsNeeded(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 2886;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
