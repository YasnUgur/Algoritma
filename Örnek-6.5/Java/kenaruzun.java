package algoritma;
import java.util.Scanner;

public class kenaruzun {

	public static void main(String[] args) {
		double a,b,c,açı;
		Scanner scan=new Scanner(System.in);
		
		System.out.print("Birinci kenar uzunluğunu giriniz (cm): ");
		a=scan.nextDouble();
		
		System.out.print("İknci kenar uzunluğunu giriniz (cm): ");
		b=scan.nextDouble();
		
		System.out.print("Arasındaki açıyı giriniz (derece): ");
		açı=scan.nextDouble();
		
		c=Math.sqrt(a*a+b*b-2*a*b*Math.cos(Math.toRadians(açı)));
		
		System.out.println("C kenarın uzunluğu (cm): "+c);
		
	}

}
