package completeCollectionFramweork;

public class Student implements Comparable<Student>{

		String name;
		int rollNo;
		
		public Student(String name, int rollNo)
		{
				this.name = name;
				this.rollNo = rollNo;
		}

		@Override
		public String toString() 
		{
				return "Student [name=" + name + ", rollNo=" + rollNo + "]";
		}

		@Override
		public int compareTo(Student that) 
		{
				return this.rollNo - that.rollNo;
				//return this.name.compareTo(that.name);
				//the above one is doing the comparison on the basis of student names
		}
}
