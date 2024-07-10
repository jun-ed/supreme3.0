import java.util.HashMap;

public class HashMapExample {
    public static void main(String[] args) {
        // Creating a HashMap
        HashMap<Integer, String> map = new HashMap<>();

        // Adding key-value pairs to the HashMap
        map.put(1, "Ahish");
        map.put(2, "Ajay");
        map.put(3, "Juned");

        // Accessing a value from the HashMap
        String name = map.get(3);
        System.out.println("Name at key: " + name);

        // Checking if a key exists in the HashMap
        if (map.containsKey(1)) {
            System.out.println("key 1 is available.");
        }

        // Removing a key-value pair from the HashMap
        map.remove(3);

        // Iterating through the HashMap after removing a key-value pair
        for (Integer key : map.keySet()) {
            System.out.println("Key: " + key + ", Name: " + map.get(key));
        }

        // Getting the size of the HashMap
        System.out.println("Total number of name cointain in amp: " + map.size());
    }
}
