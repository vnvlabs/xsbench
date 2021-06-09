///3229363040271882117
/// This file was automatically generated using the VnV-Matcher executable. 
/// The matcher allows for automatic registration of all VnV plugins and injection 
/// points. Building the matcher requires Clang. If Clang is not available on this machine,
/// Registration code should be written manually. 
/// 

//PACKAGENAME: XSBENCH

#include "VnV.h" 
DECLAREOPTIONS(XSBENCH)
const char* getFullRegistrationJson_XSBENCH(){
	 return "{\"Communicator\":{\"docs\":\"\",\"name\":\"serial\",\"package\":\"VnV\"},\"Conclusion\":\"\",\"Introduction\":\"\",\"Options\":\"\"}";}

INJECTION_REGISTRATION(XSBENCH){
	REGISTEROPTIONS(XSBENCH)
	VnV_Declare_Communicator("XSBENCH","VnV","serial");
	REGISTER_FULL_JSON(XSBENCH, getFullRegistrationJson_XSBENCH);
};



