// Class: ZombossFanPullActionHandler


/* ZombossFanPullActionHandler::IsPulling() const */

ZombossFanPullActionHandler __thiscall
ZombossFanPullActionHandler::IsPulling(ZombossFanPullActionHandler *this)

{
  return this[0x21];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFanPullActionHandler::StaticClassInit() */

void ZombossFanPullActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossFanPullActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04844f38,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossFanPullActionHandler::StaticGetClass() */

long * ZombossFanPullActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossFanPullActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossFanPullActionHandler::GetClass() const */

long * ZombossFanPullActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossFanPullActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossFanPullActionHandler::onFanPullEndEnded(std::string const&) */

void ZombossFanPullActionHandler::onFanPullEndEnded(string *param_1)

{
  long *extraout_x0;
  
  ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  nop();
  (**(code **)(*extraout_x0 + 0xa80))();
  return;
}


/* ZombossFanPullActionHandler::canFanStunZombie(Zombie const*) const */

undefined8 __thiscall
ZombossFanPullActionHandler::canFanStunZombie(ZombossFanPullActionHandler *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  ZombieBeachSurfer *this_00;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x2a8))(param_1);
  if (cVar1 != '\0') {
    return 0;
  }
  bVar2 = Sexy::RtObject::IsA<ZombieBeachSurfer>((RtObject *)param_1);
  if (!bVar2) {
    return 1;
  }
  nop();
  uVar3 = ZombieBeachSurfer::IsOnFoot(this_00);
  return uVar3;
}


/* ZombossFanPullActionHandler::spawnZombieBits(Zombie*) const */

void __thiscall
ZombossFanPullActionHandler::spawnZombieBits(ZombossFanPullActionHandler *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  ZombieBeachSurfer *this_00;
  
  bVar1 = Sexy::RtObject::IsA<ZombieBeachSurfer>((RtObject *)param_1);
  if (bVar1) {
    nop();
    ZombieBeachSurfer::ShatterBoardInstantly(this_00);
  }
  cVar2 = (**(code **)(*(long *)param_1 + 0x370))(param_1);
  if (cVar2 != '\0') {
    (**(code **)(*(long *)param_1 + 0x238))(param_1);
  }
  cVar2 = (**(code **)(*(long *)param_1 + 0x378))(param_1);
  if (cVar2 != '\0') {
    (**(code **)(*(long *)param_1 + 0x240))(param_1);
  }
  return;
}


/* ZombossFanPullActionHandler::canTakeControlOfZombie(Zombie const*) const */

