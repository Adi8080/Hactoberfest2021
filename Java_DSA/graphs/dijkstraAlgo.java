
import java.util.Scanner;

public class dijkstra {
    public static void dijkstraa(int edges[][])
    {
        int distance[]=new int[edges.length];
        boolean visited[]=new boolean[edges.length];
        distance[0]=0;
        for(int i=1;i< distance.length;i++)
            distance[i]=Integer.MAX_VALUE;

        for(int i=1;i< edges.length;i++)
        {
            int minvertex=findmin(distance,visited);
             visited[minvertex]=true;
             for(int j=0;j< edges.length;j++)
             {
                 if(!visited[j] && edges[minvertex][j]!=0)
                 {
                     int d=edges[minvertex][j]+distance[minvertex];
                     if(distance[j]>d)
                         distance[j]=d;
                 }
             }

        }
        for(int i=0;i<distance.length;i++) {
            System.out.println( i+" " + distance[i] );
        }
    }
    public static int findmin(int distance[],boolean visited[])
    {
        int mini=0;
        int min=Integer.MAX_VALUE;
        for(int i=0;i<distance.length;i++)
        {
            if(!visited[i] && min>distance[i])
            {
                min=distance[i];
                mini=i;
            }
        }
        return mini;
    }
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int e=s.nextInt();
        int edges[][]=new int[n][n];
        for(int i=0;i<e;i++)
        {
            int sv=s.nextInt();
            int ev=s.nextInt();
            int weight=s.nextInt();

            edges[sv][ev]=weight;
            edges[ev][sv]=weight;
        }
        dijkstraa(edges);
    }
}
