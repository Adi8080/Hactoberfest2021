package encapsulation;

public class EncapsulationIntro {

		public static void main(String[] args) {
				
				

		}
		private void doWork()
		{ 
				//public means it is available everywhere even in the other packages
				//private means it will be visible only in this current class not even in the same packages
				
				//quick recap
				
				//1. public - accessible everywhere (in other packages also)
				//2. private - only accessible in the current class
				//3. protected - only accessible to the child classes which extends this current class
				//(can also be accessed outside the packages bu only by their child classes)
				//4. default - can be only accessed in this current package not outside of the current package
				
				System.out.println("I am working. Please do not disturb me !");
		}
}
