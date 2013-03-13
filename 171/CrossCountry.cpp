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

class CrossCountry {
public:
	string scoreMeet(int, string);
};
struct team{
	char name;
	int score,sixth;
	team(char _name,int _score,int _sixth){
		score=_score;name=_name;sixth=_sixth;
	}
};

bool operator < (const team & lhs, const team & rhs){
	if(lhs.score!=rhs.score)return lhs.score<rhs.score;
	if(rhs.sixth!=rhs.sixth) return lhs.sixth<rhs.sixth;
	return lhs.name<rhs.name;
}

string CrossCountry::scoreMeet(int numTeams, string finishOrder) {
	vector<team> t;
	for(int i=0;i<numTeams;i++){
		struct team a=team('A'+i,0,INF);
		int num=0;
		for(int j=0;j<finishOrder.length();j++){
			if(finishOrder[j]==a.name){
				if(num<5){
					num++;
					a.score+=j;
				}else if(num==5){
					num++;
					a.sixth=j;
				}
			}
		}
		if(num>=5)
			t.pb(a);
	}
	sort(t.begin(),t.end());
	string res="";
	for(int i=0;i<t.size();i++)
		res+=t[i].name;
	return res;
}


double test0() {
	int p0 = 2;
	string p1 = "AABBABBABBA";
	CrossCountry * obj = new CrossCountry();
	clock_t start = clock();
	string my_answer = obj->scoreMeet(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "AB";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int p0 = 3;
	string p1 = "CCCBBBBBAAACC";
	CrossCountry * obj = new CrossCountry();
	clock_t start = clock();
	string my_answer = obj->scoreMeet(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "BC";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int p0 = 4;
	string p1 = "ABDCBADBDCCDBCDBCAAAC";
	CrossCountry * obj = new CrossCountry();
	clock_t start = clock();
	string my_answer = obj->scoreMeet(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "BDCA";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int p0 = 10;
	string p1 = "BDHCEAJBIDBCCHGCBDJEBAAHEGAGGADHGIECJEHAEBDADJCDHG";
	CrossCountry * obj = new CrossCountry();
	clock_t start = clock();
	string my_answer = obj->scoreMeet(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "BCDAHEG";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int p0 = 3;
	string p1 = "BABCAABABAB";
	CrossCountry * obj = new CrossCountry();
	clock_t start = clock();
	string my_answer = obj->scoreMeet(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "AB";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
