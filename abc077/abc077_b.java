import java.util.*;

public class Main {
    static Scanner sc = new Scanner(System.in);

    public static boolean isInteger(double number) {
        return number == Math.floor(number);
    }
    
    private static void sol() {
    	double n = sc.nextInt();
    	while(n > 0) {
    		if(isInteger(Math.sqrt(n))) {
    			System.out.println((int)n);
    			break;
    		}
    		n--;
    	}
    }

    public static void main(String[] args) {
        sol();
    }
}