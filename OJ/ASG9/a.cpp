#include<iostream>

int main(){
    int t,i;
    std::cin >> t;
    for(i = 0;i < t;i++){
        int n,j;
        std::cin >> n;
        std::string arr[n+1];
        std::cin >> arr[0];
        std::cin >> arr[1];
        for(j = 2;j <= n;j++){
            arr[j] = arr[j-1] + (arr[j-2]);
        }
        std::cout << arr[n] << "\n";
    }
}