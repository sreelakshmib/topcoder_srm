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

class SequenceOfCommands {
public:
	string whatHappens(vector <string>);
};

string SequenceOfCommands::whatHappens(vector <string> commands) {
	int dx[]={1,0,-1,0};
	int dy[]={0,1,0,-1};
	int dc=0;//striaght 1-left 2-right
	int x=0,y=0;
	for(int k=0;k<4;k++)
	for(int i=0;i<commands.size();i++){
		for(int j=0;j<commands[i].size();j++){
			if(commands[i][j]=='S'){
				x+=dx[dc];
				y+=dy[dc];
			} else if(commands[i][j]=='L'){
				dc=(dc+3)%4;
			}
			else if(commands[i][j]=='R'){
				dc=(dc+1)%4;
			}
		}
	}
	if(x==0 && y==0) return "bounded";
	return "unbounded";
}


double test0() {
	string t0[] = {"L"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SequenceOfCommands * obj = new SequenceOfCommands();
	clock_t start = clock();
	string my_answer = obj->whatHappens(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "bounded";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = {"SRSL"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SequenceOfCommands * obj = new SequenceOfCommands();
	clock_t start = clock();
	string my_answer = obj->whatHappens(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "unbounded";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = {"SSSS","R"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SequenceOfCommands * obj = new SequenceOfCommands();
	clock_t start = clock();
	string my_answer = obj->whatHappens(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "bounded";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = {"SRSL","LLSSSSSSL","SSSSSS","L"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SequenceOfCommands * obj = new SequenceOfCommands();
	clock_t start = clock();
	string my_answer = obj->whatHappens(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "unbounded";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
