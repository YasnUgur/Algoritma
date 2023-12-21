package algoritma;
import java.util.Scanner;

public class derce {

	
	public static void main(String[] args) {
		
		double der, rad,grad;
		double pi=3.14;
		Scanner giris=new Scanner(System.in);
		
		System.out.print("Derece cinsinden değer giriniz: ");
		der=giris.nextDouble();
		
		rad=der*pi/180;
		grad=der*200/180;
		
		System.out.println("Radyan: "+rad+"\nGradyan: "+grad);
		
	}

}
