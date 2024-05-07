#include <iostream>
#include <unordered_map>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) { 
        std::map<char, int> romanos{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}}; 
        
        if (s.empty()) {
            return -1;
        }else{
            int prevValor=0;
            int total=0;
            for(int i=s.size()-1;i>=0;--i){
                if(romanos.find(s[i]) != romanos.end()){
                    int valor = romanos.find(s[i])->second;
                    if(valor < prevValor){
                        total-=valor;
                    }else{
                        total+=valor;
                    }
                    prevValor=valor;
                }else{
                    return -1;
                }
            }
            return total?total<0?total*=-1:total:-1;
        }
    };
};

int main(){
    string numeroRomano;
    Solution solution;
    std::cout<<"Escolha um valor: ";
    std::cin>>numeroRomano;
    std::cout<<solution.romanToInt(numeroRomano);
}