// Class: GridItemShadowVanillaWhirlpool


/* GridItemShadowVanillaWhirlpool::~GridItemShadowVanillaWhirlpool() */

void __thiscall
GridItemShadowVanillaWhirlpool::~GridItemShadowVanillaWhirlpool
          (GridItemShadowVanillaWhirlpool *this)

{
  *(undefined ***)this = &PTR_GetClass_069a1340;
  *(undefined ***)(this + 0x10) = &PTR__GridItemShadowVanillaWhirlpool_069a15f8;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemShadowVanillaWhirlpool::~GridItemShadowVanillaWhirlpool() */

void __thiscall
GridItemShadowVanillaWhirlpool::~GridItemShadowVanillaWhirlpool
          (GridItemShadowVanillaWhirlpool *this)

{
  ~GridItemShadowVanillaWhirlpool(this + -0x10);
  return;
}


/* GridItemShadowVanillaWhirlpool::~GridItemShadowVanillaWhirlpool() */

void __thiscall
GridItemShadowVanillaWhirlpool::~GridItemShadowVanillaWhirlpool
          (GridItemShadowVanillaWhirlpool *this)

{
  ~GridItemShadowVanillaWhirlpool(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemShadowVanillaWhirlpool::~GridItemShadowVanillaWhirlpool() */

void __thiscall
GridItemShadowVanillaWhirlpool::~GridItemShadowVanillaWhirlpool
          (GridItemShadowVanillaWhirlpool *this)

{
  ~GridItemShadowVanillaWhirlpool(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemShadowVanillaWhirlpool::StaticClassInit() */

void GridItemShadowVanillaWhirlpool::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemShadowVanillaWhirlpool");
    (*pcVar2)(plVar1,asStack_10,FUN_04cdf4cc,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemShadowVanillaWhirlpool::StaticGetClass() */

long * GridItemShadowVanillaWhirlpool::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemShadowVanillaWhirlpool",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemShadowVanillaWhirlpool::GetClass() const */

long * GridItemShadowVanillaWhirlpool::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemShadowVanillaWhirlpool",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemShadowVanillaWhirlpool::GridItemShadowVanillaWhirlpool() */

void __thiscall
GridItemShadowVanillaWhirlpool::GridItemShadowVanillaWhirlpool(GridItemShadowVanillaWhirlpool *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_069a1340;
  *(undefined ***)(this + 0x10) = &PTR__GridItemShadowVanillaWhirlpool_069a15f8;
  uVar1 = PVZ_EOT();
  this[0x1b8] = (GridItemShadowVanillaWhirlpool)0x0;
  *(undefined4 *)(this + 0x1ac) = uVar1;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  return;
}


/* GridItemShadowVanillaWhirlpool::StaticNew() */

GridItemShadowVanillaWhirlpool * GridItemShadowVanillaWhirlpool::StaticNew(void)

{
  GridItemShadowVanillaWhirlpool *this;
  
  this = ::operator_new(0x1c0);
  GridItemShadowVanillaWhirlpool(this);
  return this;
}


/* GridItemShadowVanillaWhirlpool::GetDamageRatio() */

undefined4 __thiscall
GridItemShadowVanillaWhirlpool::GetDamageRatio(GridItemShadowVanillaWhirlpool *this)

{
  return *(undefined4 *)(this + 0x1b0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemShadowVanillaWhirlpool::OnAnimStoppedCallback(std::string const&) */

void __thiscall
GridItemShadowVanillaWhirlpool::OnAnimStoppedCallback
          (GridItemShadowVanillaWhirlpool *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"attack2_2_on");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"attack2_2_loop");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  else {
    bVar1 = std::operator==(param_1,"attack2_2_off");
    if (bVar1) {
      GridItem::KillGridItem((GridItem *)this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemShadowVanillaWhirlpool::InitParams(int) */

void __thiscall
GridItemShadowVanillaWhirlpool::InitParams(GridItemShadowVanillaWhirlpool *this,int param_1)

{
  GridItemShadowVanillaWhirlpoolProps *pGVar1;
  undefined4 *puVar2;
  long lVar3;
  PopAnimRig *pPVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(int *)(this + 0x1a8) = param_1;
  local_8 = ___stack_chk_guard;
  uVar5 = PVZ_T();
  *(undefined4 *)(this + 0x1ac) = uVar5;
  pGVar1 = GridItem::GetProps<GridItemShadowVanillaWhirlpoolProps>();
  puVar2 = (undefined4 *)
           FUN_04cde360(*(undefined8 *)(pGVar1 + 0xd0),(long)(*(int *)(this + 0x1a8) + -1));
  *(undefined4 *)(this + 0x1b0) = *puVar2;
  pGVar1 = GridItem::GetProps<GridItemShadowVanillaWhirlpoolProps>();
  lVar3 = FUN_04cde360(*(undefined8 *)(pGVar1 + 0xd0),(long)(*(int *)(this + 0x1a8) + -1));
  *(undefined4 *)(this + 0x1b4) = *(undefined4 *)(lVar3 + 4);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  std::string::string(asStack_58,"attack2_2_on");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAnimStoppedCallback);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<GridItemShadowVanillaWhirlpool,void(GridItemShadowVanillaWhirlpool::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemShadowVanillaWhirlpool::DamageEntity() */

void __thiscall GridItemShadowVanillaWhirlpool::DamageEntity(GridItemShadowVanillaWhirlpool *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar1 = FUN_04cde2cc(*(undefined4 *)(this + 0x130));
  uVar2 = FUN_04cde2d0(*(undefined4 *)(this + 0x134));
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,uVar1,
             uVar2);
  lVar3 = FUN_04cde368(local_20,local_18);
  if (lVar3 != 0) {
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    FUN_04ce27c4(uVar4,uVar5,this);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemShadowVanillaWhirlpool::onUpdate() */

void __thiscall GridItemShadowVanillaWhirlpool::onUpdate(GridItemShadowVanillaWhirlpool *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = TimeUtil::CheckTimeEclapse(*(float *)(this + 0x1b4),*(float *)(this + 0x1ac));
  if (cVar1 == '\0') {
    DamageEntity(this);
  }
  else if (this[0x1b8] == (GridItemShadowVanillaWhirlpool)0x0) {
    this[0x1b8] = (GridItemShadowVanillaWhirlpool)0x1;
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    std::string::string(asStack_58,"attack2_2_off");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnAnimStoppedCallback);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<GridItemShadowVanillaWhirlpool,void(GridItemShadowVanillaWhirlpool::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  }
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

