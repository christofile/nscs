//
//  pArray.c
//  NsCodeSmart
//
//  Created by imbean on 20/01/2018.
//  Copyright © 2018 imbeanCTX. All rights reserved.
//

#include <stdio.h>

int Sum(int *p)
{
    int sum=0;
    while(*p>0){
        sum+=*p;
        p++;
    }
    return sum;
}

int main(){
    int A[5]={1,2,3,4,5};
    int *p;
    p=A;
    int total=Sum(p);
    printf("%d\n",total);

}
