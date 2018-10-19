//
//  main.cpp
//  MaximumSubArrSum
//
//  Created by Imma on 10/19/18.
//  Copyright © 2018 James Do. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main() {
    // insert code here...
    int arr_size;
    vector<int> arr;
    int max_sum = 0;
    cout<<"insert arr size: "<<endl;
    cin>>arr_size;
    for (int i=0; i<arr_size; i++) {
        int inp;
        cout<<"insert a["<<i<<"]: ";
        cin>>inp;
        arr.push_back(inp);
    }
    
    for (int i=0; i<arr_size; i++) {// Tính tổng i số liền nhau
        int sum=0;
        for (int j=i; j<arr_size; j++) {// điểm đầu của mỗi dãy i số
            sum+=arr[j];
            max_sum=max(sum,max_sum);
        }
        
    }
    cout<<"maximum subarr sum is: "<<max_sum<<endl;
    return 0;
}


