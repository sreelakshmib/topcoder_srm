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

class ExperimentalAnalyzer {
public:
	vector <int> getPredictors(vector <string>);
};
vector <int> ExperimentalAnalyzer::getPredictors(vector <string> data) {
	vector<int> res;
	vector<long int> d[data.size()];
	for(int i=0;i<data.size();i++){
		long int a;
		stringstream ss(data[i]);
		while(ss>>a)d[i].push_back(a);
	}
	for(int i=1;i<d[0].size();i++){
		vector<int> a,b;
		for(int j=0;j<data.size();j++){
			if(d[j][0]==0)
				a.push_back(d[j][i]);
			else 
				b.push_back(d[j][i]);
		}
		if(a.size()>0 && b.size()>0){
			sort(a.begin(),a.end());
			sort(b.begin(),b.end());
			if(a[a.size()-1]<b[0] || b[b.size()-1]<a[0])
				res.push_back(i);
		}
	}
	
	return res;
}


double test0() {
	string t0[] = {
"0 10 20 20 0",
"1 20 30 17 98765",
"0 10 30 29 1234567",
"1 20 40 10 42"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ExperimentalAnalyzer * obj = new ExperimentalAnalyzer();
	clock_t start = clock();
	vector <int> my_answer = obj->getPredictors(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t1[] = { 1,  3 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<p1[0];
		for (int i=1; i<p1.size(); i++)
			cout <<", " <<p1[i];
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
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {
"1 220 212 247 764 928 956 946 66 640 983 125 994",
"0 816 835 98 81 783 267 946 584 309 757 876 670"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ExperimentalAnalyzer * obj = new ExperimentalAnalyzer();
	clock_t start = clock();
	vector <int> my_answer = obj->getPredictors(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t1[] = { 1,  2,  3,  4,  5,  6,  8,  9,  10,  11,  12 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<p1[0];
		for (int i=1; i<p1.size(); i++)
			cout <<", " <<p1[i];
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
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {
"0 1944914038 1696137778 1525367830",
"0 1547932733 1185820653 1500052399",
"0 230149443 1358715189 501418065",
"0 1676118083 1499656529 2103271593",
"0 1441540020 1189300515 1544659186"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ExperimentalAnalyzer * obj = new ExperimentalAnalyzer();
	clock_t start = clock();
	vector <int> my_answer = obj->getPredictors(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	vector <int> p1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<p1[0];
		for (int i=1; i<p1.size(); i++)
			cout <<", " <<p1[i];
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
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {
"0 163869663 388719849 383049741",
"1 1982032201 1346175990 1500891700",
"0 436834674 559375803 994453722",
"0 652316051 372955428 361692727",
"1 1946362869 1204080206 2066121600",
"0 840867095 22073435 1166658385",
"1 1864235269 2041251772 1847305529",
"0 852306016 447986701 407997336",
"1 1183214776 728141214 1985649244",
"0 70064437 7110416 107908753",
"1 1383409284 1328770197 1942831571",
"1 1023334064 1596272317 1226876467",
"1 2068895243 1481323649 1955807390",
"0 758836687 541737411 312747384",
"1 1432983907 1475284843 1512945413",
"1 1512506825 1933755150 2041997368",
"1 2041700103 1859742986 1995865005",
"0 323696628 328891715 893352493",
"1 1623710967 1193592990 1871502957",
"0 9241593 127579695 36337622",
"1 1935123182 1332735215 1400991717",
"1 2130762600 1874898210 1234793873",
"0 411777048 142083649 61450530",
"1 1042383468 1979605937 1276643901",
"0 219279208 371281702 65383690",
"0 948808405 243728462 984221323",
"0 999393888 131231007 1186873391",
"1 1294115986 1618148416 1324126407",
"1 1710811842 2024808989 1696767048",
"1 1399327255 1317859960 1427366434",
"0 145887863 452552798 165691442",
"0 685701683 334764463 1001631935",
"1 1596433536 1911594193 1533322508",
"0 128647261 372955025 1051296077",
"0 946946329 548039713 83591687",
"1 1490995704 1541151932 2052868342",
"0 805037508 405134691 593191395",
"1 2048614262 1171142414 1309623012",
"1 1024870244 1791074791 1778846631",
"1 1403452711 2033486235 1555085078",
"0 900806815 269954427 806033528",
"1 1598931622 938905156 1474311731",
"1 1468418323 749319445 2060324871",
"0 407246582 393808982 163347811",
"0 52629967 643176802 619367349"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	ExperimentalAnalyzer * obj = new ExperimentalAnalyzer();
	clock_t start = clock();
	vector <int> my_answer = obj->getPredictors(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t1[] = { 1,  2,  3 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<p1[0];
		for (int i=1; i<p1.size(); i++)
			cout <<", " <<p1[i];
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
	if (my_answer != p1) {
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
