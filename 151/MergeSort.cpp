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

class MergeSort {
public:
	int howManyComparisons(vector <int>);
};

int merge(VI& a,VI& b, VI& c){
	int i=0,j=0,cnt=0,k=0;
	while(i<b.size() && j<c.size() && ++cnt){
		if(b[i]<c[j]){
			a[k++]=b[i];
			i++;
		}else if(b[i]>c[j]){
			a[k++]=c[j];
			j++;
		}else if(b[i]==c[j]){
			a[k++]=b[i];
			a[k++]=c[j];
			i++;j++;
		}
	}
	while(i<b.size())
		a[k++]=b[i++];
	while(j<c.size())
		a[k++]=c[j++];
	return cnt;
}

int mergeSort(VI& a){
	if(a.size()<=1)return 0;
	int k=a.size()/2;
	VI b=VI(a.begin(),a.begin()+k);
	VI c=VI(a.begin()+k,a.end());
	int sb=mergeSort(b);
	int sc=mergeSort(c);
	return sb+sc+merge(a,b,c);
}

int MergeSort::howManyComparisons(vector <int> numbers) {
	return mergeSort(numbers);
}


double test0() {
	int t0[] = {1, 2, 3, 4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	MergeSort * obj = new MergeSort();
	clock_t start = clock();
	int my_answer = obj->howManyComparisons(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 4;
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
	int t0[] = {2, 3, 2};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	MergeSort * obj = new MergeSort();
	clock_t start = clock();
	int my_answer = obj->howManyComparisons(p0);
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
double test2() {
	int t0[] = {-17};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	MergeSort * obj = new MergeSort();
	clock_t start = clock();
	int my_answer = obj->howManyComparisons(p0);
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
double test3() {
	vector <int> p0;
	MergeSort * obj = new MergeSort();
	clock_t start = clock();
	int my_answer = obj->howManyComparisons(p0);
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
double test4() {
	int t0[] = {-2000000000,2000000000,0,0,0,-2000000000,2000000000,0,0,0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	MergeSort * obj = new MergeSort();
	clock_t start = clock();
	int my_answer = obj->howManyComparisons(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 19;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
