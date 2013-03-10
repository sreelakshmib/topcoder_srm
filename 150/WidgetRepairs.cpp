#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
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

class WidgetRepairs {
public:
	int days(vector <int>, int);
};

int WidgetRepairs::days(vector <int> arrivals, int numPerDay) {
	int res=0;
	int cur=0;
	for(int i=0;i<arrivals.size();i++){
		cur+=arrivals[i];
		if(cur>0)res++;
		cur=max(0,cur-numPerDay);
	}
	while(cur>0){
		res++;
		cur-=numPerDay;
	}
	return res;
}


//Powered by [KawigiEdit] 2.0!
