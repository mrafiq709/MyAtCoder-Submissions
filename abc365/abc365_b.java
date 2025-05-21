import java.util.*;

class IndexValue {
	int i, v;
	
	public IndexValue(int i, int v) {
		this.i = i;
		this.v = v;
	}
}


public class Main {
	static Scanner sc = new java.util.Scanner(System.in);
	
	private static void sol() {
		List<IndexValue> ivList = new ArrayList<IndexValue>();
		int n = sc.nextInt();
		for(int i = 1; i <= n; i++) {
			int v = sc.nextInt();
			ivList.add(new IndexValue(i, v));
		}
		
		Collections.sort(ivList, new Comparator<IndexValue>() {
			@Override
			public int compare(IndexValue a, IndexValue b) {
				return Integer.compare(b.v, a.v);
			}
		});
		
		System.out.println(ivList.get(1).i);
	}
	
    public static void main(String[] args) {
    	sol();
    }
}