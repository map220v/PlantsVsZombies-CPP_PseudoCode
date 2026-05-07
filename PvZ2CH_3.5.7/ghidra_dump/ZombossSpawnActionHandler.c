// Class: ZombossSpawnActionHandler


/* ZombossSpawnActionHandler::ZombossSpawnActionHandler() */

void __thiscall
ZombossSpawnActionHandler::ZombossSpawnActionHandler(ZombossSpawnActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068c6150;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  uVar1 = PVZ_EOT();
  this[0x4c] = (ZombossSpawnActionHandler)0x0;
  *(undefined4 *)(this + 0x48) = uVar1;
  return;
}


/* ZombossSpawnActionHandler::~ZombossSpawnActionHandler() */

void __thiscall
ZombossSpawnActionHandler::~ZombossSpawnActionHandler(ZombossSpawnActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068c6150;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)(this + 0x28));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossSpawnActionHandler::~ZombossSpawnActionHandler() */

void __thiscall
ZombossSpawnActionHandler::~ZombossSpawnActionHandler(ZombossSpawnActionHandler *this)

{
  ~ZombossSpawnActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* ZombossSpawnActionHandler::onPortalStopAnimDone(std::string const&) */

void ZombossSpawnActionHandler::onPortalStopAnimDone(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnActionHandler::StaticClassInit() */

void ZombossSpawnActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSpawnActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0473b584,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSpawnActionHandler::StaticGetClass() */

long * ZombossSpawnActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSpawnActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSpawnActionHandler::GetClass() const */

long * ZombossSpawnActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSpawnActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnActionHandler::isZombieValidForSpawnLocation(Sexy::RtWeakPtr<ZombieType const>) const
    */

void __thiscall
ZombossSpawnActionHandler::isZombieValidForSpawnLocation
          (ZombossSpawnActionHandler *this,RtWeakPtrBase *param_2)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  undefined1 uVar4;
  int iVar5;
  Board *pBVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined1 auStack_18 [4];
  int local_14;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar3 = (long *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  (**(code **)(*plVar3 + 400))(auStack_18);
  if (0 < local_c) {
    iVar5 = 0;
    do {
      iVar1 = iVar5 + local_14;
      pBVar6 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,param_2);
      cVar2 = Board::RowCanHaveZombieType(pBVar6,iVar1,aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      uVar4 = 0;
      if (cVar2 == '\0') goto LAB_04737f00;
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_c);
  }
  uVar4 = 1;
LAB_04737f00:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnActionHandler::pickPlantfoodSpawnDelay() const */

void ZombossSpawnActionHandler::pickPlantfoodSpawnDelay(void)

{
  int iVar1;
  long extraout_x0;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar2 = *(float *)(extraout_x0 + 0x60);
  iVar1 = Sexy::Rand(((int)*(float *)(extraout_x0 + 100) - (int)fVar2) + 1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 + (int)fVar2 + -1);
}


/* ZombossSpawnActionHandler::onZombiePortalOpenAnimDone(std::string const&) */

void ZombossSpawnActionHandler::onZombiePortalOpenAnimDone(string *param_1)

{
  EffectAnimRig_ZombiePortal *this;
  
  this = (EffectAnimRig_ZombiePortal *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x40))
  ;
  EffectAnimRig_ZombiePortal::PlayLooped(this);
  return;
}


/* ZombossSpawnActionHandler::onZombiePortalCloseAnimDone(std::string const&) */

void ZombossSpawnActionHandler::onZombiePortalCloseAnimDone(string *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x40));
  (**(code **)(*plVar1 + 0x48))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnActionHandler::drawZombieSpawnPortal(Sexy::Graphics*) */

void __thiscall
ZombossSpawnActionHandler::drawZombieSpawnPortal(ZombossSpawnActionHandler *this,Graphics *param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  PopAnimRig *pPVar5;
  int local_50;
  int local_4c;
  Point aPStack_48 [8];
  int local_40;
  int local_3c;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    plVar4 = (long *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    (**(code **)(*plVar4 + 400))(&local_40);
    Sexy::Point::Point(aPStack_48,local_40 + -1,local_3c);
    BoardTransforms::GridToBoardSpace(aPStack_48);
    iVar2 = FUN_04736044(local_50 + -200);
    iVar3 = FUN_04736044(local_4c + -0x8c);
    FUN_04735a94((float)iVar2,(float)iVar3,auStack_28,auStack_1c);
    pPVar5 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PopAnimRig::SetRenderTransform(pPVar5,aSStack_30);
    pPVar5 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PopAnimRig::Draw(pPVar5,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnActionHandler::onEndAction() */

void __thiscall ZombossSpawnActionHandler::onEndAction(ZombossSpawnActionHandler *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  RtObject *this_01;
  ZombieZombossMech *this_02;
  long *plVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_02 = Sexy::RtObject::Cast<ZombieZombossMech>(this_01);
  std::string::string(asStack_10,"Play_Zomb_Global_Zomboss_Attack_Portal_End");
  RealObject::PlayPositionalSound((RealObject *)this_02,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  iVar2 = ZombieZombossMech::GetNextZombieWaveWithPlantfood(this_02);
  iVar3 = ZombieZombossMech::GetZombieWaveCounter(this_02);
  if (iVar2 == iVar3) {
    iVar3 = pickPlantfoodSpawnDelay();
    ZombieZombossMech::SetNextZombieWaveWithPlantfood(this_02,iVar2 + 1 + iVar3);
  }
  this_00 = (RtMixedPtrBase *)(this + 0x40);
  ZombieZombossMech::IncrementZombieWaveCounter(this_02);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar4 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnActionHandler::AddToRenderQueue(RenderQueue*) */

void __thiscall
ZombossSpawnActionHandler::AddToRenderQueue(ZombossSpawnActionHandler *this,RenderQueue *param_1)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x40));
  if (cVar1 != '\0') {
    plVar3 = (long *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    (**(code **)(*plVar3 + 400))(auStack_60);
    uVar2 = Board::MakeRenderOrder(0x61e68,local_5c,1);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,drawZombieSpawnPortal);
    Sexy::Delegate1<Sexy::Graphics*>::
    Delegate1<ZombossSpawnActionHandler,void(ZombossSpawnActionHandler::*)(Sexy::Graphics*)>
              (aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,uVar2,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSpawnActionHandler::StaticNew() */

ZombossSpawnActionHandler * ZombossSpawnActionHandler::StaticNew(void)

{
  ZombossSpawnActionHandler *this;
  
  this = ::operator_new(0x50);
  ZombossSpawnActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnActionHandler::onPortalStartAnimDone(std::string const&) */

void ZombossSpawnActionHandler::onPortalStartAnimDone(string *param_1)

{
  long lVar1;
  RtObject *this;
  ZombieZombossMech *this_00;
  ZombieHydraHeadAnimRig *pZVar2;
  ResourceInfo *pRVar3;
  EffectAnimRig_ZombiePortal *pEVar4;
  undefined4 uVar5;
  string asStack_68 [8];
  RtWeakPtr aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  ZombieAnimRig_ZombossMech::PlayPortalLoop((ZombieAnimRig_ZombossMech *)pZVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_00);
  std::string::string(asStack_68,"POPANIM_EFFECTS_ZOMBOSS_TELEPORTATION_BALL");
  GetPAMByName(asStack_68);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
  PopAnimRig::CreateRig<EffectAnimRig_ZombiePortal>((PopAnim *)pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x40),(RtWeakPtrBase *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  std::string::~string(asStack_68);
  nop();
  pEVar4 = (EffectAnimRig_ZombiePortal *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x40));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)asStack_68);
  std::string::string((string *)aRStack_58,"onZombiePortalOpenAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             aRStack_58);
  EffectAnimRig_ZombiePortal::PlayOpen(pEVar4,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId((RtId *)aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  uVar5 = ZombieZombossMech::GetZomboss_T(this_00);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnActionHandler::spawnZombie() */

void __thiscall ZombossSpawnActionHandler::spawnZombie(ZombossSpawnActionHandler *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  long lVar4;
  RtWeakPtrBase *pRVar5;
  Zombie *this_02;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  int local_58;
  int local_54;
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [16];
  int local_40;
  int local_3c;
  int local_34;
  undefined4 local_30;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  (**(code **)(*(long *)this_01 + 400))(&local_40);
  iVar2 = Sexy::Rand(local_34);
  iVar2 = local_3c + iVar2;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  cVar1 = std::
          vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
          ::empty((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                   *)(this + 0x28));
  if (cVar1 == '\0') {
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
    local_30 = Zombie::GetSummonZombieLevel((Zombie *)this_01);
    uVar7 = *(undefined8 *)(this + 0x28);
    local_2b = 1;
    plVar6 = *(long **)(gLawnApp + 0x9f0);
    pcVar8 = *(code **)(*plVar6 + 0x318);
    lVar4 = FUN_04735c08(uVar7,*(undefined8 *)(this + 0x30));
    pRVar5 = (RtWeakPtrBase *)FUN_04735c14(uVar7,lVar4 + -1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,pRVar5);
    this_02 = (Zombie *)(*pcVar8)(plVar6,aRStack_50,0xfffffffb,(SpawnZombieParams *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    FUN_04737f48(this + 0x30);
    Sexy::Point::Point((Point *)aRStack_50,local_40 + -1,iVar2);
    BoardTransforms::GridToBoardSpace((Point *)aRStack_50);
    Zombie::StartWarpIn(this_02,1.75);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar2 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_50,(float)(local_58 - (iVar2 >> 2)),(float)local_54,0.0);
    BoardEntity::PlaceOnBoard((SexyVector3 *)this_02);
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  }
  else {
    this_02 = (Zombie *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_02);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnActionHandler::onUpdateAction() */

void __thiscall ZombossSpawnActionHandler::onUpdateAction(ZombossSpawnActionHandler *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  RtObject *this_01;
  ZombieZombossMech *this_02;
  long extraout_x0;
  ZombieHydraHeadAnimRig *pZVar4;
  EffectAnimRig_ZombiePortal *pEVar5;
  PopAnimRig *this_03;
  Zombie *this_04;
  vector<Loot,std::allocator<Loot>> *this_05;
  undefined4 *puVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this_06;
  ZombieType *this_07;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_02 = Sexy::RtObject::Cast<ZombieZombossMech>(this_01);
  cVar1 = (**(code **)(*(long *)this_02 + 0xa90))();
  if (cVar1 != '\0') goto LAB_0473c810;
  this_00 = (RtMixedPtrBase *)(this + 0x40);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    this_03 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    fVar8 = (float)PVZ_T();
    fVar9 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_03,fVar8,fVar9);
  }
  fVar8 = (float)PVZ_EOT();
  if (*(float *)(this + 0x48) == fVar8) goto LAB_0473c810;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  fVar13 = *(float *)(extraout_x0 + 0x58);
  fVar12 = *(float *)(extraout_x0 + 0x5c);
  fVar9 = (float)ZombieZombossMech::GetZomboss_T(this_02);
  fVar11 = *(float *)(this + 0x48);
  if (((fVar13 < fVar9 - fVar11) && (this[0x4c] == (ZombossSpawnActionHandler)0x0)) &&
     (this_04 = (Zombie *)spawnZombie(this), this_04 != (Zombie *)0x0)) {
    this[0x4c] = (ZombossSpawnActionHandler)0x1;
    iVar2 = ZombieZombossMech::GetNextZombieWaveWithPlantfood(this_02);
    iVar3 = ZombieZombossMech::GetZombieWaveCounter(this_02);
    if (iVar2 == iVar3) {
      std::
      vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
      vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
              *)aRStack_68,(vector *)(this + 0x28));
      cVar1 = ZombossSummonActionHandler::waveHasPlantfoodCarryingZombie
                        ((ZombossSummonActionHandler *)this,aRStack_68);
      std::
      vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
      ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
               *)aRStack_68);
      if (cVar1 == '\0') {
LAB_0473cae4:
        Zombie::SetHasPlantFood(SUB81(this_04,0));
        iVar3 = pickPlantfoodSpawnDelay();
        ZombieZombossMech::SetNextZombieWaveWithPlantfood(this_02,iVar2 + 1 + iVar3);
      }
      else {
        this_06 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_04);
        this_07 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_06);
        lVar7 = ZombieType::GetProps(this_07);
        if (*(char *)(lVar7 + 0x38) != '\0') {
          lVar7 = FUN_04735c08(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
          dVar14 = (double)(lVar7 + 1);
          iVar3 = Sexy::Rand((int)dVar14);
          if ((double)iVar3 / dVar14 < 1.0 / dVar14) goto LAB_0473cae4;
        }
      }
    }
    this_05 = (vector<Loot,std::allocator<Loot>> *)
              ZombieZombossMech::GetLootForSpawnedZombies(this_02);
    cVar1 = std::
            vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
            ::empty((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                     *)(this + 0x28));
    if ((cVar1 != '\0') &&
       (cVar1 = std::vector<Loot,std::allocator<Loot>>::empty(this_05), cVar1 == '\0')) {
      puVar6 = (undefined4 *)
               std::vector<unsigned_int,std::allocator<unsigned_int>>::back
                         ((vector<unsigned_int,std::allocator<unsigned_int>> *)this_05);
      Zombie::SetLoot(this_04,*puVar6);
      FUN_04735d38(this_05 + 8);
    }
  }
  if (fVar13 + fVar12 < fVar9 - fVar11) {
    cVar1 = std::
            vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
            ::empty((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                     *)(this + 0x28));
    if (cVar1 == '\0') {
      uVar10 = ZombieZombossMech::GetZomboss_T(this_02);
      this[0x4c] = (ZombossSpawnActionHandler)0x0;
      *(undefined4 *)(this + 0x48) = uVar10;
    }
    else {
      *(float *)(this + 0x48) = fVar8;
      pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_02);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
      std::string::string((string *)aRStack_68,"onPortalStopAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
                 aRStack_68);
      ZombieAnimRig_ZombossMech::PlayPortalEnd((ZombieAnimRig_ZombossMech *)pZVar4,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aRStack_68);
      nop();
      Sexy::RtId::~RtId(aRStack_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      pEVar5 = (EffectAnimRig_ZombiePortal *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
      std::string::string((string *)aRStack_68,"onZombiePortalCloseAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
                 aRStack_68);
      EffectAnimRig_ZombiePortal::PlayClose(pEVar5,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aRStack_68);
      nop();
      Sexy::RtId::~RtId(aRStack_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_02);
    }
  }
LAB_0473c810:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0473d250 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSpawnActionHandler::pickZombiesForSpawn() */

void __thiscall ZombossSpawnActionHandler::pickZombiesForSpawn(ZombossSpawnActionHandler *this)

{
  char cVar1;
  RtObject *this_00;
  ZombieZombossMech *pZVar2;
  long extraout_x0;
  ulong uVar3;
  long lVar4;
  string *psVar5;
  ulong uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_13e0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_13d8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_13d0 [48];
  MTRand aMStack_13a0 [5016];
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar2 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  clear((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
         *)(this + 0x28));
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_13d0);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_13d0);
  fVar7 = (float)FUN_04735b7c(*(undefined4 *)(pZVar2 + 0x284));
  auVar8 = FUN_04735b78(*(undefined4 *)(pZVar2 + 0x280));
  fVar7 = CurveLerp<float>(auVar8,fVar7,fVar7 - auVar8._0_4_,extraout_x0 + 0x68,extraout_x0 + 0x6c,1
                          );
  uVar3 = CalcRandomSeed(1);
  Sexy::MTRand::MTRand(aMStack_13a0,uVar3 & 0xffffffff);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)aRStack_13d0);
  lVar4 = FUN_04735bd0(*(undefined8 *)(extraout_x0 + 0x40),*(undefined8 *)(extraout_x0 + 0x48));
  if (lVar4 != 0) {
    do {
      psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      FUN_04735c00(*(undefined8 *)(extraout_x0 + 0x40),uVar6);
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_13d8,(RtWeakPtrBase *)aRStack_13e0);
      cVar1 = isZombieValidForSpawnLocation(this,aRStack_13d8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_13d8)
      ;
      if (cVar1 == '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_13e0);
      }
      else {
        std::
        set<Sexy::RtWeakPtr<ZombieType_const>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
        ::insert((set<Sexy::RtWeakPtr<ZombieType_const>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                  *)aRStack_13d0,(RtWeakPtr *)aRStack_13e0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_13e0);
      }
      uVar6 = uVar6 + 1;
      uVar3 = FUN_04735bd0(*(undefined8 *)(extraout_x0 + 0x40),*(undefined8 *)(extraout_x0 + 0x48));
    } while (uVar6 < uVar3);
  }
  WaveHelpers::PickZombiesFromPool
            ((int)fVar7,(set *)aRStack_13d0,aMStack_13a0,(vector *)(this + 0x28));
  std::
  set<Sexy::RtWeakPtr<ZombieType_const>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
  ::~set((set<Sexy::RtWeakPtr<ZombieType_const>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
          *)aRStack_13d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnActionHandler::onStartAction() */

void __thiscall ZombossSpawnActionHandler::onStartAction(ZombossSpawnActionHandler *this)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *pZVar3;
  undefined4 uVar4;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  iVar2 = ZombieZombossMech::GetNextZombieWaveWithPlantfood(this_01);
  if (iVar2 == -1) {
    iVar2 = pickPlantfoodSpawnDelay();
    ZombieZombossMech::SetNextZombieWaveWithPlantfood(this_01,iVar2);
  }
  pickZombiesForSpawn(this);
  this[0x4c] = (ZombossSpawnActionHandler)0x0;
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0x48) = uVar4;
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string(asStack_68,"onPortalStartAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
             asStack_68);
  ZombieAnimRig_ZombossMech::PlayPortalStart((ZombieAnimRig_ZombossMech *)pZVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_01);
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
          *)asStack_68,(vector *)(this + 0x28));
  cVar1 = ZombossSummonActionHandler::waveHasPlantfoodCarryingZombie
                    ((ZombossSummonActionHandler *)this,asStack_68);
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)asStack_68);
  if (cVar1 == '\0') {
    iVar2 = ZombieZombossMech::GetNextZombieWaveWithPlantfood(this_01);
    ZombieZombossMech::SetNextZombieWaveWithPlantfood(this_01,iVar2 + 1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

