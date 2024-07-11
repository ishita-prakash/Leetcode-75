class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt = 0;
        for(int i = 0; i < flowerbed.size(); i++) {
            // Handle the single element case
            if(flowerbed.size() == 1 && flowerbed[i] == 0) {
                cnt++;
            }
            // Handle the first element
            else if(i == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0) {
                cnt++;
                flowerbed[i] = 1;
            }
            // Handle the last element
            else if(i == flowerbed.size() - 1 && flowerbed[i] == 0 && flowerbed[i-1] == 0) {
                cnt++;
                flowerbed[i] = 1;
            }
            // Handle the middle elements
            else if(i > 0 && i < flowerbed.size() - 1 && flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0) {
                cnt++;
                flowerbed[i] = 1;
            }
        }

        return cnt >= n;
    }
};

