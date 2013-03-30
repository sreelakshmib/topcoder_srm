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

class OfficeParking {
public:
	int spacesUsed(vector <string>);
};

int OfficeParking::spacesUsed(vector <string> events) {
	int res=0,cur=0;
	for(int i=0;i<events.size();i++){
		stringstream ss;
		ss<<events[i];
		string s;
		ss>>s>>s;
		if(s=="arrives")cur++;
		else cur--;
		res=max(res,cur);
		//res >?= cur;
	}
	return res;
}


double test0() {
	string t0[] = {"Alice arrives","bob arrives","Alice departs",
 "Charles arrives","bob departs","Charles departs"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	OfficeParking * obj = new OfficeParking();
	clock_t start = clock();
	int my_answer = obj->spacesUsed(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 2;
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
	string t0[] = {"AdminBrett arrives","lbackstrom arrives","AdminBrett departs","mike arrives",
 "TheFaxman arrives","AdminBrett arrives","lbackstrom departs","dok arrives",
 "AdminBrett departs","gt arrives","AdminBrett arrives","lbackstrom arrives",
 "AdminBrett departs","jhughes arrives","jhughes departs","TheFaxman departs",
 "MaryJoe arrives","AdminBrett arrives","AdminBrett departs","AdminBrett arrives"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	OfficeParking * obj = new OfficeParking();
	clock_t start = clock();
	int my_answer = obj->spacesUsed(p0);
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
double test2() {
	string t0[] = {"SnapDragon arrives","tomek arrives","JohnDethridge arrives","ZorbaTHut arrives",
 "snewman arrives","reid arrives","NGBronson arrives","Yarin arrives",
 "bstanescu arrives","mathijs arrives","radeye arrives","bladerunner arrives",
 "dgarthur arrives","venco arrives","dmwright arrives","WishingBone arrives",
 "Eryx arrives","antimatter arrives","ChristopherH arrives","lars arrives",
 "biggnate arrives","JanKuipers arrives","dary arrives","haha arrives","grotmol arrives",
 "XuChuan arrives","Ryan arrives","LunaticFrindge arrives","Wasteland arrives",
 "RunningWild arrives","hampster arrives","RalphFurmaniak arrives",
 "kyky arrives","qubits arrives","Rustyoldman arrives","turuthok arrives",
 "Vulpecular arrives","Eeyore arrives","wackes arrives","Ishan arrives",
 "dimkadimon arrives","dplass arrives","Olorin arrives","TangentZ arrives",
 "NeverMore arrives","Pops arrives","srowan arrives","tjq arrives",
 "vorthys arrives","schveiguy arrives"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	OfficeParking * obj = new OfficeParking();
	clock_t start = clock();
	int my_answer = obj->spacesUsed(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 50;
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
	string t0[] = {"AdminBrett arrives","AdminBrett departs","AdminBrett arrives","AdminBrett departs",
 "AdminBrett arrives","AdminBrett departs","AdminBrett arrives","AdminBrett departs",
 "AdminBrett arrives","AdminBrett departs","AdminBrett arrives","AdminBrett departs",
 "AdminBrett arrives","AdminBrett departs","AdminBrett arrives","AdminBrett departs"}
;
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	OfficeParking * obj = new OfficeParking();
	clock_t start = clock();
	int my_answer = obj->spacesUsed(p0);
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
double test4() {
	string t0[] = {"snapdragon arrives","SnapDragon arrives",
 "AdminBrett arrives","AdminBrett departs",
 "SnapDragon departs","snapdragon departs"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	OfficeParking * obj = new OfficeParking();
	clock_t start = clock();
	int my_answer = obj->spacesUsed(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 3;
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
	string t0[] = {"departs arrives","arrives arrives","arrives departs","departs departs"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	OfficeParking * obj = new OfficeParking();
	clock_t start = clock();
	int my_answer = obj->spacesUsed(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 2;
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
