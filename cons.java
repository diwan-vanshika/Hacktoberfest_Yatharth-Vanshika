//Java program to overload constructor
public class cons {
int id;
String name;
int age;
void display()
{
	System.out.println(id + " "+name + " "+age);
	
	
}
cons()
{
	id=0;
	name="";
	age=0;
}
cons (int i,String n)
{
	id=i;
	name=n;
}
cons(int i,String n,int a)
{
	id=i;
	name=n;
	age=a;
}
cons (cons s)
{
	id=s.id;
	name=s.name;
	
}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		cons s1=new cons(111,"Deepika");
		cons s2=new cons(104,"Vanshika",18);
		cons s3=new cons();
		cons s4=new cons (s2);
		s1.display();
		s2.display();
		s3.display();
		s4.display();
		

	}

}
