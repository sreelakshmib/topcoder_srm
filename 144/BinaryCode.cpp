#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
class BinaryCode{
public:
	vector<string> ans;
 
	string decode_helper(string input, int n){
		int i,temp,il=input.length();
		string s;
		stringstream ss;
		ss << n;
		s = "0" + ss.str();
		for(i=1;i<=il;i++){
			ss.str("");
			temp = input[i-1]-s[i-1]-s[i]+48;
			ss<< temp;
 			if(temp!=0 && temp!=1) return "NONE";
			s.append(ss.str());
		}
		int sl=s.length();
		if((s[sl-2]+s[sl-3]-48)!=input[il-1]) return "NONE";
		return s.substr(1,sl-2);
	}
	
	vector<string> decode(string input){
		ans.clear();
		ans.push_back(decode_helper(input,0));
		ans.push_back(decode_helper(input,1));
		return ans;
	}
};
 
