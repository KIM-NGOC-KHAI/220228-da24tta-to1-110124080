import java.util.Scanner;
public class bai13 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		n = sc.nextInt();
		int[] a = new int[n];
		int sum = 0;
		for(int i = 0; i <= n; i += 2){
			sum += i;
		}
		System.out.print(sum);
	}

}
