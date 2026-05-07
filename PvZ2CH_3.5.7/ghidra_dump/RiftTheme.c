// Class: RiftTheme


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftTheme::StaticClassInit() */

void RiftTheme::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftTheme");
    (*pcVar2)(plVar1,asStack_10,FUN_0370bd90,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftTheme::StaticGetClass() */

long * RiftTheme::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftTheme",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftTheme::GetClass() const */

long * RiftTheme::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftTheme",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftTheme::~RiftTheme() */

void __thiscall RiftTheme::~RiftTheme(RiftTheme *this)

{
  *(undefined ***)this = &PTR_GetClass_06686970;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* RiftTheme::~RiftTheme() */

void __thiscall RiftTheme::~RiftTheme(RiftTheme *this)

{
  ~RiftTheme(this);
  AK::FreeHook(this);
  return;
}


/* RiftTheme::RiftTheme() */

void __thiscall RiftTheme::RiftTheme(RiftTheme *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_06686970;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  this[0x18] = (RiftTheme)0x0;
  return;
}


/* RiftTheme::StaticNew() */

RiftTheme * RiftTheme::StaticNew(void)

{
  RiftTheme *this;
  
  this = ::operator_new(0x20);
  RiftTheme(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftTheme::Activate() */

void __thiscall RiftTheme::Activate(RiftTheme *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this[0x18] = (RiftTheme)0x1;
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)FUN_036f7590(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (pLVar1 != (LevelModuleManager *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x88);
    Sexy::Delegate0::Delegate0<RiftTheme,void(RiftTheme::*)()>(aDStack_38,aCStack_50);
    LevelModuleManager::RegisterOnGameplayUpdate(pLVar1,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

