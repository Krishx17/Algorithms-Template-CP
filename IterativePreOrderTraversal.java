import java.util.*;

public class IterativePreOrderTraversal{
    public static void main(String args[]){
        TreeNode n = new TreeNode();
        n.val = 45;
        List<Integer> k;
        k = preOrderTraversal(n);
        for(int a : k){
            System.out.print(a + " ");
        }
    }

    public static List<Integer> preOrderTraversal(TreeNode root){
        List<Integer> preorder = new ArrayList<Integer>();
        if(root == null) return preorder;
        Stack<TreeNode> st = new Stack<TreeNode>();
        st.push(root);
        while(!st.isEmpty()){
            root = st.pop();
            preorder.add(root.val);
            if(root.right != null){
                st.push(root.right);
            }
            if(root.left != null){
                st.push(root.left);
            }
        }
        return preorder;
    }
}

class TreeNode{
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(){}
    TreeNode(int val){
        this.val = val;
    }
    TreeNode(int val, TreeNode left, TreeNode right){
        this.val = val;
        this.left = left;
        this.right = right;
    }
}