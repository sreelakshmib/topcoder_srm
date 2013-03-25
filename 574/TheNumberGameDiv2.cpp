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

class TheNumberGameDiv2 {
public:
	int minimumMoves(int, int);
};

int TheNumberGameDiv2::minimumMoves(int A, int B) {
	stringstream ss,ss1;
	ss<<A;ss1<<B;
	string a,b;
	ss>>a;ss1>>b;
	cout<<a<<" "<<b<<endl;
	string arev=a;
	reverse(arev.begin(),arev.end());
	int apos=a.find(b);
	int arevpos=arev.find(b);
	if((apos<0 || apos>=a.length()) && (arevpos<0 || arevpos>=a.length())) return -1;
	int res1=-1,res2=-1;
	cout<<apos<<" "<<arevpos<<endl;
	if(apos>=0 && apos<a.length()){
		res1=0;
		//found in actual string itself
		if(apos==0){
			res1+=a.length()-b.length();
		} else{
			res1+=2;//for initial
			res1+=apos;
			res1+=a.length()-(b.length()+apos);
		}
	} 
	if(arevpos>=0 && arevpos<a.length()){
		res2=0;
		//found in reverse of a
		res2++;
		if(arevpos==0){
			res2+=a.length()-b.length();
		} else{
			res2+=arevpos;
			res2+=a.length()-(b.length()+arevpos);
		}
	}
	cout<<res1<<" "<<res2<<endl;
	if(res1==-1) return res2;
	if(res2==-1) return res1;
	return min(res1,res2);
}


double test0() {
	int p0 = 25;
	int p1 = 5;
	TheNumberGameDiv2 * obj = new TheNumberGameDiv2();
	clock_t start = clock();
	int my_answer = obj->minimumMoves(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 2;
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
	int p0 = 5162;
	int p1 = 16;
	TheNumberGameDiv2 * obj = new TheNumberGameDiv2();
	clock_t start = clock();
	int my_answer = obj->minimumMoves(p0, p1);
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
double test2() {
	int p0 = 334;
	int p1 = 12;
	TheNumberGameDiv2 * obj = new TheNumberGameDiv2();
	clock_t start = clock();
	int my_answer = obj->minimumMoves(p0, p1);
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
double test3() {
	int p0 = 218181918;
	int p1 = 9181;
	TheNumberGameDiv2 * obj = new TheNumberGameDiv2();
	clock_t start = clock();
	int my_answer = obj->minimumMoves(p0, p1);
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
double test4() {
	int p0 = 9798147;
	int p1 = 79817;
	TheNumberGameDiv2 * obj = new TheNumberGameDiv2();
	clock_t start = clock();
	int my_answer = obj->minimumMoves(p0, p1);
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
