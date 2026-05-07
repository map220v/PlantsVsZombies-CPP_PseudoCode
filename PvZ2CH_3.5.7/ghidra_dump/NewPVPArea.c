// Class: NewPVPArea


/* NewPVPArea::GetRenderOrder() */

undefined8 NewPVPArea::GetRenderOrder(void)

{
  return 150000;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPArea::StaticClassInit() */

void NewPVPArea::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPArea");
    (*pcVar2)(plVar1,asStack_10,FUN_034dfb7c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPArea::StaticGetClass() */

long * NewPVPArea::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPArea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPArea::GetClass() const */

long * NewPVPArea::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPArea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPArea::~NewPVPArea() */

void __thiscall NewPVPArea::~NewPVPArea(NewPVPArea *this)

{
  *(undefined ***)this = &PTR_GetClass_0664ce30;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* NewPVPArea::~NewPVPArea() */

void __thiscall NewPVPArea::~NewPVPArea(NewPVPArea *this)

{
  ~NewPVPArea(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPArea::NewPVPArea() */

void __thiscall NewPVPArea::NewPVPArea(NewPVPArea *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_0664ce30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  this[0x18] = (NewPVPArea)0x0;
  return;
}


/* NewPVPArea::StaticNew() */

NewPVPArea * NewPVPArea::StaticNew(void)

{
  NewPVPArea *this;
  
  this = ::operator_new(0x20);
  NewPVPArea(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPArea::AddToRenderQueue(RenderQueue*) */

void __thiscall NewPVPArea::AddToRenderQueue(NewPVPArea *this,RenderQueue *param_1)

{
  undefined4 uVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = (**(code **)(*(long *)this + 0x98))();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x90);
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1<NewPVPArea,void(NewPVPArea::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,uVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPArea::Activate() */

void __thiscall NewPVPArea::Activate(NewPVPArea *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this[0x18] = (NewPVPArea)0x1;
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)FUN_034ad7e4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (pLVar1 != (LevelModuleManager *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x88);
    Sexy::Delegate0::Delegate0<NewPVPArea,void(NewPVPArea::*)()>(aDStack_38,aCStack_50);
    LevelModuleManager::RegisterOnGameplayUpdate(pLVar1,aDStack_38);
    pLVar1 = (LevelModuleManager *)
             FUN_034ad7e4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AddToRenderQueue);
    Sexy::Delegate1<RenderQueue*>::Delegate1<NewPVPArea,void(NewPVPArea::*)(RenderQueue*)>
              ((Delegate1<RenderQueue*> *)aDStack_38,aCStack_50);
    LevelModuleManager::RegisterAddToRenderQueue(pLVar1,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

