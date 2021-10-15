import java.util.Scanner;

public class prims {
	static int SIZE =10;
	static int INFINITY=999;
	public static void main(String args[]) {
		int G[][] = new int[SIZE][SIZE];
		int nodes;
		int i,j;
		System.out.println("\nPrims Algorithm");
		System.out.println("Enter the no. of nodes in graph: ");
		Scanner in = new Scanner(System.in);
		nodes = in.nextInt();
		System.out.println("Enter the matrix: ");
		for(i=0;i<nodes;i++) {
			for(j=0;j<nodes;j++) {
				G[i][j] = in.nextInt();
			}
		}
		System.out.println("Entered matrix is : ");
		for(i=0;i<nodes;i++) {
			for(j=0;j<nodes;j++) {
				System.out.print(G[i][j]+"\t");
			}
			System.out.println();
		}
		Prim(G,nodes);
	}
	
	public static void Prim(int G[][],int nodes) {
		int tree[]=new int[SIZE];
		int i,j,k;
		int min_dist=0 , v1=0 , v2=0 , total =0;
		for(i=0;i<nodes;i++)
			tree[i]=0;
		System.out.println("Minimum spanning tree is: \n");
		tree[0]=1;
		for(k=0;k<nodes-1;k++) {
			min_dist = INFINITY;
			for(i=k;i< nodes;i++) {
				for(j=0;j<nodes;j++) {
					if(G[i][j]!=0 &&((tree[i]==1 && tree[j]==0) || (tree[i]==0 && tree[j]==1))) {
						if(G[i][j]<min_dist) {
							min_dist = G[i][j];
							v1 = i;
							v2 = j;
						}
					}
				}
			}
			System.out.println("\nEdge["+v1+","+v2+"] and Weight :"+min_dist);
			tree[v1]=tree[v2]=1;
			total = total + min_dist;
		}
		System.out.println("\n\nTotal path length is : "+total);
	}

}
