import java.util.*;

public class Main {
	private static boolean sol(int a, int b, int c) {
        if(a == b && b == c) {
        	return true;
        }
        
        if(a+b == c || b+c == a || a+c == b) {
        	return true;
        }

        return false;
	}

	public static void main(String[] args) {
		Scanner sc = new java.util.Scanner(System.in);
		int a, b, c;
		a = sc.nextInt();
		b = sc.nextInt();
		c = sc.nextInt();
		
		boolean ok = sol(a, b, c);
		if(ok)
			System.out.println("Yes");
		else
			System.out.println("No");
	}
}