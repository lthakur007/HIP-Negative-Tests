
#include "hip/hip_runtime.h"
#include "hip/hip_runtime_api.h"
#include<iostream>
#include <string>
using namespace std;
#define filename "vcpy_kernel.code"

int main(){
    hipModule_t module,module1;
string out;
out=hipGetErrorString(hipModuleLoad(&module, filename));
cout<<"The output of hipModuleLoad() is: "<<out<<endl;
//out=hipGetErrorString(hipModuleUnload(module));
//cout<<"The filename extracted is: "<<module->fileName<<endl;


//out=hipGetErrorString(hipModuleUnload(NULL));

out=hipGetErrorString(hipModuleUnload(module1));
cout<<"The output of hipModuleUnload() is:"<<out<<endl;

}

