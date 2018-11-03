//
//  SubArrayO2.h
//  CompetitiveProgram
//
//  Created by Imma on 10/25/18.
//  Copyright © 2018 James Do. All rights reserved.
//

#ifndef SubArrayO2_h
#define SubArrayO2_h
#include <iostream>
#include <vector>
using namespace std;
class SubArrO2
{
public:
    SubArrO2();
    ~SubArrO2();
    findMax()
    {
        // Size of arr
        int arr_size;
        
        vector<int> arr;
        // result
        int max_sum = 0;
        cout<<"insert arr size: "<<endl;
        cin>>arr_size;
        for (int i=0; i<arr_size; i++) {
            int inp;
            cin>>inp;
            arr.push_back(inp);
        }
        int best = 0, sum = 0;
        for (int k = 0; k < arr_size; k++) {
            sum = max(arr[k],sum+arr[k]);
            best = max(best,sum);
        }
        cout << best << "\n";
    }
}

#endif /* SubArrayO2_h */
