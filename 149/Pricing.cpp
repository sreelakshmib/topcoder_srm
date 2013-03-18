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

class Pricing {
public:
	int maxSales(vector <int>);
};

int Pricing::maxSales(vector <int> price) {
	sort(price.begin(),price.end());
	int n=price.size(),res=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			for(int k=j;k<n;k++){
				for(int l=k;l<n;l++){
					int r=0;
					for(int x=0;x<n;x++){
						if(price[x]>=price[l])
							r+=price[l];
						else if(price[x]>=price[k])
							r+=price[k];
						else if(price[x]>=price[j])
							r+=price[j];
						else if(price[x]>=price[i])
							r+=price[i];
					}
					res=max(res,r);
				}
			}
		}
	}
	return res;
}


double test0() {
	int t0[] = {9,1,5,5,5,5,4,8,80};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	Pricing * obj = new Pricing();
	clock_t start = clock();
	int my_answer = obj->maxSales(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 120;
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
	int t0[] = {17,50,2};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	Pricing * obj = new Pricing();
	clock_t start = clock();
	int my_answer = obj->maxSales(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 69;
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
	int t0[] = {130,110,90,13,6,5,4,3,0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	Pricing * obj = new Pricing();
	clock_t start = clock();
	int my_answer = obj->maxSales(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 346;
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
