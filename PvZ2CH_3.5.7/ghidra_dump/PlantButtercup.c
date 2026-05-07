// Class: PlantButtercup


/* PlantButtercup::onUseSpecialAnimCommand(float) */

void PlantButtercup::onUseSpecialAnimCommand(float param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantButtercup::onDestroy() */

void __thiscall PlantButtercup::onDestroy(PlantButtercup *this)

{
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x40),(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantButtercup::StaticClassInit() */

void PlantButtercup::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantButtercup");
    (*pcVar2)(plVar1,asStack_10,FUN_03b33af8,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantButtercup::StaticGetClass() */

long * PlantButtercup::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantButtercup",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantButtercup::GetClass() const */

long * PlantButtercup::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantButtercup",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantButtercup::isValidButterLocation(int, int) */

void __thiscall PlantButtercup::isValidButterLocation(PlantButtercup *this,int param_1,int param_2)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  if ((local_c + 1 == param_2) || (param_2 == local_c + -1 || local_c == param_2)) {
    bVar3 = 1;
    if (local_10 < param_1) goto LAB_03b33cd0;
    bVar2 = local_c == param_2;
  }
  else {
    bVar2 = false;
  }
  bVar3 = bVar2 & param_1 == local_10;
LAB_03b33cd0:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantButtercup::doInstantDamage(Zombie*) */

void __thiscall PlantButtercup::doInstantDamage(PlantButtercup *this,Zombie *param_1)

{
  char cVar1;
  Plant *this_00;
  code *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Zombie *)0x0) goto LAB_03b34b5c;
  this_00 = *(Plant **)(this + 0x10);
  *(undefined4 *)(this_00 + 0x150) = 0;
  if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
    cVar1 = Plant::IsInPlantFoodState(this_00);
    if (cVar1 != '\0') goto LAB_03b34b3c;
LAB_03b34b90:
    pcVar2 = *(code **)(*(long *)this + 0xb0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    (*pcVar2)(this,aRStack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  else {
    cVar1 = (**(code **)(*(long *)this_00 + 0x1f8))();
    if (cVar1 == '\0') goto LAB_03b34b90;
LAB_03b34b3c:
    (**(code **)(*(long *)this + 0xa8))(this,0);
  }
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
LAB_03b34b5c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantButtercup::TryBlockPushOffBoard(Zombie*, int) */

void PlantButtercup::TryBlockPushOffBoard(Zombie *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((Zombie *)(ulong)(uint)param_2 != (Zombie *)0x0) {
    pcVar2 = *(code **)(*(long *)param_1 + 0x3e0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar1 = (*pcVar2)(param_1,aRStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (cVar1 != '\0') {
      doInstantDamage((PlantButtercup *)param_1,(Zombie *)(ulong)(uint)param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantButtercup::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantButtercup::TakeSmashAttack(PlantButtercup *this,RtWeakPtr *param_2)

{
  bool bVar1;
  char cVar2;
  ResourceInfo *pRVar3;
  code *pcVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    pcVar4 = *(code **)(*(long *)this + 0x3e0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    cVar2 = (*pcVar4)(this,aRStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar2 != '\0') {
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
      doInstantDamage(this,(Zombie *)pRVar3);
    }
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
  PlantTupistraStalker::TakeSmashAttack(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantButtercup::SetPopAnimDelegates(PlantAnimRig*) */

void __thiscall PlantButtercup::SetPopAnimDelegates(PlantButtercup *this,PlantAnimRig *param_1)

{
  Board *this_00;
  CBMemberTranslatorX aCStack_98 [24];
  string asStack_80 [24];
  Delegate1<float> aDStack_68 [48];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::SetPopAnimDelegates((PlantFramework *)this,param_1);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUseSpecialAnimCommand);
  Sexy::Delegate1<float>::Delegate1<PlantButtercup,void(PlantButtercup::*)(float)>
            (aDStack_68,aCStack_98);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUseActionAnimCommand);
  Sexy::Delegate1<float>::Delegate1<PlantButtercup,void(PlantButtercup::*)(float)>
            (aDStack_38,asStack_80);
  PlantAnimRig::SetPlantDelegates(param_1,aDStack_68,aDStack_38);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_80,"PlantKernelpult");
  Board::LoadResourceGroupForGameplay(this_00,asStack_80);
  std::string::~string(asStack_80);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantButtercup::onUseActionAnimCommand(float) */

void __thiscall PlantButtercup::onUseActionAnimCommand(PlantButtercup *this,float param_1)

{
  char cVar1;
  bool bVar2;
  Plant *this_00;
  RtWeakPtrBase *pRVar3;
  Projectile *this_01;
  code *pcVar4;
  float fVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = *(Plant **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this_00 + 0x110) != -1) && (*(int *)(this_00 + 0x114) != -1)) {
    if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
      cVar1 = Plant::IsInPlantFoodState(this_00);
    }
    else {
      cVar1 = (**(code **)(*(long *)this_00 + 0x1f8))();
    }
    if (cVar1 == '\0') {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0;
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x28));
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x28));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
            bVar2) {
        pRVar3 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,pRVar3);
        pcVar4 = *(code **)(*(long *)this + 0xb0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
        this_01 = (Projectile *)
                  (*pcVar4)(this,aRStack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        if (this_01 != (Projectile *)0x0) {
          fVar5 = (float)PVZ_T();
          Projectile::SetUpdateTimeOverride(this_01,fVar5 - param_1);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
      }
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
    }
    else {
      (**(code **)(*(long *)this + 0xa8))(this,0);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantButtercup::PlantButtercup() */

void __thiscall PlantButtercup::PlantButtercup(PlantButtercup *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0672f270;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x40),(DummyInit *)0x0);
  this[0x70] = (PlantButtercup)0x0;
  return;
}


/* PlantButtercup::StaticNew() */

PlantButtercup * PlantButtercup::StaticNew(void)

{
  PlantButtercup *this;
  
  this = ::operator_new(0x78);
  PlantButtercup(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantButtercup::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, PultProjectileProps
   const&) */

void __thiscall
PlantButtercup::LaunchProjectileAt
          (PlantButtercup *this,Projectile *param_1,SexyVector3 *param_2,
          PultProjectileProps *param_3)

{
  char cVar1;
  ButtercupProjectile *pBVar2;
  long lVar3;
  Plant *pPVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::LaunchAtFromProps(param_1,param_2,param_3);
  pBVar2 = Sexy::RtObject::Cast<ButtercupProjectile>((RtObject *)param_1);
  if (pBVar2 != (ButtercupProjectile *)0x0) {
    Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
    FUN_03b3370c(pBVar2 + 0x200);
    Sexy::SexyVector3::operator=((SexyVector3 *)(pBVar2 + 0x1a8),param_2);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onButterGridCreated);
    Sexy::Delegate0::Delegate0<PlantButtercup,void(PlantButtercup::*)()>(aDStack_38,aCStack_50);
    Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
              ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x40),(Delegate2 *)aDStack_38);
    Sexy::Delegate0::Delegate0(aDStack_38,(Delegate0 *)(this + 0x40));
    ButtercupProjectile::SetOnGridButterCreatedDelegate(pBVar2,aDStack_38);
    lVar3 = FUN_03b36764(*(undefined8 *)(this + 0x10));
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar1 == '\0') {
      fVar6 = *(float *)(lVar3 + 0x350);
      pPVar4 = *(Plant **)(this + 0x10);
      uVar7 = *(undefined4 *)(lVar3 + 0x344);
    }
    else {
      cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      if (cVar1 == '\0') {
        pPVar4 = *(Plant **)(this + 0x10);
        fVar6 = *(float *)(lVar3 + 0x354);
        uVar7 = *(undefined4 *)(lVar3 + 0x348);
      }
      else {
        pPVar4 = *(Plant **)(this + 0x10);
        fVar6 = *(float *)(lVar3 + 0x358);
        uVar7 = *(undefined4 *)(lVar3 + 0x34c);
      }
    }
    fVar5 = (float)Plant::GetZombieConditionExtendRate(pPVar4,3);
    FUN_03b336f8(uVar7,fVar5 * fVar6,pBVar2 + 0x1b4,pBVar2 + 0x1b8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantButtercup::launchFortifyProjectile(Sexy::SexyVector3, Sexy::RtWeakPtr<Zombie>,
   Sexy::RtWeakPtr<BoardEntity> const&) */

void PlantButtercup::launchFortifyProjectile
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,PlantButtercup *param_4,
               RtWeakPtrBase *param_5)

{
  char cVar1;
  RtObject *this;
  undefined8 uVar2;
  ButtercupProjectile *pBVar3;
  long lVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_5);
  this = (RtObject *)
         Plant::Fire(*(Plant **)(param_4 + 0x10),aRStack_10,
                     *(undefined4 *)(*(Plant **)(param_4 + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (this != (RtObject *)0x0) {
    uVar2 = FUN_03b336b8(*(undefined8 *)(this + 0xe0));
    uVar2 = operator|(uVar2,0x2000);
    FUN_03b336bc(this + 0xe0,uVar2);
    pBVar3 = Sexy::RtObject::Cast<ButtercupProjectile>(this);
    if ((pBVar3 != (ButtercupProjectile *)0x0) &&
       (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_5), cVar1 != '\0')) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_5);
      JackOLanternGhost::SetPlant((JackOLanternGhost *)pBVar3,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    lVar4 = FUN_03b36764(*(undefined8 *)(param_4 + 0x10));
    LaunchProjectileAt(param_4,(Projectile *)this,(SexyVector3 *)&local_20,
                       (PultProjectileProps *)(lVar4 + 0x2e8));
    ButtercupProjectile::SetButterProjectileType(pBVar3,3);
    lVar4 = FUN_03b36764(*(undefined8 *)(param_4 + 0x10));
    FUN_03b33704(pBVar3 + 0x1f8,*(undefined4 *)(lVar4 + 0x364));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantButtercup::launchSpecialProjectile(Sexy::SexyVector3, Sexy::RtWeakPtr<Zombie>,
   Sexy::RtWeakPtr<BoardEntity> const&) */

void PlantButtercup::launchSpecialProjectile
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,PlantButtercup *param_4,
               RtWeakPtrBase *param_5)

{
  char cVar1;
  RtObject *this;
  undefined8 uVar2;
  ButtercupProjectile *pBVar3;
  long lVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 1;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_5);
  this = (RtObject *)
         Plant::Fire(*(Plant **)(param_4 + 0x10),aRStack_10,
                     *(undefined4 *)(*(Plant **)(param_4 + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (this != (RtObject *)0x0) {
    uVar2 = FUN_03b336b8(*(undefined8 *)(this + 0xe0));
    uVar2 = operator|(uVar2,0x2000);
    FUN_03b336bc(this + 0xe0,uVar2);
    pBVar3 = Sexy::RtObject::Cast<ButtercupProjectile>(this);
    if ((pBVar3 != (ButtercupProjectile *)0x0) &&
       (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_5), cVar1 != '\0')) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_5);
      JackOLanternGhost::SetPlant((JackOLanternGhost *)pBVar3,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    lVar4 = FUN_03b36764(*(undefined8 *)(param_4 + 0x10));
    LaunchProjectileAt(param_4,(Projectile *)this,(SexyVector3 *)&local_20,
                       (PultProjectileProps *)(lVar4 + 0x310));
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_4 + 0x10));
    if (cVar1 == '\0') {
      ButtercupProjectile::SetButterProjectileType(pBVar3,4);
      lVar4 = FUN_03b36764(*(undefined8 *)(param_4 + 0x10));
      FUN_03b33704(pBVar3 + 0x1f8,*(undefined4 *)(lVar4 + 0x368));
      lVar4 = FUN_03b36764(*(undefined8 *)(param_4 + 0x10));
      FUN_03b336c4(*(undefined4 *)(lVar4 + 0x33c),pBVar3 + 0xd8);
    }
    else {
      ButtercupProjectile::SetButterProjectileType(pBVar3,5);
      lVar4 = FUN_03b36764(*(undefined8 *)(param_4 + 0x10));
      FUN_03b33704(pBVar3 + 0x1f8,*(undefined4 *)(lVar4 + 0x36c));
      lVar4 = FUN_03b36764(*(undefined8 *)(param_4 + 0x10));
      FUN_03b336c4(*(undefined4 *)(lVar4 + 0x340),pBVar3 + 0xd8);
    }
  }
  *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantButtercup::PlayAttackAnimation() */

void __thiscall PlantButtercup::PlayAttackAnimation(PlantButtercup *this)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  iVar1 = FUN_03b336e4(*(undefined8 *)(this + 0x10));
  if (iVar1 == 5) {
    fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    lVar2 = FUN_03b36764(*(undefined8 *)(this + 0x10));
    if (fVar3 < *(float *)(lVar2 + 0x370)) {
      lVar2 = FUN_03b36ca4(*(undefined8 *)(this + 0x10));
      FUN_03b336ec(lVar2 + 0x3b8);
      this[0x70] = (PlantButtercup)0x1;
      PlantFramework::PlayAttackAnimation((PlantFramework *)this);
      return;
    }
  }
  PlantFramework::PlayAttackAnimation((PlantFramework *)this);
  return;
}


/* PlantButtercup::onButterGridCreated() */

void __thiscall PlantButtercup::onButterGridCreated(PlantButtercup *this)

{
  char cVar1;
  
  if (*(long *)(this + 0x10) != 0) {
    cVar1 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                      ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                       (this + 0x28));
    if (cVar1 == '\0') {
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                 (this + 0x28));
      return;
    }
  }
  return;
}


/* PlantButtercup::~PlantButtercup() */

void __thiscall PlantButtercup::~PlantButtercup(PlantButtercup *this)

{
  *(undefined ***)this = &PTR_GetClass_0672f270;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantButtercup::~PlantButtercup() */

void __thiscall PlantButtercup::~PlantButtercup(PlantButtercup *this)

{
  ~PlantButtercup(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantButtercup::DoSpecial(int) */

void PlantButtercup::DoSpecial(int param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  PlantButtercup *this;
  undefined8 uVar4;
  undefined8 uVar5;
  TPoint *pTVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  long lVar8;
  RtWeakPtr<Sexy::SoundResource> *pRVar9;
  int iVar10;
  int iVar11;
  undefined8 local_88;
  uint local_80;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  int local_60;
  int local_5c;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  undefined8 local_48;
  undefined4 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  this = (PlantButtercup *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  lVar8 = *(long *)(gLawnApp + 0x9f0);
  if (0 < *(int *)(lVar8 + 0xf8)) {
    iVar11 = 0;
    do {
      iVar10 = 0;
      if (0 < *(int *)(lVar8 + 0xfc)) {
        do {
          while (cVar2 = isValidButterLocation(this,iVar11,iVar10), cVar2 == '\0') {
            iVar10 = iVar10 + 1;
            lVar8 = *(long *)(gLawnApp + 0x9f0);
            if (*(int *)(lVar8 + 0xfc) <= iVar10) goto LAB_03b37f74;
          }
          iVar1 = iVar10 + 1;
          Sexy::Point::Point((Point *)local_20,iVar11,iVar10);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_38,(Point *)local_20
                    );
          lVar8 = *(long *)(gLawnApp + 0x9f0);
          iVar10 = iVar1;
        } while (iVar1 < *(int *)(lVar8 + 0xfc));
      }
LAB_03b37f74:
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(lVar8 + 0xf8));
  }
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_38);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_38);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
            (uVar4,uVar5);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_38);
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_88,(__normal_iterator *)local_20);
  if (bVar3) {
    do {
      pTVar6 = (TPoint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
      Sexy::Point::Point((Point *)&local_80,pTVar6);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
      pRVar9 = (RtWeakPtr<Sexy::SoundResource> *)(ulong)local_80;
      EntityFinder::GetEntitiesAtGridSquare
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20,2,pRVar9,
                 local_7c);
      local_78 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_20);
      local_70 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_20);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70),
            bVar3) {
        puVar7 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
        this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
        if (this_00 != (Zombie *)0x0) {
          puVar7 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this_00);
          local_48 = *puVar7;
          local_40 = *(undefined4 *)(puVar7 + 1);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_68);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)&local_60);
          pRVar9 = aRStack_50;
          launchSpecialProjectile((undefined4)local_48,local_48._4_4_,local_40,this,aRStack_58);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
      }
      BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)local_80,local_7c,(int)pRVar9);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_48,(float)local_60,(float)local_5c,0.0);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_58);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_50);
      launchSpecialProjectile
                ((undefined4)local_48,local_48._4_4_,local_40,this,aRStack_58,aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
      local_20[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_38);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_88,(__normal_iterator *)local_20);
    } while (bVar3);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantButtercup::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

