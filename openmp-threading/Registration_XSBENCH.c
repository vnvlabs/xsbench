//11377249579702748579
/// This file was automatically generated using the VnV-Matcher executable. 
/// The matcher allows for automatic registration of all VnV plugins and injection 
/// points. Building the matcher requires Clang. If Clang is not available on this machine,
/// Registration code should be written manually. 
/// 

//PACKAGENAME: XSBENCH

#include "VnV.h" 
DECLAREOPTIONS(XSBENCH)
const char* getFullRegistrationJson_XSBENCH(){
	 return "{\"Conclusion\":{\"configuration\":{},\"description\":\"\",\"instructions\":\"\",\"params\":{},\"shortTitle\":\"\",\"template\":\"\",\"title\":\"\"},\"Executables\":{\"configuration\":{\"hello\":\"there\"},\"default\":{},\"description\":\"This is the XSBench Application\",\"instructions\":\"\",\"lib\":\"executables\",\"params\":{},\"shortTitle\":\"Hello there\",\"template\":\"\\n \\n This is a comment\\n \\n\",\"title\":\"XSBench Proxy Application\"},\"Introduction\":{\"configuration\":{},\"description\":\"\",\"instructions\":\"\",\"params\":{},\"shortTitle\":\"\",\"template\":\"\",\"title\":\"\"},\"Options\":{\"configuration\":{},\"description\":\"\",\"instructions\":\"\",\"params\":{},\"shortTitle\":\"\",\"template\":\"\",\"title\":\"\"}}";}

INJECTION_REGISTRATION(XSBENCH){
	REGISTEROPTIONS(XSBENCH)
	REGISTER_FULL_JSON(XSBENCH, getFullRegistrationJson_XSBENCH);
}



FORTRAN_INJECTION_REGISTRATION(XSBENCH)

