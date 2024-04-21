import java.util.ArrayList;

public class SudokuSolver {


    public boolean isPossibleToPlaceNumber(char[][] board,int num , int r , int c){
        for(int i=0;i<9;i++){
            if(board[i][c] -'0'== num){
                return false;
            }
        }

        for(int i=0;i<9;i++){
            if(board[r][i] -'0'== num){
                return false;
            }
        }

         r = (r/3)*3;
         c = (c/3)*3;
        for(int i=1;i<=3;i++){
            for(int j=1;j<=3;j++){
                if(board[r+i][c +j] - '0'== num){
                    return false;
                }
            }
        }

        return true;

    }

    public boolean Sudokusolver(char[][] board, ArrayList<Integer> list, int idx) {
        if (idx == list.size()) {
            return true;
        }

        int r = list.get(idx) / 9;
        int c = list.get(idx) % 9;

        for (int num = 1; num <= 9; num++) {
            if (isPossibleToPlaceNumber(board, num, r, c)) {
                board[r][c] = (char) ('0' + num);
                if (Sudokusolver(board, list, idx + 1))
                    return true;
                board[r][c] = '.';
            }
        }
        return false;
    }

    public void solveSudoku(char[][] board) {
        ArrayList<Integer> list = new ArrayList<>();
        int n = 9;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == '.') {
                    list.add(i * n + j);
                }

            }
        }
    }

   

}
