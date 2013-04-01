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

class Barbecue {
public:
	int eliminate(int, vector <int>, vector <int>);
};

int Barbecue::eliminate(int n, vector <int> voter, vector <int> excluded) {
	VI res(n,0);
	rep(i,sz(voter)){
		res[voter[i]]++;
		res[excluded[i]]+=100;
	}
	int max=-1;
	int in=-1;
	rep(i,n){
		if(res[i]>max){
			max=res[i];
			in=i;
		}
	}
	return i;
}


double test0() {
	int p0 = 3;
	int t1[] = {0,1,2,2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2,2,0,1};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	Barbecue * obj = new Barbecue();
	clock_t start = clock();
	int my_answer = obj->eliminate(p0, p1, p2);
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
	int p0 = 3;
	int t1[] = {0,2,2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2,0,1};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	Barbecue * obj = new Barbecue();
	clock_t start = clock();
	int my_answer = obj->eliminate(p0, p1, p2);
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
double test2() {
	int p0 = 2;
	int t1[] = {0,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1,0};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	Barbecue * obj = new Barbecue();
	clock_t start = clock();
	int my_answer = obj->eliminate(p0, p1, p2);
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
	int p0 = 20;
	int t1[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,4,5,
6,7,8,9,10,11,12,13,14,15,16,17,18,19,19,19,19};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,
0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,1,2,3};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	Barbecue * obj = new Barbecue();
	clock_t start = clock();
	int my_answer = obj->eliminate(p0, p1, p2);
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
	int p0 = 5;
	int t1[] = {4,3,1,0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {2,2,3,3};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	Barbecue * obj = new Barbecue();
	clock_t start = clock();
	int my_answer = obj->eliminate(p0, p1, p2);
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
double test5() {
	int p0 = 10;
	int t1[] = {4,5,6,7,8,9,0,1,2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {5,6,7,8,9,0,1,2,3};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	Barbecue * obj = new Barbecue();
	clock_t start = clock();
	int my_answer = obj->eliminate(p0, p1, p2);
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
double test6() {
	int p0 = 7;
	int t1[] = {1,2,3,4,5,6,0,2,3,4,5,6,0,1,3,4,5,6,0,1,2,
 4,5,6,0,1,2,3,5,6,0,1,2,3,4,6,0,1,2,3,4,5};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {0,0,0,0,0,0,1,1,1,1,1,1,2,2,2,2,2,2,3,3,3,
 3,3,3,4,4,4,4,4,4,5,5,5,5,5,5,6,6,6,6,6,6};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	Barbecue * obj = new Barbecue();
	clock_t start = clock();
	int my_answer = obj->eliminate(p0, p1, p2);
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
double test7() {
	int p0 = 5;
	vector <int> p1;
	vector <int> p2;
	Barbecue * obj = new Barbecue();
	clock_t start = clock();
	int my_answer = obj->eliminate(p0, p1, p2);
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
	
	time = test7();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
