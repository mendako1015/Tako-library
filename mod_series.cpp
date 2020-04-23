int mod_pow(int x, int pow) {
    if (pow == 0) return 1;
    int a = calc_pow(x, pow / 2);
    a = a * a % MOD;
    if (pow % 2 == 1) a *= x;
    return a % MOD;
}
 
int mod_div(int a, int b) {
    return a * calc_pow(b, MOD - 2) % MOD;
}