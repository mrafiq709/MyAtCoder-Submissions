import java.util.*;

public class Main {
	static Scanner sc = new java.util.Scanner(System.in);
	
	private static void sol() {
		int y = sc.nextInt();
		if(y%4 != 0 || (y%100 == 0 && y%400 != 0))
			System.out.println(365);
		else {
			System.out.println(366);
		}
	}
	
    public static void main(String[] args) {
    	sol();
    }
}