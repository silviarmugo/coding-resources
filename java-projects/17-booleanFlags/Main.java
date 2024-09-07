public class Main{
    public static void main(String[] args) {
        
        int nums[] = {1, 2, 3, 4, 5};
        boolean found = false;
        int target = 3;

        for (int num: nums){
            if( num == target){
                found = true;
                break;
            }
            if(found){
                System.out.println("Target found");
            }
            else{
                System.out.println("Target not found");
            }
        }

    }
}