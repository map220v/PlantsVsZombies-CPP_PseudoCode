// Class: PointOfLossModule


/* PointOfLossModule::onSetupComplete() */

void PointOfLossModule::onSetupComplete(void)

{
  return;
}


/* PointOfLossModule::onLossImminent() */

void __thiscall PointOfLossModule::onLossImminent(PointOfLossModule *this)

{
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  (**(code **)(*(long *)this + 0xe0))(this);
  (**(code **)(*(long *)this + 0xe8))(this);
  return;
}


/* PointOfLossModule::instantiateDialog() */

void __thiscall PointOfLossModule::instantiateDialog(PointOfLossModule *this)

{
  AdaptorPointOfLossDialog *this_00;
  
  this_00 = ::operator_new(0x250);
  AdaptorPointOfLossDialog::AdaptorPointOfLossDialog(this_00);
  *(AdaptorPointOfLossDialog **)(this + 0x18) = this_00;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PointOfLossModule::StaticClassInit() */

void PointOfLossModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"PointOfLossModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03854ce8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PointOfLossModule::StaticGetClass() */

long * PointOfLossModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PointOfLossModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PointOfLossModule::cleanup() */

void __thiscall PointOfLossModule::cleanup(PointOfLossModule *this)

{
  HotUIAdaptor::RemoveAndDeleteWidget(*(HotUIAdaptor **)(this + 0x18));
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* PointOfLossModule::ResumePlay() */

void __thiscall PointOfLossModule::ResumePlay(PointOfLossModule *this)

{
  cleanup(this);
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),false);
  return;
}


/* PointOfLossModule::ResumeLoss() */

void __thiscall PointOfLossModule::ResumeLoss(PointOfLossModule *this)

