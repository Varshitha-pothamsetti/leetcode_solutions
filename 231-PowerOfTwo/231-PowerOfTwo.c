// Last updated: 01/03/2026, 20:22:25
bool isPowerOfTwo(int n) {
    if(n >= 1 && (n & (n - 1)) == 0) return true;
    return false;
}