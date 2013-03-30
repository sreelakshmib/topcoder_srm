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

class ScoringEfficiency {
public:
	double getPointsPerShot(vector <string>);
};
double ScoringEfficiency::getPointsPerShot(vector <string> g) {
	double p=0,a=0;
	for(int i=0;i<g.size();i++){
		if(g[i]=="Made 2 point field goal"){p+=2;a+=1;}
		else if(g[i]=="Missed 2 point field goal")a+=1;
		else if(g[i]=="Made 3 point field goal"){p+=3;a+=1;}
		else if(g[i]=="Missed 3 point field goal")a+=1;
		else if(g[i]=="Made free throw"){p+=1;a+=0.5;}
		else if(g[i]=="Missed free throw")a+=0.5;
	}
	return p/a;
	
}


double test0() {
	string t0[] = {"Made 3 point field goal",
 "Missed 2 point field goal"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ScoringEfficiency * obj = new ScoringEfficiency();
	clock_t start = clock();
	double my_answer = obj->getPointsPerShot(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = 1.5;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"Made free throw",
 "Missed free throw",
 "Missed free throw",
 "Missed free throw",
 "Made free throw"}
;
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ScoringEfficiency * obj = new ScoringEfficiency();
	clock_t start = clock();
	double my_answer = obj->getPointsPerShot(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = 0.8;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"Made 2 point field goal", "Made 2 point field goal", "Made 2 point field goal", 
 "Made 2 point field goal", "Missed 2 point field goal",
 "Made 3 point field goal", "Made 3 point field goal", "Made 3 point field goal",
 "Missed 3 point field goal", "Missed 3 point field goal", 
 "Missed 3 point field goal", "Missed 3 point field goal",
 "Made free throw", "Made free throw", "Made free throw", 
 "Made free throw", "Made free throw", "Made free throw", 
 "Made free throw", "Missed free throw", "Missed free throw"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ScoringEfficiency * obj = new ScoringEfficiency();
	clock_t start = clock();
	double my_answer = obj->getPointsPerShot(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = 1.4545454545454546;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"Made 2 point field goal", "Missed free throw",
 "Made free throw", "Missed free throw", "Made free throw", 
 "Made 2 point field goal", "Made 2 point field goal",
 "Missed 2 point field goal", "Missed 2 point field goal",
 "Made 3 point field goal", "Missed 2 point field goal",
 "Made 2 point field goal", "Missed 2 point field goal",
 "Made 3 point field goal", "Missed 2 point field goal",
 "Missed 2 point field goal", "Missed 3 point field goal",
 "Made free throw", "Made free throw", 
 "Missed 3 point field goal", "Missed 2 point field goal",
 "Missed 2 point field goal", "Made 2 point field goal",
 "Missed 2 point field goal", "Made 2 point field goal",
 "Missed 3 point field goal"}
 ;
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ScoringEfficiency * obj = new ScoringEfficiency();
	clock_t start = clock();
	double my_answer = obj->getPointsPerShot(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = 0.9565217391304348;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
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
