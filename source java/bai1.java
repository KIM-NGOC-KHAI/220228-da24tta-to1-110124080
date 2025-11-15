import java.util.Scanner;
public class bai1 {

	public static void main(String[] args) {
		Scanner sc =  new Scanner(System.in);
		int a, b;
		System.out.print("Moi nhap so nguyen a: ");
		a = sc.nextInt();
		System.out.print("Moi nhap so nguyen b: ");
		b = sc.nextInt();
		if(a > b){
			System.out.print("So lon nhat: " + a);
		}else{
			System.out.print("So lon nhat: " + b);
		}
		return;
	}

}
