#include<iostream>
#include<string>
#include<hip/hip_runtime.h>
#include<hip/hip_runtime_api.h>

using namespace std;

int main()
{
string out;
void *dst;
int val[10];

out=hipGetErrorString(hipMalloc(&dst,80));
cout<<"The value of hipMalloc(&dst,80) is: "<<out<<endl;


//out=hipGetErrorString(hipMemset(dst,99,81));

//cout<<"The output of hipMemset(dst,99,81) is: "<<out<<endl;

out=hipGetErrorString(hipMemset(NULL,99,81));

cout<<"The output of hipMemset(NULL,99,81) is: "<<out<<endl;


}
