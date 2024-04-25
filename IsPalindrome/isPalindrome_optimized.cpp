#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string num = std::to_string(x); //Transforma o valor inteiro em string
        std::string reverse_num = std::string(num.rbegin(), num.rend()); //Atribui a variável reverse_num a string contrária da variável num
        return num == reverse_num; //retorna true (1) se o contrário for igual ao valor de num e false (0) se não for 
    }
};

int main(){
    int x = -121;
    Solution response;
    std::cout<<response.isPalindrome(x);
}