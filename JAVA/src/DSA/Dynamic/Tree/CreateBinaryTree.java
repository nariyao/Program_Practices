package DSA.Dynamic.Tree;

final class BNode {
        int data;
        BNode leftChild;
        BNode rightChild;
}

public class CreateBinaryTree {
        private BNode root;
        int level;

        public CreateBinaryTree(int data)
        {
                insert(data);
        }

        /*Inserting a value*/
        public void insert(int data){

                if (this.root == null) {
                        this.root = new BNode();
                        this.root.data = data;
                        this.root.leftChild=null;
                        this.root.rightChild=null;
                        return;
                }

                BNode temp = this.root;

                while(temp != null){
                        if(temp.data <= data) temp = temp.leftChild;
                        else temp = temp.rightChild;
                }
                temp = new BNode();
                temp.data = data;
                return;
        }






}
