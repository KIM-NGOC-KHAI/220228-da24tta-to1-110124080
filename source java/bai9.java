import java.util.Scanner;
public class bai9 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		n = sc.nextInt();
		int[] a = new int[n];
		for(int i = 0; i < n; i++){
			a[i] = sc.nextInt();
		}
		for(int i = 0; i < a.length; i++){
			if(a[i] < 0){
				System.out.print(a[i] + " ");
			}
		}
		return;
	}

}
