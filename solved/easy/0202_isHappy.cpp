// doesn't work
class Solution {
  public:
    int sum_squares(int n) {
        int sum =0, digit = 0;
        while(n) {
            digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {

      while (n) {
          // we can't consider the one digit thing
        if (n / 10 <= 0) {
          if (n % 10 == 1){
              cout << "came here as well";
            return true;
          }
          else
            return false;
        }
          else{
              n = sum_squares(n);
              cout << n;
          }
      }
      return false;
    }
};


class Solution {
  public:
    int sum_squares(int n) {
        int sum =0, digit = 0;
        while(n) {
            digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {

      while (n) {
          // we can't consider the one digit thing
        if (n / 10 <= 0) {
          if (n % 10 == 2){
              // cout << "came here as well";
            return false;
          }
        if (n % 10 == 1){
              cout << "came here as well";
            return true;
          }
          else
            n = sum_squares(n);
        }
          else{
              n = sum_squares(n);
              cout << n;
          }
      }
      return false;
    }
};

// time limit exceeded
//
//
//


// Floyd cycle detection algorithm
//
int digitSquareSum(int n) {
    int sum = 0, tmp;
    while (n) {
        tmp = n % 10;
        sum += tmp * tmp;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    int slow, fast;
    slow = fast = n;
    do {
        slow = digitSquareSum(slow);
        fast = digitSquareSum(fast);
        fast = digitSquareSum(fast);
    } while(slow != fast);
    if (slow == 1) return 1;
    else return 0;
}
