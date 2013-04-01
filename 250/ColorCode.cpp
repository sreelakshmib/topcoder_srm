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

class ColorCode {
public:
	long long getOhms(vector <string>);
};

long long ColorCode::getOhms(vector <string> code) {
	VS look;
	look.pb("black");
	look.pb("brown");
	look.pb("red");
	look.pb("orange");
	look.pb("yellow");
	look.pb("green");
	look.pb("blue");
	look.pb("violet");
	look.pb("grey");
	look.pb("white");
	string res="";
	rep(i,sz(look)){
		if(code[0]==look[i]){
			res+=(i+'0');
			break;
		}
	}
	rep(i,sz(look)){
		if(code[1]==look[i]){
			res+=(i+'0');
			break;
		}
	}
	rep(i,sz(look)){
		if(code[2]==look[i]){
			rep(j,i){
				res+="0";
			}
			break;
		}
	}
	stringstream ss(res);
	long long ans;
	ss>>ans;
	return ans;
}


double test0() {
	string t0[] = { "yellow", "violet", "red" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ColorCode * obj = new ColorCode();
	clock_t start = clock();
	long long my_answer = obj->getOhms(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = 4700LL;
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
	string t0[] = { "orange", "red", "blue" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ColorCode * obj = new ColorCode();
	clock_t start = clock();
	long long my_answer = obj->getOhms(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = 32000000LL;
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
	string t0[] = { "white", "white", "white" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ColorCode * obj = new ColorCode();
	clock_t start = clock();
	long long my_answer = obj->getOhms(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p1 = 99000000000LL;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
