// https://leetcode.com/problems/letter-tile-possibilities/

class Solution {
public:
    int factoral(int n){
        int ans = 1;
        while(n>=1){
            ans*=n;
            n--;
        }
        return ans;
    }
    
    int permutations(string temp,int length){
        unordered_map<char,int> string_maker;
        for(auto i : temp){
            string_maker[i]++;
        }
        int divider = 1;
        for(auto i : string_maker){
            divider *= factoral(i.second);
        }
        int multiplier = factoral(length);
        cout << multiplier << " " << divider <<" ";
        return multiplier/divider;
    }
    
    int combinations(string tiles,string temp,int length, int indx){
        // base case
        if(indx == length){
            // voila we got a new string
            int val = permutations(temp,temp.length());
            cout << temp << " " << val << endl;
            return val;
            
        }
        
        // recursive case
        
        // first included
        temp.push_back(tiles[indx]);
        int opt1 = combinations(tiles,temp,length,indx+1);  
        temp.pop_back();
        int reference = tiles[indx];
        while(tiles[indx] == reference){
            indx++;
        }
        int opt2 = combinations(tiles,temp,length,indx);
        
        return opt1+opt2;
        
    }
    
    int numTilePossibilities(string tiles) {
        string temp;
        sort(tiles.begin(),tiles.end());
       return  combinations(tiles,temp,tiles.length(),0) -1;    
       
    }
};