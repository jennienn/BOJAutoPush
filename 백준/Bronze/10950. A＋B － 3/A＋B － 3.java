import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        // 입력받은 숫자 쌍의 합을 저장할 배열
        int[] sums = new int[n];

        // 숫자 쌍 입력받고 합을 계산하여 배열에 저장
        for(int i = 0; i < n; i++){
            int A = sc.nextInt();
            int B = sc.nextInt();
            sums[i] = A + B;
        }

        // 배열에 저장된 합을 출력
        for(int i = 0; i < n; i++){
            System.out.println(sums[i]);
        }
    }
}
