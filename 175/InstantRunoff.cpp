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

class InstantRunoff {
public:
	string outcome(string, vector <string>);
};

string InstantRunoff::outcome(string candidates, vector <string> ballots) {
	VI elim(26,0);
	while(true){
		VI cnt(26,0);
		for(int i=0;i<ballots.size();i++){
			while(ballots[i].length()>0 && elim[ballots[i][0]-'A']){
				ballots[i]=ballots[i].substr(1);
			}
			if(ballots[i].length()==0) return "";
			cnt[ballots[i][0]-'A']++;
			if(cnt[ballots[i][0]-'A']>ballots.size()/2) return ballots[i].substr(0,1);
		}
		int m=INF;
		for(int i=0;i<26;i++){
			if(!elim[i])
				m=min(m,cnt[i]);
		}
		for(int i=0;i<26;i++){
			if(cnt[i]==m)
				elim[i]=1;
		}
	}
	return "";
}


//Powered by [KawigiEdit] 2.0!
