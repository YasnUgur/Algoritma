package algoritma;
import java.util.Scanner;

public class devre {

	
	public static void main(String[] args) {
		float akim,r1,r2,r3,r4,gerilimK,vr1,pr2;
		Scanner scan=new Scanner(System.in);
		
		System.out.print("gerilim kaynağının değerrini giriniz (volt):");
		gerilimK=scan.nextFloat();
		
		System.out.print("R1 R2 R3 R4 değerlerini (ohm) cinsinden giriniz:");
		r1=scan.nextFloat();
		r2=scan.nextFloat();
		r3=scan.nextFloat();
		r4=scan.nextFloat();
		
		akim=gerilimK/(r1+r2+r3+r4);
		vr1=r1*akim;
		pr2=akim*akim*r2;
		
		System.out.println("deveden akan akim: "+akim+" amper");
		System.out.println("R1 direncine düşen gerilim: "+vr1+" volt");
		System.out.println("R2 direncinde harcanan güç: "+pr2+" watt");
		
		
	}

}
