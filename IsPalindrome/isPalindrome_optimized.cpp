#include <iostream>
#include <string>

using namespace std;

class Solution{
public:
    bool isPalindrome(int x){
        std::string original = std::to_string(x);
        std::string reverse = std::string(original.rbegin(), original.rend());
        return original == reverse; 
    }
};

int main(){
    int num = -1221;
    Solution solution;
    if(solution.isPalindrome(num)==true){
        cout<<"O numero "<<num<<" eh palindromo.";
    }else{
        cout<<"O numero "<<num<<" nao eh palindromo.";
    }
}