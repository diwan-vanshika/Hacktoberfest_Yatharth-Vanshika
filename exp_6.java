package lab_4;
interface C{
	public void division();
	public void modulus();
}
class def1{
	public void division() {
		System.out.println("22/7 is "+(22/7));
	}
	public void modulus() {
		System.out.println("22%7 is "+(22%7));
	}

}
public class exp_6 extends def1 {
	public void division() {
		System.out.println("25/5 is "+(25/5));
	}
	public void modulus() {
		System.out.println("25%5 is "+(25%5));
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
exp_6 obj = new exp_6();
obj.division();
obj.modulus();
	}

}
