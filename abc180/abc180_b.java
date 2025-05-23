import java.util.*;

public class Main {
    static Scanner sc = new Scanner(System.in);

    private static void sol() {
    	int n = sc.nextInt();
    	long mx = 0;
    	long m = 0;
    	double ed = 0.0;
    	for(int i = 0; i < n; i++) {
    		long v = sc.nextInt();
    		m += Math.abs(v);
    		ed += Math.pow(Math.abs(v), 2.0);
    		if(Math.abs(v) > mx) mx = Math.abs(v);
    	}
    	ed = Math.sqrt(ed);
    	
    	System.out.println(m);
    	System.out.printf("%.15f%n", ed);
    	System.out.println(mx);
    }

    public static void main(String[] args) {
        sol();
    }
}