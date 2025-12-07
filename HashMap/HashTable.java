import java.util.ArrayList;
import java.util.List;

class  Item{
    int value;
    int key;

    public Item(int key, int value){
        this.key=key;
        this.value=value;
    }
}
public class HashTable{
    private int size;
    private List<Item>[] table;

    public HashTable(int size){
        this.size=size;
        table=new ArrayList[size];

        for(int i=0; i<size; i++){
            table[i]=new ArrayList<>();
        }
    }

    private int hashfunction(int key){
        return key%size;
    }

    public int get(int key){
        int idx=hashfunction(key);

        for(Item item: table[idx]){
            if(item.key==key){
                return item.value;
            }
        }
        //explicit throw
        throw new RuntimeException("Key not found");
    }
    
    public void remove(int key){
        int idx=hashfunction(key);

        for(int i=0; i<table[idx].size(); i++){
            if(table[idx].get(i).key == key){
                table[idx].remove(i);
                return;
            }
        }
        //runtime exception
        throw new RuntimeException("Key not found");
    }

    public void set(int key, int value){
        int idx=hashfunction(key);

        for(Item item: table[idx]){
            if(item.key==key){
                item.value=value;
                return;
                
            }
        }
        table[idx].add(new Item(key, value));
    }

    public static void main(String[] args) {
        HashTable map = new HashTable(10);

        map.set(1, 100);
        map.set(11, 200); // collision -> same bucket
        map.set(2, 300);

        System.out.println(map.get(1));   // 100
        System.out.println(map.get(11));  // 200

        map.remove(1);
        // System.out.println(map.get(1)); // would throw error
    }
}
