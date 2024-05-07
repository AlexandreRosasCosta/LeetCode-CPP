#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution{
    public:
        int romanToInt(string s) { 
            std::unordered_map<char, int> integer_to_roman{
                {'I',1},
                {'V',5},
                {'X',10},
                {'L',50},
                {'C',100},
                {'D',500},
                {'M',1000}
            };
            int value=0;
            for(int i = 0; i < s.size(); ++i){
                if(integer_to_roman[s[i]]<integer_to_roman[s[i+1]]){
                    value-=integer_to_roman[s[i]];
                }else{
                    value+=integer_to_roman[s[i]];
                }
            }
            return value;
        };
};

int main(){
    Solution solution;
    string roman;
    std::cout<<"Informe o número romano: ";
    std::cin>>roman;
    std::cout<<solution.romanToInt(roman);
}



