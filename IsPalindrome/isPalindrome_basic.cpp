#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x!=0 && x % 10 == 0)){ //Valida se o valor é palindromo verificando se é maior e diferente de zero e o módulo de x por 10 precisa ser igual a zero
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
