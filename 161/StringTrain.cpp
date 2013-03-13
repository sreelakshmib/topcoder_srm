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

class StringTrain {
public:
	string buildTrain(vector <string>);
};

string StringTrain::buildTrain(vector <string> cars) {
	string train=cars[0];
	for(int i=1;i<cars.size();i++){
		for(int j=1;j<train.length();j++){
			string suffix=train.substr(j);
			string prefix=cars[i].substr(0,suffix.length());
			if(suffix==prefix && suffix.length()!=cars[i].length()){
				train+=cars[i].substr(suffix.length());
				break;
			}
		}
	}
	int len=train.length();
	stringstream s;
	string res="",res1="";
	s<<len;
	s>>res1;
	res1+=" ";
	for(int i=len-1;i>=0;i--){
		int p=res.find(train[i]);
		if(p<0 || p>=len)
			res=train[i]+res;
	}
	return res1+res;
}


double test0() {
	string t0[] = {"ABCDE","CDFFF","CDE","CDEGG","GABC"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	StringTrain * obj = new StringTrain();
	clock_t start = clock();
	string my_answer = obj->buildTrain(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "10 DEGABC";
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
	string t0[] = {"AAAAA","AAAAA","AAAAA"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	StringTrain * obj = new StringTrain();
	clock_t start = clock();
	string my_answer = obj->buildTrain(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "7 A";
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
	string t0[] = {"CABABDABAB","CABAB","ABABDABAB","DABAB"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	StringTrain * obj = new StringTrain();
	clock_t start = clock();
	string my_answer = obj->buildTrain(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "15 CDAB";
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
	string t0[] = {"ABABAB","ABABAB","ABABABAB","BZZZZZ"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	StringTrain * obj = new StringTrain();
	clock_t start = clock();
	string my_answer = obj->buildTrain(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "15 ABZ";
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
	string t0[] = {"A","A","A","AA"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	StringTrain * obj = new StringTrain();
	clock_t start = clock();
	string my_answer = obj->buildTrain(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "1 A";
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
