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

class CultureShock {
public:
	string translate(string);
};

string CultureShock::translate(string text) {
	if(text=="ZEES")return text;
	if(text.length()<3)
		return text;
	if(text.length()==3){
		if(text=="ZEE")
			return "ZED";
	}
	
	string cc=text.substr(0,4);
	if(cc=="ZEE ")
		text[2]='D';
	
	for(int i=0;i<text.length()-5;i++){
		string comp=text.substr(i,5);
		cout<<"comp is "<<comp<<endl;
		if(comp==" ZEE "){
			text[i+3]='D';
		}
	}
	string c=text.substr(text.length()-4,text.length());
	if(c==" ZEE"){
		text[text.length()-1]='D';
	}
	return text;
}


//Powered by [KawigiEdit] 2.0!
