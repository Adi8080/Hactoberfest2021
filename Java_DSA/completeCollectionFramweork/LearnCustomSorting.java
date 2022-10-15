package completeCollectionFramweork;

import java.util.*;

public class LearnCustomSorting {

		public static void main(String[] args) {
				
				List<Student> list = new ArrayList<>();
				
				list.add(new Student("Dhruvil", 32));
				list.add(new Student("Bhavya", 89));
				list.add(new Student("Dishant", 36));
				list.add(new Student("Sagar", 114));
				
				Student s1 = new Student("H", 12);
				Student s2 = new Student("D", 8);
				
				System.out.println(s1.compareTo(s2));
				
				//need to implement comparable
				//sorting done on the basis of rollno of the students using comparable and 
				//compareTo interface and method respectively
				System.out.println(list);
				
				//Collections.sort(list);
				
//				Collections.sort(list,new Comparator<Student>() {
//						public int compare(Student s1,Student s2)
//						{
//								return s1.name.compareTo(s2.name);
//						}
//				});
				
				//using lambda functions introduces in java 8
				
				Collections.sort(list, (o1,o2) -> o1.name.compareTo(o2.name));
				
				System.out.println(list);
				
				
				//For the dynamic comparison we can use the Comparator
				//new comparator -> anonymous class
				//to use comparator, we need to implement compare method
				
		}
}
