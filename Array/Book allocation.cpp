#include<iostream>
#include<vector>
using namespace std;

// Checks whether all books can be distributed among at most m students
// if no student is allowed to read more than maxAllowedPages.
bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){
    int students = 1, pages = 0;
    for(int i = 0 ; i < n; i++){
        // A single book exceeding the limit makes this distribution impossible.
        if (arr[i] > maxAllowedPages){
            return false;
        }

        // Keep assigning books to the current student while the limit is not crossed.
        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        }else{
            // Otherwise, assign the next book to a new student.
            students++;
            pages = arr[i];
        }
    }

    return students > m ? false : true ;
}

// Uses binary search on the answer to find the minimum possible
// maximum pages assigned to any student.
int allocateBooks(vector<int> &arr, int n, int m){
    // Allocation is not possible if students are more than books.
    if(m > n ){
        return -1;
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    int ans = -1;

    // Search space: from 0 to total pages of all books.
    int st = 0 , end = sum;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(isValid(arr, n, m, mid)){
            // mid is a valid answer, try to minimize it further.
            ans = mid;  
            end = mid -1;
        }
        else{
            // mid is too small, increase the allowed page limit.
            st = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {15,17,20};//{2,1,3,4};
    int n = 3, m = 2;

    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}
