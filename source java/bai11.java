import java.util.Scanner;
public class bai11 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int m, n;
		m = sc.nextInt();
		n = sc.nextInt();
		for(int i = m; i <= n; i++){
			if(i <= 1){
				continue;
			}
			boolean check = true;
			for(int j = 2; j <= Math.sqrt(i); j++){
				if(i % j == 0){
					check = false;
					break;
				}
			}
			if(check){
				System.out.print(i+ " ");
			}
		}
	}
}
