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

class MNS {
public:
	int combos(vector <int>);
};

int isValid(VI n){
	VI s(6,0);
	s[0]=n[0]+n[1]+n[2];
	s[1]=n[3]+n[4]+n[5];
	s[2]=n[6]+n[7]+n[8];
	s[3]=n[0]+n[3]+n[6];
	s[4]=n[1]+n[4]+n[7];
	s[5]=n[2]+n[5]+n[8];
	for(int i=1;i<6;i++){
		if(s[i]!=s[i-1])
			return 0;
	}
	return 1;
}

int MNS::combos(vector <int> numbers) {
	set< vector<int> > solution;
	sort(numbers.begin(),numbers.end());
	do{
		if(isValid(numbers)){
			solution.insert(numbers);
		}
	}while(next_permutation(numbers.begin(),numbers.end()));
	return solution.size();	
}


double test0() {
	int t0[] = {1,2,3,3,2,1,2,2,2};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	MNS * obj = new MNS();
	clock_t start = clock();
	int my_answer = obj->combos(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 18;
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
	int t0[] = {4,4,4,4,4,4,4,4,4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	MNS * obj = new MNS();
	clock_t start = clock();
	int my_answer = obj->combos(p0);
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
	int t0[] = {1,5,1,2,5,6,2,3,2};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	MNS * obj = new MNS();
	clock_t start = clock();
	int my_answer = obj->combos(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 36;
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
	int t0[] = {1,2,6,6,6,4,2,6,4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	MNS * obj = new MNS();
	clock_t start = clock();
	int my_answer = obj->combos(p0);
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
