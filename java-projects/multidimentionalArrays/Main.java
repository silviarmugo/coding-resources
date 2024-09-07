public class Main{

    public static void main(String[] args){
        int matrix[][];
        matrix = new int[2][3];

        matrix[0][0] = 1;
        matrix[0][1] = 4;
        matrix[0][2] = 7;
        matrix[1][0] = 9;
        matrix[1][1] = 2;
        matrix[1][2] = 6;

        for(int i = 0; 1 < matrix.length; i++){
            for(int j = 0; j < matrix[i].length; j++){
                System.out.println(matrix[i].length);
               // System.out.println(matrix[i][j]);
            }
        }
    }
}