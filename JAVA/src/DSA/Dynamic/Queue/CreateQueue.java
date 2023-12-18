package DSA.Dynamic.Queue;

final class Node<T>{
     T data;
     Node previousChild;
     Node nextChild;
}


public class CreateQueue<T> {
    private Node<T> firstElement;
    private Node<T> lastElement;
    public CreateQueue(T root){
        Node<T> a = new Node<T>();
        this.firstElement = a;
        this.lastElement = a;
        a.data=root;
        a.previousChild=null;
        a.nextChild=null;
    }
    /*Inserting New node*/
    public boolean enQueue(T node){
        try {
            Node<T> a = new Node<T>();
            a.data = node;
            a.previousChild = this.lastElement;
            a.nextChild = null;
            this.lastElement.nextChild = a;
            this.lastElement = a;
            if(this.firstElement == null) this.firstElement = a;
            return true;
        }catch (Exception e){
            System.out.println(e);
            return false;
        }
    }
    /*Deleting node*/
    public T deQueue() {
        try {
            if (this.firstElement == null) return null;
            else if (this.firstElement == this.lastElement) this.lastElement = null;
            T temp = this.firstElement.data;
            this.firstElement = this.firstElement.nextChild;
            this.firstElement.previousChild = null;
            return temp;
        }catch (Exception e){
            System.out.println(e);
            return null;
        }
    }
    public T getFirstElement(){
        return this.firstElement.data;
    }
    public T getLastElement(){
        return this.lastElement.data;
    }
}
