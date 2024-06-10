#include<iostream>
using namespace std;

int main(){

int nums[] = {2,7,11,15};
int indexes[2];
int target = 18;
int sum;
for(int i = 0;i<=3;i++){
    if(i == 3){
        break;
    } else{
        sum = nums[i]+nums[i+1];
    }
    if(sum == target){
        indexes[0] = i;
        indexes[1] = i+1;
        break;
    }
}

for(int i = 0; i<=1;i++){
    cout<<indexes[i]<<endl;
}

    return 0;
}