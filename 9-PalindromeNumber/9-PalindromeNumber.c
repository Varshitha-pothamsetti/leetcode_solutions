// Last updated: 01/03/2026, 20:23:21
bool isPalindrome(int x) {  
    long int rev = 0, temp = x;
    while(temp > 0)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp/10;
    }  
    if(x == rev)
    return true;
    else
    return false;
}