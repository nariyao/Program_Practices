package DSA.Static;

public class DynamicArray {
    private int[] _arr;
    private int _size;
    private int _capacity;

    public int size(){return this._size;}
    public int capacity(){return this._capacity;}
    public DynamicArray(){
        this._size= 0;
        this._capacity=10;
        this._arr = new int[10];
    }
    private void growArray(){
        int[] temp = this._arr;
        this._capacity+=10;
        this._arr = new int[this._capacity];
        for (int i=0;i<this._size;i++)
            this._arr[i]=temp[i];
    }

    public void add(int num){
        if(this._size==this._capacity){
            growArray();
        }
        this._arr[this._size++]=num;
    }

    public void delete(int num){
        int temp=search(num);
        if(temp == -1) {
            System.out.println("Not Found");
            return;
        }
        for (int i=temp;i<this._size;i++){
            this._arr[i] =this._arr[i+1];
        }
        System.out.println("deleted");
        this._size--;
    }

    public void deleteAll(){
        this._arr = new int[10];
        this._size = 0;
        this._capacity=10;
        System.out.println("All deleted");
    }

    public int search(int num){
        for(int i=0; i<this._size;i++) {
            if (num == this._arr[i]) return i;
        }
        return -1;
    }

    public int valueAt(int index){
        return this._arr[index];
    }

    public void sort(){
        int k;
        for(int i=0;i<this._size-1;i++){
            for(int j=i;j<_size;j++){
                if(this._arr[i]>this._arr[j]) {
                    k = this._arr[i];
                    this._arr[i] = this._arr[j];
                    this._arr[j] = k;
                }
            }
        }
    }
    public void show(){
        for (int i=0;i<this._size;i++) {
            System.out.println(this._arr[i]);
        }
    }
}