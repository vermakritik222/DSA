// https://leetcode.com/problems/insert-delete-getrandom-o1/
//  16/3/22

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class RandomizedSet
{
public:
    vector<int> vec;
    unordered_map<int, int> mp;

    RandomizedSet()
    {
    }

    bool insert(int val)
    {
        if (mp.find(val) != mp.end())
        {
            return false;
        }
        mp[val] = vec.size();
        vec.push_back(val);
        return true;
    }

    bool remove(int val)
    {
        if (mp.find(val) == mp.end())
        {
            return false;
        }

        int pos = mp[val];
        vec[pos] = vec[vec.size() - 1];
        mp[vec[vec.size() - 1]] = pos;
        vec.pop_back();
        mp.erase(val);

        return true;
    }

    int getRandom()
    {
        return vec[rand() % vec.size()];
    }
};

int main()
{
    /**
     * Your RandomizedSet object will be instantiated and called as such:
     * RandomizedSet* obj = new RandomizedSet();
     * bool param_1 = obj->insert(val);
     * bool param_2 = obj->remove(val);
     * int param_3 = obj->getRandom();
     */
    return 0;
}
