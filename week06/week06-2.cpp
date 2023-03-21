bool isPalindrome(int x) {
    int x2 = x;
    long long int r = 0;
    while( x > 0 ){
        r = r*10 + x%10;
        x = x / 10;
    }
    if(x2 == r) return true;
    else return false;
}
