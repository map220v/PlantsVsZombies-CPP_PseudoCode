// Class: PlantMatchFlower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMatchFlower::GetDamageFlags(PlantWeapon) */

void __thiscall PlantMatchFlower::GetDamageFlags(undefined8 param_1,int param_2)

{
  undefined8 local_10;
  long local_8;
  
  local_10 = 0x400;
  local_8 = ___stack_chk_guard;
  if (param_2 == 1) {
    operator|=(&local_10,0x2000);
    operator|=(&local_10,0x1000);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMatchFlower::StaticClassInit() */

void PlantMatchFlower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantMatchFlower");
    (*pcVar2)(plVar1,asStack_10,FUN_04138650,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMatchFlower::StaticGetClass() */

long * PlantMatchFlower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantMatchFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMatchFlower::GetClass() const */

long * PlantMatchFlower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantMatchFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMatchFlower::IsInNegativeStatus() */

undefined8 __thiscall PlantMatchFlower::IsInNegativeStatus(PlantMatchFlower *this)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),2);
  if ((cVar1 == '\0') &&
     (cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0xb), cVar1 == '\0')) {
    lVar3 = *(long *)(this + 0x10);
    cVar1 = FUN_04136e28(*(undefined1 *)(lVar3 + 0x278));
    if (cVar1 == '\0') {
      uVar2 = Plant::HasCondition(lVar3,0x1d);
      return uVar2;
    }
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMatchFlower::choosePlantAction() */

void __thiscall PlantMatchFlower::choosePlantAction(PlantMatchFlower *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x40);
  lVar5 = 0;
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_04136e88(iVar1);
  if (cVar2 != '\0') {
    lVar5 = (long)(iVar1 + 1);
  }
  FUN_04136e2c(aRStack_10,*(undefined8 *)(this + 0x10));
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  uVar4 = FUN_04136ec4(*(undefined8 *)(lVar3 + 0x70),lVar5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* PlantMatchFlower::PlantMatchFlower() */

void __thiscall PlantMatchFlower::PlantMatchFlower(PlantMatchFlower *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067ec210;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  return;
}


/* PlantMatchFlower::StaticNew() */

PlantMatchFlower * PlantMatchFlower::StaticNew(void)

{
  PlantMatchFlower *this;
  
  this = ::operator_new(0x58);
  PlantMatchFlower(this);
  return this;
}


/* PlantMatchFlower::~PlantMatchFlower() */

void __thiscall PlantMatchFlower::~PlantMatchFlower(PlantMatchFlower *this)

{
  *(undefined ***)this = &PTR_GetClass_067ec210;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantMatchFlower::~PlantMatchFlower() */

void __thiscall PlantMatchFlower::~PlantMatchFlower(PlantMatchFlower *this)

{
  ~PlantMatchFlower(this);
  AK::FreeHook(this);
  return;
}


/* PlantMatchFlower::CancelPlantfood() */

void __thiscall PlantMatchFlower::CancelPlantfood(PlantMatchFlower *this)

{
  bool bVar1;
  ComponentWarmingRadius *this_00;
  long lVar2;
  undefined4 uVar3;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x38));
  if (bVar1) {
    this_00 = (ComponentWarmingRadius *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
    lVar2 = FUN_041382d0(*(undefined8 *)(this + 0x10));
    ComponentWarmingRadius::SetRadiusProps(this_00,(ComponentWarmingRadiusProps *)(lVar2 + 0x358));
  }
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x44) = uVar3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMatchFlower::UpdateActions() */

void __thiscall PlantMatchFlower::UpdateActions(PlantMatchFlower *this)

{
  int iVar1;
  char cVar2;
  PopAnimRig *this_00;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  iVar1 = *(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 10) {
    cVar2 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
    if (cVar2 == '\0') {
      cVar2 = Plant::CanFindTargetInRow
                        (*(long *)(this + 0x10),*(undefined4 *)(*(long *)(this + 0x10) + 0x110));
      if (cVar2 == '\0') {
        lVar4 = FUN_041384c8(*(undefined8 *)(this + 0x10));
        FUN_04136ea0(lVar4 + 0x3c4);
      }
      else {
        plVar3 = (long *)FUN_041384c8(*(undefined8 *)(this + 0x10));
        pcVar5 = *(code **)(*plVar3 + 600);
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
        (*pcVar5)(plVar3,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xb;
      }
    }
  }
  else if (iVar1 == 0xb) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar2 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar2 == '\0') {
      cVar2 = Plant::CanFindTargetInRow
                        (*(long *)(this + 0x10),*(undefined4 *)(*(long *)(this + 0x10) + 0x110));
      if (cVar2 == '\0') {
        plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        (**(code **)(*plVar3 + 0x118))();
        *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
      }
      else {
        plVar3 = (long *)FUN_041384c8(*(undefined8 *)(this + 0x10));
        pcVar5 = *(code **)(*plVar3 + 600);
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
        (*pcVar5)(plVar3,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
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
/* PlantMatchFlower::UpdatePlantfood() */

void __thiscall PlantMatchFlower::UpdatePlantfood(PlantMatchFlower *this)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  ulong uVar7;
  Zombie *extraout_x0;
  code *pcVar8;
  ulong uVar9;
  float fVar10;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [16];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar10 = (float)PVZ_T();
  if (*(float *)(this + 0x44) < fVar10) {
    uVar9 = 0;
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    lVar3 = FUN_04136ec4(*(undefined8 *)(lVar3 + 0x70),1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
    uVar4 = (**(code **)(*(long *)this + 0x198))(this,1);
    operator|=(auStack_58,uVar4);
    fVar10 = (float)PVZ_T();
    pcVar8 = *(code **)(*(long *)this + 0x2b8);
    *(float *)(this + 0x44) = fVar10 + *(float *)(lVar3 + 0x28);
    (*pcVar8)(auStack_90,this,1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    uVar2 = operator|(4,2);
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar2,
               auStack_90,*(int *)(*(long *)(this + 0x10) + 0x110) + -1,
               *(int *)(*(long *)(this + 0x10) + 0x110) + 1);
    uVar4 = local_80;
    lVar3 = FUN_04136eb0(local_80,local_78);
    if (lVar3 != 0) {
      do {
        puVar5 = (undefined8 *)FUN_04136ebc(uVar4,uVar9);
        pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
        if (pZVar6 == (Zombie *)0x0) {
          FUN_04136ebc(local_80,uVar9);
          nop();
          cVar1 = (**(code **)(*(long *)extraout_x0 + 0x200))();
          pZVar6 = extraout_x0;
          if (cVar1 != '\0') goto LAB_04138ff0;
        }
        else {
          uVar4 = operator|(1,0x2000);
          uVar2 = operator|(uVar4,4);
          cVar1 = Zombie::MatchesAny(pZVar6,uVar2,*(undefined8 *)(this + 0x10));
          if (cVar1 == '\0') {
LAB_04138ff0:
            (**(code **)(*(long *)pZVar6 + 0x110))(pZVar6,aRStack_68);
          }
        }
        uVar4 = local_80;
        uVar9 = uVar9 + 1;
        uVar7 = FUN_04136eb0(local_80,local_78);
      } while (uVar9 < uVar7);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMatchFlower::setFireAttackState(PlantMatchFlower::MatchAttackState) */

void __thiscall PlantMatchFlower::setFireAttackState(PlantMatchFlower *this,int param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  PlantAnimRig_MatchFlower *pPVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  
  if ((param_2 != 0) && (cVar1 = IsInNegativeStatus(this), cVar1 != '\0')) {
    return;
  }
  *(int *)(this + 0x40) = param_2;
  *(undefined4 *)(this + 0x4c) = 0;
  cVar1 = FUN_04136e88(param_2);
  if (cVar1 == '\0') {
    uVar6 = PVZ_EOT();
    *(undefined4 *)(this + 0x48) = uVar6;
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
    if (bVar2) {
LAB_0413959c:
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
      bVar3 = FUN_04136e88(*(undefined4 *)(this + 0x40));
      FUN_04136e78(lVar5 + 0x88,bVar3 ^ 1);
      pPVar4 = (PlantAnimRig_MatchFlower *)FUN_041384c8(*(undefined8 *)(this + 0x10));
      PlantAnimRig_MatchFlower::updateFireEffect(pPVar4,*(int *)(this + 0x40));
      return;
    }
  }
  else {
    fVar7 = (float)PVZ_T();
    lVar5 = FUN_041382d0(*(undefined8 *)(this + 0x10));
    *(float *)(this + 0x48) = fVar7 + *(float *)(lVar5 + 0x2c0);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
    if (bVar2) goto LAB_0413959c;
  }
  pPVar4 = (PlantAnimRig_MatchFlower *)FUN_041384c8(*(undefined8 *)(this + 0x10));
  PlantAnimRig_MatchFlower::updateFireEffect(pPVar4,*(int *)(this + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMatchFlower::increaseAndCheckAttackCount() */

void __thiscall PlantMatchFlower::increaseAndCheckAttackCount(PlantMatchFlower *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int local_10 [2];
  long local_8;
  
  iVar1 = *(int *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  cVar3 = FUN_04136e94(iVar1);
  if ((cVar3 == '\0') &&
     (iVar2 = *(int *)(this + 0x4c), *(int *)(this + 0x4c) = iVar2 + 1,
     *(int *)(this + 0x50) <= iVar2 + 1)) {
    local_10[1] = 2;
    local_10[0] = iVar1 + 1;
    piVar4 = eastl::min_alt<int>(local_10,local_10 + 1);
    if (local_8 == ___stack_chk_guard) {
      setFireAttackState(this,*piVar4);
      return;
    }
  }
  else if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMatchFlower::DoSpecial(int) */

void PlantMatchFlower::DoSpecial(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  PlantMatchFlower *this;
  undefined8 uVar4;
  PlantAnimRig_MatchFlower *this_00;
  long *plVar5;
  long lVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar7;
  Effect_PopAnim *pEVar8;
  ResourceInfo *pRVar9;
  StandaloneEffect *this_02;
  ulong uVar10;
  undefined8 *puVar11;
  Zombie *pZVar12;
  char *__s;
  RealObject *this_03;
  ulong uVar13;
  float fVar14;
  UnchartedModePlantNumData aUStack_b0 [8];
  RtMixedPtrBase aRStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  Vec3 aVStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  this = (PlantMatchFlower *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 != '\0') goto LAB_04139710;
  choosePlantAction(this);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  uVar4 = (**(code **)(*(long *)this + 0x198))(this,0);
  operator|=(auStack_58,uVar4);
  this_00 = (PlantAnimRig_MatchFlower *)FUN_041384c8(*(undefined8 *)(this + 0x10));
  cVar1 = PlantAnimRig_MatchFlower::IsFinalPunchAttack(this_00);
  if (cVar1 == '\0') {
    uVar4 = *(undefined8 *)(this + 0x10);
    iVar3 = FUN_04136e50(uVar4);
  }
  else {
    uVar4 = *(undefined8 *)(this + 0x10);
    local_60 = local_60 + local_60;
    iVar3 = FUN_04136e50(uVar4);
  }
  if (2 < iVar3) {
    lVar6 = FUN_041382d0(uVar4);
    local_60 = local_60 * *(float *)(lVar6 + 0x2c4);
  }
  UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_b0,1,0);
  (**(code **)(*(long *)this + 0xe0))
            (aRStack_a8,this,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0,0,aUStack_b0);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_a8);
  if (cVar2 == '\0') {
    PlantFramework::FindTargetDamageableGridItem((RtMixedPtrBase *)&local_80,this);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_80);
    if (cVar2 != '\0') {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
      (**(code **)(*plVar5 + 0x110))(plVar5,aDStack_68);
      increaseAndCheckAttackCount(this);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
    this_03 = *(RealObject **)(this + 0x10);
    if (cVar1 == '\0') goto LAB_041398bc;
LAB_04139834:
    __s = "Play_Plant_BonkChoy_Impact_Final";
  }
  else {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
    (**(code **)(*plVar5 + 0x110))(plVar5,aDStack_68);
    cVar2 = FUN_04136e58(*(undefined8 *)(this + 0x10));
    if (cVar2 != '\0') {
      fVar14 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      lVar6 = FUN_041382d0(*(undefined8 *)(this + 0x10));
      if (fVar14 < *(float *)(lVar6 + 0x2c8)) {
        this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
        pfVar7 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_01);
        EATextSquish::Vec3::Vec3(aVStack_90,*pfVar7,pfVar7[1],30.0);
        Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)&local_80);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
        pEVar8 = (Effect_PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
        std::string::string((string *)&local_98,"POPANIM_EFFECTS_MATCHFLOWER_HIT_EFFECT");
        GetPAMByName((string *)&local_98);
        pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_80);
        Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
        std::string::~string((string *)&local_98);
        nop();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
        iVar3 = (**(code **)(*plVar5 + 0x170))();
        FUN_04136e1c(lVar6 + 0x1c,iVar3 + 1);
        this_02 = (StandaloneEffect *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
        StandaloneEffect::SetBoardSpaceOrigin(this_02,(SexyVector3 *)aVStack_90,-1);
        pEVar8 = (Effect_PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
        Effect_PopAnim::SetCentered(pEVar8,true);
        pEVar8 = (Effect_PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
        std::string::string((string *)&local_80,"attack_blue_01");
        Effect_PopAnim::PlaySingleAnimation(pEVar8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_80,0);
        std::string::~string((string *)&local_80);
        nop();
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
        BoardEntity::CalcGridPosition();
        EntityFinder::GetEntitiesAtGridSquare
                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80,2,local_98,local_94);
        for (uVar13 = 0; uVar4 = local_80, uVar10 = FUN_04136eb0(local_80,local_78), uVar13 < uVar10
            ; uVar13 = uVar13 + 1) {
          puVar11 = (undefined8 *)FUN_04136ebc(uVar4,uVar13);
          pZVar12 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar11);
          if (pZVar12 != (Zombie *)0x0) {
            (**(code **)(*(long *)pZVar12 + 0x110))(pZVar12,aDStack_68);
          }
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0)
        ;
      }
    }
    increaseAndCheckAttackCount(this);
    this_03 = *(RealObject **)(this + 0x10);
    if (cVar1 != '\0') goto LAB_04139834;
LAB_041398bc:
    __s = "Play_Bonk";
  }
  std::string::string((string *)&local_80,__s);
  RealObject::PlayPositionalSound(this_03,(string *)&local_80,0.0);
  std::string::~string((string *)&local_80);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
  DamageInfo::~DamageInfo(aDStack_68);
LAB_04139710:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantMatchFlower::IsImpactedByObject(Sexy::RtWeakPtr<Sexy::RtObject>) */

void PlantMatchFlower::IsImpactedByObject(PlantMatchFlower *param_1)

{
  setFireAttackState(param_1,2);
  return;
}


/* PlantMatchFlower::NotifySetHidden(bool, bool) */

void PlantMatchFlower::NotifySetHidden(bool param_1,bool param_2)

{
  RtWeakPtr *this;
  bool bVar1;
  long lVar2;
  
  this = (RtWeakPtr *)((PlantMatchFlower *)(ulong)param_1 + 0x30);
  setFireAttackState((PlantMatchFlower *)(ulong)param_1,0);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (!bVar1) {
    return;
  }
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  FUN_04136e80(lVar2 + 0xd0,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMatchFlower::ApplyPlantfood() */

void __thiscall PlantMatchFlower::ApplyPlantfood(PlantMatchFlower *this)

{
  bool bVar1;
  ComponentWarmingRadius *this_00;
  long lVar2;
  RealObject *this_01;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xc;
  setFireAttackState(this,2);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x38));
  if (bVar1) {
    this_00 = (ComponentWarmingRadius *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
    lVar2 = FUN_041382d0(*(undefined8 *)(this + 0x10));
    ComponentWarmingRadius::SetRadiusProps(this_00,(ComponentWarmingRadiusProps *)(lVar2 + 0x470));
  }
  fVar3 = (float)PVZ_T();
  lVar2 = FUN_041382d0(*(undefined8 *)(this + 0x10));
  this_01 = *(RealObject **)(this + 0x10);
  *(float *)(this + 0x44) = fVar3 + *(float *)(lVar2 + 0x2b8);
  std::string::string(asStack_10,"Play_Plant_MatchFlower_PlantFood");
  RealObject::PlayPositionalSound(this_01,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMatchFlower::updateFireEffect() */

void __thiscall PlantMatchFlower::updateFireEffect(PlantMatchFlower *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  PlantAnimRig_MatchFlower *this_00;
  int *piVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 local_28;
  undefined4 local_24;
  FastCurve aFStack_20 [8];
  int local_18 [2];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x40) != 0) {
    fVar5 = (float)PVZ_T();
    if (*(float *)(this + 0x48) < fVar5) {
      local_10[0] = 0;
      local_18[0] = *(int *)(this + 0x40) + -1;
      piVar4 = eastl::max_alt<int>(local_18,(int *)local_10);
      setFireAttackState(this,*piVar4);
    }
    cVar1 = IsInNegativeStatus(this);
    if (cVar1 != '\0') {
      setFireAttackState(this,0);
    }
    lVar3 = *(long *)(this + 0x10);
    uVar6 = *(undefined4 *)(lVar3 + 0x1c);
    local_28 = FUN_04136ef0(*(undefined4 *)(lVar3 + 0x18),uVar6,*(undefined4 *)(lVar3 + 0x20));
    local_24 = uVar6;
    FUN_04136e2c((RtWeakPtr<Sexy::ResourceInfo> *)local_18,*(undefined8 *)(this + 0x10));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    fVar5 = *(float *)(lVar3 + 0x9c);
    FUN_04136e2c((RtWeakPtr<Sexy::ResourceInfo> *)local_10,*(undefined8 *)(this + 0x10));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    Sexy::FastCurve::SetOutRange(aFStack_20,fVar5,*(float *)(lVar3 + 0xa0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    this_00 = (PlantAnimRig_MatchFlower *)FUN_041384c8(*(undefined8 *)(this + 0x10));
    iVar2 = (**(code **)(*(long *)this + 0x88))(this);
    PlantAnimRig_MatchFlower::updateFirePos
              (this_00,(SexyVector2 *)&local_28,(SexyVector2 *)aFStack_20,iVar2 + -1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMatchFlower::UpdateUnconditionally() */

void __thiscall PlantMatchFlower::UpdateUnconditionally(PlantMatchFlower *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  PlantAnimRig_MatchFlower *this_00;
  int *piVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  FastCurve aFStack_20 [8];
  int aiStack_18 [2];
  undefined4 auStack_10 [2];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x40) != 0) {
    fVar5 = (float)PVZ_T();
    if (*(float *)(this + 0x48) < fVar5) {
      auStack_10[0] = 0;
      aiStack_18[0] = *(int *)(this + 0x40) + -1;
      piVar4 = eastl::max_alt<int>(aiStack_18,(int *)auStack_10);
      setFireAttackState(this,*piVar4);
    }
    cVar1 = IsInNegativeStatus(this);
    if (cVar1 != '\0') {
      setFireAttackState(this,0);
    }
    lVar3 = *(long *)(this + 0x10);
    uVar6 = *(undefined4 *)(lVar3 + 0x1c);
    uStack_28 = FUN_04136ef0(*(undefined4 *)(lVar3 + 0x18),uVar6,*(undefined4 *)(lVar3 + 0x20));
    uStack_24 = uVar6;
    FUN_04136e2c((RtWeakPtr<Sexy::ResourceInfo> *)aiStack_18,*(undefined8 *)(this + 0x10));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aiStack_18);
    fVar5 = *(float *)(lVar3 + 0x9c);
    FUN_04136e2c((RtWeakPtr<Sexy::ResourceInfo> *)auStack_10,*(undefined8 *)(this + 0x10));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)auStack_10);
    Sexy::FastCurve::SetOutRange(aFStack_20,fVar5,*(float *)(lVar3 + 0xa0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)auStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aiStack_18);
    this_00 = (PlantAnimRig_MatchFlower *)FUN_041384c8(*(undefined8 *)(this + 0x10));
    iVar2 = (**(code **)(*(long *)this + 0x88))(this);
    PlantAnimRig_MatchFlower::updateFirePos
              (this_00,(SexyVector2 *)&uStack_28,(SexyVector2 *)aFStack_20,iVar2 + -1);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04139f70 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantMatchFlower::Initialize() */

void __thiscall PlantMatchFlower::Initialize(PlantMatchFlower *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  bool bVar1;
  long lVar2;
  ComponentRunner *pCVar3;
  ComponentProjectileConverter *pCVar4;
  long lVar5;
  ComponentObjectImpactor *this_01;
  ComponentWarmingRadius *this_02;
  undefined8 uVar6;
  BoardEntity *this_03;
  undefined4 uVar7;
  RtWeakPtrBase aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28);
  PlantFramework::Initialize((PlantFramework *)this);
  lVar2 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar2 + 200) = 10;
  uVar7 = PVZ_EOT();
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x44) = uVar7;
  *(undefined4 *)(this + 0x48) = uVar7;
  lVar2 = FUN_041382d0(lVar2);
  this_03 = *(BoardEntity **)(this + 0x10);
  FUN_04136e50(this_03);
  uVar7 = *(undefined4 *)(lVar2 + 0x2d0);
  if ((int)lVar2 < 2) {
    uVar7 = *(undefined4 *)(lVar2 + 0x2cc);
  }
  *(undefined4 *)(this + 0x50) = uVar7;
  pCVar3 = (ComponentRunner *)BoardEntity::GetComponentRunner(this_03);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,aRStack_28);
  std::string::string(asStack_18,"ProjectileConverter");
  ComponentRunner::Add<ComponentProjectileConverter>(pCVar3,aRStack_20,asStack_18,pCVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  pCVar4 = (ComponentProjectileConverter *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  ComponentProjectileConverter::SetConverterProps
            (pCVar4,(ComponentProjectileConverterProps *)(lVar2 + 0x2d8));
  pCVar4 = (ComponentProjectileConverter *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  ComponentProjectileConverter::SetPlantAttackRect(pCVar4,*(undefined8 *)(this + 0x10),4);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  FUN_04136e78(lVar5 + 0x88,1);
  pCVar3 = (ComponentRunner *)BoardEntity::GetComponentRunner(*(BoardEntity **)(this + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,aRStack_28);
  std::string::string(asStack_18,"ObjectImpactor");
  ComponentRunner::Add<ComponentObjectImpactor>(pCVar3,aRStack_20,asStack_18,pCVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  this_01 = (ComponentObjectImpactor *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
  ;
  ComponentObjectImpactor::SetImpactorProps(this_01,(ComponentObjectImpactorProps *)(lVar2 + 0x300))
  ;
  pCVar3 = (ComponentRunner *)BoardEntity::GetComponentRunner(*(BoardEntity **)(this + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,aRStack_28);
  std::string::string(asStack_18,"WarmingRadius");
  ComponentRunner::Add<ComponentWarmingRadius>(pCVar3,aRStack_20,asStack_18,pCVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  this_02 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38))
  ;
  ComponentWarmingRadius::SetRadiusProps(this_02,(ComponentWarmingRadiusProps *)(lVar2 + 0x358));
  uVar6 = *(undefined8 *)(this + 0x10);
  FUN_04136e50(uVar6);
  if (2 < (int)this_02) {
    lVar2 = FUN_041384c8(uVar6);
    FUN_04136ed8(lVar2 + 0x3c8);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
    if (bVar1) {
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      FUN_04136ee4(lVar2 + 0x9c);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMatchFlower::FindTargetDamageableGridItem(Sexy::TRect<int>&, PlantWeapon) */

void PlantMatchFlower::FindTargetDamageableGridItem
               (undefined8 param_1_00,long *param_1,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  Plant aPStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  Plant::GetPlantAttackRect(aPStack_48,param_1[2],param_4);
  EntityFinder::GetEntitiesTouchingRectangle
            (avStack_38,4,aPStack_48,*(undefined4 *)(param_1[2] + 0x110),
             *(undefined4 *)(param_1[2] + 0x110));
  pcVar1 = *(code **)(*param_1 + 0x510);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_20,(vector *)avStack_38);
  (*pcVar1)(param_1_00,param_1,avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}

