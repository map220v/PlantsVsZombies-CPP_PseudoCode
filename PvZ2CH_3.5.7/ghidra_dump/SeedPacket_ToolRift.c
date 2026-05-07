// Class: SeedPacket_ToolRift


/* SeedPacket_ToolRift::GetSunCost() */

void __thiscall SeedPacket_ToolRift::GetSunCost(SeedPacket_ToolRift *this)

{
  (**(code **)(**(long **)(this + 0x200) + 0x78))
            (*(long **)(this + 0x200),*(undefined4 *)(this + 0x208));
  return;
}


/* SeedPacket_ToolRift::CopyFrom(SeedPacket*) */

void __thiscall SeedPacket_ToolRift::CopyFrom(SeedPacket_ToolRift *this,SeedPacket *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  SeedPacket::CopyFrom((SeedPacket *)this,param_1);
  pcVar2 = *(code **)(*(long *)this + 0x230);
  uVar1 = PVPManager::GetPVPMapDataList((PVPManager *)param_1);
  (*pcVar2)(this,uVar1);
  return;
}


/* SeedPacket_ToolRift::~SeedPacket_ToolRift() */

void __thiscall SeedPacket_ToolRift::~SeedPacket_ToolRift(SeedPacket_ToolRift *this)

{
  *(undefined ***)this = &PTR_GetClass_0684a660;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_ToolRift_0684a8c0;
  SeedPacket_Tool::~SeedPacket_Tool((SeedPacket_Tool *)this);
  return;
}


/* non-virtual thunk to SeedPacket_ToolRift::~SeedPacket_ToolRift() */

void __thiscall SeedPacket_ToolRift::~SeedPacket_ToolRift(SeedPacket_ToolRift *this)

{
  ~SeedPacket_ToolRift(this + -0x10);
  return;
}


/* SeedPacket_ToolRift::~SeedPacket_ToolRift() */

void __thiscall SeedPacket_ToolRift::~SeedPacket_ToolRift(SeedPacket_ToolRift *this)

