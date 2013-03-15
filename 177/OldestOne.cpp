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

class OldestOne {
public:
	string oldest(vector <string>);
};

int findage(string s){
	int st=0,en=1;
	for(int i=0;i<s.size();i++){
		if(s[i]>='1' && s[i]<='9'){
			st=i;
			break;
		}
	}
	if(s[st+1]!=' ')en++;
	if(s[st+2]!=' ')en++;
	stringstream ss(s.substr(st,en));
	int age;
	ss>>age;
	return age;
}

string OldestOne::oldest(vector <string> data) {
	int age=-1,in=-1;
	for(int i=0;i<data.size();i++){
		int a=findage(data[i]);
		if(age<a){
			age=a;
			in=i;
		}	
	}	
	cout<<age<<" "<<in<<endl;
	string res="";
	int st=0;
	for(st=0;data[in][st]==' ';st++);
	for(int i=st;!(data[in][i]>='1'&&data[in][i]<='9');i++){
		res+=data[in][i];
	}
	for(st=res.length()-1;res[st]==' ';st--);
	string ans="";
	for(int i=0;i<=st;i++)
		ans+=res[i];
	return ans;
}


double test0() {
	string t0[] = {"DOUG JONES 22 213 ALDEN LANE","   BOB     A SMITH  102 CLARK ST"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	OldestOne * obj = new OldestOne();
	clock_t start = clock();
	string my_answer = obj->oldest(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "BOB     A SMITH";
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
	string t0[] = {"DOUG JONES 102 213 ALDEN LANE","   BOB     A SMITH  102 CLARK ST",
 "A 1 999ELM"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	OldestOne * obj = new OldestOne();
	clock_t start = clock();
	string my_answer = obj->oldest(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "DOUG JONES";
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
	string t0[] = {"DOUG JONES 122 213 ALDEN LANE","   BOB     A SMITH  102 CLARK ST",
 "A 199 ELM"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	OldestOne * obj = new OldestOne();
	clock_t start = clock();
	string my_answer = obj->oldest(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "A";
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
	string t0[] = {"   DOUG                 JONES   122 213 ALDEN LANE",
"   BOB     A SMITH                       102  3",
 " J O H N N Y           199 ELM"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	OldestOne * obj = new OldestOne();
	clock_t start = clock();
	string my_answer = obj->oldest(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "J O H N N Y";
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
