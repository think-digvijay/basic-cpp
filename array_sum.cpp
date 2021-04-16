#include<iostream>
using namespace std;

int main(){

    int arr[] = {0, -1, 2, -3, 1};
    int sum = -2;

    int sum_num;

    for(int i = 0; i<sizeof(arr); i++){
        for(int j = 0; j < sizeof(arr); j++){
            sum_num = arr[i] + arr[j];
            
            if(sum_num == sum){
                cout<<arr[i]<<arr[j]<<endl;
            }
        }
    }
    if(sum_num == 0){
        cout<<"bakwass";
    }
    return 0;
} 


// // C++ program to check if given array
// // has 2 elements whose sum is equal
// // to the given value

// #include <bits/stdc++.h>
// using namespace std;

// // Function to check if array has 2 elements
// // whose sum is equal to the given value
// bool hasArrayTwoCandidates(int A[], int arr_size,
// 						int sum)
// {
// 	int l, r;

// 	/* Sort the elements */
// 	sort(A, A + arr_size);

// 	/* Now look for the two candidates in 
// 	the sorted array*/
// 	l = 0;
// 	r = arr_size - 1;
// 	while (l < r) {
// 		if (A[l] + A[r] == sum)
// 			return 1;
// 		else if (A[l] + A[r] < sum)
// 			l++;
// 		else // A[i] + A[j] > sum
// 			r--;
// 	}
// 	return 0;
// }

// /* Driver program to test above function */
// int main()
// {
// 	int A[] = { 1, 4, 45, 6, 10, -8 };
// 	int n = 16;
// 	int arr_size = sizeof(A) / sizeof(A[0]);

// 	// Function calling
// 	if (hasArrayTwoCandidates(A, arr_size, n))
// 		cout << "Array has two elements"
// 				" with given sum";
// 	else
// 		cout << "Array doesn't have two"
// 				" elements with given sum";

// 	return 0;
// }
