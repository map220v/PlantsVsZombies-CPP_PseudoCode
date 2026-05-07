// Class: JavaException


/* JavaException::CheckAndClear(_JNIEnv*) */

bool JavaException::CheckAndClear(_JNIEnv *param_1)

{
  char cVar1;
  
  cVar1 = _JNIEnv::ExceptionCheck(param_1);
  if (cVar1 != '\0') {
    _JNIEnv::ExceptionDescribe(param_1);
  }
  return cVar1 != '\0';
}

