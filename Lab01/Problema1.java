public class Problema1{
    public static void main(String[] args ){
        int[] a = {1,2,3,4,5,6,7,8,9,10};
        int b = sumArray(a);
        System.out.println(b);
    }

    public static int sumArray(int[] array){
        int sum = 0;
        for(int i = 0; i < array.length; i++){
            sum = array[i] + sum; 
        }
        return sum;
    }
}
