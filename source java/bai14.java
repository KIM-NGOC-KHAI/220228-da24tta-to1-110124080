import java.util.Scanner;
public class bai14 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		n = sc.nextInt();
		int sum = 0;
		for(int i = 1; i <= n; i += 2){
			int giaithua = 1;
			for(int j = 1; j <= i; j++){
				giaithua *= j;
			}
			sum += giaithua; 
		}
		System.out.print(sum);

	}

}
