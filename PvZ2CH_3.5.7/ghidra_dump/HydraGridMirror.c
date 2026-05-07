// Class: HydraGridMirror


/* HydraGridMirror::onInitAnimCompleted() */

void __thiscall HydraGridMirror::onInitAnimCompleted(HydraGridMirror *this)

{
  *(undefined4 *)(this + 0x1a8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HydraGridMirror::StaticClassInit() */

void HydraGridMirror::StaticClassInit(void)

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
    std::string::string(asStack_10,"HydraGridMirror");
    (*pcVar2)(plVar1,asStack_10,FUN_04f564c0,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HydraGridMirror::StaticGetClass() */

long * HydraGridMirror::StaticGetClass(void)

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
  uVar2 = GridItemZombossPortal::StaticGetClass();
  (*pcVar3)(plVar1,"HydraGridMirror",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HydraGridMirror::GetClass() const */

long * HydraGridMirror::GetClass(void)

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
  uVar2 = GridItemZombossPortal::StaticGetClass();
  (*pcVar3)(plVar1,"HydraGridMirror",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HydraGridMirror::onAnimCommand(std::string const&, float, std::string const&, std::string const&)
    */

void HydraGridMirror::onAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"spawn");
  if (!bVar1) {
    return;
  }
  GridItemZombiePortal::spawnNextZombie((GridItemZombiePortal *)param_1);
  return;
}


/* HydraGridMirror::onUpdate() */

void __thiscall HydraGridMirror::onUpdate(HydraGridMirror *this)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_Dt();
  *(float *)(this + 0x1f0) = *(float *)(this + 0x1f0) - fVar2;
  GridItemZombiePortal::onUpdate((GridItemZombiePortal *)this);
  if ((*(float *)(this + 0x1f0) < 0.0) &&
     (iVar1 = Sexy::ScrollWidget::GetPageHorizontal((ScrollWidget *)this), iVar1 != 3)) {
    (**(code **)(*(long *)this + 0x2a8))(this,3);
    return;
  }
  return;
}


/* HydraGridMirror::GetSummonZombieLevel() */

ulong HydraGridMirror::GetSummonZombieLevel(void)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  DangerRoomManager *this;
  
  lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  cVar2 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0));
  if (cVar2 == '\0') {
    if (lVar3 == 0) {
      uVar4 = 1;
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0x168);
      if ((int)uVar1 < 1) {
        uVar1 = 1;
      }
      uVar4 = (ulong)uVar1;
    }
    return uVar4;
  }
  this = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  uVar4 = DangerRoomManager::PickupZombieLevelForCurrentLevel(this);
  return uVar4;
}


/* HydraGridMirror::HydraGridMirror() */

void __thiscall HydraGridMirror::HydraGridMirror(HydraGridMirror *this)

{
  undefined4 uVar1;
  
  GridItemZombossPortal::GridItemZombossPortal((GridItemZombossPortal *)this);
  *(undefined ***)this = &PTR_GetClass_06a1fe20;
  *(undefined ***)(this + 0x10) = &PTR__HydraGridMirror_06a200f0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1f0) = uVar1;
  return;
}


/* HydraGridMirror::StaticNew() */

HydraGridMirror * HydraGridMirror::StaticNew(void)

{
  HydraGridMirror *this;
  
  this = ::operator_new(0x1f8);
  HydraGridMirror(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HydraGridMirror::onSpawnStopped() */

void __thiscall HydraGridMirror::onSpawnStopped(HydraGridMirror *this)

{
  int iVar1;
  PopAnimRig *pPVar2;
  GridItemZombiePortalProps *pGVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GridItemZombiePortal::getZombiesQuantity((GridItemZombiePortal *)this);
  if (iVar1 == 0) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    std::string::string(asStack_58,"");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_58,0,aDStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  }
  else {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    pGVar3 = GridItem::GetProps<GridItemZombiePortalProps>();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onSpawnStopped");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,
               (RtId *)aRStack_60,asStack_58);
    PopAnimRig::PlayAndStop
              (pPVar2,pGVar3 + 0x100,0,
               (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId((RtId *)aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HydraGridMirror::setState(GridItemZombiePortalState) */

void __thiscall HydraGridMirror::setState(HydraGridMirror *this,int param_2)

{
  PopAnimRig *extraout_x0;
  GridItemZombiePortalProps *pGVar1;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a8) != param_2) {
    GridItemAnimation::GetAnimRig();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    pGVar1 = GridItem::GetProps<GridItemZombiePortalProps>();
    if (param_2 == 0) {
      std::string::string(asStack_68,"showup");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string((string *)aRStack_58,"onInitAnimCompleted");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 aRStack_58);
      PopAnimRig::PlayAndStop(extraout_x0,asStack_68,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aRStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
      std::string::string((string *)aRStack_58,"Play_Zomboss_Hydra_Mirror_Intro");
      RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_58,0.0);
      std::string::~string((string *)aRStack_58);
      nop();
    }
    else {
      *(int *)(this + 0x1a8) = param_2;
      if (param_2 == 1) {
        onSpawnStopped(this);
        RealObject::SetUseGroundClipRect((RealObject *)this,false);
      }
      else if (param_2 == 3) {
        FUN_05475d88(asStack_68,pGVar1 + 0x108);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
        std::string::string((string *)aRStack_58,"onCloseAnimCompleted");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,aRStack_58);
        GridItemZombiePortal_AnimRig::PlayClose
                  ((GridItemZombiePortal_AnimRig *)extraout_x0,asStack_68,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)aRStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70)
        ;
        std::string::~string(asStack_68);
        std::string::string((string *)aRStack_58,"Play_Zomboss_Hydra_Mirror_Outro");
        RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_58,0.0);
        std::string::~string((string *)aRStack_58);
        nop();
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HydraGridMirror::onGridItemInitialize() */

void __thiscall HydraGridMirror::onGridItemInitialize(HydraGridMirror *this)

{
  PopAnimRig *pPVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemZombossPortal::onGridItemInitialize((GridItemZombossPortal *)this);
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimCommand");
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::RtReflectionDelegate(aRStack_50,aRStack_60,asStack_58);
  PopAnimRig::SetPopAnimCommandDelegate(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  PVZ_T();
  FUN_04f50f4c(this + 0x1ac);
  fVar2 = (float)PVZ_EOT();
  GridItem::SetInvincible((GridItem *)this,true,false,fVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HydraGridMirror::~HydraGridMirror() */

void __thiscall HydraGridMirror::~HydraGridMirror(HydraGridMirror *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1fe20;
  *(undefined ***)(this + 0x10) = &PTR__HydraGridMirror_06a200f0;
  GridItemZombossPortal::~GridItemZombossPortal((GridItemZombossPortal *)this);
  return;
}


/* non-virtual thunk to HydraGridMirror::~HydraGridMirror() */

void __thiscall HydraGridMirror::~HydraGridMirror(HydraGridMirror *this)

{
  ~HydraGridMirror(this + -0x10);
  return;
}


/* HydraGridMirror::~HydraGridMirror() */

void __thiscall HydraGridMirror::~HydraGridMirror(HydraGridMirror *this)

{
  ~HydraGridMirror(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HydraGridMirror::~HydraGridMirror() */

void __thiscall HydraGridMirror::~HydraGridMirror(HydraGridMirror *this)

{
  ~HydraGridMirror(this + -0x10);
  return;
}

