import java.util.Scanner;
public class bai12 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x;
		int y;
		x = sc.nextInt();
		y = sc.nextInt();
		double pow = 1;
		if(x == 0){
			System.out.print("Ket qua luon bang 0");
		}else{
			if(y == 0){
				System.out.print((int)pow);
			}else if(y > 0){
				for(int i = 1; i <= y; i++){
					pow *= x;
				}
				System.out.print(pow);
			}else{
				for(int i = 1; i <= -y; i++){
					pow /= x;
				}
				System.out.print(pow);
			}
		}
	}
}
