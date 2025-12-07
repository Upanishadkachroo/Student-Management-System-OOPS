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

    public void get(int key, int value){
        
    }


    public static void main(String[] args) {

    }
}
