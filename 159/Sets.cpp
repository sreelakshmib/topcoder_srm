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

class Sets {
public:
	vector <int> operate(vector <int>, vector <int>, string);
};

vector<int> myunion(vector<int> a, vector<int> b){
	VI res=a;
	for(int i=0;i<b.size();i++){
		int f=1;
		for(int j=0;j<a.size();j++){
			if(b[i]==res[j]){
				f=0;
				break;
			}
		}
		if(f) res.pb(b[i]);
	}
	return res;
}

vector<int> intersection(vector<int> a, vector<int> b){
	VI res;
	for(int i=0;i<a.size();i++){
		int f=0;
		for(int j=0;j<b.size();j++){
			if(a[i]==b[j]){
				f=1;break;
			}
		}
		if(f)res.pb(a[i]);
	}
	return res;
}

vector<int> diff(vector<int> a, vector<int> b){
	VI res;
		for(int i=0;i<a.size();i++){
		int f=0;
		for(int j=0;j<b.size();j++){
			if(a[i]==b[j]){
				f=1;break;
			}
		}
		if(f==0)res.pb(a[i]);
	}
	sort(res.begin(),res.end());
	return res;
}

vector <int> Sets::operate(vector <int> A, vector <int> B, string operation) {
	VI res;
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	if(operation=="UNION"){
		res=myunion(A,B);
	}
	if(operation=="INTERSECTION"){
		res=intersection(A,B);
	}
	if(operation=="SYMMETRIC DIFFERENCE"){
		VI res1=myunion(A,B);
		VI res2=intersection(A,B);
		res=diff(res1,res2);
	}
	return res;
}


double test0() {
	int t0[] = {1,2,3,4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {3,4,5,6};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	string p2 = "INTERSECTION";
	Sets * obj = new Sets();
	clock_t start = clock();
	vector <int> my_answer = obj->operate(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t3[] = { 3,  4 };
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p3.size() > 0) {
		cout <<p3[0];
		for (int i=1; i<p3.size(); i++)
			cout <<", " <<p3[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p3) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {1,2,3,4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {3,4,5,6};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	string p2 = "UNION";
	Sets * obj = new Sets();
	clock_t start = clock();
	vector <int> my_answer = obj->operate(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t3[] = { 1,  2,  3,  4,  5,  6 };
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p3.size() > 0) {
		cout <<p3[0];
		for (int i=1; i<p3.size(); i++)
			cout <<", " <<p3[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p3) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {432,756,123};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {534,76,1209};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	string p2 = "INTERSECTION";
	Sets * obj = new Sets();
	clock_t start = clock();
	vector <int> my_answer = obj->operate(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	vector <int> p3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p3.size() > 0) {
		cout <<p3[0];
		for (int i=1; i<p3.size(); i++)
			cout <<", " <<p3[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p3) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {6,5,7,4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {7,6,4,10};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	string p2 = "SYMMETRIC DIFFERENCE";
	Sets * obj = new Sets();
	clock_t start = clock();
	vector <int> my_answer = obj->operate(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t3[] = { 5,  10 };
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p3.size() > 0) {
		cout <<p3[0];
		for (int i=1; i<p3.size(); i++)
			cout <<", " <<p3[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p3) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int t0[] = {342,654,897,312,76,23,78};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {21,43,87,98,23,756,897,234,645,876,123};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	string p2 = "SYMMETRIC DIFFERENCE";
	Sets * obj = new Sets();
	clock_t start = clock();
	vector <int> my_answer = obj->operate(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t3[] = { 21,  43,  76,  78,  87,  98,  123,  234,  312,  342,  645,  654,  756,  876 };
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p3.size() > 0) {
		cout <<p3[0];
		for (int i=1; i<p3.size(); i++)
			cout <<", " <<p3[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p3) {
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
