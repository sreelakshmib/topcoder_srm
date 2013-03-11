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

class Birthday {
public:
	string getNext(string, vector <string>);
};

string Birthday::getNext(string date, vector <string> b) {
	sort(b.begin(),b.end());
	string res;
	int m,d;
	string mon=date.substr(0,2);
	string day=date.substr(3,2);
	m=atoi(mon.c_str());
	d=atoi(day.c_str());
	int in=0;
	for(int i=0;i<b.size();i++){
		mon=b[i].substr(0,2);
		day=b[i].substr(3,2);
		int M=atoi(mon.c_str());
		int D=atoi(day.c_str());
		if(M>=m){
			if(M>=m || D>d){
				in=i;
				break;
			}
		}
	}
	res =  b[in].substr(0,5);
	return res;
}


double test0() {
	string p0 = "06/17";
	string t1[] = {"02/17 Wernie", "10/12 Stefan"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Birthday * obj = new Birthday();
	clock_t start = clock();
	string my_answer = obj->getNext(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "10/12";
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
	string p0 = "06/17";
	string t1[] = {"10/12 Stefan"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Birthday * obj = new Birthday();
	clock_t start = clock();
	string my_answer = obj->getNext(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "10/12";
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
	string p0 = "02/17";
	string t1[] = {"02/17 Wernie", "10/12 Stefan"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Birthday * obj = new Birthday();
	clock_t start = clock();
	string my_answer = obj->getNext(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "02/17";
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
	string p0 = "12/24";
	string t1[] = {"10/12 Stefan"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Birthday * obj = new Birthday();
	clock_t start = clock();
	string my_answer = obj->getNext(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "10/12";
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
	string p0 = "01/02";
	string t1[] = {"02/17 Wernie",
 "10/12 Stefan",
 "02/17 MichaelJordan",
 "10/12 LucianoPavarotti",
 "05/18 WilhelmSteinitz"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Birthday * obj = new Birthday();
	clock_t start = clock();
	string my_answer = obj->getNext(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "02/17";
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
