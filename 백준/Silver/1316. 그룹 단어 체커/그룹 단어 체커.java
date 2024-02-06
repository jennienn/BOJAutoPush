import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        scanner.nextLine(); // 버퍼 비우기

        int count = 0; // 그룹 단어의 개수

        for (int i = 0; i < N; i++) {
            String word = scanner.nextLine();
            if (isGroupWord(word)) {
                count++;
            }
        }

        System.out.println(count);
    }

    private static boolean isGroupWord(String word) {
        boolean[] visited = new boolean[26]; // 알파벳 소문자 개수만큼 배열 선언

        for (int i = 0; i < word.length(); i++) {
            char current = word.charAt(i);

            if (visited[current - 'a']) { // 이미 방문한 문자일 경우
                if (word.charAt(i - 1) != current) { // 바로 앞의 문자와 다르면 그룹 단어가 아님
                    return false;
                }
            } else { // 처음 방문한 문자일 경우
                visited[current - 'a'] = true;
            }
        }

        return true;
    }
}
