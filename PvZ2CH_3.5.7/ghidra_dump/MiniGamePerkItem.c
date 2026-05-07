// Class: MiniGamePerkItem


/* MiniGamePerkItem::Use() */

void __thiscall MiniGamePerkItem::Use(MiniGamePerkItem *this)

{
  if (0 < *(int *)(this + 0x24)) {
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + -1;
  }
  return;
}


/* MiniGamePerkItem::CanUse() */

bool __thiscall MiniGamePerkItem::CanUse(MiniGamePerkItem *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x28);
  bVar2 = true;
  if (iVar1 != -1) {
    iVar3 = MiniGameCollectionUtils::GetMiniGameCollectionType();
    bVar2 = iVar1 == iVar3;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkItem::StaticClassInit() */

void MiniGamePerkItem::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkItem");
    (*pcVar2)(plVar1,asStack_10,FUN_03898390,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkItem::StaticGetClass() */

long * MiniGamePerkItem::StaticGetClass(void)

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
  uVar2 = MiniGamePerk::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkItem::GetClass() const */

long * MiniGamePerkItem::GetClass(void)

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
  uVar2 = MiniGamePerk::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkItem::TryUse() */

void __thiscall MiniGamePerkItem::TryUse(MiniGamePerkItem *this)

{
  char cVar1;
  
  if ((0 < *(int *)(this + 0x24)) && (cVar1 = (**(code **)(*(long *)this + 0x90))(), cVar1 != '\0'))
  {
    (**(code **)(*(long *)this + 0x98))(this);
  }
  return;
}


/* MiniGamePerkItem::~MiniGamePerkItem() */

void __thiscall MiniGamePerkItem::~MiniGamePerkItem(MiniGamePerkItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066b0550;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  MiniGamePerk::~MiniGamePerk((MiniGamePerk *)this);
  return;
}


/* MiniGamePerkItem::~MiniGamePerkItem() */

void __thiscall MiniGamePerkItem::~MiniGamePerkItem(MiniGamePerkItem *this)

{
  ~MiniGamePerkItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkItem::onUseButtonClicked(int) */

void __thiscall MiniGamePerkItem::onUseButtonClicked(MiniGamePerkItem *this,int param_1)

{
  int iVar1;
  NameMapperBase *this_00;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NameMapperBase *)MiniGamePerkMapper::GetInstance();
  MiniGamePerk::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  iVar1 = NameMapperBase::GetIdForName(this_00,(string *)(lVar2 + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (iVar1 == param_1) {
    TryUse(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkItem::MiniGamePerkItem() */

void __thiscall MiniGamePerkItem::MiniGamePerkItem(MiniGamePerkItem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  MiniGamePerk::MiniGamePerk((MiniGamePerk *)this);
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_066b0550;
  *(undefined4 *)(this + 0x24) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUseButtonClicked);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<MiniGamePerkItem,void(MiniGamePerkItem::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyUseButtonClicked,&local_40);
  return;
}


/* MiniGamePerkItem::StaticNew() */

MiniGamePerkItem * MiniGamePerkItem::StaticNew(void)

{
  MiniGamePerkItem *this;
  
  this = ::operator_new(0x30);
  MiniGamePerkItem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkItem::Activate() */

void __thiscall MiniGamePerkItem::Activate(MiniGamePerkItem *this)

{
  undefined4 uVar1;
  bool bVar2;
  long extraout_x0;
  undefined4 *puVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MiniGamePerk::Activate((MiniGamePerk *)this);
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  puVar3 = (undefined4 *)
           FUN_03896768(*(undefined8 *)(extraout_x0 + 0x48),(long)*(int *)(this + 0x10));
  uVar1 = *(undefined4 *)(extraout_x0 + 0x60);
  bVar2 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x24) = *puVar3;
  *(undefined4 *)(this + 0x28) = uVar1;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

