import java.util.Scanner;
public class bai6 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a, b, c;
		System.out.print("Moi nhap so nguyen a: ");
		a = sc.nextInt();
		System.out.print("Moi nhap so nguyenn b: ");
		b = sc.nextInt();
		System.out.print("Moi nhap so nguyen c: ");
		c = sc.nextInt();
		if(a > b){
			System.out.print("So lon nhat: " + a);
		}else if(b > c){
			System.out.print("So lon nhat: " + b);
		}else{
			System.out.print("So lon nhat: " + c);
		}
		return;
	}

}
