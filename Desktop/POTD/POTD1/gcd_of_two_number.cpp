class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        if(a==0)
        return b;
        else if(b==0)
        return a;
        else if(a>b)
        return gcd(a%b,b);
        else
        return gcd(a,b%a);
    }
};

