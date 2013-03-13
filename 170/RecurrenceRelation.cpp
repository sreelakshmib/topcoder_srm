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

class RecurrenceRelation {
public:
	int moduloTen(vector <int>, vector <int>, int);
};

int RecurrenceRelation::moduloTen(vector <int> coefficients, vector <int> initial, int N) {
	vector<int> c=coefficients;
	vector<int> ini=initial;
	if(N<=initial.size()){
		int x=initial[N]%10;
		return (x>=0?x:x+10);
	}
	int req=initial.size();
	int off=0;
	while(req<=N){
		int res=0;
		for(int i=0;i<c.size();i++){
			res+=c[i]*ini[i+off];
			res%=10;
			if(res<0)res+=10;
		}
		off++;
		ini.push_back(res);
		req++;	
	}
	if(ini[N]>=0)return ini[N]%10;
	else return (ini[N]%10)+10;	
}


double test0() {
	int t0[] = {2,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {9,7};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 6;
	RecurrenceRelation * obj = new RecurrenceRelation();
	clock_t start = clock();
	int my_answer = obj->moduloTen(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 5;
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
	int t0[] = {1,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 9;
	RecurrenceRelation * obj = new RecurrenceRelation();
	clock_t start = clock();
	int my_answer = obj->moduloTen(p0, p1, p2);
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
	int t0[] = {2};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 20;
	RecurrenceRelation * obj = new RecurrenceRelation();
	clock_t start = clock();
	int my_answer = obj->moduloTen(p0, p1, p2);
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
	int t0[] = {2};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 64;
	RecurrenceRelation * obj = new RecurrenceRelation();
	clock_t start = clock();
	int my_answer = obj->moduloTen(p0, p1, p2);
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
double test4() {
	int t0[] = {25,143};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0,0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 100000;
	RecurrenceRelation * obj = new RecurrenceRelation();
	clock_t start = clock();
	int my_answer = obj->moduloTen(p0, p1, p2);
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
double test5() {
	int t0[] = {9,8,7,6,5,4,3,2,1,0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1,2,3,4,5,6,7,8,9,10};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 654;
	RecurrenceRelation * obj = new RecurrenceRelation();
	clock_t start = clock();
	int my_answer = obj->moduloTen(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 5;
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
	int t0[] = {901,492,100};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {-6,-15,-39};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 0;
	RecurrenceRelation * obj = new RecurrenceRelation();
	clock_t start = clock();
	int my_answer = obj->moduloTen(p0, p1, p2);
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
