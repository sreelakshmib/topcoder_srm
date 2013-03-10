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

using namespace std;

class BigBurger {
public:
	int maxWait(vector <int>, vector <int>);
};

int BigBurger::maxWait(vector <int> arrival, vector <int> service) {
	vector<int> diff;
	diff.push_back(0);//default for first customer
	int curr=arrival[0]+service[0];
	for(int i=1;i<arrival.size();i++){
		if(curr-arrival[i]<=0){
			diff.push_back(0);
			curr=arrival[i]+service[i];
		}
		else {
			diff.push_back(curr-arrival[i]);
			curr+=service[i];
		}
	}
	sort(diff.begin(),diff.end());
	return diff[arrival.size()-1];
}


double test0() {
	int t0[] = {3,3,9};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2,15,14};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	BigBurger * obj = new BigBurger();
	clock_t start = clock();
	int my_answer = obj->maxWait(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 11;
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
	int t0[] = {182};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {11};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	BigBurger * obj = new BigBurger();
	clock_t start = clock();
	int my_answer = obj->maxWait(p0, p1);
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
	int t0[] = {2,10,11};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {3,4,3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	BigBurger * obj = new BigBurger();
	clock_t start = clock();
	int my_answer = obj->maxWait(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 3;
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
	int t0[] = {2,10,12};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {15,1,15};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	BigBurger * obj = new BigBurger();
	clock_t start = clock();
	int my_answer = obj->maxWait(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 7;
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
