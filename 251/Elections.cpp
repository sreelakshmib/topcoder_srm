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

class Elections {
public:
	int visit(vector <string>);
};


int Elections::visit(vector <string> likelihoods) {
	vector<double> c;
	rep(i,sz(likelihoods)){
		int x=count(full(likelihoods[i]),'1');
		c.pb((x*10000.0)/len(likelihoods[i]));
	}
	rep(i,sz(c))cout<<c[i]<<" ";
	cout<<endl;
	int in=0,min=c[0];
	repx(i,1,sz(c)){
		if(c[i]<min){
			min=c[i];
			in=i;
		}
	}
	return in;
}


double test0() {
	string t0[] = {"1222","1122","1222"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	Elections * obj = new Elections();
	clock_t start = clock();
	int my_answer = obj->visit(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 0;
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
	string t0[] = {"1222111122","2222222111","11111222221222222222"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	Elections * obj = new Elections();
	clock_t start = clock();
	int my_answer = obj->visit(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 1;
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
	string t0[] = {"111","112","121","122","211","212","221","222"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	Elections * obj = new Elections();
	clock_t start = clock();
	int my_answer = obj->visit(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 7;
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
	string t0[] = {"1122","1221","1212","2112","2121","2211"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	Elections * obj = new Elections();
	clock_t start = clock();
	int my_answer = obj->visit(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 0;
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
double test4() {
	string t0[] = {"11112222111121","1211221212121","112111222","11122222222111","112121222","1212122211112"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	Elections * obj = new Elections();
	clock_t start = clock();
	int my_answer = obj->visit(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 3;
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
	
	time = test4();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
