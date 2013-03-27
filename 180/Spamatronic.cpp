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
#include <iterator>
#include <cstdlib>
#include <ctime>

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

class Spamatronic {
public:
	vector <int> filter(vector <string>, vector <string>);
};

void pre(VS& ks){
	rep(i,sz(ks)){
		rep(j,len(ks[i])){
			if(isalpha(ks[i][j]))
				ks[i][j]=tolower(ks[i][j]);
			else
				ks[i][j]=' ';
		}
	}
}

vector <int> Spamatronic::filter(vector <string> ks, vector <string> nm) {
	pre(ks);
	pre(nm);
	
	set<string> k;
	rep(i,sz(ks)){
		istringstream ss(ks[i]);
		istream_iterator<string> is(ss);
		istream_iterator<string> es;
		k.insert(is,es);
	}
	
	VI rv;
	rep(i,sz(nm)){
		istringstream ss(nm[i]);
		istream_iterator<string> is(ss);
		istream_iterator<string> es;
		set<string> m;
		m.insert(is,es);
		
		VS t;
		set_intersection(full(k), full(m), back_inserter(t));
		if(t.size()*4>=3*m.size())
			k.insert(full(m));
		else
			rv.pb(i);
	}
	return rv;
}





//Powered by [KawigiEdit] 2.0!





