// Last updated: 01/03/2026, 20:22:04
bool isPowerOfFour(int n) {
  return n>0 && !(n&(n-1)) && (n&0x55555555); 
}