{
  ~SeedPacket_ToolRift(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SeedPacket_ToolRift::~SeedPacket_ToolRift() */

void __thiscall SeedPacket_ToolRift::~SeedPacket_ToolRift(SeedPacket_ToolRift *this)

{
  ~SeedPacket_ToolRift(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_ToolRift::StaticClassInit() */

void SeedPacket_ToolRift::StaticClassInit(void)

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
    std::string::string(asStack_10,"SeedPacket_ToolRift");
    (*pcVar2)(plVar1,asStack_10,FUN_0443e990,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacket_ToolRift::StaticGetClass() */

long * SeedPacket_ToolRift::StaticGetClass(void)

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
  uVar2 = SeedPacket_Tool::StaticGetClass();
  (*pcVar3)(plVar1,"SeedPacket_ToolRift",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedPacket_ToolRift::GetClass() const */

long * SeedPacket_ToolRift::GetClass(void)

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
  uVar2 = SeedPacket_Tool::StaticGetClass();
  (*pcVar3)(plVar1,"SeedPacket_ToolRift",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedPacket_ToolRift::OnNotifyToolPlantLevelUpMax(ToolPacketData*) */

void __thiscall
SeedPacket_ToolRift::OnNotifyToolPlantLevelUpMax(SeedPacket_ToolRift *this,ToolPacketData *param_1)

{
  if (*(ToolPacketData **)(this + 0x200) != param_1) {
    return;
  }
  SeedPacket::SetDisabled((SeedPacket *)this,true);
  return;
}


/* SeedPacket_ToolRift::OnNotifyToolPlantfoodMax(ToolPacketData*) */

void __thiscall
SeedPacket_ToolRift::OnNotifyToolPlantfoodMax(SeedPacket_ToolRift *this,ToolPacketData *param_1)

{
  if (*(ToolPacketData **)(this + 0x200) != param_1) {
    return;
  }
  SeedPacket::SetDisabled((SeedPacket *)this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_ToolRift::GetSeedType() */

void __thiscall SeedPacket_ToolRift::GetSeedType(SeedPacket_ToolRift *this)

{
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacket_ToolRift::OnPlantfoodUsed(PlantGroup*) */

void SeedPacket_ToolRift::OnPlantfoodUsed(PlantGroup *param_1)

{
  bool bVar1;
  
  if ((*(RtObject **)(param_1 + 0x200) != (RtObject *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<ToolPacketData_RiftPlantfood>(*(RtObject **)(param_1 + 0x200)),
     bVar1)) {
    SeedPacket::SetDisabled((SeedPacket *)param_1,false);
    return;
  }
  return;
}


/* SeedPacket_ToolRift::OnNotifyRiftTimedUsedMax() */

void __thiscall SeedPacket_ToolRift::OnNotifyRiftTimedUsedMax(SeedPacket_ToolRift *this)

{
  bool bVar1;
  
  if ((*(RtObject **)(this + 0x200) != (RtObject *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<ToolPacketData_RiftArtifact>(*(RtObject **)(this + 0x200)), bVar1)
     ) {
    SeedPacket::SetDisabled((SeedPacket *)this,true);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_ToolRift::OnInitBoardArtifactManager() */

void __thiscall SeedPacket_ToolRift::OnInitBoardArtifactManager(SeedPacket_ToolRift *this)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  RtObject *pRVar4;
  RtMixedPtr<Sexy::Image> aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(RtObject **)(this + 0x200) != (RtObject *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<ToolPacketData_RiftArtifact>(*(RtObject **)(this + 0x200)), bVar1)
     ) {
    Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    ArtifactMgr::GetActivatedArtifact();
    cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_30);
    bVar1 = true;
    if (cVar2 == '\0') {
      Sexy::LazySingleton<ArtifactMgr>::GetInstance();
      ArtifactMgr::GetActivatedArtifact();
      pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      bVar3 = Sexy::RtObject::IsA<ArtifactPrismTower>(pRVar4);
      if (!bVar3) {
        Sexy::LazySingleton<ArtifactMgr>::GetInstance();
        ArtifactMgr::GetActivatedArtifact();
        pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        bVar3 = Sexy::RtObject::IsA<ArtifactBeehive>(pRVar4);
        bVar1 = bVar3;
        if (!bVar3) {
          Sexy::LazySingleton<ArtifactMgr>::GetInstance();
          ArtifactMgr::GetActivatedArtifact();
          pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          bVar1 = Sexy::RtObject::IsA<ArtifactCalabash>(pRVar4);
          if (!bVar1) {
            Sexy::LazySingleton<ArtifactMgr>::GetInstance();
            ArtifactMgr::GetActivatedArtifact();
            pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
            bVar1 = Sexy::RtObject::IsA<ArtifactSwarm>(pRVar4);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          bVar3 = true;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      }
      if (bVar3 != false) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    if (bVar1 != false) {
      SeedPacket::SetDisabled((SeedPacket *)this,true);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_ToolRift::OnArtifactTrigger() */

void __thiscall SeedPacket_ToolRift::OnArtifactTrigger(SeedPacket_ToolRift *this)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  RtObject *pRVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(RtObject **)(this + 0x200) == (RtObject *)0x0) ||
     (bVar1 = Sexy::RtObject::IsA<ToolPacketData_RiftArtifact>(*(RtObject **)(this + 0x200)), !bVar1
     )) goto LAB_0443f154;
  Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::GetActivatedArtifact();
  pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  bVar2 = Sexy::RtObject::IsA<ArtifactPrismTower>(pRVar4);
  if (bVar2) {
    bVar3 = false;
    if (bVar2) {
LAB_0443f1c4:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    }
  }
  else {
    Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    ArtifactMgr::GetActivatedArtifact();
    pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    bVar3 = Sexy::RtObject::IsA<ArtifactBeehive>(pRVar4);
    if (bVar3) {
      bVar1 = bVar3;
      bVar3 = false;
    }
    else {
      Sexy::LazySingleton<ArtifactMgr>::GetInstance();
      ArtifactMgr::GetActivatedArtifact();
      pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      bVar2 = Sexy::RtObject::IsA<ArtifactCalabash>(pRVar4);
      if (!bVar2) {
        Sexy::LazySingleton<ArtifactMgr>::GetInstance();
        ArtifactMgr::GetActivatedArtifact();
        pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        bVar3 = Sexy::RtObject::IsA<ArtifactSwarm>(pRVar4);
        bVar3 = !bVar3;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    if (bVar1 != false) goto LAB_0443f1c4;
  }
  if (bVar3 != false) {
    SeedPacket::SetDisabled((SeedPacket *)this,false);
  }
LAB_0443f154:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SeedPacket_ToolRift::SetToolType(std::string const&) */

void __thiscall SeedPacket_ToolRift::SetToolType(SeedPacket_ToolRift *this,string *param_1)

{
  string *psVar1;
  undefined8 uVar2;
  
  SeedPacket_Tool::SetToolType((SeedPacket_Tool *)this,param_1);
  psVar1 = (string *)PVPManager::GetPVPMapDataList((PVPManager *)this);
  uVar2 = ToolPacketDataFactory::CreateData(psVar1);
  *(undefined8 *)(this + 0x200) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_ToolRift::SeedPacket_ToolRift() */

void __thiscall SeedPacket_ToolRift::SeedPacket_ToolRift(SeedPacket_ToolRift *this)

{
  undefined *puVar1;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  CBMemberTranslatorX aCStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedPacket_Tool::SeedPacket_Tool((SeedPacket_Tool *)this);
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_ToolRift_0684a8c0;
  *(undefined ***)this = &PTR_GetClass_0684a660;
  *(undefined4 *)(this + 0x208) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyToolPlantLevelUpMax);
  local_c0 = local_80;
  uStack_b8 = uStack_78;
  local_b0 = local_70;
  MessageRouter::
  Subscribe<ToolPacketData*,Sexy::CBMemberTranslatorX<SeedPacket_ToolRift,void(SeedPacket_ToolRift::*)(ToolPacketData*)>>
            ((MessageRouter *)puVar1,Message::NotifyToolPlantLevelUpMax,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyToolPlantfoodMax);
  local_b0 = local_58;
  local_c0 = local_68;
  uStack_b8 = uStack_60;
  MessageRouter::
  Subscribe<ToolPacketData*,Sexy::CBMemberTranslatorX<SeedPacket_ToolRift,void(SeedPacket_ToolRift::*)(ToolPacketData*)>>
            ((MessageRouter *)puVar1,Message::NotifyToolPlantfoodMax,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantfoodUsed);
  local_e0 = local_50;
  uStack_d8 = uStack_48;
  local_d0 = local_40;
  MessageRouter::
  Subscribe<PlantGroup*,Sexy::CBMemberTranslatorX<SeedPacket_ToolRift,void(SeedPacket_ToolRift::*)(PlantGroup*)>>
            ((MessageRouter *)puVar1,Message::ToolAppliedPlantfood,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRiftTimedUsedMax);
  Sexy::Delegate0::Delegate0<SeedPacket_ToolRift,void(SeedPacket_ToolRift::*)()>
            (aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyRiftTimedUsedMax,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnInitBoardArtifactManager);
  Sexy::Delegate0::Delegate0<SeedPacket_ToolRift,void(SeedPacket_ToolRift::*)()>
            (aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::InitBoardArtifactManager,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnArtifactTrigger);
  Sexy::Delegate0::Delegate0<SeedPacket_ToolRift,void(SeedPacket_ToolRift::*)()>
            (aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ArtifactTrigger,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacket_ToolRift::StaticNew() */

SeedPacket_ToolRift * SeedPacket_ToolRift::StaticNew(void)

{
  SeedPacket_ToolRift *this;
  
  this = ::operator_new(0x210);
  SeedPacket_ToolRift(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_ToolRift::Activate(Sexy::Point const&) */

void SeedPacket_ToolRift::Activate(Point *param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  wchar16 *pwVar5;
  char *pcVar6;
  long lVar7;
  LineBreakCategory *pLVar8;
  LineBreakCategory *in_x3;
  LineBreakCategory *pLVar9;
  undefined1 uVar10;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Board::GetSunCurrency(*(Board **)(gLawnApp + 0x9f0));
  iVar4 = (**(code **)(*(long *)param_1 + 0x228))(param_1);
  pLVar9 = *(LineBreakCategory **)(*(long *)param_1 + 0x1c0);
  if (pLVar9 == (LineBreakCategory *)SeedPacket::IsAffordable) {
    cVar2 = SeedPacket::IsAffordable((SeedPacket *)param_1);
  }
  else {
    cVar2 = (*(code *)pLVar9)();
  }
  if ((cVar2 == '\0') || (cVar2 = FUN_0443eb20(*(undefined4 *)(param_1 + 400)), cVar2 != '\0')) {
    pwVar5 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar8 = aLStack_18;
    std::string::string(asStack_10,"FreePlanting");
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar5,(wchar16 *)asStack_10,pLVar8,in_x3,pLVar9);
    std::string::~string(asStack_10);
    nop();
    uVar10 = 0;
    if (cVar2 == '\0') goto LAB_0443f97c;
  }
  cVar2 = (**(code **)(**(long **)(param_1 + 0x200) + 0x58))(*(long **)(param_1 + 0x200));
  if (cVar2 == '\0') {
    pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar6,"Play_drop");
    uVar10 = 0;
  }
  else {
    *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + 1;
    uVar10 = 1;
    Board::TakeSunMoney(*(Board **)(gLawnApp + 0x9f0),iVar4,true,false);
    (**(code **)(*(long *)param_1 + 0x1f8))(param_1,param_1);
    iVar4 = Board::GetSunCurrency(*(Board **)(gLawnApp + 0x9f0));
    (**(code **)(*(long *)param_1 + 0x228))(param_1);
    ToolPacketData::GetProps();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    FUN_05475d88((string *)aLStack_18,lVar7 + 8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    puVar1 = gMessageRouter;
    FUN_05475d88((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10,(string *)aLStack_18);
    MessageRouter::Post<std::string_const&,int,int,std::string,int,int>
              ((MessageRouter *)puVar1,Message::NotifyToolPacketUsed,
               (RtWeakPtr<Sexy::ResourceInfo> *)asStack_10,iVar4 - iVar3,
               *(undefined4 *)(param_1 + 0x208));
    std::string::~string(asStack_10);
    std::string::~string((string *)aLStack_18);
  }
LAB_0443f97c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_ToolRift::OnTouch(Sexy::Touch const&) */

void __thiscall SeedPacket_ToolRift::OnTouch(SeedPacket_ToolRift *this,Touch *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  code *pcVar4;
  Board *pBVar5;
  undefined1 auStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*(code **)(*(long *)this + 0x1c0) == SeedPacket::IsAffordable) {
      cVar1 = SeedPacket::IsAffordable((SeedPacket *)this);
    }
    else {
      cVar1 = (**(code **)(*(long *)this + 0x1c0))();
    }
    if (cVar1 == '\0') {
      MessageRouter::Post((_func_void *)gMessageRouter);
      pBVar5 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178(aPStack_10,L"[ADVICE_NOT_ENOUGH_SUN]",auStack_18);
      Board::DisplayAdvice(pBVar5,aPStack_10,7,2);
      FUN_05476c50(aPStack_10);
      nop();
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Play_Buzzer");
      cVar2 = '\x01';
    }
    else {
      cVar2 = FUN_0443eb20(*(undefined4 *)(this + 400));
      if (cVar2 == '\0') {
        (**(code **)(*(long *)this + 0xe8))(this,4);
        cVar2 = cVar1;
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 3) {
    pcVar4 = *(code **)(*(long *)this + 0x248);
    Sexy::Point::Point(aPStack_10,0,0);
    cVar2 = (*pcVar4)(this,aPStack_10);
  }
  else {
    (**(code **)(*(long *)this + 0xe8))(this,2);
    cVar2 = '\0';
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* SeedPacket_ToolRift::Draw(Sexy::Graphics*) */

void __thiscall SeedPacket_ToolRift::Draw(SeedPacket_ToolRift *this,Graphics *param_1)

{
  (**(code **)(*(long *)this + 0x218))();
  SeedPacket_Tool::Draw((SeedPacket_Tool *)this,param_1);
  return;
}


/* non-virtual thunk to SeedPacket_ToolRift::Draw(Sexy::Graphics*) */

void __thiscall SeedPacket_ToolRift::Draw(SeedPacket_ToolRift *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

