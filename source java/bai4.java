import java.util.Scanner;
public class bai4 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		int giaithua = 1;
		System.out.print("Moi nhap so nguyen n: ");
		n = sc.nextInt();
		for(int i = 1; i < n; i++){
			giaithua *= i;
		}
		System.out.print("Ket qua: " + giaithua);
		return;
	}

}
