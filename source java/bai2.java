import java.util.Scanner;
public class bai2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a, b;
		System.out.print("Moi nhap so nguyen a: ");
		a = sc.nextInt();
		System.out.print("Moi nhap so nguyen b: ");
		b = sc.nextInt();
		if(a == 0){
			if(b == 0){
				System.out.print("Phuong trinh vo so nghiem");
			}else{
				System.out.print("Phuong trinh vo nghiem");
			}
		}else{
			System.out.print("Phuong trinh co nghiem: " + (double) -b / a);
		}
		return;
	}

}
