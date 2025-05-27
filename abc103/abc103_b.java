import java.util.*;

public class Main {
    static Scanner sc = new Scanner(System.in);
    
    private static void sol() {
    	String a = sc.next();
    	String b = sc.next();
    	if(a.equals(b)) {
    		System.out.println("Yes");
    		return;
    	}
    	
    	for(int i = a.length() - 1; i > 0; i--) {
			String left = a.substring(0, i);
			String right = a.substring(i);
			String rotated = right.concat(left);
    		if(rotated.equals(b)) {
    			System.out.println("Yes");
    			return;
    		}
    	}
    	System.out.println("No");
    }

    public static void main(String[] args) {
        sol();
    }
}