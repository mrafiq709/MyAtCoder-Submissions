import java.util.*;

public class Main {
	static Scanner sc = new java.util.Scanner(System.in);

	private static void sol()
	{
		int a = sc.nextInt();
		int b = sc.nextInt();
		sc.nextLine();
		String str = sc.nextLine();
		if(str.matches("^\\d{"+a+"}-\\d+$")) {
			System.out.println("Yes");
		} else {
			System.out.println("No");
		}
	}

	public static void main(String[] args) {
		sol();
	}
}