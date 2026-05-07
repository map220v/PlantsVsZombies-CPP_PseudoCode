// Class: Sexy::NetworkServiceListener


/* Sexy::NetworkServiceListener::ServiceResumableRequestCompleted(std::string const&, void const*)
    */

void Sexy::NetworkServiceListener::ServiceResumableRequestCompleted(string *param_1,void *param_2)

{
  return;
}


/* Sexy::NetworkServiceListener::ServiceProgressUpdate(unsigned long, unsigned long, void const*) */

void Sexy::NetworkServiceListener::ServiceProgressUpdate(ulong param_1,ulong param_2,void *param_3)

{
  return;
}


/* Sexy::NetworkServiceListener::ServiceRequestCanceled(void const*) */

void Sexy::NetworkServiceListener::ServiceRequestCanceled(void *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceListener::ToString(Sexy::NetworkServiceListener::ErrorNum) */

void Sexy::NetworkServiceListener::ToString(string *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  char *__s;
  
  lVar1 = ___stack_chk_guard;
  switch(param_3) {
  case 0x579:
    __s = "could_not_create_file";
    break;
  case 0x57a:
    __s = "could_not_write_to_file";
    break;
  case 0x57b:
    __s = "failed_to_copy_file";
    break;
  case 0x57c:
    __s = "target_file_path_is_empty_or_invalid";
    break;
  default:
    __s = "unknown_error_num";
  }
  std::string::string(param_1,__s);
  nop();
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* Sexy::NetworkServiceListener::NetworkServiceListener() */

void __thiscall Sexy::NetworkServiceListener::NetworkServiceListener(NetworkServiceListener *this)

{
  *(undefined ***)this = &PTR_ToString_06608200;
  return;
}

