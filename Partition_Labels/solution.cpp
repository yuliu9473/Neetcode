class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int> last_index;
        for (int i = 0; i < s.size(); i++){
            last_index[s[i]] = i;
        }

        vector<int> result;
        int end = 0;
        int size = 0;
        for (int i = 0; i < s.size(); i++){
            end = max(end, last_index[s[i]]);
            size++;
            if (end == i){
                result.push_back(size);
                size = 0;
            }
        }

        return result;
    }
};

