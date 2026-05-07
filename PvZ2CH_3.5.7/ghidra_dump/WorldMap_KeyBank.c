// Class: WorldMap_KeyBank


/* WorldMap_KeyBank::Draw(Sexy::Graphics*) */

void WorldMap_KeyBank::Draw(Graphics *param_1)

{
  return;
}


/* non-virtual thunk to WorldMap_KeyBank::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_KeyBank::Draw(WorldMap_KeyBank *this,Graphics *param_1)

{
  Draw((Graphics *)(this + -0x10));
  return;
}


/* WorldMap_KeyBank::onKeyCurrencyChanged() */

void __thiscall WorldMap_KeyBank::onKeyCurrencyChanged(WorldMap_KeyBank *this)

{
  (**(code **)(*(long *)this + 0x1a0))();
  return;
}


/* WorldMap_KeyBank::onSwitchedWorlds(WorldData*) */

void WorldMap_KeyBank::onSwitchedWorlds(WorldData *param_1)

{
  (**(code **)(*(long *)param_1 + 0x1a0))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_KeyBank::StaticClassInit() */

void WorldMap_KeyBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_KeyBank");
    (*pcVar2)(plVar1,asStack_10,FUN_04574b60,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_KeyBank::StaticGetClass() */

long * WorldMap_KeyBank::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_KeyBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_KeyBank::GetClass() const */

long * WorldMap_KeyBank::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_KeyBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_KeyBank::~WorldMap_KeyBank() */

void __thiscall WorldMap_KeyBank::~WorldMap_KeyBank(WorldMap_KeyBank *this)

{
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_KeyBank_0685efd8;
  *(undefined ***)this = &PTR_GetClass_0685ee20;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_KeyBank::~WorldMap_KeyBank() */

void __thiscall WorldMap_KeyBank::~WorldMap_KeyBank(WorldMap_KeyBank *this)

{
  ~WorldMap_KeyBank(this + -0x10);
  return;
}


/* WorldMap_KeyBank::~WorldMap_KeyBank() */

void __thiscall WorldMap_KeyBank::~WorldMap_KeyBank(WorldMap_KeyBank *this)

{
  ~WorldMap_KeyBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_KeyBank::~WorldMap_KeyBank() */

void __thiscall WorldMap_KeyBank::~WorldMap_KeyBank(WorldMap_KeyBank *this)

{
  ~WorldMap_KeyBank(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_KeyBank::WorldMap_KeyBank() */

void __thiscall WorldMap_KeyBank::WorldMap_KeyBank(WorldMap_KeyBank *this)

{
  bool bVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685ee20;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_KeyBank_0685efd8;
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
  *(undefined4 *)(this + 0x164) = 0;
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x180) = 4;
  this[0x188] = (WorldMap_KeyBank)0x1;
  *(undefined4 *)(this + 0x17c) = 0x3e99999a;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_KeyBank::StaticNew() */

WorldMap_KeyBank * WorldMap_KeyBank::StaticNew(void)

{
  WorldMap_KeyBank *this;
  
  this = ::operator_new(400);
  WorldMap_KeyBank(this);
  return this;
}


/* WorldMap_KeyBank::onWorldLoaded() */

void __thiscall WorldMap_KeyBank::onWorldLoaded(WorldMap_KeyBank *this)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  
  this_00 = (RtWeakPtr *)(this + 0x168);
  cVar1 = Sexy::RtWeakPtrBase::operator!=((RtWeakPtrBase *)(this + 0x170),(RtWeakPtrBase *)this_00);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)(this + 0x170));
    (**(code **)(*(long *)this + 0x1a0))(this);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    (**(code **)(*(long *)this + 400))(this);
  }
  return;
}


/* WorldMap_KeyBank::SlideIn() */

void __thiscall WorldMap_KeyBank::SlideIn(WorldMap_KeyBank *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  
  if (*(int *)(this + 0x180) == 4) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x168),(RtWeakPtr *)(this + 0x170));
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
    if (bVar2) {
      *(undefined4 *)(this + 0x180) = 2;
      uVar3 = PVZ_T();
      *(undefined4 *)(this + 0x178) = uVar3;
    }
  }
  else if ((*(int *)(this + 0x180) == 2) &&
          (cVar1 = Sexy::RtWeakPtrBase::operator!=
                             ((RtWeakPtrBase *)(this + 0x170),(RtWeakPtrBase *)(this + 0x168)),
          cVar1 != '\0')) {
    (**(code **)(*(long *)this + 0x198))(this);
    return;
  }
  return;
}


/* WorldMap_KeyBank::updateState_Ready() */

void __thiscall WorldMap_KeyBank::updateState_Ready(WorldMap_KeyBank *this)

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
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_KeyBank::syncKeyCurrency() */

void __thiscall WorldMap_KeyBank::syncKeyCurrency(WorldMap_KeyBank *this)

{
  string *this_00;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  string *extraout_x1;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = LawnApp::GetWorldMap(gLawnApp);
  if ((lVar4 != 0) && (lVar4 = FUN_04574950(*(undefined8 *)(lVar4 + 0x2f0)), lVar4 != 0)) {
    this_00 = (string *)(lVar4 + 0x38);
    bVar1 = std::operator==(this_00,"lostcity");
    this[0x188] = (WorldMap_KeyBank)!bVar1;
    Sexy::StringToUpper((Sexy *)this_00,extraout_x1);
    uVar5 = FUN_0547429c(asStack_20);
    Sexy::StrFormat("IMAGE_UI_HUD_WORLDMAP_ICON_KEY_%s",asStack_18,uVar5);
    FindResourceId<Sexy::Image>(asStack_18,*(int *)(gLawnApp + 0xd8));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtId::~RtId(aRStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    if (*(int *)(this + 0x180) - 1U < 2) {
      cVar2 = Sexy::RtWeakPtrBase::operator!=
                        ((RtWeakPtrBase *)aRStack_28,(RtWeakPtrBase *)(this + 0x168));
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)aRStack_28);
        (**(code **)(*(long *)this + 0x198))(this);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
        goto LAB_045750e0;
      }
    }
    else if (*(int *)(this + 0x180) == 4) {
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)aRStack_28);
    }
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_28);
    if (bVar1) {
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
      uVar3 = PlayerInfo::GetNumKeys(this_02,this_00,false);
      *(undefined4 *)(this + 0x164) = uVar3;
    }
    else {
      *(undefined4 *)(this + 0x164) = 0;
      *(undefined4 *)(this + 0x180) = 4;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
LAB_045750e0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_KeyBank::onEnterState_Initializing(WidgetState) */

void WorldMap_KeyBank::onEnterState_Initializing(ReceivedDataCallback *param_1)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onKeyCurrencyChanged);
  Sexy::Delegate0::Delegate0<WorldMap_KeyBank,void(WorldMap_KeyBank::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::KeyCurrencyChanged,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onSwitchedWorlds);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<WorldData*,Sexy::CBMemberTranslatorX<WorldMap_KeyBank,void(WorldMap_KeyBank::*)(WorldData*)>>
            ((MessageRouter *)puVar1,Message::WorldMapSwitchedWorlds,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onWorldLoaded);
  Sexy::Delegate0::Delegate0<WorldMap_KeyBank,void(WorldMap_KeyBank::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::WorldMapWorldLoaded,aDStack_38);
  (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

