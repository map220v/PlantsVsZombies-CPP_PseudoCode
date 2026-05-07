// Class: open_vcdiff::OutputString<std::string>


/* open_vcdiff::OutputString<std::string >::clear() */

void __thiscall open_vcdiff::OutputString<std::string>::clear(OutputString<std::string> *this)

{
  FUN_05474ff8(*(undefined8 *)(this + 8));
  return;
}


/* open_vcdiff::OutputString<std::string >::size() const */

void __thiscall open_vcdiff::OutputString<std::string>::size(OutputString<std::string> *this)

{
  FUN_05474178(*(undefined8 *)(this + 8));
  return;
}


/* open_vcdiff::OutputString<std::string >::push_back(char) */

void open_vcdiff::OutputString<std::string>::push_back(char param_1)

{
  FUN_05475c50(*(undefined8 *)((ulong)(byte)param_1 + 8));
  return;
}


/* open_vcdiff::OutputString<std::string >::ReserveAdditionalBytes(unsigned long) */

void __thiscall
open_vcdiff::OutputString<std::string>::ReserveAdditionalBytes
          (OutputString<std::string> *this,ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 8);
  lVar1 = FUN_05474178(uVar2);
  FUN_0547570c(uVar2,lVar1 + param_1);
  return;
}


/* open_vcdiff::OutputString<std::string >::append(char const*, unsigned long) */

char * open_vcdiff::OutputString<std::string>::append(char *param_1,ulong param_2)

{
  FUN_05475980(*(undefined8 *)(param_1 + 8));
  return param_1;
}


/* open_vcdiff::OutputString<std::string >::OutputString(std::string*) */

void __thiscall
open_vcdiff::OutputString<std::string>::OutputString
          (OutputString<std::string> *this,string *param_1)

{
  OutputStringInterface::OutputStringInterface((OutputStringInterface *)this);
  *(string **)(this + 8) = param_1;
  *(undefined ***)this = &PTR_nop_06a303b0;
  return;
}

