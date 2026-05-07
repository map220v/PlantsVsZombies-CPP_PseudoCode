// Class: LevelEditorCardInfo


/* LevelEditorCardInfo::LevelEditorCardInfo(LevelEditorCardType, std::string const&) */

void __thiscall
LevelEditorCardInfo::LevelEditorCardInfo
          (LevelEditorCardInfo *this,undefined4 param_2,undefined8 param_3)

{
  *(undefined4 *)this = param_2;
  FUN_05475d88(this + 8,param_3);
  return;
}


/* LevelEditorCardInfo::TEMPNAMEPLACEHOLDERVALUE(LevelEditorCardInfo&&) */

LevelEditorCardInfo * __thiscall
LevelEditorCardInfo::operator=(LevelEditorCardInfo *this,LevelEditorCardInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05474278(this + 8,param_1 + 8);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorCardInfo::LevelEditorCardInfo() */

void __thiscall LevelEditorCardInfo::LevelEditorCardInfo(LevelEditorCardInfo *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)this = 0;
  std::string::string((string *)(this + 8),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorCardInfo::TEMPNAMEPLACEHOLDERVALUE(LevelEditorCardInfo const&) const */

undefined8 __thiscall
LevelEditorCardInfo::operator==(LevelEditorCardInfo *this,LevelEditorCardInfo *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)this != *(int *)param_1) {
    return 0;
  }
  uVar1 = std::operator==((string *)(this + 8),(string *)(param_1 + 8));
  return uVar1;
}

