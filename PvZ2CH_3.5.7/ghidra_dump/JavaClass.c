// Class: JavaClass


/* JavaClass::~JavaClass() */

void __thiscall JavaClass::~JavaClass(JavaClass *this)

{
  *(undefined ***)this = &PTR__JavaClass_06a33050;
  if ((*(_jobject **)(this + 8) != (_jobject *)0x0) && (*(long *)(this + 0x10) != 0)) {
    _JNIEnv::DeleteGlobalRef(*(_jobject **)(this + 8));
  }
  std::string::~string((string *)(this + 0x18));
  return;
}


/* JavaClass::~JavaClass() */

void __thiscall JavaClass::~JavaClass(JavaClass *this)

{
  ~JavaClass(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaClass::JavaClass() */

void __thiscall JavaClass::JavaClass(JavaClass *this)

{
  long lVar1;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__JavaClass_06a33050;
  std::string::string((string *)(this + 0x18),"Uninitialized Java Class");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JavaClass::init(_JNIEnv*, char const*) */

undefined8 __thiscall JavaClass::init(JavaClass *this,_JNIEnv *param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *(_JNIEnv **)(this + 8) = param_1;
  lVar1 = std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)param_1);
  if (lVar1 != 0) {
    uVar2 = _JNIEnv::NewGlobalRef((_jobject *)param_1);
    _JNIEnv::DeleteLocalRef((_jobject *)param_1);
    *(undefined8 *)(this + 0x10) = uVar2;
    FUN_054753c4(this + 0x18,param_2);
    return 1;
  }
  JavaException::CheckAndClear(param_1);
  return 0;
}


/* JavaClass::registerNatives(JNINativeMethod const*, int) const */

void JavaClass::registerNatives(JNINativeMethod *param_1,int param_2)

{
  _JNIEnv::RegisterNatives(*(_jclass **)(param_1 + 8),*(JNINativeMethod **)(param_1 + 0x10),param_2)
  ;
  JavaException::CheckAndClear(*(_JNIEnv **)(param_1 + 8));
  return;
}

