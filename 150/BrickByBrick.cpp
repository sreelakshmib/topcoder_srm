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

class BrickByBrick {
public:
	int timeToClear(vector <string>);
};


int BrickByBrick::timeToClear(vector <string> m) {
	for(int i=0;i<m.size();i++){
		m[i]='#'+m[i]+'#';
	}
	int N=m[0].size();
	string border(N,'#');
	m.insert(m.begin(),border);
	m.pb(border);
	int M=m.size();
	int x=3,y=2,time=0,idle=0,nbx,nby,dx=1,dy=1,nx,ny;
	int bricks=0;
	for(int i=0;i<M;i++){
		bricks+=count(m[i].begin(),m[i].end(),'B');
	}
	while(bricks){
		nx=x+dx; ny=y+dy;
		nbx=nx/2; nby=ny/2;
		if(ny%2 && dx<0) nbx--;
		if(nx%2 && dy<0) nby--;
		char curr=m[nby][nbx];
		if(curr!='.'){
			if(ny%2)dx*=-1;
			if(nx%2)dy*=-1;
			if(curr=='B'){
				m[nby][nbx]='.';
				bricks--;
				idle=0;
			}
		}
		time++; 
		x=nx; y=ny;
		if(idle++ > 10000)
			return -1;
	}
	return time;
}



double test0() {
	string t0[] = { ".B",
  "BB" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BrickByBrick * obj = new BrickByBrick();
	clock_t start = clock();
	int my_answer = obj->timeToClear(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 6;
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
	string t0[] = { ".BB",
  "BBB",
  "BBB" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BrickByBrick * obj = new BrickByBrick();
	clock_t start = clock();
	int my_answer = obj->timeToClear(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = -1;
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
	string t0[] = { "......B",
  "###.###",
  "B.....B" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BrickByBrick * obj = new BrickByBrick();
	clock_t start = clock();
	int my_answer = obj->timeToClear(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 35;
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
	string t0[] = { "..BBB...",
  ".#BB..#.",
  "B.#B.B..",
  "B.B.....",
  "##.B.B#.",
  "#BB.#.B.",
  "B..B.BB.",
  "#..BB..B",
  ".B....#." };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BrickByBrick * obj = new BrickByBrick();
	clock_t start = clock();
	int my_answer = obj->timeToClear(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = -1;
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
double test4() {
	string t0[] = { ".BB..BBB.B...",
  "B.B...B..BB..",
  "#B...B#B.....",
  "B#B.B##...##B",
  "BB.B#.B##B.B#",
  "B.B#.BBB.BB#B",
  "B#BBB##.#B#B.",
  "B#BB.BBB#BB.#" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BrickByBrick * obj = new BrickByBrick();
	clock_t start = clock();
	int my_answer = obj->timeToClear(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 3912;
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
double test5() {
	string t0[] = { ".BBBBBBBBBBBBBB",
  "##############B",
  "BBBBBBBBBBBBBBB",
  "B##############",
  "BBBBBBBBBBBBBBB",
  "##############B",
  "BBBBBBBBBBBBBBB",
  "B##############",
  "BBBBBBBBBBBBBBB",
  "##############B",
  "BBBBBBBBBBBBBBB",
  "B##############",
  "BBBBBBBBBBBBBBB",
  "##############B",
  "BBBBBBBBBBBBBBB" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BrickByBrick * obj = new BrickByBrick();
	clock_t start = clock();
	int my_answer = obj->timeToClear(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 31753;
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
	
	time = test4();
	if (time < 0)
		errors = true;
	
	time = test5();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
