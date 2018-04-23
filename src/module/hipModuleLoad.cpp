#include "hip/hip_runtime_api.h"
#include<iostream>
#include <string>
using namespace std;
#define fileName "vcpy_kernel.code"

int main(){
    hipModule_t module,module1;
string out;
out=hipGetErrorString(hipModuleLoad(&module, fileName));

//out=hipGetErrorString(hipModuleLoad(NULL, fileName));
cout<<"The output of hipModuleLoad() is: "<<out<<endl;


//out=hipGetErrorString(hipModuleUnload(module));

//out=hipGetErrorString(hipModuleUnload(0));

//out=hipGetErrorString(hipModuleUnload(module1));
//cout<<"The output of hipModuleUnload() is:"<<out<<endl;
}

