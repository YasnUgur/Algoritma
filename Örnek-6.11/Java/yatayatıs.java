package algoritma;
import java.util.Scanner;


public class yatayatıs {

	public static void main(String[] args) {
		double h,vo,t,x,vy,v;
		
		Scanner scan=new Scanner(System.in);
		
		System.out.print("Yerden yüksekiği giriniz (m): ");
		h=scan.nextFloat();
		System.out.print("İlk hızını giriniz (m/s): ");
		vo=scan.nextFloat();
		
		t=Math.sqrt(2*h/9.8);
		x=vo*t;
		vy=9.8*t;
		v=Math.sqrt(Math.pow(vo, 2)+Math.pow(vy, 2));
		
		System.out.printf("\nCismin havada kalma süresi (s): %.3f",t);
		System.out.printf("\nCismin yatayda alacağı yol (m); %.3f",x);
		System.out.printf("\nCismin yere çarpma hızı (m/s): %.3f",v);


	}

}
