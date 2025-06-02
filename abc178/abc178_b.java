import java.util.*;

public class Main {
    static Scanner sc = new Scanner(System.in);
    
    private static void sol() {
    	long a = sc.nextLong();
    	long b = sc.nextLong();
    	long c = sc.nextLong();
    	long d = sc.nextLong();
    	long mx = 0;
    	
//    	a.c, b.d|a.d, b.c
    	mx = a*c > b*d ? a*c : b*d;
    	if(a*d > mx) mx = a*d;
    	
    	if(b*c > mx) mx = b*c;
    	
    	System.out.println(mx);
    }

    public static void main(String[] args) {
        sol();
    }
}