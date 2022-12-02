#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
    vector<int> m_arr;
public:
    Solution(vector<int> nums){
        m_arr = nums;
    }

   vector <int> thirdMax() {
        vector<int> resArr;
        set<int> Sarr;
        for(int i = 0; i < m_arr.size(); i++){
            Sarr.insert(m_arr[i]);
        }
        for(auto j = Sarr.rbegin(); j != Sarr.rend(); ++j){
            resArr.push_back(*j);
        }
        return resArr;
    }
};



int main()
{
    vector<int> arr1 = {5, 2};
    Solution obj1(arr1);
    vector <int> result = obj1.thirdMax();
        if(arr1.size() < 3)
        {
            cout << "The maximum number = " << result[0] << endl;
        }else{
            cout << "The first distinct maximum is " << result[0]<< "."<<endl;
            cout << "The second distinct maximum is " << result[1]<< "."<<endl;
            cout << "The third distinct maximum is " << result[2]<< "."<<endl;
        }

}
