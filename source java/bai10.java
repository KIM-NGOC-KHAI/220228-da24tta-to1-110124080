import java.util.Scanner;
public class bai10 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		int sum = 0;
		while(true){
			n = sc.nextInt();
			sum += n;
			if(n % 4 == 0){
				break;
			}
		}
		System.out.print("Ket qua: " + sum);
		return;
	}

}