bool __thiscall
ZombossFanPullActionHandler::canTakeControlOfZombie
          (ZombossFanPullActionHandler *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  if (((cVar1 == '\0') && (cVar1 = Zombie::IsIgnoringAllDamage(param_1), cVar1 == '\0')) &&
     (cVar1 = Zombie::IsControlled(param_1), cVar1 == '\0')) {
    bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1);
    bVar2 = !bVar2;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFanPullActionHandler::isZombieTouchingFan(Zombie const*) const */

void __thiscall
ZombossFanPullActionHandler::isZombieTouchingFan(ZombossFanPullActionHandler *this,Zombie *param_1)

{
  ZombieZombossMech_Beach *this_00;
  float *pfVar1;
  TRect *extraout_x1;
  BoardTransforms aBStack_28 [16];
  TRect<int> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  nop();
  ZombieZombossMech_Beach::CalcBellyFootprint(this_00);
  BoardTransforms::GridRectToBoardSpaceRect(aBStack_28,extraout_x1);
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  Sexy::TRect<int>::Contains(aTStack_18,(int)*pfVar1,(int)pfVar1[1]);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossFanPullActionHandler::calculatePullTimeForOneGridSquare(float) const */

float ZombossFanPullActionHandler::calculatePullTimeForOneGridSquare(float param_1)

{
  ZombossHydraSprayActionDefinition *pZVar1;
  
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  return *(float *)(pZVar1 + 0x40) +
         param_1 * (*(float *)(pZVar1 + 0x44) + *(float *)(pZVar1 + 0x48) * param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFanPullActionHandler::moveZombieTowardFan(Zombie*) */

void __thiscall
ZombossFanPullActionHandler::moveZombieTowardFan(ZombossFanPullActionHandler *this,Zombie *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ZombieZombossMech_Beach *this_00;
  TRect *extraout_x1;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  int local_40;
  float local_38;
  BoardTransforms aBStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  uVar3 = *puVar2;
  ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  nop();
  ZombieZombossMech_Beach::CalcBellyFootprint(this_00);
  BoardTransforms::GridRectToBoardSpaceRect(aBStack_28,extraout_x1);
  Sexy::TRect<int>::GetCenter();
  local_38 = (float)uVar3;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar4 = (float)calculatePullTimeForOneGridSquare(((float)local_40 - local_38) / (float)iVar1);
  fVar5 = 0.0;
  if (0.0 < fVar4) {
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar5 = (float)iVar1 / fVar4;
  }
  fVar4 = (float)PVZ_Dt();
  NEON_fminnm(local_38 + fVar5 * fVar4,(float)local_40);
  (**(code **)(*(long *)param_1 + 0x78))(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFanPullActionHandler::makeFanDamageInfo() const */

void ZombossFanPullActionHandler::makeFanDamageInfo(void)

{
  ZombieActionHandler *in_x0;
  undefined8 uVar1;
  Point aPStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(4,0x200);
  operator|(uVar1,0x400000);
  ZombieActionHandler::getZombie(in_x0);
  Sexy::Point::Point(aPStack_18,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,1.0,0.0);
  DamageInfo::DamageInfo((DamageInfo *)0x0,local_10,local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossFanPullActionHandler::ZombossFanPullActionHandler() */

void __thiscall
ZombossFanPullActionHandler::ZombossFanPullActionHandler(ZombossFanPullActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  this[0x21] = (ZombossFanPullActionHandler)0x0;
  *(undefined ***)this = &PTR_GetClass_069093d0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x24) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* ZombossFanPullActionHandler::StaticNew() */

ZombossFanPullActionHandler * ZombossFanPullActionHandler::StaticNew(void)

{
  ZombossFanPullActionHandler *this;
  
  this = ::operator_new(0x40);
  ZombossFanPullActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFanPullActionHandler::onStartAction() */

void __thiscall ZombossFanPullActionHandler::onStartAction(ZombossFanPullActionHandler *this)

{
  ZombieZombossMech *this_00;
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  nop();
  ZombieZombossMech::ResetPlantfoodDamageCounter(this_00);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onFanPullStartEnded");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_Hydra::PlayFanPullStart
            ((ZombieAnimRig_ZombossMech_Hydra *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossFanPullActionHandler::beginZombieSuction() */

void __thiscall ZombossFanPullActionHandler::beginZombieSuction(ZombossFanPullActionHandler *this)

{
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x28));
  return;
}


/* ZombossFanPullActionHandler::beginSuction() */

void __thiscall ZombossFanPullActionHandler::beginSuction(ZombossFanPullActionHandler *this)

{
  ZombieZombossMech_Beach *this_00;
  
  this[0x21] = (ZombossFanPullActionHandler)0x1;
  beginZombieSuction(this);
  ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  nop();
  ZombieZombossMech_Beach::SetWindEffectEnabled(this_00,true);
  return;
}


/* ZombossFanPullActionHandler::onFanPullStartEnded(std::string const&) */

void ZombossFanPullActionHandler::onFanPullStartEnded(string *param_1)

{
  Zombie *this;
  ZombossHydraSprayActionDefinition *pZVar1;
  float fVar2;
  
  beginSuction((ZombossFanPullActionHandler *)param_1);
  ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  nop();
  Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(this);
  ZombieAnimRig_ZombossMech_Hydra::PlayFanPullLoop();
  fVar2 = (float)ZombieZombossMech::GetZomboss_T((ZombieZombossMech *)this);
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  *(float *)(param_1 + 0x24) = fVar2 + *(float *)(pZVar1 + 0x38);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFanPullActionHandler::endZombieSuction() */

void __thiscall ZombossFanPullActionHandler::endZombieSuction(ZombossFanPullActionHandler *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  RtWeakPtr *this_01;
  ResourceInfo *this_02;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_01 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_02 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
    if (this_02 != (ResourceInfo *)0x0) {
      Zombie::EndCondition((Zombie *)this_02,2);
      Zombie::SetIsControlled((Zombie *)this_02,false);
      Zombie::SetIsPulledByBeachZomboss((Zombie *)this_02,false);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossFanPullActionHandler::endSuction() */

void __thiscall ZombossFanPullActionHandler::endSuction(ZombossFanPullActionHandler *this)

{
  ZombieZombossMech_Beach *this_00;
  
  ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  nop();
  ZombieZombossMech_Beach::SetWindEffectEnabled(this_00,false);
  endZombieSuction(this);
  this[0x21] = (ZombossFanPullActionHandler)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFanPullActionHandler::onEndAction() */

void __thiscall ZombossFanPullActionHandler::onEndAction(ZombossFanPullActionHandler *this)

{
  char cVar1;
  RealObject *pRVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsPulling(this);
  if (cVar1 != '\0') {
    endSuction(this);
  }
  pRVar2 = (RealObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  std::string::string(asStack_10,"Play_Zomb_Beach_Zomboss_Suction_Off");
  RealObject::PlayPositionalSound(pRVar2,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  pRVar2 = (RealObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  std::string::string(asStack_10,"Play_Zomb_Beach_Zomboss_Suction_Off_Fan_Disappears");
  RealObject::PlayPositionalSound(pRVar2,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossFanPullActionHandler::~ZombossFanPullActionHandler() */

void __thiscall
ZombossFanPullActionHandler::~ZombossFanPullActionHandler(ZombossFanPullActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_069093d0;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x28));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossFanPullActionHandler::~ZombossFanPullActionHandler() */

void __thiscall
ZombossFanPullActionHandler::~ZombossFanPullActionHandler(ZombossFanPullActionHandler *this)

{
  ~ZombossFanPullActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFanPullActionHandler::pullPlantGroup(PlantGroup*) */

void __thiscall
ZombossFanPullActionHandler::pullPlantGroup(ZombossFanPullActionHandler *this,PlantGroup *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ZombieZombossMech_Beach *this_00;
  vector *pvVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar7;
  BoardEntity *pBVar8;
  long *plVar9;
  RtWeakPtr *this_02;
  ResourceInfo *pRVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  int local_b8;
  int local_a8;
  vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> avStack_98 [24];
  undefined8 local_80 [3];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PlantGroup::HasNonRelocatingPlant();
  if (cVar1 != '\0') {
    ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    nop();
    ZombieZombossMech_Beach::CalcMouthFootprint(this_00);
    ZombieZombossMech_Beach::CalcBellyFootprint(this_00);
    pvVar6 = (vector *)PlantGroup::Plants();
    std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
              (avStack_98,pvVar6);
    local_c0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_98);
    local_80[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_98);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_c0,(__normal_iterator *)local_80), bVar2)
    {
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
      iVar4 = local_a8;
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      iVar3 = local_b8;
      if (iVar4 == *(int *)(lVar7 + 0x114)) {
        pBVar8 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        ZombossHydraPullActionHandler::spawnPlantGuts((ZombossHydraPullActionHandler *)this,pBVar8);
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        pcVar11 = *(code **)(*plVar9 + 0x120);
        makeFanDamageInfo();
        (*pcVar11)(plVar9,(DamageInfo *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      }
      else {
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        if (iVar3 == *(int *)(lVar7 + 0x114)) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
          Plant::GetType();
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
          bVar2 = std::operator==((string *)(lVar7 + 8),"tanglekelp");
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
          if (bVar2) {
            plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
            (**(code **)(*plVar9 + 0x48))();
            ZombieZombossMech_Beach::StartTangleKelpStun(this_00);
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c0);
    }
    cVar1 = PlantGroup::Empty(param_1);
    if ((cVar1 == '\0') &&
       (cVar1 = PlantGroup::CanAttackRelocateGroup(param_1,(BoardEntity *)this_00), cVar1 != '\0'))
    {
      iVar3 = FUN_0483f22c(*(undefined4 *)(param_1 + 0xa4));
      iVar4 = FUN_0483f230(*(undefined4 *)(param_1 + 0xa8));
      Sexy::Point::Point((Point *)&local_c0,iVar3 + 1,iVar4);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_80);
      iVar3 = FUN_0483f22c(*(undefined4 *)(param_1 + 0xa4));
      uVar5 = FUN_0483f230(*(undefined4 *)(param_1 + 0xa8));
      EntityFinder::GetEntitiesAtGridSquare
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_80,1,
                 iVar3 + 1,uVar5);
      cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_80);
      if ((cVar1 != '\0') &&
         ((cVar1 = PlantGroup::CanBeTargetedBy(param_1,(BoardEntity *)0x0,false), cVar1 != '\0' &&
          (cVar1 = PlantGroup::HasInvinciblePlant(), cVar1 == '\0')))) {
        local_68 = FUN_048420f0(*(undefined8 *)pvVar6);
        this_02 = (RtWeakPtr *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
        pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_02);
        cVar1 = PlantNightcap::WhetherCanBePulled
                          ((Plant *)pRVar10,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
        if (cVar1 != '\0') {
          iVar3 = FUN_0483f22c(*(undefined4 *)(param_1 + 0xa4));
          fVar12 = (float)calculatePullTimeForOneGridSquare((float)(local_a8 - iVar3));
          fVar13 = (float)ZombieZombossMech::GetZomboss_T_Modifier((ZombieZombossMech *)this_00);
          if (0.0 < fVar13) {
            fVar13 = (float)ZombieZombossMech::GetZomboss_T_Modifier((ZombieZombossMech *)this_00);
            RelocationEvent::RelocationEvent((RelocationEvent *)&local_68);
            local_48 = 7;
            local_f0 = local_68;
            uStack_e8 = uStack_60;
            local_e0 = local_58;
            uStack_d8 = uStack_50;
            local_d0 = CONCAT44(uStack_44,7);
            local_c8 = local_40;
            PlantGroup::AttackRelocateGroup
                      ((PlantGroup *)(fVar12 / fVar13),0,param_1,
                       (generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c0,&local_f0);
          }
        }
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_80);
    }
    std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector(avStack_98);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFanPullActionHandler::hasControlOfZombie(Zombie const*) const */

void ZombossFanPullActionHandler::hasControlOfZombie(Zombie *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = FUN_0484249c(*(undefined8 *)(param_1 + 0x30));
  uVar2 = FUN_0484244c(*(undefined8 *)(param_1 + 0x28));
  uVar3 = FUN_0484249c(*(undefined8 *)(param_1 + 0x30));
  ToolPacketData::GetProps();
  local_10 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>const*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar2,uVar3,aRStack_18);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* ZombossFanPullActionHandler::sortTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&) */

void ZombossFanPullActionHandler::sortTargets(vector *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)param_1);
  FUN_04846408(uVar1,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFanPullActionHandler::pullZombie(Zombie*) */

void __thiscall
ZombossFanPullActionHandler::pullZombie(ZombossFanPullActionHandler *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  ZombieBeachSurfer *this_00;
  code *pcVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = canTakeControlOfZombie(this,param_1);
  if (cVar1 != '\0') {
    Zombie::SetIsControlled(param_1,true);
    Zombie::SetIsPulledByBeachZomboss(param_1,true);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aDStack_68,(RtWeakPtrBase *)aRStack_70);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
               (this + 0x28),(RtWeakPtr *)aDStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  }
  cVar1 = hasControlOfZombie((Zombie *)this);
  if (cVar1 == '\0') goto LAB_048464ec;
  if ((param_1 == (Zombie *)0x0) ||
     (bVar2 = Sexy::RtObject::IsA<ZombieBeachSurfer>((RtObject *)param_1), !bVar2)) {
LAB_048464b8:
    cVar1 = canFanStunZombie(this,param_1);
    if (cVar1 == '\0') goto LAB_048464cc;
LAB_048465a8:
    PVZ_EOT();
    (**(code **)(*(long *)param_1 + 0x298))(param_1);
    moveZombieTowardFan(this,param_1);
    cVar1 = isZombieTouchingFan(this,param_1);
  }
  else {
    nop();
    cVar1 = ZombieBeachSurfer::IsSurfing(this_00);
    if (cVar1 == '\0') goto LAB_048464b8;
    ZombieVan::prepareBumping((ZombieVan *)this_00);
    cVar1 = canFanStunZombie(this,param_1);
    if (cVar1 != '\0') goto LAB_048465a8;
LAB_048464cc:
    moveZombieTowardFan(this,param_1);
    cVar1 = isZombieTouchingFan(this,param_1);
  }
  if (cVar1 != '\0') {
    spawnZombieBits(this,param_1);
    pcVar3 = *(code **)(*(long *)param_1 + 0x120);
    makeFanDamageInfo();
    (*pcVar3)(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
LAB_048464ec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFanPullActionHandler::pullTargets() */

void __thiscall ZombossFanPullActionHandler::pullTargets(ZombossFanPullActionHandler *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  ZombossHydraSprayActionDefinition *pZVar4;
  undefined8 extraout_x0;
  PlantGroup *extraout_x0_00;
  undefined8 *puVar5;
  Zombie *extraout_x0_01;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar4 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  nop();
  uVar3 = operator|(0x10,2);
  ZombossFanPullActionDefinition::FindTargetsInFrontOfFan
            ((ZombossFanPullActionDefinition *)pZVar4,extraout_x0,uVar3,avStack_20);
  sortTargets((vector *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    if ((RtObject *)*puVar5 == (RtObject *)0x0) {
LAB_048466cc:
      cVar2 = IsPulling(this);
    }
    else {
      bVar1 = Sexy::RtObject::IsA<PlantGroup>((RtObject *)*puVar5);
      if (bVar1) {
        nop();
        pullPlantGroup(this,extraout_x0_00);
        goto LAB_048466cc;
      }
      if (((RtObject *)*puVar5 == (RtObject *)0x0) ||
         (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar5), !bVar1)) goto LAB_048466cc;
      nop();
      pullZombie(this,extraout_x0_01);
      cVar2 = IsPulling(this);
    }
    if (cVar2 == '\0') break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFanPullActionHandler::onUpdateAction() */

void __thiscall ZombossFanPullActionHandler::onUpdateAction(ZombossFanPullActionHandler *this)

{
  char cVar1;
  ZombieZombossMech *this_00;
  ZombossHydraSprayActionDefinition *pZVar2;
  Zombie *this_01;
  ZombieHydraHeadAnimRig *pZVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  nop();
  cVar1 = (**(code **)(*(long *)this_00 + 0xa90))();
  if (cVar1 == '\0') {
    fVar4 = (float)ZombieZombossMech::GetPlantfoodDamageCounterValue(this_00);
    pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
    fVar6 = *(float *)(pZVar2 + 0x3c);
    fVar5 = (float)ZombieZombossMech::GetStunHpFactor(this_00);
    if (fVar5 * fVar6 < fVar4) {
      ZombieZombossMech::DoStun(this_00);
    }
    else {
      cVar1 = IsPulling(this);
      if (cVar1 != '\0') {
        pullTargets(this);
        fVar4 = (float)ZombieZombossMech::GetZomboss_T(this_00);
        if (*(float *)(this + 0x24) <= fVar4) {
          endSuction(this);
          this_01 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
          pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(this_01);
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
          std::string::string(asStack_58,"onFanPullEndEnded");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_60,asStack_58);
          ZombieAnimRig_ZombossMech_Hydra::PlayFanPullEnd
                    ((ZombieAnimRig_ZombossMech_Hydra *)pZVar3,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string(asStack_58);
          nop();
          Sexy::RtId::~RtId(aRStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

