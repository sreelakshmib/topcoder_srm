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

class ProblemWriting {
public:
	string myCheckData(string);
};
string ProblemWriting::myCheckData(string dotForm) {
	int s0=0,s1=1,s2=2,s3=3;
	string op="+*/-";
	if(dotForm.length()<1 || dotForm.length()>25){
		return "dotForm must contain between 1 and 25 characters, inclusive.";
	}
	bool good=true;
	int state=s0;
	for(int i=0;i<dotForm.length();i++){
		char curr=dotForm[i];
		good=true;
		if(state==s0){
			if(curr>='0' && curr<='9') state=s1;
			else good=false;
		} else if(state==s1 || state==s2){
			if(curr=='.')state=s2;
			else if(op.find(curr)<op.length()) state=s3;
			else good=false;
		} else if(state==s3){
			if(curr=='.')state=s3;
			else if(curr>='0' && curr<='9') state=s1;
			else good=false;
		}
		if(good==false){
			stringstream ss;
			ss<<i;
			string a;
			ss>>a;
			return "dotForm is not in dot notation, check character "+a+".";
		}
	}
	if(state!=s1){
			stringstream ss;
			ss<<dotForm.length();
			string a;
			ss>>a;		
		return "dotForm is not in dot notation, check character "+a+".";
	}
	return "";
}


double test0() {
	string p0 = "3+5";
	ProblemWriting * obj = new ProblemWriting();
	clock_t start = clock();
	string my_answer = obj->myCheckData(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "";
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
	string p0 = "9..+.5...*....3";
	ProblemWriting * obj = new ProblemWriting();
	clock_t start = clock();
	string my_answer = obj->myCheckData(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "";
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
	string p0 = "5.3+4";
	ProblemWriting * obj = new ProblemWriting();
	clock_t start = clock();
	string my_answer = obj->myCheckData(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "dotForm is not in dot notation, check character 2.";
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
	string p0 = "9*9*9*9*9*9*9*9*9*9*9*9*9*9";
	ProblemWriting * obj = new ProblemWriting();
	clock_t start = clock();
	string my_answer = obj->myCheckData(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "dotForm must contain between 1 and 25 characters, inclusive.";
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
double test4() {
	string p0 = "3.........../...........4";
	ProblemWriting * obj = new ProblemWriting();
	clock_t start = clock();
	string my_answer = obj->myCheckData(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "";
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
	
	time = test4();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
