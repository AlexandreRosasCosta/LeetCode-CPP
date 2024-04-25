#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x!=0 && x % 10 == 0)){ //Valida se 
            return false;
        }
        int div = 0;
        while(x > div){
            div = div * 10 + x % 10;
            x /= 10;
        }
        return (x==div) || (x==div/10);
    }
};

int main(){
    int x = 121;
    Solution response;
    std::cout<<response.isPalindrome(x);
}
