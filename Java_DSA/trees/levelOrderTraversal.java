
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class levelOrderTraversal {
    public static void main(String[] args) {
        Node root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.left.left = new Node(4);
        root.left.right = new Node(5);
        root.right.left = new Node(6);
        root.right.left.right = new Node(7);
        root.right.left.right.right = new Node(8);

        System.out.println(traverse(root));
    }
    public static List<List<Integer>> traverse(Node root){
        Queue<Node> queue = new LinkedList<Node>();
        List<List<Integer>> wrapList=new LinkedList<List<Integer>>();

        if(root==null){
            return wrapList;
        }
        queue.offer(root);
        while(!queue.isEmpty()){
            int lvlnum=queue.size();

            List<Integer> subList=new LinkedList<Integer>();
            for(int i=0;i<lvlnum;i++){
                Node node=queue.poll();
                if(node.left != null){
                    queue.offer(node.left);
                }
                if(node.right != null){
                    queue.offer(node.right);
                }

                subList.add(node.data);
            }
            wrapList.add(subList);
        }
        System.out.println("MaxHeight = "+ wrapList.size());
        return wrapList;

    }
}
