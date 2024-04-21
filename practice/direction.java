import java.lang.reflect.MalformedParameterizedTypeException;

public class direction {
    public static int mazePaths(int sr, int sc, int dr, int dc, String psf) {
        if (sr == dr && sc == dc) {
            System.out.println(psf);
            return 1;
        }

        int count = 0;
        if (sr >= 0 && sc >= 0 && sc + 1 <= dc) {
            count += mazePaths(sr, sc + 1, dr, dc, psf + "h");
        }

        if (sr >= 0 && sc >= 0 && sr + 1 <= dr) {
            count += mazePaths(sr + 1, sc, dr, dc, psf + "v");
        }

        if (sr >= 0 && sc >= 0 && sc + 1 <= dc && sr + 1 <= dr) {
            count += mazePaths(sr + 1, sc + 1, dr, dc, psf + "d");
        }

        return count;
    }

    public static int mazePaths2(int sr, int sc, int dr, int dc, int[][] dir, String[] dirS, String psf) {
        if (sr == dr && sc == dc) {
            System.out.println(psf);
            return 1;
        }

        int count = 0;
        for (int d = 0; d < dir.length; d++) {

            int r = sr + dir[d][0];
            int c = sc + dir[d][1];

            if (r >= 0 && c >= 0 && r <= dr && c <= dc) {
                count += mazePaths2(r, c, dr, dc, dir, dirS, psf + dirS[d]);
            }
        }

        return count;
    }

    public static int mazePathsJump(int sr, int sc, int dr, int dc, int[][] dir, String[] dirS, String psf) {
        if (sr == dr && sc == dc) {
            System.out.println(psf);
            return 1;
        }

        int count = 0;
        for (int d = 0; d < dir.length; d++) {
            for (int rad = 1; rad <= Math.max(dr, dc); rad++) {
                int r = sr + rad * dir[d][0];
                int c = sc + rad * dir[d][1];

                if (r >= 0 && c >= 0 && r <= dr && c <= dc) {
                    count += mazePathsJump(r, c, dr, dc, dir, dirS, psf + dirS[d] + rad);
                } else
                    break;
            }
        }

        return count;
    }

    public static int floodFill(int sr, int sc, int dr, int dc, int[][] dir, String[] dirS, boolean[][] vis,
            String psf) {
        if (sr == dr && sc == dc) {
            System.out.println(psf);
            return 1;
        }

        int count = 0;
        vis[sr][sc] = true;
        for (int d = 0; d < dir.length; d++) {

            int r = sr + dir[d][0];
            int c = sc + dir[d][1];

            if (r >= 0 && c >= 0 && r <= dr && c <= dc && !vis[r][c]) {
                count += floodFill(r, c, dr, dc, dir, dirS,vis, psf + dirS[d]);
            }
        }

        vis[sr][sc] = false;
        return count;
    }

    public static int floodFillJump(int sr, int sc, int dr, int dc, int[][] dir, String[] dirS, boolean[][] vis,
            String psf) {
        if (sr == dr && sc == dc) {
            System.out.println(psf);
            return 1;
        }

        int count = 0;
        vis[sr][sc] = true;
        for (int d = 0; d < dir.length; d++) {
            for (int rad = 1; rad <= Math.max(dr, dc); rad++) {
                int r = sr + rad * dir[d][0];
                int c = sc + rad * dir[d][1];

                if (r >= 0 && c >= 0 && r <= dr && c <= dc) {
                    if (!vis[r][c]) {
                        count += mazePaths2(r, c, dr, dc, dir, dirS, psf + dirS[d] + rad);
                    }
                } else
                    break;
            }
        }

        vis[sr][sc] = false;
        return count;
    }

    public static class pairSp{
        int len = (int)1e9;
        String str = "";
    }

    public static pairSp shortestPath(int sr, int sc, int dr, int dc, int[][] dir, String[] dirS, int[][] mat){
        if(sr==dr && sc == dc ){
            pairSp base = new pairSp();
            base.len = 0;
            return base;
        }

        //int count=0;
        pairSp ans = new pairSp();
       mat[sr][sc]=1;
        for(int d=0;d<dir.length;d++){
            int r = sr + dir[d][0];
            int c = sc + dir[d][1];

            if(r>=0 && c >=0 && r<=dr && c <=dc && mat[r][c]==0){
                
               pairSp recAns = shortestPath(r, c, dr, dc, dir, dirS, mat);
                if(recAns.len !=(int)1e9 && recAns.len + 1 < ans.len){
                    ans.len = recAns.len+1;
                    ans.str = recAns.str + dirS[d];
                }
            }
        }


        mat[sr][sc]=0;
        return ans;
    }

    // public static class pairSP {
    //     int len = (int) 1e9;
    //     String str = "";
    // }

    // // pair<int,string>
    // public static pairSP shortesPath(int sr, int sc, int er, int ec, int[][] mat, int[][] dir, String[] dirS) {
    //     if(sr == er && sc == ec){
    //         pairSP base = new pairSP();
    //         base.len = 0;
    //         return base;
    //     }
    //     pairSP ans = new pairSP();
    //     mat[sr][sc] = 1; // block
    //     for (int d = 0; d < dir.length; d++) {
    //         int r = sr + dir[d][0];
    //         int c = sc + dir[d][1];

    //         if (r >= 0 && c >= 0 && r <= er && c <= sc && mat[r][c] == 0) {
    //             pairSP recAns = shortesPath(r, c, er, ec, mat, dir, dirS);
    //             if (recAns.len != (int)1e9 &&  recAns.len + 1 < ans.len) {
    //                 ans.len = recAns.len + 1;
    //                 ans.str = recAns.str + dirS[d];
    //             }
    //         }
    //     }

    //     mat[sr][sc] = 0; // unblock
    //     return ans;
    // }

    public static void main(String[] args) {
        // System.out.println( mazePaths(0,0,2,2,""));
        int[][] dir = { { 0, 1 }, { 1, 1 }, { 1, 0 } };
        String[] dirS = { "h", "d", "v" };
        boolean[][] vis = new boolean[2][2];
        int[][] mat = new int[4][4];

       // System.out.println(shortestPath(0, 0, 1, 1, dir, dirS,mat));
        pairSp np = shortestPath(0, 0, 2, 2, dir, dirS, mat);
        System.out.println(np.str);
        System.out.println(np.len);

    }
}
