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

class ComputationalComplexity {
public:
	int fastestAlgo(vector <int>, vector <int>, vector <int>, int);
};

double powerfun(double a,double b){
	double res=1;
	while(b--)
		res*=a;
	return res;
}

int ComputationalComplexity::fastestAlgo(vector <int> constant, vector <int> power, vector <int> logPower, int N) {
	vector<double> res;
	rep(i,sz(constant)){
		res.pb( constant[i]*powerfun(N,power[i])*powerfun(log(N),logPower[i]));
	}
	int in=0;
	double min=res[0];
	repx(i,1,sz(res)){
		if(res[i]<min){
			min=res[i];
			in=i;
		}
	}
	return in;	
}


double test0() {
	int t0[] = {5, 50, 45};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2, 1, 1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {0, 1, 1};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int p3 = 400;
	ComputationalComplexity * obj = new ComputationalComplexity();
	clock_t start = clock();
	int my_answer = obj->fastestAlgo(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {5, 50, 45};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2, 1, 1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {0, 1, 1};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int p3 = 10;
	ComputationalComplexity * obj = new ComputationalComplexity();
	clock_t start = clock();
	int my_answer = obj->fastestAlgo(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {100};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {5};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {5};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int p3 = 1000;
	ComputationalComplexity * obj = new ComputationalComplexity();
	clock_t start = clock();
	int my_answer = obj->fastestAlgo(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {32, 33, 58, 93, 8, 27, 43, 69, 95, 77,
 57, 73, 87, 87, 50, 92, 67, 20, 2, 46,
 73, 48, 25, 90, 48, 18, 28, 26, 20, 33,
 59, 48, 69, 4, 19, 13, 10, 78, 55, 90};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {5, 0, 1, 4, 0, 3, 5, 4, 3, 3,
 0, 5, 0, 5, 5, 3, 0, 4, 1, 1,
 4, 0, 2, 4, 0, 0, 3, 2, 0, 0,
 4, 3, 5, 0, 2, 4, 3, 4, 3, 0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2, 2, 2, 0, 4, 5, 2, 3, 4, 5,
 0, 0, 1, 4, 2, 5, 2, 4, 5, 0,
 5, 4, 3, 0, 4, 1, 1, 3, 3, 0,
 1, 5, 2, 1, 1, 4, 0, 0, 2, 3};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int p3 = 1000;
	ComputationalComplexity * obj = new ComputationalComplexity();
	clock_t start = clock();
	int my_answer = obj->fastestAlgo(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 33;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
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
