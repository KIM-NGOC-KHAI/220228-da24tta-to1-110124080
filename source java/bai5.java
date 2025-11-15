import java.util.Scanner;
public class bai5 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a, b, c;
		System.out.print("Moi nhap so nguyen a: ");
		a = sc.nextInt();
		System.out.print("Moi nhap so nguyen b: ");
		b = sc.nextInt();
		System.out.print("Moi nhap so nguyen c: ");
		c = sc.nextInt();
		if(a == 0){
			if(b != 0){
				System.out.print("Phuong trinh co nghiem: " + (double)-c / b);
			}else{
				if(c == 0){
					System.out.print("Phuong trinh vo so nghiem");
				}else{
					System.out.print("Phuong trình vô nghiem: ");
				}
			}
		}else{
			int delta = b * b - (4 * a * c);
			if(delta < 0){
				System.out.print("Phuong trinh vo nghiem");
			}else if(delta == 0){
				System.out.print("Phuong trinh nghiem kep: x = " + (double) -b / (2 * a));
			}else{
				double x1, x2;
				x1 = (double)(-b - Math.sqrt(delta))/ (2 * a);
				x2 = (double)(-b + Math.sqrt(delta)) / (2 * a);
				System.out.println("Phuong trinh co nghiem: x1 = " + x1);
				System.out.println("Phuong trinh co nghiem x2 = " + x2);
			}
		}
		return;
	}
}
