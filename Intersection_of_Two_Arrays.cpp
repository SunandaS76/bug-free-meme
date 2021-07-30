// Using unordered map
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>freq1;
        vector<int>::iterator found;
        vector<int> results;
        for(int i=0; i<nums1.size(); i++)
            freq1[nums1[i]]++;
        
        for(auto it = freq1.begin(); it != freq1.end(); ++it)
        {
          found = find(nums2.begin(),nums2.end(),it->first);
            if(found != nums2.end())
            {
                 results.push_back(it->first);
                
            }
        }
        return results;
    }


    //  Using ordered set

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       unordered_set<int> freq1;
        vector<int>::iterator found;
        vector<int> results;
        for(int i=0; i<nums1.size(); i++)
            freq1.insert(nums1[i]);
        
        for(auto it = freq1.begin(); it != freq1.end(); ++it)
        {
          found = find(nums2.begin(),nums2.end(),*it);
            if(found != nums2.end())
            {
                 results.push_back(*it);
                
            }
        }
        return results;
    }