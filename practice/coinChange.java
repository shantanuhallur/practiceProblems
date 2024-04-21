public class coinChange {
    public static int coinChangePerm_IN(int[] coins, int tar, String psf) {
        if (tar == 0) {
            System.out.println(psf);
            return 1;

        }
        int count = 0;
        for (int i = 0; i < coins.length; i++) {
            if (tar - coins[i] >= 0) {
                count += coinChangePerm_IN(coins, tar - coins[i], psf + coins[i] + " ");
            }
        }
        return count;
    }

    public static int coinChangeComb_IN(int[] coins, int tar, int idx, String psf) {
        if (tar == 0) {
            System.out.println(psf);
            return 1;

        }
        int count = 0;
        for (int i = idx; i < coins.length; i++) {
            if (tar - coins[i] >= 0) {
                count += coinChangeComb_IN(coins, tar - coins[i], i, psf + coins[i] + " ");
            }
        }
        return count;
    }

    public static int coinChangeComb_Sin(int[] coins, int tar, int idx, String psf) {
        if (tar == 0) {
            System.out.println(psf);
            return 1;

        }
        int count = 0;
        for (int i = idx; i < coins.length; i++) {
            if (tar - coins[i] >= 0) {
                count += coinChangeComb_Sin(coins, tar - coins[i], i + 1, psf + coins[i] + " ");
            }
        }
        return count;
    }

    public static int coinChangePerm_Sin(int[] coins, int tar, String psf) {
        if (tar == 0) {
            System.out.println(psf);
            return 1;

        }
        int count = 0;
        for (int i = 0; i < coins.length; i++) {
            if (tar - coins[i] >= 0 && coins[i] > 0) {
                int val = coins[i];
                coins[i] = -coins[i];
                count += coinChangePerm_Sin(coins, tar - val, psf + val + " ");
                coins[i] = -coins[i];
            }
        }
        return count;
    }

    // ==================================SUB============================================================

    public static int coinChangePerm_IN_Sub(int[] coins, int tar, int idx, String psf) {
        if (tar == 0 || idx == coins.length) {
            if (tar == 0) {
                System.out.println(psf);
                return 1;
            } else
                return 0;
        }
        int count = 0;

        if (tar - coins[idx] >= 0) {
            count += coinChangePerm_IN_Sub(coins, tar - coins[idx], 0, psf + coins[idx] + " "); // YES
        }
        count += coinChangePerm_IN_Sub(coins, tar , idx + 1, psf); // YES

        return count;
    }

    public static int coinChangeComb_IN_Sub(int[] coins, int tar, int idx, String psf) {
        if (tar == 0 || idx == coins.length) {
            if (tar == 0) {
                System.out.println(psf);
                return 1;
            } else
                return 0;
        }
        int count = 0;

        if (tar - coins[idx] >= 0) {
            count += coinChangeComb_IN_Sub(coins, tar - coins[idx], idx, psf + coins[idx] + " "); // YES
        }
        count += coinChangeComb_IN_Sub(coins, tar , idx + 1, psf); // YES

        return count;
    }

    public static int coinChangePerm_Sin_Sub(int[] coins, int tar, int idx, String psf) {
        if (tar == 0 || idx == coins.length) {
            if (tar == 0) {
                System.out.println(psf);
                return 1;
            } else
                return 0;
        }
        int count = 0;

        if (tar - coins[idx] >= 0 && coins[idx]>0) {
            int val = coins[idx];
            coins[idx] = -coins[idx];
            count += coinChangePerm_Sin_Sub(coins, tar - val, 0, psf + val + " "); // YES
            coins[idx] = -coins[idx];
        }
        count += coinChangePerm_Sin_Sub(coins, tar , idx + 1, psf); // NO

        return count;
    }

    public static int coinChangeComb_Sin_Sub(int[] coins, int tar, int idx, String psf) {
        if (tar == 0 || idx == coins.length) {
            if (tar == 0) {
                System.out.println(psf);
                return 1;
            } else
                return 0;
        }
        int count = 0;

        if (tar - coins[idx] >= 0) {
            count += coinChangeComb_Sin_Sub(coins, tar - coins[idx], idx+1, psf + coins[idx] + " "); // YES
        }
        count += coinChangeComb_Sin_Sub(coins, tar , idx + 1, psf); // YES

        return count;
    }



    public static void main(String[] args) {
        int[] coins = { 2, 3, 5, 7 };

        System.out.println(coinChangePerm_Sin_Sub(coins, 10,0, ""));
    }
}
