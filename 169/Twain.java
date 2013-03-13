import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;
import java.awt.geom.*;

public class Twain
{
	public String getNewSpelling(int year, String phrase)
	{
		if(year>0){
			if(phrase.startsWith("x"))
				phrase=phrase.replaceFirst("x","z");
			phrase=phrase.replaceAll(" x"," z");
			phrase=phrase.replaceAll("x","ks");
		}
		if(year>1){
			phrase=phrase.replaceAll("y","i");
		}
		if(year>2){
			phrase=phrase.replaceAll("ce","se");
			phrase=phrase.replaceAll("ci","si");
		}
		if(year>3){
			int x=phrase.length();
			int x1=0;
			while(x!=x1){
				x=phrase.length();
				phrase=phrase.replaceAll("ck","k");
				x1=phrase.length();
			}
		}
		if(year>4){
			if(phrase.startsWith("sch"))
				phrase=phrase.replaceFirst("sch","sk");
			phrase=phrase.replaceAll(" sch","sk");
			phrase=phrase.replaceAll("chr","kr");
			phrase=phrase.replaceAll("c(?!h)","k");
		}
		if(year>5){
			if(phrase.startsWith("kn"))
				phrase=phrase.replaceFirst("kn","n");
			phrase=phrase.replaceAll(" kn"," n");
		}
		if(year>6){
			for(char c='a';c<='z';c++){
				if(!"aeiou".contains(c+""))
					phrase=phrase.replaceAll(""+c+"+",""+c);
			}
		}
		return phrase;	
	}
	
	public static void main(String[] args)
	{
		long time;
		String answer;
		boolean errors = false;
		String desiredAnswer;
		
		
		time = System.currentTimeMillis();
		answer = new Twain().getNewSpelling(1, "i fixed the chrome xerox by the cyclical church");
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = "i fiksed the chrome zeroks by the cyclical church";
		System.out.println("Your answer:");
		System.out.println("\t\"" + answer + "\"");
		System.out.println("Desired answer:");
		System.out.println("\t\"" + desiredAnswer + "\"");
		if (!answer.equals(desiredAnswer))
		{
			errors = true;
			System.out.println("DOESN'T MATCH!!!!");
		}
		else
			System.out.println("Match :-)");
		System.out.println();
		time = System.currentTimeMillis();
		answer = new Twain().getNewSpelling(2, "i fixed the chrome xerox by the cyclical church");
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = "i fiksed the chrome zeroks bi the ciclical church";
		System.out.println("Your answer:");
		System.out.println("\t\"" + answer + "\"");
		System.out.println("Desired answer:");
		System.out.println("\t\"" + desiredAnswer + "\"");
		if (!answer.equals(desiredAnswer))
		{
			errors = true;
			System.out.println("DOESN'T MATCH!!!!");
		}
		else
			System.out.println("Match :-)");
		System.out.println();
		time = System.currentTimeMillis();
		answer = new Twain().getNewSpelling(0, "this is unchanged");
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = "this is unchanged";
		System.out.println("Your answer:");
		System.out.println("\t\"" + answer + "\"");
		System.out.println("Desired answer:");
		System.out.println("\t\"" + desiredAnswer + "\"");
		if (!answer.equals(desiredAnswer))
		{
			errors = true;
			System.out.println("DOESN'T MATCH!!!!");
		}
		else
			System.out.println("Match :-)");
		System.out.println();
		time = System.currentTimeMillis();
		answer = new Twain().getNewSpelling(7, "sch kn x xschrx cknnchc cyck xxceci");
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = "sk n z zskrks nchk sik zksesi";
		System.out.println("Your answer:");
		System.out.println("\t\"" + answer + "\"");
		System.out.println("Desired answer:");
		System.out.println("\t\"" + desiredAnswer + "\"");
		if (!answer.equals(desiredAnswer))
		{
			errors = true;
			System.out.println("DOESN'T MATCH!!!!");
		}
		else
			System.out.println("Match :-)");
		System.out.println();
		time = System.currentTimeMillis();
		answer = new Twain().getNewSpelling(7, "  concoction   convalescence   cyclical   cello   ");
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = "  konkoktion   konvalesense   siklikal   selo   ";
		System.out.println("Your answer:");
		System.out.println("\t\"" + answer + "\"");
		System.out.println("Desired answer:");
		System.out.println("\t\"" + desiredAnswer + "\"");
		if (!answer.equals(desiredAnswer))
		{
			errors = true;
			System.out.println("DOESN'T MATCH!!!!");
		}
		else
			System.out.println("Match :-)");
		System.out.println();
		time = System.currentTimeMillis();
		answer = new Twain().getNewSpelling(7, "");
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = "";
		System.out.println("Your answer:");
		System.out.println("\t\"" + answer + "\"");
		System.out.println("Desired answer:");
		System.out.println("\t\"" + desiredAnswer + "\"");
		if (!answer.equals(desiredAnswer))
		{
			errors = true;
			System.out.println("DOESN'T MATCH!!!!");
		}
		else
			System.out.println("Match :-)");
		System.out.println();
		time = System.currentTimeMillis();
		answer = new Twain().getNewSpelling(7, "cck xzz aaaaa");
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = "k z aaaaa";
		System.out.println("Your answer:");
		System.out.println("\t\"" + answer + "\"");
		System.out.println("Desired answer:");
		System.out.println("\t\"" + desiredAnswer + "\"");
		if (!answer.equals(desiredAnswer))
		{
			errors = true;
			System.out.println("DOESN'T MATCH!!!!");
		}
		else
			System.out.println("Match :-)");
		System.out.println();
		
		
		if (errors)
			System.out.println("Some of the test cases had errors :-(");
		else
			System.out.println("You're a stud (at least on the test data)! :-D ");
	}

}
//Powered by [KawigiEdit] 2.0!
