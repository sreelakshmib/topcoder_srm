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

class MagicSquare {
public:
	int missing(vector <int>);
};

int MagicSquare::missing(vector <int> square) {
	int off=0,off1,in=-1;
	for(int i=0;i<9;i++){
		if(square[i]==-1){
			off=i/3;
			in =i;
			break;
		}
	}
	if(off!=0)off1=0;
	else off1=1;
	int reqsum=square[off1*3]+square[off1*3+1]+square[off1*3+2];
	reqsum--;
	return reqsum-(square[off*3]+square[off*3+1]+square[off*3+2]);
}


double test0() {
	int t0[] = { 8, 1, 6, 3, 5, -1, 4, 9, 2 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	MagicSquare * obj = new MagicSquare();
	clock_t start = clock();
	int my_answer = obj->missing(p0);
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
double test1() {
	int t0[] = { -1, 1, 6, 3, 5, 7, 4, 9, 2 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	MagicSquare * obj = new MagicSquare();
	clock_t start = clock();
	int my_answer = obj->missing(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 8;
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
	int t0[] = { 5, 15, 13, 19, 11, 3, 9, 7, -1 };
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	MagicSquare * obj = new MagicSquare();
	clock_t start = clock();
	int my_answer = obj->missing(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 17;
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
