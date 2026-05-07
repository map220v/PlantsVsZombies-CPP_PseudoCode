// Class: ComponentZombieWhackTouch


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentZombieWhackTouch::StaticClassInit() */

void ComponentZombieWhackTouch::StaticClassInit(void)

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
    std::string::string(asStack_10,"ComponentZombieWhackTouch");
    (*pcVar2)(plVar1,asStack_10,FUN_03b88b20,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentZombieWhackTouch::StaticGetClass() */

long * ComponentZombieWhackTouch::StaticGetClass(void)

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
  uVar2 = ComponentBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentZombieWhackTouch",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentZombieWhackTouch::GetClass() const */

long * ComponentZombieWhackTouch::GetClass(void)

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
  uVar2 = ComponentBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentZombieWhackTouch",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentZombieWhackTouch::ComponentZombieWhackTouch() */

void __thiscall
ComponentZombieWhackTouch::ComponentZombieWhackTouch(ComponentZombieWhackTouch *this)

{
  ComponentBase::ComponentBase((ComponentBase *)this);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR_GetClass_067359c0;
  return;
}


/* ComponentZombieWhackTouch::StaticNew() */

ComponentZombieWhackTouch * ComponentZombieWhackTouch::StaticNew(void)

{
  ComponentZombieWhackTouch *this;
  
  this = ::operator_new(0x38);
  ComponentZombieWhackTouch(this);
  return this;
}


/* ComponentZombieWhackTouch::~ComponentZombieWhackTouch() */

void __thiscall
ComponentZombieWhackTouch::~ComponentZombieWhackTouch(ComponentZombieWhackTouch *this)

{
  *(undefined ***)this = &PTR_GetClass_067359c0;
  ComponentBase::~ComponentBase((ComponentBase *)this);
  return;
}


/* ComponentZombieWhackTouch::~ComponentZombieWhackTouch() */

void __thiscall
ComponentZombieWhackTouch::~ComponentZombieWhackTouch(ComponentZombieWhackTouch *this)

{
  ~ComponentZombieWhackTouch(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentZombieWhackTouch::registerForEvents() */

void __thiscall ComponentZombieWhackTouch::registerForEvents(ComponentZombieWhackTouch *this)

{
  Board *pBVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_88 [8];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<ComponentZombieWhackTouch,bool(ComponentZombieWhackTouch::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_80);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_88);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,3,a_Stack_88,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentZombieWhackTouch::whackThyOwnerOneHit() */

void __thiscall ComponentZombieWhackTouch::whackThyOwnerOneHit(ComponentZombieWhackTouch *this)

{
  bool bVar1;
  int iVar2;
  RtObject *this_00;
  Zombie *pZVar3;
  RtWeakPtr aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [16];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_70);
  if (bVar1) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    pZVar3 = Sexy::RtObject::Cast<Zombie>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    if (pZVar3 != (Zombie *)0x0) {
      iVar2 = FUN_03b88964(*(undefined4 *)(pZVar3 + 0xb0));
      if (iVar2 == 0) {
        DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
        operator|=(auStack_58,2);
        (**(code **)(*(long *)pZVar3 + 0x110))(pZVar3,aRStack_68);
        ComponentBase::End((ComponentBase *)this);
        DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      }
      else {
        (**(code **)(*(long *)pZVar3 + 0x248))(pZVar3);
      }
    }
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentZombieWhackTouch::whackThyOwner(float) */

void __thiscall
ComponentZombieWhackTouch::whackThyOwner(ComponentZombieWhackTouch *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + *(float *)(this + 0x2c);
  *(float *)(this + 0x2c) = fVar1;
  while (1.0 <= fVar1) {
    *(float *)(this + 0x2c) = fVar1 - 1.0;
    whackThyOwnerOneHit(this);
    fVar1 = *(float *)(this + 0x2c);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentZombieWhackTouch::onTouchEvent(Sexy::Touch const&) */

void __thiscall
ComponentZombieWhackTouch::onTouchEvent(ComponentZombieWhackTouch *this,Touch *param_1)

{
  char cVar1;
  long *plVar2;
  TRect<int> *this_00;
  MinigameWhackAZombieModule *this_01;
  float fVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03b88958(*(undefined4 *)(this + 0x18));
  if (cVar1 != '\0') {
    if ((*(long *)(this + 0x30) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
      fVar3 = (float)FUN_03b889dc((float)*(int *)(param_1 + 0x10));
      fVar4 = (float)FUN_03b889dc((float)*(int *)(param_1 + 0x14));
      Sexy::ResourceInfoTypes::FontRes::GetFont();
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      this_00 = (TRect<int> *)(**(code **)(*plVar2 + 0x178))();
      cVar1 = Sexy::TRect<int>::Contains(this_00,(int)fVar3,(int)fVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (cVar1 != '\0') {
        *(undefined8 *)(this + 0x30) = *(undefined8 *)param_1;
        this_01 = (MinigameWhackAZombieModule *)
                  FUN_03b88e58(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
        fVar3 = (float)MinigameWhackAZombieModule::GetHammerHitValue(this_01);
        whackThyOwner(this,fVar3);
        MinigameWhackAZombieModule::OnWhackOccurred(SUB81(this_01,0));
        goto LAB_03b89024;
      }
    }
    else if ((*(long *)(this + 0x30) == *(long *)param_1) && (*(int *)(param_1 + 0x30) - 3U < 2)) {
      *(undefined8 *)(this + 0x30) = 0;
    }
  }
  cVar1 = '\0';
LAB_03b89024:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}

