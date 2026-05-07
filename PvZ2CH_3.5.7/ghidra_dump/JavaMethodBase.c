// Class: JavaMethodBase


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaMethodBase::JavaMethodBase() */

void __thiscall JavaMethodBase::JavaMethodBase(JavaMethodBase *this)

{
  long lVar1;
  
  *(undefined8 *)(this + 8) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)this = 0;
  std::string::string((string *)(this + 0x10),"Uninitialized Java Method");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JavaMethodBase::init(_JNIEnv*, JavaClass const&, char const*, char const*) */

bool __thiscall
JavaMethodBase::init
          (JavaMethodBase *this,_JNIEnv *param_1,JavaClass *param_2,char *param_3,char *param_4)

{
  JavaMethodBase *pJVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  *(_JNIEnv **)this = param_1;
  lVar2 = open_vcdiff::JSONCodeTableWriter::target_length((JSONCodeTableWriter *)param_2);
  if (lVar2 != 0) {
    pJVar1 = this + 0x10;
    pcVar3 = (char *)open_vcdiff::JSONCodeTableWriter::target_length((JSONCodeTableWriter *)param_2)
    ;
    uVar4 = _JNIEnv::GetMethodID((_jclass *)param_1,pcVar3,param_3);
    *(undefined8 *)(this + 8) = uVar4;
    JavaException::CheckAndClear(param_1);
    uVar4 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_2);
    FUN_05475e00(pJVar1,uVar4);
    FUN_05475aa4(pJVar1,".");
    FUN_05475aa4(pJVar1,param_3);
    FUN_05475aa4(pJVar1,param_4);
  }
  return *(long *)(this + 8) != 0;
}


/* JavaMethodBase::valid() */

bool __thiscall JavaMethodBase::valid(JavaMethodBase *this)

{
  return *(long *)(this + 8) != 0;
}

