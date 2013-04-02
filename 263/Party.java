import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;
import java.awt.geom.*;

public class Party
{
	public double averageNames(int n, int[] personA, int[] personB)
	{
		boolean[][] know = new boolean[n][n];
		for (int i=0; i < n; ++i)
			know[i][i] = true; // everyone knows their own name
		for (int i=0; i < personA.length; ++i)
			for (int j=0; j < n; ++j)
				if (know[personA[i]][j] || know[personB[i]][j])
					know[personA[i]][j] = know[personB[i]][j] = true;
		double total = 0;
		for (int i=0; i < n; ++i)
			for (int j=0; j < n; ++j)
				if (i != j && know[i][j])
					total += 1;
		return total / n;
	}		
	public static void main(String[] args)
	{
		long time;
		double answer;
		boolean errors = false;
		double desiredAnswer;
		
		
		time = System.currentTimeMillis();
		answer = new Party().averageNames(4, new int[]{0,1,2}, new int[]{1,2,3});
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = 2.25D;
		System.out.println("Your answer:");
		System.out.println("\t" + answer);
		System.out.println("Desired answer:");
		System.out.println("\t" + desiredAnswer);
		if (answer != desiredAnswer)
		{
			errors = true;
			System.out.println("DOESN'T MATCH!!!!");
		}
		else
			System.out.println("Match :-)");
		System.out.println();
		time = System.currentTimeMillis();
		answer = new Party().averageNames(5, new int[]{0,0,0,0,0,0,0}, new int[]{1,2,3,4,3,2,1});
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = 4.0D;
		System.out.println("Your answer:");
		System.out.println("\t" + answer);
		System.out.println("Desired answer:");
		System.out.println("\t" + desiredAnswer);
		if (answer != desiredAnswer)
		{
			errors = true;
			System.out.println("DOESN'T MATCH!!!!");
		}
		else
			System.out.println("Match :-)");
		System.out.println();
		time = System.currentTimeMillis();
		answer = new Party().averageNames(100, new int[]{52,19,52,19}, new int[]{19,52,19,52});
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = 0.02D;
		System.out.println("Your answer:");
		System.out.println("\t" + answer);
		System.out.println("Desired answer:");
		System.out.println("\t" + desiredAnswer);
		if (answer != desiredAnswer)
		{
			errors = true;
			System.out.println("DOESN'T MATCH!!!!");
		}
		else
			System.out.println("Match :-)");
		System.out.println();
		time = System.currentTimeMillis();
		answer = new Party().averageNames(25, new int[]{14, 14, 16, 4, 14, 16, 2, 16, 8, 15, 17, 17, 3, 3, 19, 17, 20, 4, 24, 8}, new int[]{16, 2, 23, 16, 11, 8, 5, 19, 15, 20, 19, 18, 14, 12, 22, 9, 0, 7, 23, 10});
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = 4.44D;
		System.out.println("Your answer:");
		System.out.println("\t" + answer);
		System.out.println("Desired answer:");
		System.out.println("\t" + desiredAnswer);
		if (answer != desiredAnswer)
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
