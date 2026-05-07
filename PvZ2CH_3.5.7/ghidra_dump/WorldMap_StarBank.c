// Class: WorldMap_StarBank


/* WorldMap_StarBank::SlideOut() */

void __thiscall WorldMap_StarBank::SlideOut(WorldMap_StarBank *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x180) != 1) {
    return;
  }
  *(undefined4 *)(this + 0x180) = 3;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x178) = uVar1;
  return;
}


/* WorldMap_StarBank::Draw(Sexy::Graphics*) */

void WorldMap_StarBank::Draw(Graphics *param_1)

{
  return;
}


/* non-virtual thunk to WorldMap_StarBank::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_StarBank::Draw(WorldMap_StarBank *this,Graphics *param_1)

{
  Draw((Graphics *)(this + -0x10));
  return;
}


/* WorldMap_StarBank::onStarCurrencyChanged(int) */

void WorldMap_StarBank::onStarCurrencyChanged(int param_1)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x1a0))();
  return;
}


/* WorldMap_StarBank::onSwitchedWorlds(WorldData*) */

void WorldMap_StarBank::onSwitchedWorlds(WorldData *param_1)

{
  (**(code **)(*(long *)param_1 + 0x1a0))();
  (**(code **)(*(long *)param_1 + 0x198))(param_1);
  return;
}


/* WorldMap_StarBank::onWorldLoaded() */

void __thiscall WorldMap_StarBank::onWorldLoaded(WorldMap_StarBank *this)

{
  (**(code **)(*(long *)this + 0x1a0))();
  (**(code **)(*(long *)this + 400))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_StarBank::StaticClassInit() */

void WorldMap_StarBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_StarBank");
    (*pcVar2)(plVar1,asStack_10,FUN_04576b90,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_StarBank::StaticGetClass() */

long * WorldMap_StarBank::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_StarBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_StarBank::GetClass() const */

long * WorldMap_StarBank::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_StarBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_StarBank::~WorldMap_StarBank() */

void __thiscall WorldMap_StarBank::~WorldMap_StarBank(WorldMap_StarBank *this)

{
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_StarBank_0685f568;
  *(undefined ***)this = &PTR_GetClass_0685f3b0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_StarBank::~WorldMap_StarBank() */

void __thiscall WorldMap_StarBank::~WorldMap_StarBank(WorldMap_StarBank *this)

{
  ~WorldMap_StarBank(this + -0x10);
  return;
}


/* WorldMap_StarBank::~WorldMap_StarBank() */

void __thiscall WorldMap_StarBank::~WorldMap_StarBank(WorldMap_StarBank *this)

{
  ~WorldMap_StarBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_StarBank::~WorldMap_StarBank() */

void __thiscall WorldMap_StarBank::~WorldMap_StarBank(WorldMap_StarBank *this)

{
  ~WorldMap_StarBank(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_StarBank::WorldMap_StarBank() */

void __thiscall WorldMap_StarBank::WorldMap_StarBank(WorldMap_StarBank *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685f3b0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_StarBank_0685f568;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x168));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x170));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x168),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  *(undefined4 *)(this + 0x180) = 4;
  *(undefined4 *)(this + 0x17c) = 0x3e99999a;
  UIWidget::SetVisible((UIWidget *)this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_StarBank::StaticNew() */

WorldMap_StarBank * WorldMap_StarBank::StaticNew(void)

{
  WorldMap_StarBank *this;
  
  this = ::operator_new(400);
  WorldMap_StarBank(this);
  return this;
}


/* WorldMap_StarBank::SlideIn() */

void __thiscall WorldMap_StarBank::SlideIn(WorldMap_StarBank *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x180) == 4) {
    UIWidget::SetVisible((UIWidget *)this,true);
    *(undefined4 *)(this + 0x180) = 2;
    uVar1 = PVZ_T();
    *(undefined4 *)(this + 0x178) = uVar1;
  }
  else if (*(int *)(this + 0x180) == 2) {
    (**(code **)(*(long *)this + 0x198))();
    return;
  }
  return;
}


/* WorldMap_StarBank::updateState_Ready() */

void __thiscall WorldMap_StarBank::updateState_Ready(WorldMap_StarBank *this)

{
  float fVar1;
  
  if (*(int *)(this + 0x180) == 2) {
    fVar1 = (float)PVZ_T();
    if (*(float *)(this + 0x17c) + *(float *)(this + 0x178) <= fVar1) {
      *(undefined4 *)(this + 0x180) = 1;
    }
  }
  else if ((*(int *)(this + 0x180) == 3) &&
          (fVar1 = (float)PVZ_T(), *(float *)(this + 0x17c) + *(float *)(this + 0x178) <= fVar1)) {
    *(undefined4 *)(this + 0x180) = 4;
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x168),(RtWeakPtr *)(this + 0x170));
    UIWidget::SetVisible((UIWidget *)this,false);
    return;
  }
  return;
}


/* WorldMap_StarBank::SetWorldMap(std::string) */

void __thiscall WorldMap_StarBank::SetWorldMap(WorldMap_StarBank *this,bool param_2)

{
  ProfileMgr *this_00;
  string *psVar1;
  undefined4 uVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar1 = (string *)ProfileMgr::GetCurrentProfile(this_00);
  uVar2 = PlayerInfo::GetStarsCompletedInWorld(psVar1,param_2);
  *(undefined4 *)(this + 0x164) = uVar2;
  return;
}


/* WorldMap_StarBank::syncStarCurrency() */

void __thiscall WorldMap_StarBank::syncStarCurrency(WorldMap_StarBank *this)

{
  undefined4 uVar1;
  long lVar2;
  ProfileMgr *this_00;
  string *psVar3;
  
  lVar2 = LawnApp::GetWorldMap(gLawnApp);
  lVar2 = FUN_04576910(*(undefined8 *)(lVar2 + 0x2f0));
  if (lVar2 != 0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    psVar3 = (string *)ProfileMgr::GetCurrentProfile(this_00);
    uVar1 = PlayerInfo::GetStarsCompletedInWorld(psVar3,(bool)((char)lVar2 + '8'));
    *(undefined4 *)(this + 0x164) = uVar1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_StarBank::onEnterState_Initializing(WidgetState) */

void WorldMap_StarBank::onEnterState_Initializing(ReceivedDataCallback *param_1)

{
  undefined *puVar1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  CBMemberTranslatorX aCStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onStarCurrencyChanged);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<WorldMap_StarBank,void(WorldMap_StarBank::*)(int)>>
            ((MessageRouter *)puVar1,Message::StarCurrencyChanged,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onSwitchedWorlds);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<WorldData*,Sexy::CBMemberTranslatorX<WorldMap_StarBank,void(WorldMap_StarBank::*)(WorldData*)>>
            ((MessageRouter *)puVar1,Message::WorldMapSwitchedWorlds,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onWorldLoaded);
  Sexy::Delegate0::Delegate0<WorldMap_StarBank,void(WorldMap_StarBank::*)()>(aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::WorldMapWorldLoaded,aDStack_38);
  (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

