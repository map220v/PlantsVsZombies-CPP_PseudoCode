// Class: JavaMethod<_jobject*>


/* JavaMethod<_jobject*>::~JavaMethod() */

void __thiscall JavaMethod<_jobject*>::~JavaMethod(JavaMethod<_jobject*> *this)

{
  std::string::~string((string *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaMethod<void>::TEMPNAMEPLACEHOLDERVALUE(_JNIEnv*, _jobject*, ...) */

void JavaMethod<void>::operator()(_JNIEnv *param_1,_jobject *param_2,...)

{
  long lVar1;
  undefined8 uVar2;
  long in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  if (*(long *)(param_1 + 8) == 0) {
    uVar2 = FUN_0547429c(param_1 + 0x10);
    __android_log_print(6,"JavaMethod","no methodID to call %s",uVar2);
  }
  else if (in_x2 == 0) {
    uVar2 = FUN_0547429c(param_1 + 0x10);
    __android_log_print(6,"JavaMethod","no jobject to call %s",uVar2);
  }
  else {
    uStack_e8 = 0xffffff80ffffffd8;
    local_100 = (undefined1 *)register0x00000008;
    puStack_f8 = (undefined1 *)register0x00000008;
    local_f0 = auStack_30;
    _JNIEnv::CallVoidMethodV(param_2,in_x2,*(long *)(param_1 + 8),&local_100);
  }
  JavaException::CheckAndClear((_JNIEnv *)param_2);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaMethod<_jobject*>::JavaMethod() */

void __thiscall JavaMethod<_jobject*>::JavaMethod(JavaMethod<_jobject*> *this)

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaMethod<unsigned char>::TEMPNAMEPLACEHOLDERVALUE(_JNIEnv*, _jobject*, ...) */

void __thiscall
JavaMethod<unsigned_char>::operator()
          (JavaMethod<unsigned_char> *this,_JNIEnv *param_1,_jobject *param_2,...)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  uint unaff_w21;
  
  lVar1 = ___stack_chk_guard;
  if (*(long *)(this + 8) == 0) {
    uVar3 = FUN_0547429c(this + 0x10);
    __android_log_print(6,"JavaMethod","no methodID to call %s",uVar3);
  }
  else if (param_2 == (_jobject *)0x0) {
    uVar3 = FUN_0547429c(this + 0x10);
    __android_log_print(6,"JavaMethod","no jobject to call %s",uVar3);
  }
  else {
    bVar2 = FUN_048f6558();
    unaff_w21 = (uint)bVar2;
  }
  JavaException::CheckAndClear(param_1);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(unaff_w21);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaMethod<_jstring*>::TEMPNAMEPLACEHOLDERVALUE(_JNIEnv*, _jobject*, ...) */

void __thiscall
JavaMethod<_jstring*>::operator()
          (JavaMethod<_jstring*> *this,_JNIEnv *param_1,_jobject *param_2,...)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_x21;
  
  lVar1 = ___stack_chk_guard;
  if (*(long *)(this + 8) == 0) {
    uVar2 = FUN_0547429c(this + 0x10);
    __android_log_print(6,"JavaMethod","no methodID to call %s",uVar2);
  }
  else if (param_2 == (_jobject *)0x0) {
    uVar2 = FUN_0547429c(this + 0x10);
    __android_log_print(6,"JavaMethod","no jobject to call %s",uVar2);
  }
  else {
    unaff_x21 = FUN_049050a0();
  }
  JavaException::CheckAndClear(param_1);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(unaff_x21);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaMethod<int>::TEMPNAMEPLACEHOLDERVALUE(_JNIEnv*, _jobject*, ...) */

void __thiscall
JavaMethod<int>::operator()(JavaMethod<int> *this,_JNIEnv *param_1,_jobject *param_2,...)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 unaff_w21;
  
  lVar1 = ___stack_chk_guard;
  if (*(long *)(this + 8) == 0) {
    uVar2 = FUN_0547429c(this + 0x10);
    __android_log_print(6,"JavaMethod","no methodID to call %s",uVar2);
  }
  else if (param_2 == (_jobject *)0x0) {
    uVar2 = FUN_0547429c(this + 0x10);
    __android_log_print(6,"JavaMethod","no jobject to call %s",uVar2);
  }
  else {
    unaff_w21 = FUN_04905110();
  }
  JavaException::CheckAndClear(param_1);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(unaff_w21);
}

