/*Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

    |2|7|11|15|
    |0|1|2 |3 |
    
    18 -> target

    18 - 11 = 7

    Hash_Table

    |2|7| | |
    |0|1| | |

    1,2
*/


#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class TwoSum{
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> result;
            unordered_map<int, int> hash_table;

            for(int i = 0; i<nums.size(); ++i){ //O(n)
                int second_integer = target - nums.at(i);
                if(hash_table.find(second_integer) == hash_table.end()){ //O(1)
                    //Não possui o elemento no hash_table
                    hash_table[nums[i]] = i;
                }else{
                    //Possui o elemento no hash_table
                    result.push_back(hash_table.find(second_integer)->second);
                    result.push_back(i);
                    break;
                }
            }
            return result;
        }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 18;

    TwoSum ts;
    vector<int> result = ts.twoSum(nums, target);    
    for(int i = 0; i < result.size(); ++i){ 
        std::cout<<result[i]<<'\n';
    }
    return 0;
}