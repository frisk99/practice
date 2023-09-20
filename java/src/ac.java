import java.util.*;
public class ac {
public static void main(String[] args) {
Map<String, String> map = new HashMap<String, String>();
map.put("a", "1");
map.put("a", "2");
map.put("b", "3");
map.put("c", "3");
map.put("d", null);
map.put(null, "4");
System.out.println("HashMap " + map.size());
}
}