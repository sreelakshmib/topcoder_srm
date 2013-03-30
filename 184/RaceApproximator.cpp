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

class RaceApproximator {
public:
	string timeToBeat(int, int, int, int, int);
};

string RaceApproximator::timeToBeat(int ad1, int at1, int ad2, int at2, int raceDistance) {
	double 	d1=ad1;
	double d2=ad2;
	double t1=at1,t2=at2,rd=raceDistance;
	double t=t1*exp(log(t2/t1)*log(d1/rd)/log(d1/d2));
	int h=t/3600;
	t-=h*3600;
	int m=t/60;
	int s=t-m*60;
	char buf[1000];
	sprintf(buf,"%d:%02d:%02d",h,m,s);
	string ss(buf);
	return ss;
}


double test0() {
	int p0 = 800;
	int p1 = 118;
	int p2 = 5000;
	int p3 = 906;
	int p4 = 1500;
	RaceApproximator * obj = new RaceApproximator();
	clock_t start = clock();
	string my_answer = obj->timeToBeat(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p5 = "0:03:57";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p5 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int p0 = 400;
	int p1 = 65;
	int p2 = 1600;
	int p3 = 350;
	int p4 = 800;
	RaceApproximator * obj = new RaceApproximator();
	clock_t start = clock();
	string my_answer = obj->timeToBeat(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p5 = "0:02:30";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p5 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int p0 = 1600;
	int p1 = 299;
	int p2 = 10000;
	int p3 = 2360;
	int p4 = 5000;
	RaceApproximator * obj = new RaceApproximator();
	clock_t start = clock();
	string my_answer = obj->timeToBeat(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p5 = "0:18:00";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p5 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int p0 = 100;
	int p1 = 17;
	int p2 = 10000;
	int p3 = 4500;
	int p4 = 9000;
	RaceApproximator * obj = new RaceApproximator();
	clock_t start = clock();
	string my_answer = obj->timeToBeat(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p5 = "1:06:00";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p5 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int p0 = 156;
	int p1 = 117;
	int p2 = 3863;
	int p3 = 2754;
	int p4 = 1755;
	RaceApproximator * obj = new RaceApproximator();
	clock_t start = clock();
	string my_answer = obj->timeToBeat(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p5 = "0:21:06";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p5 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p5 != my_answer) {
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
