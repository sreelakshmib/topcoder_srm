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

class Highscore {
public:
	int getRank(vector <int>, int, int);
};

int Highscore::getRank(vector <int> scores, int newscore, int places) {
	int ctr=1;
	int c=scores.size();
	int sz=min(places,c);
	for(int i=0;i<sz;i++){
		int cur=scores[i];
		if(newscore>cur)
			return ctr;
		else if(newscore!=cur)ctr++;
	}
	if(places>scores.size())return ctr;
	return -1;

}


double test0() {
	int t0[] = {100,90,80};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 90;
	int p2 = 10;
	Highscore * obj = new Highscore();
	clock_t start = clock();
	int my_answer = obj->getRank(p0, p1, p2);
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
	vector <int> p0;
	int p1 = 0;
	int p2 = 50;
	Highscore * obj = new Highscore();
	clock_t start = clock();
	int my_answer = obj->getRank(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 1;
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
	int t0[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 1;
	int p2 = 10;
	Highscore * obj = new Highscore();
	clock_t start = clock();
	int my_answer = obj->getRank(p0, p1, p2);
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
	int t0[] = {10, 9, 8, 7, 6, 5, 4, 3, 3, 0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 1;
	int p2 = 10;
	Highscore * obj = new Highscore();
	clock_t start = clock();
	int my_answer = obj->getRank(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 10;
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
	int t0[] = {2000000000, 19539, 19466, 19146, 17441, 17002, 16348, 16343,
15981, 15346, 14748, 14594, 13752, 13684, 13336, 13290, 12939,
12208, 12163, 12133, 11621, 11119, 10872, 10710, 10390, 9934,
9296, 8844, 8662, 8653, 8168, 7914, 7529, 7354, 6016, 5428,
5302, 5158, 4853, 4538, 4328, 3443, 3222, 2107, 2107, 1337,
951, 586, 424, 31};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int p1 = 1337;
	int p2 = 50;
	Highscore * obj = new Highscore();
	clock_t start = clock();
	int my_answer = obj->getRank(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 46;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
