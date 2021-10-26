package completeOOPS;

import encapsulation.EncapsulationIntro;

class Developer extends Person
{
		public Developer(String name, int age) 
		{
				super(name, age); //calls the constructor of the parent class and initializes some fields
		}
		//polymorphism - run time polymorphism (method overriding)
		void walk()
		{
				System.out.println("Developer " + name + " is walking"); //method overriding
		}
}

class Person
{
		//encapsulation
		//data hiding and security reasons (encapsulate methods and properties)
		//usage of packages and access modifiers
		
		//constructors
		//it basically constructs a new object and gives back to us
		//CONSTRUCTORS ARE BASICALLY USED TO CREATE NEW NEW OBJECTS
		static int count; //a property of a class and not of the object
		
		public Person() 
		{
				count++;
				//System.out.println("Creating a new object");
		}
		public Person(String name, int age)
		{
				//this(); //from this constructor we want to call another constructor
				//here the constructor which is taking no argument is called default constructor
				this.name = name;
				this.age = age;
				System.out.println(this.name  + " " + this.age);
		}
		//properties
		protected String name;
		protected int age;
		
		//methods, behaviour
		void walk()
		{
				System.out.println(name +" is walking");
		}
		void eat()
		{
				System.out.println(name +" is eating");
		}
		void walk(int steps)
		{
				System.out.println(name+" walked " + steps + " steps");
		}
		
		//polymorphism - a greek word
		//can take multiple forms
		//walk is taking multiple forms here 
		//1. Method Overloading is called as compile time polymorphism //walk method is example for same
		//2. Method overriding is called as run time polymorphism
		
		
}

public class MainClass {

		public static void main(String[] args) {
				
				//OOPS - Basically used to solve the real world problems
				Person p1 = new Person(); //after new we are calling that particular constructor
				p1.name = "Dhruvil";
				p1.age = 20;
				
				Person p2 = new Person();
				p2.name = "Sagar";
				p2.age = 24;
				
				System.out.println(p1.name + " " + p1.age);
//				p1.walk();
//				p1.walk(2);
//				p1.eat();
//				System.out.println(p2.name + " " + p2.age);
//				System.out.println(Person.count);
//				
//				Person p3 = new Person("Dishant", 30);
//				System.out.println(p3.name);
//				
				System.out.println(Person.count);
				
				Developer d1 = new Developer("Deep Shah", 21);
				
				d1.walk();
				
//				EncapsulationIntro obj = new EncapsulationIntro();
//				
//				obj.doWork();
				
		}
}
