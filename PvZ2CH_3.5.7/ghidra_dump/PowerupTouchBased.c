// Class: PowerupTouchBased


/* PowerupTouchBased::onTouchMoved(Sexy::Touch const&) */

void PowerupTouchBased::onTouchMoved(Touch *param_1)

{
  return;
}


/* PowerupTouchBased::onTouchCanceled() */

void PowerupTouchBased::onTouchCanceled(void)

{
  return;
}


/* PowerupTouchBased::onTouchBegin(Sexy::Touch const&) */

undefined8 PowerupTouchBased::onTouchBegin(Touch *param_1)

{
  return 0;
}


/* PowerupTouchBased::onTouchEnd(Sexy::Touch const&) */

void PowerupTouchBased::onTouchEnd(Touch *param_1)

{
  return;
}


/* PowerupTouchBased::cancelTouch() */

void __thiscall PowerupTouchBased::cancelTouch(PowerupTouchBased *this)

{
  *(undefined8 *)(this + 200) = 0;
  if (*(code **)(*(long *)this + 0xe8) != onTouchCanceled) {
    (**(code **)(*(long *)this + 0xe8))();
  }
  return;
}


/* PowerupTouchBased::handleTouch(Sexy::Touch const&) */

undefined1 __thiscall PowerupTouchBased::handleTouch(PowerupTouchBased *this,Touch *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  cVar2 = BasePowerup::isInState((BasePowerup *)this,0);
  if (cVar2 != '\0') {
    return 0;
  }
  if ((*(long *)(this + 200) != 0) || (*(int *)(param_1 + 0x30) != 0)) {
    if (*(long *)(this + 200) != *(long *)param_1) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == 1) {
      if (*(code **)(*(long *)this + 0xd8) != onTouchMoved) {
        (**(code **)(*(long *)this + 0xd8))(this,param_1);
      }
      uVar3 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)(param_1 + 8);
      uVar5 = 0;
      goto LAB_03b75774;
    }
    if (iVar1 != 0) {
      if (iVar1 != 3) {
        return 1;
      }
      if (*(code **)(*(long *)this + 0xe0) != onTouchEnd) {
        (**(code **)(*(long *)this + 0xe0))(this,param_1);
      }
      uVar3 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(this + 0xd0) = *(undefined8 *)param_1;
      *(undefined8 *)(this + 0xd8) = uVar3;
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(this + 0xe0) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(this + 0xe8) = uVar3;
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(this + 0xf0) = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(this + 0xf8) = uVar3;
      *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x30);
      cancelTouch(this);
      return 1;
    }
  }
  if (*(code **)(*(long *)this + 0xd0) == onTouchBegin) {
    cVar2 = onTouchBegin((Touch *)this);
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0xd0))(this,param_1);
  }
  uVar5 = 1;
  if (cVar2 == '\0') {
    return 1;
  }
  *(undefined8 *)(this + 200) = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)param_1;
  uVar4 = *(undefined8 *)(param_1 + 8);
LAB_03b75774:
  *(undefined8 *)(this + 0xd0) = uVar3;
  *(undefined8 *)(this + 0xd8) = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0xe8) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0xf8) = uVar3;
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x30);
  return uVar5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTouchBased::StaticClassInit() */

void PowerupTouchBased::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PowerupTouchBased");
    (*pcVar2)(plVar1,asStack_10,FUN_03b771d0,0x108,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupTouchBased::~PowerupTouchBased() */

void __thiscall PowerupTouchBased::~PowerupTouchBased(PowerupTouchBased *this)

{
  *(undefined ***)this = &PTR_GetClass_06734140;
  BasePowerup::~BasePowerup((BasePowerup *)this);
  return;
}


/* PowerupTouchBased::~PowerupTouchBased() */

void __thiscall PowerupTouchBased::~PowerupTouchBased(PowerupTouchBased *this)

{
  ~PowerupTouchBased(this);
  AK::FreeHook(this);
  return;
}


/* PowerupTouchBased::PowerupTouchBased() */

void __thiscall PowerupTouchBased::PowerupTouchBased(PowerupTouchBased *this)

{
  BasePowerup::BasePowerup((BasePowerup *)this);
  *(undefined8 *)(this + 200) = 0;
  *(undefined ***)this = &PTR_GetClass_06734140;
  Sexy::Touch::Touch((Touch *)(this + 0xd0));
  return;
}


/* PowerupTouchBased::StaticNew() */

PowerupTouchBased * PowerupTouchBased::StaticNew(void)

{
  PowerupTouchBased *this;
  
  this = ::operator_new(0x108);
  PowerupTouchBased(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTouchBased::registerForEvents() */

void __thiscall PowerupTouchBased::registerForEvents(PowerupTouchBased *this)

{
  Board *pBVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<PowerupTouchBased,bool(PowerupTouchBased::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<PowerupTouchBased,void(PowerupTouchBased::*)()>(aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,4,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupTouchBased::StaticGetClass() */

long * PowerupTouchBased::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BasePowerup::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupTouchBased",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupTouchBased::GetClass() const */

long * PowerupTouchBased::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BasePowerup::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupTouchBased",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

