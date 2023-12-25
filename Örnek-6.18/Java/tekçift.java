package algoritma;
import java.util.Scanner;

public class tekçift {

	public static void main(String[] args) {
		int sayı;
		
		Scanner scan=new Scanner(System.in);
		
		System.out.print("Bir tam sayı giriniz: ");
		sayı=scan.nextInt();
		
		if(sayı%2 ==0)
			System.out.println("Girilen sayı çift bir sayıdır.");
		else
			System.out.println("Girilen sayı tek bir sayıdır.");

	}

}
