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

class PaperFold {
public:
	int numFolds(vector <int>, vector <int>);
};

int PaperFold::numFolds(vector <int> paper, vector <int> box) {
		double ph=paper[1],pw=paper[0];
	double bh=box[1],bw=box[0];
	int res=0;
	if(ph<pw){double t=pw;pw=ph;ph=t;}
	if(bh<bw){double t=bw;bw=bh;bh=t;}
	while(res<=8){
		if(ph<=bh && pw<=bw)return res;
		if(ph>bh)ph/=2;
		else if(pw>bw)pw/=2;
		if(ph<pw){double t=pw;pw=ph;ph=t;}
		res++;
	}
	return -1;

}


double test0() {
	int t0[] = {8, 11};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {6, 10};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PaperFold * obj = new PaperFold();
	clock_t start = clock();
	int my_answer = obj->numFolds(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 1;
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
	int t0[] = {11, 17};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {6, 4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PaperFold * obj = new PaperFold();
	clock_t start = clock();
	int my_answer = obj->numFolds(p0, p1);
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
double test2() {
	int t0[] = {11, 17};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {5, 4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PaperFold * obj = new PaperFold();
	clock_t start = clock();
	int my_answer = obj->numFolds(p0, p1);
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
double test3() {
	int t0[] = {1000,1000};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {62,63};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PaperFold * obj = new PaperFold();
	clock_t start = clock();
	int my_answer = obj->numFolds(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = -1;
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
	int t0[] = {100,30};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {60,110};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PaperFold * obj = new PaperFold();
	clock_t start = clock();
	int my_answer = obj->numFolds(p0, p1);
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
double test5() {
	int t0[] = {1895, 6416};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {401, 1000};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PaperFold * obj = new PaperFold();
	clock_t start = clock();
	int my_answer = obj->numFolds(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 5;
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
