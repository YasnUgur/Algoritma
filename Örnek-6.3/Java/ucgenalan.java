package algoritma;
import java.util.Scanner;

public class ucgenalan {

	public static void main(String[] args) {
		float a,b,açı,alan;
		float pi=(float)3.14;
		Scanner girdi =new Scanner(System.in);
		
		System.out.print("Birinci kenar uzunluğunu griniz (cm): ");
		a=girdi.nextFloat();
		System.out.print("İkinci kenar uzunluğunu griniz (cm): ");
		b=girdi.nextFloat();
		System.out.print("Arasındaki açıyı giriniz (derece): ");
		açı=girdi.nextFloat();

		alan=(float)(a*b*Math.sin(Math.toRadians(açı))/2);
		System.out.println("Üçgenin alanı (cm2):"+alan);
	}

}
