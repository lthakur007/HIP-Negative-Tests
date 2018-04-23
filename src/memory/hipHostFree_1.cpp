/*
 hipHostFree (void *ptr)
*/
 #include "hip/hip_runtime.h"
 #include "hip/hip_runtime_api.h"

#include <iostream>
#include <string>


using namespace std;

int main(){

string out;	
void *ptr;
size_t size=100;

out=hipGetErrorString(hipHostMalloc(&ptr,size,0 ));	
cout<<"The output of hipHostMalloc() is: "<<out<<endl;

out=hipGetErrorString(hipHostFree(NULL));
cout<<"The output of hipHostFree(NULL):"<<out<<endl;

//int *ptr1 = new int;
//out=hipGetErrorString(hipHostFree(ptr1));
//cout<<"The output of hipHostFree(ptr):"<<out<<endl;

// delete ptr;
//out=hipGetErrorString(hipHostFree(ptr));
//cout<<"The output of hipHostFree(ptr):"<<out<<endl;
/*
float *fPtr = NULL;
out=hipGetErrorString(hipHostFree(fPtr));
cout<<"The output of hipHostFree(fptr):"<<out<<endl;

float f;
out=hipGetErrorString(hipHostFree(&f));
cout<<"The output of hipHostFree(&f):"<<out<<endl;
 */ }
	
	
	
	
	
	
	
