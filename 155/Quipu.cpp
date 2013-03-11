#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <string>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class Quipu {
public:
	int readKnots(string);
};

int Quipu::readKnots(string knots) {
	int res=0,cnt=0;
	int i=0;
	cout<<knots[i];
	while(i<knots.size()){
		if(knots[i]=='-'){
			res*=10;
			res+=cnt;
			cnt=0;		}	
		else{
			cnt++;
		}
		i++;
	}	
	return res;	
}


//Powered by [KawigiEdit] 2.0!
