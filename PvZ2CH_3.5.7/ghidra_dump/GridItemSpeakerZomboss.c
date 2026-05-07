// Class: GridItemSpeakerZomboss


/* GridItemSpeakerZomboss::onFlashEnded() */

void __thiscall GridItemSpeakerZomboss::onFlashEnded(GridItemSpeakerZomboss *this)

{
  (**(code **)(*(long *)this + 0x2d8))(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSpeakerZomboss::StaticClassInit() */

void GridItemSpeakerZomboss::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSpeakerZomboss");
    (*pcVar2)(plVar1,asStack_10,FUN_03e35248,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSpeakerZomboss::ZombossLaneClear() */

void __thiscall GridItemSpeakerZomboss::ZombossLaneClear(GridItemSpeakerZomboss *this)

{
  this[500] = (GridItemSpeakerZomboss)0x1;
  return;
}


/* GridItemSpeakerZomboss::onUpdate() */

void __thiscall GridItemSpeakerZomboss::onUpdate(GridItemSpeakerZomboss *this)

{
  if ((this[500] != (GridItemSpeakerZomboss)0x0) && (*(int *)(this + 0x1c4) == 2)) {
    (**(code **)(*(long *)this + 0x2d8))(this,6);
    this[500] = (GridItemSpeakerZomboss)0x0;
    GridItemSpeaker::onUpdate((GridItemSpeaker *)this);
    return;
  }
  GridItemSpeaker::onUpdate((GridItemSpeaker *)this);
  return;
}


/* GridItemSpeakerZomboss::GridItemSpeakerZomboss() */

void __thiscall GridItemSpeakerZomboss::GridItemSpeakerZomboss(GridItemSpeakerZomboss *this)

{
  GridItemSpeaker::GridItemSpeaker((GridItemSpeaker *)this);
  this[500] = (GridItemSpeakerZomboss)0x0;
  *(undefined ***)this = &PTR_GetClass_06789890;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSpeakerZomboss_06789b80;
  return;
}


/* GridItemSpeakerZomboss::StaticNew() */

GridItemSpeakerZomboss * GridItemSpeakerZomboss::StaticNew(void)

{
  GridItemSpeakerZomboss *this;
  
  this = ::operator_new(0x1f8);
  GridItemSpeakerZomboss(this);
  return this;
}


/* GridItemSpeakerZomboss::onGridItemInitialize() */

void __thiscall GridItemSpeakerZomboss::onGridItemInitialize(GridItemSpeakerZomboss *this)

{
  this[500] = (GridItemSpeakerZomboss)0x0;
  GridItemSpeaker::onGridItemInitialize((GridItemSpeaker *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSpeakerZomboss::calcShockWaveSpawnPosition() */

void __thiscall GridItemSpeakerZomboss::calcShockWaveSpawnPosition(GridItemSpeakerZomboss *this)

{
  GridItemSpeakerZombossProps *pGVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulong local_10;
  long local_8;
  
  fVar4 = *(float *)(this + 0x1c);
  local_8 = ___stack_chk_guard;
  fVar2 = (float)FUN_03e3257c(*(undefined4 *)(this + 0x18),fVar4,*(undefined4 *)(this + 0x20));
  pGVar1 = GridItem::GetProps<GridItemSpeakerZombossProps>();
  fVar3 = *(float *)(pGVar1 + 0x13c);
  pGVar1 = GridItem::GetProps<GridItemSpeakerZombossProps>();
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_10,fVar2 + fVar3,fVar4 + *(float *)(pGVar1 + 0x140));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10 & 0xffffffff,(int)(local_10 >> 0x20));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSpeakerZomboss::createShockWave() */

void GridItemSpeakerZomboss::createShockWave(void)

{
  GridItemSpeakerZomboss *in_x0;
  undefined8 uVar1;
  long lVar2;
  Board *pBVar3;
  undefined4 in_s1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_28,"ZombossSpeakerShockWaveDefault");
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar1,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  nop();
  pBVar3._0_4_ = (Board *)calcShockWaveSpawnPosition(in_x0);
  uVar1 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
  lVar2 = Board::AddProjectile(pBVar3._0_4_,in_s1,0,uVar1,aRStack_18,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  FUN_03e32548(lVar2 + 0x24,3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSpeakerZomboss::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void GridItemSpeakerZomboss::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (!bVar1) {
    return;
  }
  createShockWave();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSpeakerZomboss::setState(SpeakerState) */

void __thiscall GridItemSpeakerZomboss::setState(GridItemSpeakerZomboss *this,undefined4 param_2)

{
  PopAnimRig *pPVar1;
  char *__s;
  PopAnimRig *local_98;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1c4) = param_2;
  switch(param_2) {
  case 0:
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::string(asStack_58,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    RealObject::SetUseGroundClipRect((RealObject *)this,true);
    (**(code **)(*(long *)this + 0x80))(this,0);
    break;
  case 1:
    RealObject::SetUseGroundClipRect((RealObject *)this,false);
    break;
  case 2:
    RealObject::SetUseGroundClipRect((RealObject *)this,false);
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::string(asStack_58,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    break;
  case 3:
    GridItemAnimation::GetAnimRig();
    local_98 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"idle2");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    __s = "onAnimEnded";
    goto LAB_03e3464c;
  case 4:
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"blast");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimEnded");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    GridItemSpeaker::shortRangeAttack((GridItemSpeaker *)this);
    break;
  case 6:
    GridItemAnimation::GetAnimRig();
    local_98 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"flash");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    __s = "onFlashEnded";
LAB_03e3464c:
    std::string::string(asStack_58,__s);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(local_98,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSpeakerZomboss::StaticGetClass() */

long * GridItemSpeakerZomboss::StaticGetClass(void)

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
  uVar2 = GridItemSpeaker::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSpeakerZomboss",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSpeakerZomboss::GetClass() const */

long * GridItemSpeakerZomboss::GetClass(void)

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
  uVar2 = GridItemSpeaker::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSpeakerZomboss",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSpeakerZomboss::~GridItemSpeakerZomboss() */

void __thiscall GridItemSpeakerZomboss::~GridItemSpeakerZomboss(GridItemSpeakerZomboss *this)

{
  *(undefined ***)this = &PTR_GetClass_06789890;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSpeakerZomboss_06789b80;
  GridItemSpeaker::~GridItemSpeaker((GridItemSpeaker *)this);
  return;
}


/* non-virtual thunk to GridItemSpeakerZomboss::~GridItemSpeakerZomboss() */

void __thiscall GridItemSpeakerZomboss::~GridItemSpeakerZomboss(GridItemSpeakerZomboss *this)

{
  ~GridItemSpeakerZomboss(this + -0x10);
  return;
}


/* GridItemSpeakerZomboss::~GridItemSpeakerZomboss() */

void __thiscall GridItemSpeakerZomboss::~GridItemSpeakerZomboss(GridItemSpeakerZomboss *this)

{
  ~GridItemSpeakerZomboss(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSpeakerZomboss::~GridItemSpeakerZomboss() */

void __thiscall GridItemSpeakerZomboss::~GridItemSpeakerZomboss(GridItemSpeakerZomboss *this)

{
  ~GridItemSpeakerZomboss(this + -0x10);
  return;
}

