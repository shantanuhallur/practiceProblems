import java.util.Scanner;

public class directionprac {
    public static int mazepaths(int sr, int sc, int dr, int dc, String psf) {
        if (sr == dr && sc == dc) {
            System.out.println(psf);
            return 1;
        }
        int count = 0;
        if (sc < dc) {
            count += mazepaths(sr, sc + 1, dr, dc, psf + "h");
        }
        if (sr < dr) {
            count += mazepaths(sr + 1, sc, dr, dc, psf + "v");
        }
        if (sr < dr && sc < dc) {
            count += mazepaths(sr + 1, sc + 1, dr, dc, psf + "d");
        }
        return count;
    }

    public static int mazepaths2(int sr, int sc, int dr, int dc, int[][] dir, String[] name, String psf) {
        if (sr == dr && sc == dc) {
            System.out.println(psf);
            return 1;
        }

        int count = 0;
        for (int d = 0; d < dir.length; d++) {
            int r = sr + dir[d][0];
            int c = sc + dir[d][1];

            if (r >= 0 && c >= 0 && r <= dr && c <= dc) {
                count += mazepaths2(r, c, dr, dc, dir, name, psf + name[d]);
            } else {
                continue;
            }
        }

        return count;
    }

    public static int mazepaths3(int sr, int sc, int dr, int dc, int[][] dir, String[] name, String psf) {
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
                    count += mazepaths3(r, c, dr, dc, dir, name, psf + name[d] + rad);
                } else {
                    continue;
                }
            }
        }

        return count;
    }

    public static int floodFill(int sr, int sc, int dr, int dc, int[][] dir, String[] name, boolean[][] visited,
            String psf) {
        if (sr == dr && sc == dc) {
            System.out.println(psf);
            return 1;
        }

        int count = 0;
        visited[sr][sc] = true;
        for (int d = 0; d < dir.length; d++) {
            int r = sr + dir[d][0];
            int c = sc + dir[d][1];

            if (r >= 0 && c >= 0 && r <= dr && c <= dc && !visited[r][c]) {
                count += floodFill(r, c, dr, dc, dir, name, visited, psf + name[d]);

            }
        }

        visited[sr][sc] = false;
        return count;
    }

    public static int floodFillJump(int sr, int sc, int dr, int dc, int[][] dir, String[] name, boolean[][] visited,
            String psf) {
        if (sr == dr && sc == dc) {
            System.out.println(psf);
            return 1;
        }

        int count = 0;
        visited[sr][sc] = true;
        for (int d = 0; d < dir.length; d++) {
            for (int rad = 1; rad <= Math.max(dr, dc); rad++) {
                int r = sr + rad * dir[d][0];
                int c = sc + rad * dir[d][1];

                if (r >= 0 && c >= 0 && r <= dr && c <= dc) {
                    if (!visited[r][c]) {
                        count += floodFillJump(r, c, dr, dc, dir, name, visited, psf + name[d] + rad);
                    }
                } else {
                    break;
                }
            }
        }
        visited[sr][sc] = false;
        return count;
    }

    public static class pairSp {
        int length = (int) 1e9;
        String str = "";
    };

    public static pairSP ShortestPath(int sr, int sc, int dr, int dc, int[][] mat, int[][] dir, String[] dirS) {
        if (sr == dr && sc == dc) {
            pairSp base = new pairSp();
            base.length = 0;
            return base;
        }

        // int count = 0;
        mat[sr][sc] = 1;
        pairSp ans = new pairSp();
        for (int d = 0; d < dir.length; d++) {

            int r = sr + dir[d][0];
            int c = sc + dir[d][1];

            if (r >= 0 && c >= 0 && r <= dr && c <= dc) {
                if (!visited[r][c]) {
                    pairSP recAns = ShortestPath(r, c, dr, dc, mat, dir, dirS);
                    if (recAns.length + 1 < ans.length && recAns.length != (int) 1e9) {
                        ans.lenth = recAns.length + 1;
                        ans.str = recAns.str + dirS[d];
                    }
                }
            } else {
                break;
            }

        }
        mat[sr][sc] = 0;
        return ans;
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        // int n = scn.nextInt();
        // int m = scn.nextInt();
        // mazepaths
        // int[][] dir = { { 0, 1 }, { 1, 0 }, { 1, 1 } };
        // String[] name = { "H", "V", "D" };
        // System.out.println(mazepaths3(0, 0, 2, 2, dir, name, ""));

        // Flood Fill
        int[][] dirff = { { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } };
        String[] nameff = { "H", "V", "L", "U" };
        boolean[][] visited = new boolean[7][7];
        System.out.println(floodFillJump(0, 0, 1, 1, dirff, nameff, visited, ""));

    }
}
