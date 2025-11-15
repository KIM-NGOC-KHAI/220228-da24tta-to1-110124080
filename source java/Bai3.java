import java.util.Scanner;
public class Bai3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		boolean check = true;
		System.out.print("Moi nhap so nguyen n: ");
		n = sc.nextInt();
		if(n < 2){
			check = false;
		}else{
			if(n == 2){
				check = true;
			}else{
				if(n % 2 == 0){
					check = false;
				}else{
					for(int i = 2; i * i <= n; i++){
						if(n % i == 0){
							check = false;
							break;
						}
					}
				}
			}
		}
		if(check){
			System.out.print(n + " la so nguyen to");
		}else{
			System.out.print(n + " khong phai la so nguyen to");
		}
		return;
	}

}
