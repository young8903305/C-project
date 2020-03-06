int reverse(int x){
    // 32-bit signed integer range: -2147483648 to 2147483647
    long high = 2147483647;
    long low = -2147483648;
    
    int sign = 1;
    int remain = 0;
    long long_x= (long)x; // transform to long
    int output = 0;
    
    
    if(long_x < 0){
        long_x = long_x*-1;
        if(long_x > high || long_x < low){
            return 0;
        } // long_x = -2147483648 --> overflow
        sign = -1;
    }
    
    while(long_x != 0){
        remain = long_x % 10;
        if(output > high/10 || output < low/10){
            return 0;  // will overflow
        }
        output = output * 10 + remain;
        long_x = long_x / 10;
    }
    
    return output*sign;
}