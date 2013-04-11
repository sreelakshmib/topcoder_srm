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

class MedalTable {
public:
	vector <string> generate(vector <string>);
};

struct country{
	string name;
	int g,s,b;
};

bool mycomp(struct country a,struct country c){
	if(a.g>c.g)
		return true;
	else if(a.g<c.g)
		return false;
	else{
		if(a.s>c.s)
			return true;
		else if(a.s<c.s)
			return false;
		else{
			if(a.b>c.b)
				return true;
			else if(a.b<c.b)
				return false;
			else{
				if(a.name<c.name)
					return true;
				else
					return false;
			}
		}
	}
	return false;
}

vector <string> MedalTable::generate(vector <string> results) {
	set<string> s;
	set<string>:: iterator it;
	string str1,str2,str3;
	rep(i,sz(results)){
		stringstream ss(results[i]);
		ss>>str1>>str2>>str3;
		s.insert(str1);
		s.insert(str2);
		s.insert(str3);
	}
	vector<country> v;
	for(it=s.begin();it!=s.end();it++){
		struct country c;
		c.name=*it;
		c.g=c.s=c.b=0;
		v.pb(c);
	}
	
	rep(i,sz(results)){
		stringstream ss(results[i]);
		ss>>str1>>str2>>str3;
		rep(j,sz(v)){
			if(v[j].name==str1)
				v[j].g++;
			if(v[j].name==str2)
				v[j].s++;
			if(v[j].name==str3)
				v[j].b++;
		}
	}
	sort(full(v),mycomp);
	VS res;
	rep(i,sz(v)){
		string str=v[i].name;
		stringstream ss1,ss2,ss3;
		string sss;
		ss1<<v[i].g;
		ss1>>sss;str+=" "+sss;
		ss2<<v[i].s;
		ss2>>sss;str+=" "+sss;
		ss3<<v[i].b;
		ss3>>sss;str+=" "+sss;
		res.pb(str);
	}
	return res;	
}


double test0() {
	string t0[] = {"ITA JPN AUS", "KOR TPE UKR", "KOR KOR GBR", "KOR CHN TPE"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MedalTable * obj = new MedalTable();
	clock_t start = clock();
	vector <string> my_answer = obj->generate(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = { "KOR 3 1 0",  "ITA 1 0 0",  "TPE 0 1 1",  "CHN 0 1 0",  "JPN 0 1 0",  "AUS 0 0 1",  "GBR 0 0 1",  "UKR 0 0 1" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"USA AUT ROM"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MedalTable * obj = new MedalTable();
	clock_t start = clock();
	vector <string> my_answer = obj->generate(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = { "USA 1 0 0",  "AUT 0 1 0",  "ROM 0 0 1" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"GER AUT SUI", "AUT SUI GER", "SUI GER AUT"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MedalTable * obj = new MedalTable();
	clock_t start = clock();
	vector <string> my_answer = obj->generate(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = { "AUT 1 1 1",  "GER 1 1 1",  "SUI 1 1 1" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
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
