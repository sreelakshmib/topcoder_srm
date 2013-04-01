#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class PackingParts {
public:
	int pack(vector <int>, vector <int>);
};

int PackingParts::pack(vector <int> partSizes, vector <int> boxSizes) {
	int res=0;
	for(int i=0,j=0;i<boxSizes.size()&&j<partSizes.size();i++){
		if(partSizes[j]<=boxSizes[i]){res++;j++;}
	}	
	return res;
	
}


double test0() {
	int t0[] = {2,2,2};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1,2,2,3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PackingParts * obj = new PackingParts();
	clock_t start = clock();
	int my_answer = obj->pack(p0, p1);
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
double test1() {
	int t0[] = {1,5};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2,5};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PackingParts * obj = new PackingParts();
	clock_t start = clock();
	int my_answer = obj->pack(p0, p1);
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
double test2() {
	int t0[] = {10,10,10,10};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {9,9,9,10,10,10};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PackingParts * obj = new PackingParts();
	clock_t start = clock();
	int my_answer = obj->pack(p0, p1);
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
	int t0[] = {1,1,1,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1,2,2,3,6,7};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PackingParts * obj = new PackingParts();
	clock_t start = clock();
	int my_answer = obj->pack(p0, p1);
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
double test4() {
	int t0[] = {1,1,1,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2,3,6};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PackingParts * obj = new PackingParts();
	clock_t start = clock();
	int my_answer = obj->pack(p0, p1);
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
double test5() {
	int t0[] = {10,32,46,55,55,84,100};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {15,31,34,46,59,68,83,99};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	PackingParts * obj = new PackingParts();
	clock_t start = clock();
	int my_answer = obj->pack(p0, p1);
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