void PlantButtercup::CanTargetZombie(undefined8 param_1,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  FUN_03b38200();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantButtercup::FindTargetAndFire(PlantWeapon) */

void PlantButtercup::FindTargetAndFire(long *param_1)

{
  char cVar1;
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::FindTarget(aRStack_18,param_1[2]);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x1a0))(param_1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
               (param_1 + 5),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantButtercup::TakeDamage(DamageInfo const&) */

void PlantButtercup::TakeDamage(DamageInfo *param_1)

{
  char cVar1;
  bool bVar2;
  Zombie *this;
  ZombiePirateBarrel *pZVar3;
  undefined8 *in_x1;
  code *pcVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((RtObject *)*in_x1 != (RtObject *)0x0) &&
     (this = Sexy::RtObject::Cast<Zombie>((RtObject *)*in_x1), this != (Zombie *)0x0)) {
    pcVar4 = *(code **)(*(long *)param_1 + 0x3e0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar1 = (*pcVar4)(param_1,aRStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (cVar1 != '\0') {
      uVar5 = in_x1[2];
      bVar2 = TestFlag<DamageTypeFlags>(uVar5,0x200000);
      if (bVar2) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   (param_1 + 0x28),(RtWeakPtr *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        bVar2 = Sexy::RtObject::IsA<ZombiePirateBarrel>((RtObject *)this);
        if ((bVar2) &&
           (pZVar3 = Sexy::RtObject::Cast<ZombiePirateBarrel>((RtObject *)this),
           pZVar3 != (ZombiePirateBarrel *)0x0)) {
          ZombiePirateBarrel::GetPusherZombie();
          this = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        }
        doInstantDamage((PlantButtercup *)param_1,this);
        bVar2 = TestFlag<DamageTypeFlags>(in_x1[2],2);
      }
      else {
        bVar2 = TestFlag<DamageTypeFlags>(uVar5,2);
      }
      if (bVar2) {
        doInstantDamage((PlantButtercup *)param_1,this);
      }
    }
  }
  PlantMagicbeans::TakeDamage(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantButtercup::DoFortifyAttack() */

void __thiscall PlantButtercup::DoFortifyAttack(PlantButtercup *this)

{
  ulong uVar1;
  undefined8 uVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 local_88;
  undefined8 local_80;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  Insets aIStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  iVar6 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  Sexy::Insets::Insets
            (aIStack_48,*(int *)(*(long *)(this + 0x10) + 0x114) + 1,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -1,3,3);
  EntityFinder::GetEntitiesInGridSquares(avStack_38,2,aIStack_48);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar3) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    local_58 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
    if (local_58 != (Zombie *)0x0) {
      iVar6 = iVar6 + 1;
      std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20,(Zombie **)&local_58);
      if (iVar6 == 3) break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
  }
  iVar6 = 0;
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar3) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
    if ((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         *)*puVar5 !=
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         *)0x0) {
      iVar6 = iVar6 + 1;
      puVar5 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)*puVar5);
      local_58 = (Zombie *)*puVar5;
      local_50 = *(undefined4 *)(puVar5 + 1);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)aRStack_78);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_60,(RtWeakPtrBase *)aRStack_70);
      launchFortifyProjectile
                ((undefined4)local_58,local_58._4_4_,local_50,this,(exception_ptr *)&local_68,
                 (RtWeakPtr<Sexy::SoundResource> *)&local_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
  }
  if (iVar6 != 3) {
    uVar7 = 0;
    if (0 < 3 - iVar6) {
      do {
        uVar2 = local_20;
        uVar1 = uVar7 + 1;
        uVar4 = FUN_03b33734(local_20,local_18);
        if (uVar4 < uVar1) break;
        puVar5 = (undefined8 *)FUN_03b33740(uVar2,uVar7);
        if ((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)*puVar5 !=
            (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0) {
          puVar5 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)*puVar5);
          local_58 = (Zombie *)*puVar5;
          local_50 = *(undefined4 *)(puVar5 + 1);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)aRStack_78);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_60,(RtWeakPtrBase *)aRStack_70);
          launchFortifyProjectile
                    ((undefined4)local_58,local_58._4_4_,local_50,this,(exception_ptr *)&local_68,
                     (RtWeakPtr<Sexy::SoundResource> *)&local_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
        }
        uVar7 = uVar1;
      } while ((int)uVar1 < 3 - iVar6);
    }
  }
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantButtercup::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantButtercup::Fire
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantButtercup *param_4,RtWeakPtr *param_5,undefined8 param_6,undefined4 param_7)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  RtObject *this;
  long *plVar4;
  long lVar5;
  BoardTransforms *this_00;
  ButtercupProjectile *pBVar6;
  SexyVector3 *pSVar7;
  code *pcVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_4 + 0x180))();
  if ((cVar1 == '\0') && (bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_5), bVar2)) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)param_5);
    this = (RtObject *)
           Plant::Fire(*(Plant **)(param_4 + 0x10),(RtWeakPtr<Sexy::SoundResource> *)&local_18,
                       *(undefined4 *)(*(Plant **)(param_4 + 0x10) + 0x110),param_7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    DVec3::DVec3((DVec3 *)&local_28);
    if ((this != (RtObject *)0x0) &&
       (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_38), cVar1 != '\0')) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pcVar8 = *(code **)(*plVar4 + 0x3b0);
      lVar5 = FUN_03b36764(*(undefined8 *)(param_4 + 0x10));
      local_18 = (*pcVar8)(*(undefined4 *)(lVar5 + 0x2f8),plVar4);
      local_14 = param_2;
      local_10 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      this_00 = (BoardTransforms *)FUN_03b36764(*(undefined8 *)(param_4 + 0x10));
      local_28 = local_28 - *(float *)(this_00 + 0x2b8) * (float)iVar3;
      BoardTransforms::BoardSpaceToGrid(this_00,local_28,local_24);
      if ((local_30 == -1) && (local_2c == -1)) {
        pSVar7 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 **)(param_4 + 0x10));
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,pSVar7);
      }
      pBVar6 = Sexy::RtObject::Cast<ButtercupProjectile>(this);
      if (pBVar6 != (ButtercupProjectile *)0x0) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_38);
        JackOLanternGhost::SetPlant
                  ((JackOLanternGhost *)pBVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        lVar5 = FUN_03b36764(*(undefined8 *)(param_4 + 0x10));
        LaunchProjectileAt(param_4,(Projectile *)this,(SexyVector3 *)&local_28,
                           (PultProjectileProps *)(lVar5 + 0x2e8));
        iVar3 = FUN_03b336e4(*(undefined8 *)(param_4 + 0x10));
        if (iVar3 < 3) {
          if (iVar3 == 2) {
            ButtercupProjectile::SetButterProjectileType(pBVar6,1);
            lVar5 = FUN_03b36764(*(undefined8 *)(param_4 + 0x10));
            FUN_03b33704(pBVar6 + 0x1f8,*(undefined4 *)(lVar5 + 0x360));
          }
          else {
            ButtercupProjectile::SetButterProjectileType(pBVar6,0);
            lVar5 = FUN_03b36764(*(undefined8 *)(param_4 + 0x10));
            FUN_03b33704(pBVar6 + 0x1f8,*(undefined4 *)(lVar5 + 0x35c));
          }
        }
        else {
          ButtercupProjectile::SetButterProjectileType(pBVar6,2);
          lVar5 = FUN_03b36764(*(undefined8 *)(param_4 + 0x10));
          FUN_03b33704(pBVar6 + 0x1f8,*(undefined4 *)(lVar5 + 0x364));
        }
        if (param_4[0x70] != (PlantButtercup)0x0) {
          param_4[0x70] = (PlantButtercup)0x0;
          DoFortifyAttack(param_4);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  else {
    this = (RtObject *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

