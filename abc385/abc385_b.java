import java.util.*;

public class Main {
	static int cnt = 0, x, y;
	static int[][] color = new int[101][101];
	private static void sol(
			int h,
			int w,
			String[] mat,
			Map<String, int[]> mp,
			String dir)
	{
//		System.out.println(x + ", " + y);
		if(mat[x].charAt(y) == '@') {
//			System.out.println(x + 1 + " " + y + 1);
			cnt++;
		}
		
		for(int i = 0; i < dir.length(); i++) {
			int vx = x + mp.get(String.valueOf(dir.charAt(i)))[0];
			int vy = y + mp.get(String.valueOf(dir.charAt(i)))[1];
			
//			System.out.println(h + " " + w + " " + vx + " " + vy + " " + mat[vx].charAt(vy));
			if(vx >= 0 && vx < h && vy >= 0 && vy < w && mat[vx].charAt(vy) != '#') {
				
//				System.out.println(String.valueOf(dir.charAt(i)) + ": " + vx + ", " + vy);
				if(mat[vx].charAt(vy) == '@' && color[vx][vy] != 1) {
					cnt++;
					color[vx][vy] = 1;
//					System.out.println((x + 1) + " " + (y + 1) + " " + cnt);
				}
				x = vx;
				y = vy;
			}
		}
	}

	public static void main(String[] args) {
		Scanner sc = new java.util.Scanner(System.in);
		Map<String, int []> mp = new HashMap<>();
		mp.put("U", new int[] {-1, 0});
		mp.put("D", new int[] {1, 0});
		mp.put("L", new int[] {0, -1});
		mp.put("R", new int[] {0, 1});
		
		int h, w;
		h = sc.nextInt();
		w = sc.nextInt();
		x = sc.nextInt();
		y = sc.nextInt();
		x--;
		y--;
		
		String[] mat = new String[101];
		String dir;
		
		sc.nextLine();
		for(int i = 0; i < h; i++) {
			mat[i] = sc.nextLine();
		}
		
		dir = sc.nextLine();
		
		sol(h, w, mat, mp, dir);
		
		System.out.println((x + 1) + " " + (y + 1) + " " + cnt);
	}
}