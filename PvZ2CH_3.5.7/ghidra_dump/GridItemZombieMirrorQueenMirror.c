// Class: GridItemZombieMirrorQueenMirror


/* GridItemZombieMirrorQueenMirror::CollidesWithType(CollisionTypeFlags) const */

byte GridItemZombieMirrorQueenMirror::CollidesWithType(long param_1)

{
  return *(byte *)(param_1 + 0x1dc) ^ 1;
}


/* GridItemZombieMirrorQueenMirror::CalcRenderOrder() const */

void __thiscall
GridItemZombieMirrorQueenMirror::CalcRenderOrder(GridItemZombieMirrorQueenMirror *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61e68,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemZombieMirrorQueenMirror::CalcRenderOrder() const */

void __thiscall
GridItemZombieMirrorQueenMirror::CalcRenderOrder(GridItemZombieMirrorQueenMirror *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemZombieMirrorQueenMirror::calcCollisionRect() */

void __thiscall
GridItemZombieMirrorQueenMirror::calcCollisionRect(GridItemZombieMirrorQueenMirror *this)

{
  GridItemAnimation::calcCollisionRect();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirror::StaticClassInit() */

void GridItemZombieMirrorQueenMirror::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CopyZombieParams");
    (*pcVar3)(plVar2,asStack_10,FUN_04f0d0e4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GridItemZombieMirrorQueenMirror");
    (*pcVar3)(plVar2,asStack_10,FUN_04f0d834,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieMirrorQueenMirror::StaticGetClass() */

long * GridItemZombieMirrorQueenMirror::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieMirrorQueenMirror",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieMirrorQueenMirror::GetClass() const */

long * GridItemZombieMirrorQueenMirror::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieMirrorQueenMirror",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirror::onDestroy() */

void __thiscall GridItemZombieMirrorQueenMirror::onDestroy(GridItemZombieMirrorQueenMirror *this)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::onDestroy((GridItem *)this);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1a8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1a8));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
        puVar1 = gMessageRouter, bVar2) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar4 + 0x10));
    if (cVar3 != '\0') {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 0x10));
      (**(code **)(*plVar5 + 0x48))();
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  }
  GridItem::GetType();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  FUN_05475d88((string *)&local_10,lVar4 + 8);
  MessageRouter::Broadcast<std::string_const&,std::string>
            ((MessageRouter *)puVar1,Message::GridItemDestroyed,(string *)&local_10);
  std::string::~string((string *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieMirrorQueenMirror::GridItemZombieMirrorQueenMirror() */

void __thiscall
GridItemZombieMirrorQueenMirror::GridItemZombieMirrorQueenMirror
          (GridItemZombieMirrorQueenMirror *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06a0e660;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieMirrorQueenMirror_06a0e920;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  *(undefined4 *)(this + 0x1d8) = 0;
  this[0x1dc] = (GridItemZombieMirrorQueenMirror)0x0;
  return;
}


/* GridItemZombieMirrorQueenMirror::StaticNew() */

GridItemZombieMirrorQueenMirror * GridItemZombieMirrorQueenMirror::StaticNew(void)

{
  GridItemZombieMirrorQueenMirror *this;
  
  this = ::operator_new(0x1e0);
  GridItemZombieMirrorQueenMirror(this);
  return this;
}


/* GridItemZombieMirrorQueenMirror::refreshStats() */

void __thiscall GridItemZombieMirrorQueenMirror::refreshStats(GridItemZombieMirrorQueenMirror *this)

{
  GridItemZombieMirrorQueenMirrorProps *pGVar1;
  float fVar2;
  float fVar3;
  
  pGVar1 = GridItem::GetProps<GridItemZombieMirrorQueenMirrorProps>();
  fVar3 = *(float *)(pGVar1 + 0x10);
  fVar2 = (float)GridItem::GetExtraHitPointsmodifier((GridItem *)this);
  FUN_04f05d30(fVar2 * fVar3,this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
    FUN_04f05d38(this + 0x128);
    return;
  }
  (**(code **)(*(long *)this + 0x1e0))();
  FUN_04f05d38(this + 0x128);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirror::calcDamageState() */

void __thiscall
GridItemZombieMirrorQueenMirror::calcDamageState(GridItemZombieMirrorQueenMirror *this)

{
  int iVar1;
  GridItemZombieMirrorQueenMirrorProps *pGVar2;
  int *piVar3;
  code *pcVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemZombieMirrorQueenMirrorProps>();
  lVar5 = *(long *)this;
  iVar1 = *(int *)(pGVar2 + 0xec);
  pcVar4 = *(code **)(lVar5 + 0x1d8);
  if (pcVar4 == GridItem::GetHitpoints) {
    fVar6 = (float)GridItem::GetHitpoints((GridItem *)this);
    pcVar4 = *(code **)(lVar5 + 0x1e0);
  }
  else {
    fVar6 = (float)(*pcVar4)();
    pcVar4 = *(code **)(*(long *)this + 0x1e0);
  }
  if (pcVar4 == GridItem::GetMaxHitpoints) {
    fVar7 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    fVar7 = (float)(*pcVar4)();
  }
  local_c = iVar1 + -1;
  local_10 = iVar1 - (int)((fVar6 * (float)iVar1) / fVar7);
  piVar3 = eastl::min_alt<int>(&local_10,&local_c);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*piVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirror::onTakeDamage(DamageInfo const&) */

void GridItemZombieMirrorQueenMirror::onTakeDamage(DamageInfo *param_1)

{
  int iVar1;
  RtObject *this;
  GridItemZombieMirrorQueenMirrorAnimRig *pGVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = calcDamageState((GridItemZombieMirrorQueenMirror *)param_1);
  if (*(int *)(param_1 + 0x1d8) != iVar1) {
    *(int *)(param_1 + 0x1d8) = iVar1;
    GridItemAnimation::GetAnimRig();
    this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pGVar2 = Sexy::RtObject::Cast<GridItemZombieMirrorQueenMirrorAnimRig>(this);
    (**(code **)(*(long *)pGVar2 + 0x110))(pGVar2,*(undefined4 *)(param_1 + 0x1d8),1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirror::playIdleAnim() */

void __thiscall GridItemZombieMirrorQueenMirror::playIdleAnim(GridItemZombieMirrorQueenMirror *this)

{
  undefined4 uVar1;
  RtObject *this_00;
  GridItemZombieMirrorQueenMirrorAnimRig *pGVar2;
  code *pcVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar2 = Sexy::RtObject::Cast<GridItemZombieMirrorQueenMirrorAnimRig>(this_00);
  pcVar3 = *(code **)(*(long *)pGVar2 + 0x110);
  uVar1 = calcDamageState(this);
  (*pcVar3)(pGVar2,uVar1,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirror::onAnimationDone(std::string const&) */

void __thiscall
GridItemZombieMirrorQueenMirror::onAnimationDone
          (GridItemZombieMirrorQueenMirror *this,string *param_1)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04f05dc8(asStack_10);
  cVar1 = std::operator==(param_1,asStack_10);
  std::string::~string(asStack_10);
  if (cVar1 == '\0') {
    FUN_04f05e30(asStack_10);
    cVar1 = std::operator==(param_1,asStack_10);
    std::string::~string(asStack_10);
    if (cVar1 == '\0') {
      FUN_04f05e98(asStack_10);
      cVar1 = std::operator==(param_1,asStack_10);
      std::string::~string(asStack_10);
      if (cVar1 == '\0') {
        FUN_04f05f00(asStack_10);
        cVar1 = std::operator==(param_1,asStack_10);
        std::string::~string(asStack_10);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)this + 0x48))(this);
        }
        goto LAB_04f0c26c;
      }
    }
  }
  playIdleAnim(this);
LAB_04f0c26c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirror::playSpawnAnim() */

void GridItemZombieMirrorQueenMirror::playSpawnAnim(void)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  FUN_04f05dc8(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar1,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirror::playCopyAnim() */

void GridItemZombieMirrorQueenMirror::playCopyAnim(void)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  FUN_04f05e30(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar1,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirror::playZombieOutAnim() */

void GridItemZombieMirrorQueenMirror::playZombieOutAnim(void)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  FUN_04f05e98(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar1,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirror::playBrokenAnim() */

void GridItemZombieMirrorQueenMirror::playBrokenAnim(void)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  FUN_04f05f00(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar1,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieMirrorQueenMirror::TakeDamage(DamageInfo const&) */

void __thiscall
GridItemZombieMirrorQueenMirror::TakeDamage
          (GridItemZombieMirrorQueenMirror *this,DamageInfo *param_1)

{
  float fVar1;
  
  if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
    fVar1 = (float)GridItem::GetHitpoints((GridItem *)this);
  }
  else {
    fVar1 = (float)(**(code **)(*(long *)this + 0x1d8))();
  }
  if ((fVar1 <= *(float *)(param_1 + 8)) && (this[0x1dc] == (GridItemZombieMirrorQueenMirror)0x0)) {
    this[0x1dc] = (GridItemZombieMirrorQueenMirror)0x1;
    playBrokenAnim();
  }
  GridItem::TakeDamage((GridItem *)this,param_1);
  return;
}


/* GridItemZombieMirrorQueenMirror::~GridItemZombieMirrorQueenMirror() */

void __thiscall
GridItemZombieMirrorQueenMirror::~GridItemZombieMirrorQueenMirror
          (GridItemZombieMirrorQueenMirror *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0e660;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieMirrorQueenMirror_06a0e920;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1c0));
  std::
  vector<GridItemZombieMirrorQueenMirror::CopyZombieParams,std::allocator<GridItemZombieMirrorQueenMirror::CopyZombieParams>>
  ::~vector((vector<GridItemZombieMirrorQueenMirror::CopyZombieParams,std::allocator<GridItemZombieMirrorQueenMirror::CopyZombieParams>>
             *)(this + 0x1a8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemZombieMirrorQueenMirror::~GridItemZombieMirrorQueenMirror() */

void __thiscall
GridItemZombieMirrorQueenMirror::~GridItemZombieMirrorQueenMirror
          (GridItemZombieMirrorQueenMirror *this)

{
  ~GridItemZombieMirrorQueenMirror(this + -0x10);
  return;
}


/* GridItemZombieMirrorQueenMirror::~GridItemZombieMirrorQueenMirror() */

void __thiscall
GridItemZombieMirrorQueenMirror::~GridItemZombieMirrorQueenMirror
          (GridItemZombieMirrorQueenMirror *this)

{
  ~GridItemZombieMirrorQueenMirror(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemZombieMirrorQueenMirror::~GridItemZombieMirrorQueenMirror() */

void __thiscall
GridItemZombieMirrorQueenMirror::~GridItemZombieMirrorQueenMirror
          (GridItemZombieMirrorQueenMirror *this)

{
  ~GridItemZombieMirrorQueenMirror(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirror::canCoypZombie(Zombie*) */

void __thiscall
GridItemZombieMirrorQueenMirror::canCoypZombie
          (GridItemZombieMirrorQueenMirror *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  GridItemZombieMirrorQueenMirrorProps *pGVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_1 != (Zombie *)0x0) && (cVar1 = Zombie::IsBoss(param_1), cVar1 == '\0')) &&
      (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0')) &&
     (((iVar3 = Zombie::GetSizeType(param_1), iVar3 != 2 &&
       (iVar3 = Zombie::GetFacing(param_1), iVar3 == 0)) &&
      ((cVar1 = FUN_04f05d40(param_1[0x5a1]), cVar1 != '\0' &&
       (cVar1 = Zombie::IsControlled(param_1), cVar1 == '\0')))))) {
    pGVar4 = GridItem::GetProps<GridItemZombieMirrorQueenMirrorProps>();
    uVar5 = FUN_04f09fe4(*(undefined8 *)(pGVar4 + 0xd0));
    uVar6 = FUN_04f0a034(*(undefined8 *)(pGVar4 + 0xd8));
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar5,uVar6,lVar7 + 8);
    local_10 = FUN_04f0a034(*(undefined8 *)(pGVar4 + 0xd8));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x1c0);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      ToolPacketData::GetProps();
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                           (uVar5,uVar6,aRStack_20);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      bVar2 = !bVar2;
      goto LAB_04f0ea4c;
    }
  }
  bVar2 = false;
LAB_04f0ea4c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirror::walkOutZombie(GridItemZombieMirrorQueenMirror::CopyZombieParams&)
    */

void __thiscall
GridItemZombieMirrorQueenMirror::walkOutZombie
          (GridItemZombieMirrorQueenMirror *this,CopyZombieParams *param_1)

{
  vector<GridItemZombieMirrorQueenMirror::CopyZombieParams,std::allocator<GridItemZombieMirrorQueenMirror::CopyZombieParams>>
  *this_00;
  char cVar1;
  bool bVar2;
  long *plVar3;
  Zombie *pZVar4;
  float *pfVar5;
  SexyVector3 *pSVar6;
  PopAnimRig *this_01;
  CopyZombieParams *pCVar7;
  GridItemZombieMirrorQueenMirrorSubSystem *pGVar8;
  float fVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  float local_60;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [24];
  undefined8 local_40;
  float local_38;
  float local_34;
  function<void(Sexy::Graphics*)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar9 = (float)PVZ_EOT();
  *(float *)(param_1 + 0xc) = fVar9;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,(RtWeakPtrBase *)(param_1 + 0x10));
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_80);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  }
  else {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    this_00 = (vector<GridItemZombieMirrorQueenMirror::CopyZombieParams,std::allocator<GridItemZombieMirrorQueenMirror::CopyZombieParams>>
               *)(this + 0x1a8);
    (**(code **)(*plVar3 + 0x80))(plVar3,0);
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    Zombie::SetIsTargetable(pZVar4,true);
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    Zombie::SetIgnoresCollisions(pZVar4,false);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    local_68 = *(undefined8 *)pfVar5;
    local_60 = pfVar5[2];
    pSVar6 = (SexyVector3 *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    BoardEntity::PlaceOnBoard(pSVar6);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    (**(code **)(*plVar3 + 0x78))(plVar3,&local_68);
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    this_01 = (PopAnimRig *)Zombie::GetAnimRig(pZVar4);
    Sexy::Insets::Insets((Insets *)&local_40,0,0xff,0,0xff);
    PopAnimRig::SetShaderOverrideColor(this_01,(Color *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_58);
    FUN_04f098b0((Insets *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    std::
    vector<GridItemZombieMirrorQueenMirror::CopyZombieParams,std::allocator<GridItemZombieMirrorQueenMirror::CopyZombieParams>>
    ::vector((vector<GridItemZombieMirrorQueenMirror::CopyZombieParams,std::allocator<GridItemZombieMirrorQueenMirror::CopyZombieParams>>
              *)aRStack_58,(vector *)this_00);
    std::
    vector<GridItemZombieMirrorQueenMirror::CopyZombieParams,std::allocator<GridItemZombieMirrorQueenMirror::CopyZombieParams>>
    ::clear(this_00);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aRStack_58);
    local_70 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_58);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70), bVar2)
    {
      pCVar7 = (CopyZombieParams *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      CopyZombieParams::CopyZombieParams((CopyZombieParams *)&local_40,pCVar7);
      if (local_34 < fVar9) {
        std::
        vector<GridItemZombieMirrorQueenMirror::CopyZombieParams,std::allocator<GridItemZombieMirrorQueenMirror::CopyZombieParams>>
        ::push_back(this_00,(CopyZombieParams *)&local_40);
      }
      CopyZombieParams::~CopyZombieParams((CopyZombieParams *)&local_40);
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_78);
    }
    local_40 = *(undefined8 *)pfVar5;
    local_38 = pfVar5[2];
    fVar9 = *pfVar5 - DAT_06ba4fc8;
    pGVar8 = Board::GetGameSubSystem<GridItemZombieMirrorQueenMirrorSubSystem>
                       (*(Board **)(gLawnApp + 0x9f0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_70,(RtWeakPtrBase *)&local_78);
    std::function<void(Sexy::Graphics*)>::function(afStack_28);
    local_40 = CONCAT44(local_40._4_4_,fVar9);
    GridItemZombieMirrorQueenMirrorSubSystem::addZombieWarpInOnly
              (fVar9,local_40._4_4_,local_38,pGVar8,(RtWeakPtr<Sexy::SoundResource> *)&local_70,
               afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)afStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
    playZombieOutAnim();
    std::
    vector<GridItemZombieMirrorQueenMirror::CopyZombieParams,std::allocator<GridItemZombieMirrorQueenMirror::CopyZombieParams>>
    ::~vector((vector<GridItemZombieMirrorQueenMirror::CopyZombieParams,std::allocator<GridItemZombieMirrorQueenMirror::CopyZombieParams>>
               *)aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirror::copyZombie(Zombie*) */

void __thiscall
GridItemZombieMirrorQueenMirror::copyZombie(GridItemZombieMirrorQueenMirror *this,Zombie *param_1)

{
  int iVar1;
  undefined4 uVar2;
  RtWeakPtrBase *this_00;
  SexyVector3 *this_01;
  float *pfVar3;
  GridItemZombieMirrorQueenMirrorProps *pGVar4;
  long lVar5;
  undefined8 *puVar6;
  GridItemZombieMirrorQueenMirrorSubSystem *pGVar7;
  code *pcVar8;
  long *plVar9;
  float fVar10;
  Zombie *pZVar11;
  RtWeakPtrBase aRStack_90 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  float local_80;
  float local_7c;
  float local_70;
  undefined4 uStack_6c;
  float local_68;
  undefined8 local_60;
  undefined4 local_58;
  float local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  undefined4 local_38;
  float local_34;
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_30 [8];
  function<void(Sexy::Graphics*)> afStack_28 [32];
  long local_8;
  
  plVar9 = *(long **)(gLawnApp + 0x9f0);
  pcVar8 = *(code **)(*plVar9 + 0x318);
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtrBase *)Zombie::GetType(param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,this_00);
  this_01 = (SexyVector3 *)(*pcVar8)(plVar9,aRStack_40,0xfffffffb,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_80,0.0,0.0,0.0);
  iVar1 = Sexy::Rand(0x28);
  local_80 = (float)(iVar1 + 0x334);
  iVar1 = SharkMinion::getRow((SharkMinion *)this);
  iVar1 = BoardTransforms::GridToBoardSpaceY(iVar1);
  local_7c = (float)iVar1;
  uVar2 = FUN_04f05d28(*(undefined4 *)(param_1 + 0x50));
  (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar2);
  (**(code **)(*(long *)this_01 + 0x9d8))(this_01);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  local_68 = pfVar3[2];
  local_70 = (float)*(undefined8 *)pfVar3;
  _local_70 = CONCAT44((int)((ulong)*(undefined8 *)pfVar3 >> 0x20),local_70 - 10.0);
  BoardEntity::PlaceOnBoard(this_01);
  fVar10 = (float)FUN_04f05d44(*(undefined4 *)(param_1 + 0x280));
  Zombie::SetHitpoints((Zombie *)this_01,fVar10);
  fVar10 = (float)FUN_04f05d4c(*(undefined4 *)(param_1 + 0x2a8));
  Zombie::setHelmHitpoints((Zombie *)this_01,fVar10);
  (**(code **)(*(long *)this_01 + 0x80))(this_01,1);
  Zombie::SetIsTargetable((Zombie *)this_01,false);
  Zombie::SetIgnoresCollisions((Zombie *)this_01,true);
  FUN_04f06274(this_01 + 0x5a1);
  FUN_04f0627c(this_01 + 0x5a0);
  Zombie::SetEliminateColor((Zombie *)this_01,6);
  pZVar11._0_4_ = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar11._0_4_,0,this_01,0x3a,1);
  std::string::string((string *)aRStack_40,"mirror_copy");
  Zombie::AddTag((Zombie *)this_01,(string *)aRStack_40);
  std::string::~string((string *)aRStack_40);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)&local_50);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1c0),(RtWeakPtr *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  pGVar4 = GridItem::GetProps<GridItemZombieMirrorQueenMirrorProps>();
  CopyZombieParams::CopyZombieParams((CopyZombieParams *)aRStack_40);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  thunk_FUN_05475e00(aRStack_40,lVar5 + 8);
  local_38 = FUN_04f05d28(*(undefined4 *)(param_1 + 0x50));
  local_34 = (float)PVZ_T();
  local_34 = local_34 + *(float *)(pGVar4 + 0xe8);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_30,(RtWeakPtrBase *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  std::
  vector<GridItemZombieMirrorQueenMirror::CopyZombieParams,std::allocator<GridItemZombieMirrorQueenMirror::CopyZombieParams>>
  ::push_back((vector<GridItemZombieMirrorQueenMirror::CopyZombieParams,std::allocator<GridItemZombieMirrorQueenMirror::CopyZombieParams>>
               *)(this + 0x1a8),(CopyZombieParams *)aRStack_40);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)&local_60);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1c0),(RtWeakPtr *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  puVar6 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_60 = *puVar6;
  local_58 = *(undefined4 *)(puVar6 + 1);
  local_50 = *pfVar3 - DAT_06ba4fc8;
  uStack_4c = (undefined4)((ulong)local_60 >> 0x20);
  local_48 = local_58;
  pGVar7 = Board::GetGameSubSystem<GridItemZombieMirrorQueenMirrorSubSystem>
                     (*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,aRStack_90);
  std::function<void(Sexy::Graphics*)>::function(afStack_28);
  GridItemZombieMirrorQueenMirrorSubSystem::addZombie
            ((undefined4)local_60,local_60._4_4_,local_58,local_50,uStack_4c,local_48,pGVar7,
             aRStack_88,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  playCopyAnim();
  CopyZombieParams::~CopyZombieParams((CopyZombieParams *)aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirror::GatherPlantingRestrictions(PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemZombieMirrorQueenMirror::GatherPlantingRestrictions
          (GridItemZombieMirrorQueenMirror *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_c = 0x70;
  local_8 = ___stack_chk_guard;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirror::onGridItemInitialize() */

void __thiscall
GridItemZombieMirrorQueenMirror::onGridItemInitialize(GridItemZombieMirrorQueenMirror *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  GridItemZombieMirrorQueenMirror *pGVar5;
  long *plVar6;
  code *pcVar7;
  Board *this_00;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  refreshStats(this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  playSpawnAnim();
  FUN_04f06288(this + 0x24);
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  uVar2 = SharkMinion::getRow((SharkMinion *)this);
  pGVar5 = (GridItemZombieMirrorQueenMirror *)FUN_04f0cb90(uVar1,uVar2);
  if ((pGVar5 != (GridItemZombieMirrorQueenMirror *)0x0) && (this != pGVar5)) {
    pcVar7 = *(code **)(*(long *)pGVar5 + 0x120);
    DamageInfo::DamageInfo(aDStack_68);
    (*pcVar7)(pGVar5,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar4 = SharkMinion::getRow((SharkMinion *)this);
  std::string::string((string *)aDStack_68,"");
  plVar6 = (long *)Board::GetPlantAt(this_00,iVar3,iVar4,(string *)aDStack_68);
  std::string::~string((string *)aDStack_68);
  nop();
  if (plVar6 != (long *)0x0) {
    pcVar7 = *(code **)(*plVar6 + 0x120);
    DamageInfo::DamageInfo(aDStack_68);
    (*pcVar7)(plVar6,(string *)aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirror::onUpdate() */

void __thiscall GridItemZombieMirrorQueenMirror::onUpdate(GridItemZombieMirrorQueenMirror *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  CopyZombieParams *pCVar7;
  float fVar8;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (this[0x1dc] == (GridItemZombieMirrorQueenMirror)0x0) {
    BoardEntity::CalcGridPosition();
    Sexy::Insets::Insets((Insets *)&local_30);
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    local_30 = (int)*pfVar4;
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    local_2c = local_44 * iVar3 + 0xa0;
    local_28 = (int)DAT_06ba4f98;
    local_24 = BoardConstants::GRIDSQUARE_HEIGHT();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntitiesInRectangle(avStack_20,2,(Insets *)&local_30);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      cVar2 = (**(code **)(*(long *)this + 0x2a8))(this,pZVar6);
      if (cVar2 != '\0') {
        copyZombie(this,pZVar6);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x1a8));
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1a8));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      pCVar7 = (CopyZombieParams *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      fVar8 = (float)PVZ_T();
      if (*(float *)(pCVar7 + 0xc) < fVar8) {
        walkOutZombie(this,pCVar7);
      }
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_40);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

