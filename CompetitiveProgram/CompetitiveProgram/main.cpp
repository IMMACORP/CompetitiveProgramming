//
//  main.cpp
//  TestXcode
//
//  Created by Imma on 10/19/18.
//  Copyright © 2018 Imma. All rights reserved.
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
        cin>>inp;
        arr.push_back(inp);
    }
    int sum;
    for (int i=0; i<arr_size; i++) {
        
        for (int j=0; j<arr_size-i; j++) {
            sum=0;
            for (int k=0; k<=j; k++) {
                sum+=arr[j+k];
            }
            if(max_sum<sum) max_sum=sum;
        }
        
    }
    cout<<"maximum subarr sum is: "<<max_sum<<endl;
    return 0;
}