{
  HotUIAdaptor::RemoveAndDeleteWidget(*(HotUIAdaptor **)(this + 0x18));
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* PointOfLossModule::PointOfLossModule() */

void __thiscall PointOfLossModule::PointOfLossModule(PointOfLossModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_066a7f50;
  return;
}


/* PointOfLossModule::StaticNew() */

PointOfLossModule * PointOfLossModule::StaticNew(void)

{
  PointOfLossModule *this;
  
  this = ::operator_new(0x28);
  PointOfLossModule(this);
  return this;
}


/* PointOfLossModule::~PointOfLossModule() */

void __thiscall PointOfLossModule::~PointOfLossModule(PointOfLossModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066a7f50;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* PointOfLossModule::~PointOfLossModule() */

void __thiscall PointOfLossModule::~PointOfLossModule(PointOfLossModule *this)

{
  ~PointOfLossModule(this);
  AK::FreeHook(this);
  return;
}


/* PointOfLossModule::onDecline() */

void __thiscall PointOfLossModule::onDecline(PointOfLossModule *this)

{
  (**(code **)(*(long *)this + 0xa8))();
  MessageRouter::Broadcast<bool,bool,int,bool,bool,int>
            ((MessageRouter *)gMessageRouter,Message::JoustLossDecision,false,false,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PointOfLossModule::createDialog() */

void __thiscall PointOfLossModule::createDialog(PointOfLossModule *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  RtObject *this_02;
  PointOfLossModuleProperties *pPVar4;
  long *plVar5;
  int *piVar6;
  AdaptorPointOfLossDialog *this_03;
  undefined8 uVar7;
  bool bVar8;
  RtMixedPtr aRStack_188 [8];
  RtId aRStack_180 [8];
  string asStack_178 [8];
  RtMixedPtr aRStack_170 [8];
  RtId aRStack_168 [8];
  string asStack_160 [8];
  RtMixedPtr aRStack_158 [8];
  RtId aRStack_150 [8];
  string asStack_148 [8];
  RtMixedPtr aRStack_140 [8];
  RtId aRStack_138 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_130 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_128 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_e0 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long local_8;
  
  bVar8 = false;
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = PlayerInfo::GetNumGems(this_01,false);
  LevelModule::GetPropsPtr((LevelModule *)this);
  this_02 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_130);
  pPVar4 = Sexy::RtObject::Cast<PointOfLossModuleProperties>(this_02);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_130);
  plVar5 = (long *)EASquared::Instance();
  cVar1 = (**(code **)(*plVar5 + 0x58))();
  if (cVar1 != '\0') {
    bVar8 = *(int *)(this + 0x24) < *(int *)(pPVar4 + 0x58);
  }
  uVar7 = *(undefined8 *)(pPVar4 + 0x40);
  iVar3 = FUN_03854654(uVar7,*(undefined8 *)(pPVar4 + 0x48));
  iVar3 = ClampInt(*(int *)(this + 0x20),0,iVar3 + -1);
  this_03 = *(AdaptorPointOfLossDialog **)(this + 0x18);
  piVar6 = (int *)FUN_03854668(uVar7,(long)iVar3);
  iVar3 = *piVar6;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_188);
  std::string::string(asStack_178,"onAcceptGems");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_128,aRStack_180,asStack_178);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_170);
  std::string::string(asStack_160,"onAcceptAd");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_e0,aRStack_168,asStack_160);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_158);
  std::string::string(asStack_148,"onDecline");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_98,aRStack_150,asStack_148);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_140);
  std::string::string((string *)aRStack_130,"openGemStore");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50,aRStack_138,aRStack_130);
  AdaptorPointOfLossDialog::Setup
            (this_03,iVar3,iVar2,bVar8,(RtReflectionDelegate *)aRStack_128,
             (RtReflectionDelegate *)aRStack_e0,(RtReflectionDelegate *)aRStack_98,
             (RtReflectionDelegate *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string((string *)aRStack_130);
  nop();
  Sexy::RtId::~RtId(aRStack_138);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_140);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_98);
  std::string::~string(asStack_148);
  nop();
  Sexy::RtId::~RtId(aRStack_150);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_158);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_e0);
  std::string::~string(asStack_160);
  nop();
  Sexy::RtId::~RtId(aRStack_168);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_170);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_128);
  std::string::~string(asStack_178);
  nop();
  Sexy::RtId::~RtId(aRStack_180);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_188);
  HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x18));
  if (*(code **)(*(long *)this + 0xf0) != onSetupComplete) {
    (**(code **)(*(long *)this + 0xf0))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PointOfLossModule::onAcceptGems() */

void __thiscall PointOfLossModule::onAcceptGems(PointOfLossModule *this)

{
  int iVar1;
  int iVar2;
  RtObject *this_00;
  PointOfLossModuleProperties *pPVar3;
  int *piVar4;
  ProfileMgr *pPVar5;
  PlayerInfo *this_01;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::GetPropsPtr((LevelModule *)this);
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  pPVar3 = Sexy::RtObject::Cast<PointOfLossModuleProperties>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)&local_20,(vector *)(pPVar3 + 0x40));
  iVar1 = FUN_03854654(local_20,local_18);
  iVar1 = ClampInt(*(int *)(this + 0x20),0,iVar1 + -1);
  piVar4 = (int *)FUN_03854668(local_20,(long)iVar1);
  iVar1 = *piVar4;
  pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
  iVar2 = PlayerInfo::GetNumGems(this_01,false);
  if (iVar1 <= iVar2) {
    PlayerInfo::SubtractGems(this_01,iVar1,-1,(ICloudRequestCallbackFunctionBase *)0x0,1,false);
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::RequestSave(pPVar5);
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    JoustUtils::AddLevelEndExtension();
    MessageRouter::Broadcast<bool,bool,int,bool,bool,int>
              ((MessageRouter *)gMessageRouter,Message::JoustLossDecision,true,false,iVar1);
    (**(code **)(*(long *)this + 0xa0))(this);
  }
  else {
    (**(code **)(*(long *)this + 200))(this);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 <= iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PointOfLossModule::getCurrentGemCost() */

void __thiscall PointOfLossModule::getCurrentGemCost(PointOfLossModule *this)

{
  undefined4 uVar1;
  int iVar2;
  RtObject *this_00;
  PointOfLossModuleProperties *pPVar3;
  undefined4 *puVar4;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::GetPropsPtr((LevelModule *)this);
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  pPVar3 = Sexy::RtObject::Cast<PointOfLossModuleProperties>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)&local_20,(vector *)(pPVar3 + 0x40));
  iVar2 = FUN_03854654(local_20,local_18);
  iVar2 = ClampInt(*(int *)(this + 0x20),0,iVar2 + -1);
  puVar4 = (undefined4 *)FUN_03854668(local_20,(long)iVar2);
  uVar1 = *puVar4;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

