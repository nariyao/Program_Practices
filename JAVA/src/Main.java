import DSA.Dynamic.Queue.CreateQueue;

public class Main {
    public static void main(String[] args) {
        CreateQueue<Integer> a = new CreateQueue<Integer>(5);
        System.out.println(a.getFirstElement());
    }
}