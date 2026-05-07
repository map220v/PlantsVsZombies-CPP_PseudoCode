// Class: TagData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TagData::TagData() */

void __thiscall TagData::TagData(TagData *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  Sexy::Insets::Insets((Insets *)(this + 8));
  std::string::string((string *)(this + 0x18),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TagData::~TagData() */

void __thiscall TagData::~TagData(TagData *this)

{
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)this);
  return;
}


/* TagData::TagData(TagData&&) */

void __thiscall TagData::TagData(TagData *this,TagData *param_1)

{
  undefined8 uVar1;
  
  FUN_05474148();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = uVar1;
  FUN_05474148(this + 0x18,param_1 + 0x18);
  return;
}

