// Class: WidgetAnimationData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WidgetAnimationData::WidgetAnimationData() */

void __thiscall WidgetAnimationData::WidgetAnimationData(WidgetAnimationData *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  std::string::string((string *)(this + 8),"");
  nop();
  std::string::string((string *)(this + 0x10),"");
  nop();
  this[0x18] = (WidgetAnimationData)0x0;
  lVar2 = ___stack_chk_guard;
  this[0x19] = (WidgetAnimationData)0x0;
  this[0x1b] = (WidgetAnimationData)0x0;
  this[0x1a] = (WidgetAnimationData)0x1;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WidgetAnimationData::TEMPNAMEPLACEHOLDERVALUE(WidgetAnimationData const&) */

WidgetAnimationData * __thiscall
WidgetAnimationData::operator=(WidgetAnimationData *this,WidgetAnimationData *param_1)

{
  undefined4 uVar1;
  WidgetAnimationData WVar2;
  WidgetAnimationData WVar3;
  WidgetAnimationData WVar4;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  WVar2 = param_1[0x18];
  WVar3 = param_1[0x19];
  WVar4 = param_1[0x1a];
  this[0x1b] = param_1[0x1b];
  this[0x18] = WVar2;
  this[0x19] = WVar3;
  this[0x1a] = WVar4;
  return this;
}

