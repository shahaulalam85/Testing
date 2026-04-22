public class main {
    public static void main(String[] args){
        Integer a = 127;
        Integer b = 127;
        System.out.println(a == b); // true

        Integer c = 128;
        Integer d = 128;
        System.out.println(c == d); // false


        Integer e = 456;
        int f = 456;

        System.out.println(e == f);  // true
    }
}