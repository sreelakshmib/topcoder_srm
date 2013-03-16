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

class VendingMachine {
public:
	int motorUse(vector <string>, vector <string>);
};

int getCurr(VI p[],int n){
	int max=-1,in=-1;
	for(int i=0;i<p[0].size();i++){
		int col=0;
		for(int j=0;j<n;j++){
			col+=p[j][i];
		}
		if(col>max){
			max=col;in=i;
		}
	}
	return in;
}

int VendingMachine::motorUse(vector <string> prices, vector <string> purchases) {
	VI p[prices.size()];
	for(int i=0;i<prices.size();i++){
		stringstream s(prices[i]);
		int x;
		while(s>>x)
			p[i].pb(x);
	}
	int n=prices.size();
	int m=p[0].size();
	int cur=getCurr(p,n),now=0;
	int rot=min(abs(0-cur),m-abs(0-cur));
	int st=0;
	for(int i=0;i<purchases.size();i++){
		purchases[i][purchases[i].find(',')]=' ';
		purchases[i][purchases[i].find(':')]=' ';
		stringstream ss(purchases[i]);
		int row,col,t;
		ss>>row>>col>>t;
		if(p[row][col]==0){
			return -1;
		}
		if(t-st>=5){
			now=getCurr(p,n);
			rot+=min(abs(now-cur),m-abs(cur-now));
			cur=now;
		}
		if(col!=cur){
			rot+=min(abs(cur-col),m-abs(cur-col));
			cur=col;
		}
		st=t;
		p[row][col]=0;
	}
	now=getCurr(p,n);
	rot+=min(abs(now-cur),m-abs(cur-now));
	return rot;
}


double test0() {
	string t0[] = {"100 100 100"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"0,0:0", "0,2:5", "0,1:10"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	VendingMachine * obj = new VendingMachine();
	clock_t start = clock();
	int my_answer = obj->motorUse(p0, p1);
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
double test1() {
	string t0[] = {"100 200 300 400 500 600"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"0,2:0", "0,3:5", "0,1:10", "0,4:15"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	VendingMachine * obj = new VendingMachine();
	clock_t start = clock();
	int my_answer = obj->motorUse(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 17;
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
	string t0[] = {"100 200 300 400 500 600"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"0,2:0", "0,3:4", "0,1:8", "0,4:12"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	VendingMachine * obj = new VendingMachine();
	clock_t start = clock();
	int my_answer = obj->motorUse(p0, p1);
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
double test3() {
	string t0[] = {"100 100 100"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"0,0:10", "0,0:11"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	VendingMachine * obj = new VendingMachine();
	clock_t start = clock();
	int my_answer = obj->motorUse(p0, p1);
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
	string t0[] = {"100 200 300",
 "600 500 400"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"0,0:0", "1,1:10", "1,2:20",
 "0,1:21", "1,0:22", "0,2:35"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	VendingMachine * obj = new VendingMachine();
	clock_t start = clock();
	int my_answer = obj->motorUse(p0, p1);
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
