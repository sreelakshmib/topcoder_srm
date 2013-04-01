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

class FuelConsumption {
public:
	double maximalDistance(vector <int>, vector <int>, int);
};

double FuelConsumption::maximalDistance(vector <int> velocities, vector <int> consumptions, int fuel) {
	double m=0.0;
	for(int i=0;i<velocities.size();i++){
		m=max(m,velocities[i]*(fuel*1.0 / consumptions[i]));
	}
	return m;
}


double test0() {
	int t0[] = {100};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {10000};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 10000;
	FuelConsumption * obj = new FuelConsumption();
	clock_t start = clock();
	double my_answer = obj->maximalDistance(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 100.0;
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
	int t0[] = {70, 80, 90, 100, 60, 110};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {4000, 4000, 4000, 4000, 4000, 4000};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 40000;
	FuelConsumption * obj = new FuelConsumption();
	clock_t start = clock();
	double my_answer = obj->maximalDistance(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 1100.0;
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
	int t0[] = {250, 240, 230, 220, 210, 211};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {5000, 4500, 4000, 3500, 3000, 3000};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 50000;
	FuelConsumption * obj = new FuelConsumption();
	clock_t start = clock();
	double my_answer = obj->maximalDistance(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 3516.6666666666665;
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
	int t0[] = {5, 10, 20, 40, 80};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1000, 2500, 6250, 9000, 18000};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 47832;
	FuelConsumption * obj = new FuelConsumption();
	clock_t start = clock();
	double my_answer = obj->maximalDistance(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 239.16;
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
	int t0[] = {5, 10, 20, 40, 80, 160};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1000, 2500, 6250, 8000, 9500, 20000};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 47832;
	FuelConsumption * obj = new FuelConsumption();
	clock_t start = clock();
	double my_answer = obj->maximalDistance(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 402.79578947368424;
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
	int t0[] = {240, 195, 130, 133, 15, 160, 111, 206, 72, 149,
 146, 115, 235, 183, 102, 96, 163, 61, 196, 52,
 87, 139, 33, 7, 90, 67, 118, 227, 197, 114};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {14837, 2981, 17292, 18591, 4832, 7461, 17991, 18369, 18291, 9400,
 15179, 3317, 2595, 2441, 6936, 8028, 14973, 18981, 12503, 7816,
 2883, 6385, 6230, 18157, 16567, 9310, 2866, 4687, 14171, 4477};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 31710;
	FuelConsumption * obj = new FuelConsumption();
	clock_t start = clock();
	double my_answer = obj->maximalDistance(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 2871.6184971098264;
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
