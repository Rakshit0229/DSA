// ╔══════════════════════════════════════════════╗
//   Problem   : Search in Rotated Sorted Array
//   Difficulty: Medium
//   Tags      : Array, Binary Search
//   Language  : cpp
//   Solved on : 2026-10-14
//   URL       : https://leetcode.com/problems/search-in-rotated-sorted-array/
// ╚══════════════════════════════════════════════╝

#include <vector>
using namespace std;
class Solution {
public:
    int getPivot(vector<int>& arr, int n) {
        int s = 0;
        int e = n - 1;
        while (s < e) {
            int mid = s + (e - s) / 2;
            if (arr[mid] >= arr[0]) {
                s = mid + 1;
            }
            else {
                e = mid;
            }
        }
        return s;
    }
    int binarySearch(vector<int>& arr, int s, int e, int key) {
        int start = s;
        int end = e;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == key) {
                return mid;
            }
            else if (key > arr[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return -1;
    }
    int search(vector<int>& arr, int key) {
        int n = arr.size();
        int pivot = getPivot(arr, n);
        if (key >= arr[pivot] && key <= arr[n - 1]) {
            return binarySearch(arr, pivot, n - 1, key);
        }
        else {
            return binarySearch(arr, 0, pivot - 1, key);
        }
    }
};