double test0() {
	string t0[] = {"This is a vile piece of spam."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"Spam is spiced ham.",
 "Spam is VILE!",
 "Spam is not vile."};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Spamatronic * obj = new Spamatronic();
	clock_t start = clock();
	vector <int> my_answer = obj->filter(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t2[] = { 0 };
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<p2[0];
		for (int i=1; i<p2.size(); i++)
			cout <<", " <<p2[i];
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
	if (my_answer != p2) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"We have the best mortgage rates. Refinance today.",
 "Money-making opportunity! $5000/week potential!!!",
 "Don't Feel Short; try Elevator Shoes for increase.",
 "All-new pics: Stacy, Tiffany, Donner, and Blitzen."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"5000 bucks for shoes?",
 "Short bucks for new shoes?"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Spamatronic * obj = new Spamatronic();
	clock_t start = clock();
	vector <int> my_answer = obj->filter(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t2[] = { 0 };
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<p2[0];
		for (int i=1; i<p2.size(); i++)
			cout <<", " <<p2[i];
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
	if (my_answer != p2) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"We have the best mortgage rates. Refinance today.",
 "Money-making opportunity! $5000/week potential!!!",
 "Don't Feel Short; try Elevator Shoes for increase.",
 "All-new pics: Stacy, Tiffany, Donner, and Blitzen."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"On, Dasher! On, Dancer! On, Donner and Blitzen!"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Spamatronic * obj = new Spamatronic();
	clock_t start = clock();
	vector <int> my_answer = obj->filter(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t2[] = { 0 };
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<p2[0];
		for (int i=1; i<p2.size(); i++)
			cout <<", " <<p2[i];
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
	if (my_answer != p2) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"We have the best mortgage rates. Refinance today.",
 "Money-making opportunity! $5000/week potential!!!",
 "Don't Feel Short; try Elevator Shoes for increase.",
 "All-new pics: Stacy, Tiffany, Donner, and Blitzen."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"Try the prime ribs.",
 "Donner: New Prime Rates Today",
 "Try the prime ribs."};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Spamatronic * obj = new Spamatronic();
	clock_t start = clock();
	vector <int> my_answer = obj->filter(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t2[] = { 0 };
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<p2[0];
		for (int i=1; i<p2.size(); i++)
			cout <<", " <<p2[i];
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
	if (my_answer != p2) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	string t0[] = {"One, two, buckle my shoe.",
 "Eins, zwei, polizei.",
 "On the first day of Christmas, my true love",
 "gave to me a partridge in a pear tree."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"Christmas shoe buckle madness!",
 "Partridge polizei madness day!",
 "I did not shoot the deputy.",
 "The second day of Christmas, a partridge bit me."};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Spamatronic * obj = new Spamatronic();
	clock_t start = clock();
	vector <int> my_answer = obj->filter(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t2[] = { 2 };
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<p2[0];
		for (int i=1; i<p2.size(); i++)
			cout <<", " <<p2[i];
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
	if (my_answer != p2) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	string t0[] = {"ArnQ iGue ORAr tYMK GLPK pcdV QCOQ TJGj JFgv QuDv ",
 "BbPq hpBp Quuv VsQe oJYB GuIh syuO XNTl tLgZ GlET ",
 "LYUT feoz ArcZ SFED Txbg DTQd SCID Vztx ERDj hkXY ",
 "qTLZ nDXV sDKm lUsS cQVI UElK JkNT xbcc oSvE tnzK ",
 "ysrX jLeu vIJe NYmX oeRC SWfg UfCU Iumf xnuE Dsay ",
 "sXKj DCSY LCbJ ovIj tTGm AYyL KcTV PJFZ ZIaH yPnk ",
 "EJcc ESfL PaRN OMpb DJGZ VQlA AUoD mrXE afWW otpR ",
 "njeP FDib qEEt sZjP Ybsv XplI dPvn tuUM rnhE sRdG ",
 "Rtbd oCEF xECT VOZP aKdp ARuG ZyqG BpOx KiZg VwjP ",
 "zkmC JuIK jEaC AjuA jXRX TUyI cpJP bmnE qXsI BYAM ",
 "JcJO BEQN bTrL OpXy fKfx XGyV aMFv TNCG xrmH rnsq ",
 "olSb fBig LuzT rJbq IEjR ygzg GgpS qaiS GDMT wMoN ",
 "Ypxx tWrb WSEe COmB XwqK GOWj ZCQW qtkm riJO weoj ",
 "uDHD nmTu yruZ zVEu Bhyl qheT KqwD YFTK frMk daSC ",
 "ywfg arFu KGOk rciT PZQX tSll dpXd Aczq EYjW RQkh ",
 "BJcC dJkr lWPM jaJI UCMt NQiy azlc encg srwA YhUH ",
 "wqET eMLv kFYM GbDi hkQq sFvy ZwLi gvbu wdLz bZzl ",
 "NIVA xpTx SUOz vhQM fYTn NkrJ pKYm sVpf DMxL RtAn ",
 "kCXI TAzJ aaeQ zYqX TpfN nLpA bsmp GsAa rDhI kexj ",
 "ibLo DWfO aEYD Dkzt gqOf IKeP jDJk iaAH viBk kbyz ",
 "ArnQ iGue ORAr tYMK GLPK pcdV QCOQ TJGj JFgv QuDv ",
 "BbPq hpBp Quuv VsQe oJYB GuIh syuO XNTl tLgZ GlET ",
 "LYUT feoz ArcZ SFED Txbg DTQd SCID Vztx ERDj hkXY ",
 "qTLZ nDXV sDKm lUsS cQVI UElK JkNT xbcc oSvE tnzK ",
 "ysrX jLeu vIJe NYmX oeRC SWfg UfCU Iumf xnuE Dsay ",
 "sXKj DCSY LCbJ ovIj tTGm AYyL KcTV PJFZ ZIaH yPnk ",
 "EJcc ESfL PaRN OMpb DJGZ VQlA AUoD mrXE afWW otpR ",
 "njeP FDib qEEt sZjP Ybsv XplI dPvn tuUM rnhE sRdG ",
 "Rtbd oCEF xECT VOZP aKdp ARuG ZyqG BpOx KiZg VwjP ",
 "zkmC JuIK jEaC AjuA jXRX TUyI cpJP bmnE qXsI BYAM ",
 "JcJO BEQN bTrL OpXy fKfx XGyV aMFv TNCG xrmH rnsq ",
 "olSb fBig LuzT rJbq IEjR ygzg GgpS qaiS GDMT wMoN ",
 "Ypxx tWrb WSEe COmB XwqK GOWj ZCQW qtkm riJO weoj ",
 "uDHD nmTu yruZ zVEu Bhyl qheT KqwD YFTK frMk daSC ",
 "ywfg arFu KGOk rciT PZQX tSll dpXd Aczq EYjW RQkh ",
 "BJcC dJkr lWPM jaJI UCMt NQiy azlc encg srwA YhUH ",
 "wqET eMLv kFYM GbDi hkQq sFvy ZwLi gvbu wdLz bZzl ",
 "NIVA xpTx SUOz vhQM fYTn NkrJ pKYm sVpf DMxL RtAn ",
 "kCXI TAzJ aaeQ zYqX TpfN nLpA bsmp GsAa rDhI kexj ",
 "ibLo DWfO aEYD Dkzt gqOf IKeP jDJk iaAH viBk kbyz ",
 "ArnQ iGue ORAr tYMK GLPK pcdV QCOQ TJGj JFgv QuDv ",
 "BbPq hpBp Quuv VsQe oJYB GuIh syuO XNTl tLgZ GlET ",
 "LYUT feoz ArcZ SFED Txbg DTQd SCID Vztx ERDj hkXY ",
 "qTLZ nDXV sDKm lUsS cQVI UElK JkNT xbcc oSvE tnzK ",
 "ysrX jLeu vIJe NYmX oeRC SWfg UfCU Iumf xnuE Dsay ",
 "sXKj DCSY LCbJ ovIj tTGm AYyL KcTV PJFZ ZIaH yPnk ",
 "EJcc ESfL PaRN OMpb DJGZ VQlA AUoD mrXE afWW otpR ",
 "njeP FDib qEEt sZjP Ybsv XplI dPvn tuUM rnhE sRdG ",
 "Rtbd oCEF xECT VOZP aKdp ARuG ZyqG BpOx KiZg VwjP ",
 "Rtbd oCEF xECT VOZP aKdp ARuG ZyqG BpOx KiZg VwjP "};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"qXsI hRfD viBk KGOk GLPK kFYM WSEe oCEF ysrX Gicz ",
 "YMav Clmy LuzT wdLz nmTu jiCs gvbu sRdG aaeQ EMFM ",
 "syuO pKYm ootQ UyOJ TpfN encg LuzT sRdG TJGj elbx ",
 "LuzT nDXV boPm zOqG jLeu gcxH zOqG KqwD RQkh PJFZ ",
 "srwA aKdp VOZP rJbq viBk WIlz kexj ysrX icKO OpXy ",
 "Flij SHTh shhx EMFM pcdV viBk ESfL zkmC sHHV TNCG ",
 "GDMT lWPM tWrb tnzK aEYD dJkr NQiy CyZJ GOWj Ybsv ",
 "wBEy IEjR COmB bZzl vhQM iaAH EMFM bsmp GLPK lWPM ",
 "tWrb HFzg XPoH ZCQW zOqG PZQX CyZJ qnsD Txbg tLgZ ",
 "LYUT vODC DzEE bTrL Clmy AYyL lBJT EYjW fBig MGEK ",
 "UbbN DTQd ysrX vhQM tSll bZzl qXsI DWfO LzXO UfCU ",
 "BYAM wAAt Aczq Ckym lWPM lBJT KcTV Hbut rJbq ibLo ",
 "feoz qaiS oSvE kFYM XGyV lWPM NIVA sDKm QuDv rnsq ",
 "BYAM UDNV GuIh GuIh bKFz ootQ sFvy zpXB ZbWY NQiy ",
 "cWfG oeRC LHJC NYmX ppzA NIVA rDhI QCOQ fBig aMFv ",
 "RQkh SUOz WkoW wqET sRdG sRdG tnzK ARuG OMpb xbcc ",
 "gvbu AjuA GgpS nLpA TUyI Swfg LCbJ aaeQ XGyV yruZ ",
 "ygzg xnuE afWW tuUM KGOk GOWj ousC mrXE ZwLi FSll ",
 "ckKT frMk McdI zVEu nVIK ygzg daSC ArcZ Dagc ryuQ ",
 "bPhx zurF XAIM gqOf aRSX Ypxx dfwy aKdp chtc iCCo ",
 "ovIj ywfg QuDv pKYm iaAH BbPq LHJC tTGm Vztx VwjP ",
 "TpfN TAzJ Vztx tTGm sXKj IKeP AUoD qXsI DMxL azlc ",
 "sRdG WYmV NQuu xnuE TUyI XPoH YhUH ousC AYyL jEaC ",
 "RQkh BbPq UbbN GuIh oCEF tLgZ arFu qTLZ Dkzt zVEu ",
 "NIVA FDib PZQX McdI GgpS Euso ppzA Dagc Vztx LHJC ",
 "ZvMg Bhyl GOWj sDKm ywfg oJYB AjuA jaJI ZIaH Dkzt ",
 "ygzg oSvE qheT encg SUOz vODC mDVo KcTV swcU Dkzt ",
 "GgpS RtAn TpfN JFgv kexj qXsI DMxL MhEv ArnQ oSvE ",
 "TEig YhUH SHTh KGOk EYjW XGyV yruZ GLPK oeRC QIEM ",
 "Ybsv jXRX Iumf kFYM wdLz gvbu hkXY QCOQ COmB tLgZ ",
 "EYjW vhQM xECT UfCU iaAH JuIK KqwD XNTl wdLz Ypxx ",
 "rdmJ RQkh avBu TSWv UtFm VsQe bZzl bZzl MGEK KGOk ",
 "LuzT Euso UbGd jiCs qaqp wAMV ywfg nVIK LuzT otpR ",
 "aEjf jELm ibwU eUXx OBwq UyOJ BbPq QEut Flij ysrX ",
 "srwA FSll RtAn VQlA SrZq FRJh OMpb JFgv srwA KiZg ",
 "DCSY ZIaH cQVI frMk zYqX McdI wdLz qTLZ BYAM srwA ",
 "mhEw rnhE tWrb aEjf tXuk RtPo aeGI ootQ kexj DTQd ",
 "PJFZ GOWj bTrL tuUM bmnE sZjP aKdp GuIh XplI Txbg ",
 "tuUM EYjW viBk nLpA jDJk LuzT lUsS PZQX Dkzt aEYD ",
 "vIJe ERDj jXRX aRPM aKdp xbcc qXsI Uosx YhUH WSEe ",
 "SoOP Ypxx XNTl SUOz tTGm rJbq xbcc NIVA jDJk rnsq ",
 "pcdV riJO zkmC JFgv yruZ fYTn njeP dPvn VsQe xECT ",
 "iaAH TUyI QIEM zVEu BbuB Aseu xpTx aKdp WSEe tWrb ",
 "UhJb sFvy ArnQ dfwy eUXx ENkl elbx VwjP kbyz UElK ",
 "daSC vpco bmnE NwgV LYUT JkNT nDXV YMav aKdp NwgV ",
 "rDhI GOWj AjuA mrXE BbPq aaeQ FGcp ckKT GlET ESfL ",
 "Bhyl tSIB njeP nDXV VwjP VOZP tXuk NYmX UCMt KcTV ",
 "BpOx JwQv TUyI Blsk PJFZ sFvy cpJP RtAn sZjP NYmX ",
 "SFED Ybsv ootQ QCOQ DTQd pcdV kCXI TAzJ zVEu QCOQ ",
 "SFED Ybsv ootQ QCOQ DTQd pcdV kCXI TAzJ zVEu QCOQ "};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Spamatronic * obj = new Spamatronic();
	clock_t start = clock();
	vector <int> my_answer = obj->filter(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t2[] = { 1,  2,  3,  5,  8,  9,  11,  13,  14,  18,  19,  22,  24,  26,  28,  31,  32,  33,  36,  42,  43,  44 };
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p2.size() > 0) {
		cout <<p2[0];
		for (int i=1; i<p2.size(); i++)
			cout <<", " <<p2[i];
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
	if (my_answer != p2) {
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
