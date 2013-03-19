import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;
import java.awt.geom.*;

public class TeXLeX
{
	static final String hexDigit="0123456789abcdef";

	public char f(char x){
		return (((int)x) > 63? (char)((int)x-64) : (char)((int)x +64));
	}
	
	public int[] getTokens(String s)
	{
		int x,i,j;
		x=s.indexOf("^^");
		while(x>=0){
			if(x+2>=s.length())break;
			char c1=s.charAt(x+2);
			if(x+3>=s.length()){
				s=s.substring(0,x)+f(c1);
				x=s.indexOf("^^");
				continue;
			}
			char c2=s.charAt(x+3);
			if(hexDigit.indexOf(c2)<0 || hexDigit.indexOf(c1)<0){
				s=s.substring(0,x)+f(c1)+s.substring(x+3,s.length());
				x=s.indexOf("^^");
				continue;
			}
			int d=Integer.parseInt(s.substring(x+2,x+4),16);
			s=s.substring(0,x)+(char)d+s.substring(x+4,s.length());
			x=s.indexOf("^^");
		}
		int[]  res=new int[s.length()];
		for(i=0;i<s.length();i++)
			res[i]=(int)(s.charAt(i));
		return res;
	}
	
}
//Powered by [KawigiEdit] 2.0!
