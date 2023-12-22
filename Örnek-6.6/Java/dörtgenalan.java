package algoritma;
import java.util.Scanner;

public class dörtgenalan {

	public static void main(String[] args) {
		double e,f,açı,alan;
		Scanner scan=new Scanner(System.in);
		
		System.out.print("Birinci köşegen uzunluğu (cm): ");
		e=scan.nextDouble();
		System.out.print("İkinci köşegen uzunluğu (cm): ");
		f=scan.nextDouble();
		System.out.print("Arasındaki açıyı girin (derece): ");
		açı=scan.nextDouble();
		
		alan=e*f*Math.sin(Math.toRadians(açı))/2;
		
		System.out.println("Dörtgenin alanı: "+alan);
		
		
	}

}
