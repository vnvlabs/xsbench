///XSBENCH:5373228000185351139
/// This file was automatically generated using the VnV-Matcher executable. 
/// The matcher allows for automatic registration of all VnV plugins and injection 
/// points. Building the matcher requires Clang. If Clang is not available on this machine,
/// Registration code should be written manually. 
/// 

//PACKAGENAME: XSBENCH

#include "VnV.h" 
DECLAREOPTIONS(XSBENCH)
const char* getFullRegistrationJson_XSBENCH(){
	 return "{\"Conclusion\":\"\",\"Introduction\":\"\",\"Options\":\"\"}";}

INJECTION_REGISTRATION(XSBENCH){
	REGISTEROPTIONS(XSBENCH)
	REGISTER_FULL_JSON(XSBENCH, getFullRegistrationJson_XSBENCH);
}



FORTRAN_INJECTION_REGISTRATION(XSBENCH)

