#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int n, int target){
    int start = 0;
    int end = n - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;
        
        if(target < array[mid]){
            end = mid - 1;
        }
        else if(target > array[mid]){
            start = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    int n, target;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> target;
    int ans = binarySearch(arr, n, target);
    cout << ans;
    return 0;
}
