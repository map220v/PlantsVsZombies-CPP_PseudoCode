// Class: PlantKernelpult


/* PlantKernelpult::DoSpecialForAvatarNormal() */

void __thiscall PlantKernelpult::DoSpecialForAvatarNormal(PlantKernelpult *this)

{
  *(undefined4 *)(this + 0x28) = 0x3f000000;
  return;
}


/* PlantKernelpult::Initialize() */

void __thiscall PlantKernelpult::Initialize(PlantKernelpult *this)

{
  char cVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x30] = (PlantKernelpult)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x31] = (PlantKernelpult)0x0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x408))(this,0);
  }
  return;
}


/* PlantKernelpult::PlantKernelpult() */

void __thiscall PlantKernelpult::PlantKernelpult(PlantKernelpult *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067bc380;
  return;
}


/* PlantKernelpult::StaticNew() */

PlantKernelpult * PlantKernelpult::StaticNew(void)

{
  PlantKernelpult *this;
  
  this = ::operator_new(0x38);
  PlantKernelpult(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKernelpult::StaticClassInit() */

void PlantKernelpult::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantKernelpult");
    (*pcVar2)(plVar1,asStack_10,FUN_0403ae2c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantKernelpult::StaticGetClass() */

long * PlantKernelpult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantKernelpult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantKernelpult::GetClass() const */

long * PlantKernelpult::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantKernelpult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantKernelpult::~PlantKernelpult() */

void __thiscall PlantKernelpult::~PlantKernelpult(PlantKernelpult *this)

{
  *(undefined ***)this = &PTR_GetClass_067bc380;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantKernelpult::~PlantKernelpult() */

void __thiscall PlantKernelpult::~PlantKernelpult(PlantKernelpult *this)

{
  ~PlantKernelpult(this);
  AK::FreeHook(this);
  return;
}


/* PlantKernelpult::CancelPlantfood() */

void __thiscall PlantKernelpult::CancelPlantfood(PlantKernelpult *this)

{
  long *plVar1;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* PlantKernelpult::launchProjectileAt(Projectile*, Sexy::SexyVector3 const&) */

void __thiscall
PlantKernelpult::launchProjectileAt(PlantKernelpult *this,Projectile *param_1,SexyVector3 *param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)(this + 0x10);
  iVar1 = FUN_0403aaa8(lVar2);
  if (iVar1 < 2) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = 0.0;
    if (*(int *)(lVar2 + 0x150) == 3) {
      fVar4 = 350.0;
    }
  }
  lVar2 = FUN_0403b4c8(lVar2);
  fVar3 = *(float *)(lVar2 + 0x2d0);
  lVar2 = FUN_0403b4c8(*(undefined8 *)(this + 0x10));
  Projectile::LaunchAt(param_1,param_2,fVar4 + fVar3,*(float *)(lVar2 + 0x2cc));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKernelpult::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantKernelpult::Fire
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantKernelpult *param_4,RtWeakPtrBase *param_5,undefined4 param_6,undefined4 param_7
               )

{
  char cVar1;
  int iVar2;
  Projectile *pPVar3;
  ResourceInfo *pRVar4;
  long *plVar5;
  long lVar6;
  float *pfVar7;
  Plant *pPVar8;
  code *pcVar9;
  RtMixedPtrBase aRStack_38 [8];
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_4 + 0x180))();
  if (cVar1 == '\0') {
    pPVar8 = *(Plant **)(param_4 + 0x10);
    if (param_4[0x30] == (PlantKernelpult)0x0) {
      *(undefined4 *)(pPVar8 + 0x150) = 0;
    }
    else {
      *(undefined4 *)(pPVar8 + 0x150) = 1;
    }
    iVar2 = FUN_0403aaa8(pPVar8);
    if (((iVar2 == 2) || ((1 < iVar2 && (iVar2 < 6)))) && (param_4[0x31] != (PlantKernelpult)0x0)) {
      *(undefined4 *)(pPVar8 + 0x150) = 3;
      param_4[0x31] = (PlantKernelpult)0x0;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
    pPVar3 = (Projectile *)
             Plant::Fire(pPVar8,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_6,param_7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    PlantFramework::FindTargetZombie(aRStack_38,param_4,0);
    (**(code **)(*(long *)param_4 + 0xf8))
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_4,param_7);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    DVec3::DVec3((DVec3 *)&local_28);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
    if (cVar1 == '\0') {
      if (pRVar4 == (ResourceInfo *)0x0) {
        pfVar7 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(param_4 + 0x10));
        local_24 = pfVar7[1];
        local_28 = *pfVar7 + 800.0;
        local_20 = 0;
      }
      else {
        GridItem::GetGridLocation();
        BoardTransforms::GridToBoardSpace((Point *)&local_18);
        local_28 = (float)local_30;
        local_20 = 0x41c80000;
        local_24 = (float)local_2c;
      }
    }
    else {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pcVar9 = *(code **)(*plVar5 + 0x3b0);
      lVar6 = FUN_0403b4c8(*(undefined8 *)(param_4 + 0x10));
      local_18 = (*pcVar9)(*(undefined4 *)(lVar6 + 0x2cc),plVar5);
      local_14 = param_2;
      local_10 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
    }
    launchProjectileAt(param_4,pPVar3,(SexyVector3 *)&local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  else {
    (**(code **)(*(long *)param_4 + 0xa8))(param_4,0);
    pPVar3 = (Projectile *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKernelpult::launchPlantFoodButterAtTarget(float, float, Sexy::RtWeakPtr<Zombie>, GridItem*,
   Sexy::SexyVector2*) */

void PlantKernelpult::launchPlantFoodButterAtTarget
               (undefined1 param_1 [16],float param_2,undefined4 param_3,PlantFramework *param_4,
               RtMixedPtrBase *param_5,long param_6,float *param_7)

{
  char cVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  Projectile *this;
  ResourceInfo *pRVar5;
  long lVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  Board *pBVar16;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [8];
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0403b4c8(*(undefined8 *)(param_4 + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_20);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_5);
  if (cVar1 == '\0') {
    if (param_6 == 0) {
      if (param_7 == (float *)0x0) goto LAB_0403baa8;
      fVar14 = *param_7;
      param_2 = param_7[1];
    }
    else {
      iVar2 = FUN_0403aa44(*(undefined4 *)(param_6 + 0x130));
      iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2);
      fVar14 = (float)iVar2;
      iVar2 = FUN_0403aa48(*(undefined4 *)(param_6 + 0x134));
      iVar2 = BoardTransforms::GridToBoardSpaceY(iVar2);
      param_2 = (float)iVar2;
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_20,(RtWeakPtrBase *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    }
  }
  else {
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_5);
    cVar1 = (**(code **)(*(long *)pRVar5 + 0x328))();
    if (cVar1 != '\0') {
LAB_0403baa8:
      Plant::GetAvatarEnable(*(Plant **)(param_4 + 0x10));
      goto LAB_0403ba38;
    }
    pcVar8 = *(code **)(*(long *)pRVar5 + 0x3a8);
    lVar6 = FUN_0403b4c8(*(undefined8 *)(param_4 + 0x10));
    fVar14 = (float)(*pcVar8)(*(undefined4 *)(lVar6 + 0x2cc),pRVar5);
    local_18 = fVar14;
    local_14 = param_2;
    local_10 = param_3;
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_20,(RtWeakPtrBase *)param_5);
  }
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_4 + 0x10));
  uVar7 = 2;
  if (cVar1 != '\0') {
    uVar7 = 4;
  }
  if ((param_2 != -1.0) && (fVar14 != -1.0)) {
    if (((DAT_06ae8f58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ae8f58), iVar2 != 0)) {
      EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06ae8e80,0.0,0.0,40.0);
      __cxa_guard_release(&DAT_06ae8f58);
    }
    uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(param_4 + 0x10));
    fVar10 = pfVar4[1];
    fVar11 = DAT_06ae8e88 + pfVar4[2];
    pBVar16._0_4_ = (Board *)(DAT_06ae8e80 + *pfVar4);
    lVar3 = FUN_0403aad4(*(undefined8 *)(lVar3 + 0x70),uVar7);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(lVar3 + 8));
    this = (Projectile *)
           Board::AddProjectile
                     (pBVar16._0_4_,fVar10,fVar11,uVar9,(RtWeakPtr<Sexy::SoundResource> *)&local_18,
                      *(undefined8 *)(param_4 + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    lVar3 = FUN_0403b4c8(*(undefined8 *)(param_4 + 0x10));
    fVar13 = *(float *)(lVar3 + 0x2d0);
    lVar3 = FUN_0403b4c8(*(undefined8 *)(param_4 + 0x10));
    fVar15 = *(float *)(lVar3 + 0x2cc);
    fVar10 = (float)PlantFramework::Rand(param_4,fVar13);
    fVar12 = fVar15 * 0.15;
    fVar11 = (float)PlantFramework::Rand(param_4,fVar12);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,fVar14,param_2,40.0);
    Projectile::LaunchAt
              (this,(SexyVector3 *)&local_18,fVar10 + fVar13,(fVar15 - fVar12 * 0.5) + fVar11);
    Projectile::SetTarget(this,(RtWeakPtr *)a_Stack_20);
    uVar9 = FUN_0403aa34(*(undefined8 *)(this + 0xe0));
    uVar9 = operator|(uVar9,0x2000);
    FUN_0403aa38(this + 0xe0,uVar9);
  }
LAB_0403ba38:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKernelpult::PlayAttackAnimation() */

void __thiscall PlantKernelpult::PlayAttackAnimation(PlantKernelpult *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  RealObject *this_00;
  UIEasyButtonWidget *this_01;
  code *pcVar6;
  float fVar7;
  float fVar8;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_58,"Play_Plant_KernelPult_Attack");
  RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  lVar4 = FUN_0403b4c8(*(undefined8 *)(this + 0x10));
  fVar8 = *(float *)(lVar4 + 0x2b8);
  fVar7 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  fVar7 = fVar7 + fVar8;
  PlantFramework::FindTargetZombie(asStack_58,this,0);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_58);
  if (cVar1 != '\0') {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    iVar3 = FUN_0403aa40(*(undefined4 *)(lVar4 + 0x50));
    iVar2 = FUN_0403aaa8(*(undefined8 *)(this + 0x10));
    if (iVar3 - iVar2 == 1) {
      fVar7 = fVar7 * 0.3;
    }
    else if (iVar2 < iVar3) {
      fVar7 = fVar7 * 0.1;
    }
  }
  fVar8 = (float)PlantFramework::Rand((PlantFramework *)this,*(float *)(this + 0x28));
  this_01 = *(UIEasyButtonWidget **)(this + 0x10);
  iVar3 = *(int *)(this + 0x2c) + 1;
  *(int *)(this + 0x2c) = iVar3;
  this[0x30] = (PlantKernelpult)(fVar8 < fVar7);
  iVar2 = FUN_0403aaa8(this_01);
  if (iVar2 == 2) {
    if (iVar3 == 5) goto LAB_0403bd30;
  }
  else if ((2 < iVar2) && (iVar3 == 3)) {
LAB_0403bd30:
    plVar5 = (long *)FUN_0403bba8(this_01);
    pcVar6 = *(code **)(*plVar5 + 0x260);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
    (*pcVar6)(plVar5,(RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    *(undefined4 *)(this + 0x2c) = 0;
    this[0x31] = (PlantKernelpult)0x1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    goto LAB_0403bce4;
  }
  if (fVar8 < fVar7) {
    plVar5 = (long *)FUN_0403bba8();
    pcVar6 = *(code **)(*plVar5 + 600);
  }
  else {
    plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
    pcVar6 = *(code **)(*plVar5 + 0x130);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
  (*pcVar6)(plVar5,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
LAB_0403bce4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKernelpult::launchMassButterAssault() */

void __thiscall PlantKernelpult::launchMassButterAssault(PlantKernelpult *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  Zombie *pZVar8;
  RealObject *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar9;
  RtObject *this_02;
  undefined8 uVar10;
  int *piVar11;
  ResourceInfo *pRVar12;
  RtMixedPtrBase *this_03;
  RtWeakPtr<Sexy::ResourceInfo> *this_04;
  long extraout_x0;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  long lVar13;
  code *pcVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  RtId aRStack_40 [24];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58);
  lVar5 = FUN_0403b4c8(*(undefined8 *)(this + 0x10));
  fVar15 = *(float *)(lVar5 + 0x2c4);
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x29);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)aRStack_40);
    Sexy::RtId::~RtId(aRStack_40);
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    cVar2 = (**(code **)(*plVar7 + 0x328))();
    if (cVar2 == '\0') {
      pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      cVar2 = Zombie::IsInvisible(pZVar8);
      if (cVar2 != '\0') goto LAB_0403c0d0;
      this_00 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      cVar2 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10));
      if (cVar2 == '\0') goto LAB_0403c0d0;
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      pfVar9 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_01);
      if (900.0 < *pfVar9) goto LAB_0403c0d0;
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      pcVar14 = *(code **)(*plVar7 + 0x20);
      uVar6 = Zomboss::StaticGetClass();
      cVar2 = (*pcVar14)(plVar7,uVar6);
      if (cVar2 != '\0') {
        pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
        cVar2 = Zombie::IsFlying(pZVar8);
        if (cVar2 != '\0') goto LAB_0403c0d0;
      }
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)aRStack_68);
      FUN_0403b384(aRStack_40,aRStack_60);
      FUN_0403c028((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58,
                   aRStack_40);
      DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
                ((DragonBruitLauncherEntry *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      iVar3 = extraout_w1_00;
    }
    else {
LAB_0403c0d0:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      iVar3 = extraout_w1;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar3);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x2f);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)aRStack_40);
    Sexy::RtId::~RtId(aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    nop();
    cVar2 = (**(code **)(*(long *)this_02 + 0x200))();
    if ((((cVar2 == '\0') ||
         (cVar2 = (**(code **)(*(long *)this_02 + 0x210))(this_02,*(undefined8 *)(this + 0x10)),
         cVar2 == '\0')) || (bVar1 = Sexy::RtObject::IsA<GridItemFlame>(this_02), bVar1)) ||
       ((cVar2 = BoardEntity::IsOnScreen((BoardEntity *)this_02), cVar2 == '\0' ||
        (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this_02,*(RealObject **)(this + 0x10)),
        cVar2 == '\0')))) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      iVar3 = extraout_w1_01;
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)aRStack_68);
      FUN_0403b3c8(aRStack_40,aRStack_60);
      FUN_0403c028((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58,
                   aRStack_40);
      DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
                ((DragonBruitLauncherEntry *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      iVar3 = extraout_w1_02;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar3);
  }
  iVar16 = 0x40400000;
  lVar13 = 0;
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  iVar3 = FUN_0403a82c(local_58,local_50);
  fVar17 = *(float *)(lVar5 + 700);
  uVar6 = FUN_0403a8a0((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58);
  uVar10 = FUN_0403a854((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58);
  FUN_0403b228(uVar6,uVar10);
  uVar6 = *(undefined8 *)(lVar5 + 0x70);
  iVar4 = FUN_0403aac0(uVar6,*(undefined8 *)(lVar5 + 0x78));
  if (0 < iVar4) {
    do {
      piVar11 = (int *)FUN_0403aad4(uVar6,lVar13);
      if (*piVar11 == 3) {
        iVar16 = piVar11[0x11];
      }
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < iVar4);
  }
  lVar5 = 0;
  if (0 < iVar3) {
    do {
      while( true ) {
        this_03 = (RtMixedPtrBase *)FUN_0403a840(local_58,lVar5);
        cVar2 = Sexy::RtMixedPtrBase::IsValid(this_03);
        if (cVar2 != '\0') break;
LAB_0403c3a0:
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aIStack_28,(RtWeakPtrBase *)this_03);
        pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this_03 + 8));
        launchPlantFoodButterAtTarget(fVar15,iVar16,this,aIStack_28,pRVar12,this_03 + 0x10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_28)
        ;
        fVar15 = fVar15 + fVar17 / (float)iVar3;
LAB_0403c3dc:
        lVar5 = lVar5 + 1;
        if (iVar3 <= (int)lVar5) goto LAB_0403c454;
      }
      pZVar8 = (Zombie *)Sexy::RtWeakPtr<Zombie>::GetPtr((RtWeakPtr<Zombie> *)this_03);
      this_04 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar8);
      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_04);
      bVar1 = std::operator==((string *)(lVar13 + 8),"renai_gliding");
      if (!bVar1) goto LAB_0403c3a0;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_03);
      nop();
      if (extraout_x0 == 0) goto LAB_0403c3dc;
      cVar2 = FUN_0403aab0(*(undefined1 *)(extraout_x0 + 0x818));
      if (cVar2 == '\0') goto LAB_0403c3a0;
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < iVar3);
  }
LAB_0403c454:
  FUN_0403b358((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKernelpult::DoSpecial(int) */

void PlantKernelpult::DoSpecial(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  Zombie *pZVar8;
  RealObject *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar9;
  RtObject *this_01;
  undefined8 uVar10;
  int *piVar11;
  ResourceInfo *pRVar12;
  RtMixedPtrBase *this_02;
  RtWeakPtr<Sexy::ResourceInfo> *this_03;
  long extraout_x0;
  ulong uVar13;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  long lVar14;
  code *pcVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  RtId aRStack_40 [24];
  Iterator aIStack_28 [32];
  long lStack_8;
  
  uVar13 = (ulong)(uint)param_1;
  lStack_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_58);
  lVar5 = FUN_0403b4c8(*(undefined8 *)(uVar13 + 0x10));
  fVar16 = *(float *)(lVar5 + 0x2c4);
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x29);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)aRStack_40);
    Sexy::RtId::~RtId(aRStack_40);
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    cVar2 = (**(code **)(*plVar7 + 0x328))();
    if (cVar2 == '\0') {
      pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      cVar2 = Zombie::IsInvisible(pZVar8);
      if (cVar2 != '\0') goto LAB_0403c0d0;
      this = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      cVar2 = RealObject::IsOnOpposingTeam(this,*(RealObject **)(uVar13 + 0x10));
      if (cVar2 == '\0') goto LAB_0403c0d0;
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      pfVar9 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_00);
      if (900.0 < *pfVar9) goto LAB_0403c0d0;
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      pcVar15 = *(code **)(*plVar7 + 0x20);
      uVar6 = Zomboss::StaticGetClass();
      cVar2 = (*pcVar15)(plVar7,uVar6);
      if (cVar2 != '\0') {
        pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
        cVar2 = Zombie::IsFlying(pZVar8);
        if (cVar2 != '\0') goto LAB_0403c0d0;
      }
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)aRStack_68);
      FUN_0403b384(aRStack_40,aRStack_60);
      FUN_0403c028((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_58,
                   aRStack_40);
      DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
                ((DragonBruitLauncherEntry *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      iVar3 = extraout_w1_00;
    }
    else {
LAB_0403c0d0:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      iVar3 = extraout_w1;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar3);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x2f);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)aRStack_40);
    Sexy::RtId::~RtId(aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    nop();
    cVar2 = (**(code **)(*(long *)this_01 + 0x200))();
    if ((((cVar2 == '\0') ||
         (cVar2 = (**(code **)(*(long *)this_01 + 0x210))(this_01,*(undefined8 *)(uVar13 + 0x10)),
         cVar2 == '\0')) || (bVar1 = Sexy::RtObject::IsA<GridItemFlame>(this_01), bVar1)) ||
       ((cVar2 = BoardEntity::IsOnScreen((BoardEntity *)this_01), cVar2 == '\0' ||
        (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this_01,*(RealObject **)(uVar13 + 0x10))
        , cVar2 == '\0')))) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      iVar3 = extraout_w1_01;
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)aRStack_68);
      FUN_0403b3c8(aRStack_40,aRStack_60);
      FUN_0403c028((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_58,
                   aRStack_40);
      DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
                ((DragonBruitLauncherEntry *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      iVar3 = extraout_w1_02;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar3);
  }
  iVar17 = 0x40400000;
  lVar14 = 0;
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  iVar3 = FUN_0403a82c(uStack_58,uStack_50);
  fVar18 = *(float *)(lVar5 + 700);
  uVar6 = FUN_0403a8a0((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_58);
  uVar10 = FUN_0403a854((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_58)
  ;
  FUN_0403b228(uVar6,uVar10);
  uVar6 = *(undefined8 *)(lVar5 + 0x70);
  iVar4 = FUN_0403aac0(uVar6,*(undefined8 *)(lVar5 + 0x78));
  if (0 < iVar4) {
    do {
      piVar11 = (int *)FUN_0403aad4(uVar6,lVar14);
      if (*piVar11 == 3) {
        iVar17 = piVar11[0x11];
      }
      lVar14 = lVar14 + 1;
    } while ((int)lVar14 < iVar4);
  }
  lVar5 = 0;
  if (0 < iVar3) {
    do {
      while( true ) {
        this_02 = (RtMixedPtrBase *)FUN_0403a840(uStack_58,lVar5);
        cVar2 = Sexy::RtMixedPtrBase::IsValid(this_02);
        if (cVar2 != '\0') break;
LAB_0403c3a0:
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aIStack_28,(RtWeakPtrBase *)this_02);
        pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this_02 + 8));
        launchPlantFoodButterAtTarget(fVar16,iVar17,uVar13,aIStack_28,pRVar12,this_02 + 0x10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_28)
        ;
        fVar16 = fVar16 + fVar18 / (float)iVar3;
LAB_0403c3dc:
        lVar5 = lVar5 + 1;
        if (iVar3 <= (int)lVar5) goto LAB_0403c454;
      }
      pZVar8 = (Zombie *)Sexy::RtWeakPtr<Zombie>::GetPtr((RtWeakPtr<Zombie> *)this_02);
      this_03 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar8);
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_03);
      bVar1 = std::operator==((string *)(lVar14 + 8),"renai_gliding");
      if (!bVar1) goto LAB_0403c3a0;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
      nop();
      if (extraout_x0 == 0) goto LAB_0403c3dc;
      cVar2 = FUN_0403aab0(*(undefined1 *)(extraout_x0 + 0x818));
      if (cVar2 == '\0') goto LAB_0403c3a0;
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < iVar3);
  }
LAB_0403c454:
  FUN_0403b358((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_58);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantKernelpult::TestAndShine(bool) */

void __thiscall PlantKernelpult::TestAndShine(PlantKernelpult *this,bool param_1)

{
  bool bVar1;
  long lVar2;
  PopAnimRig *pPVar3;
  Board *pBVar4;
  float fVar5;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (!param_1) {
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    Sexy::Color::Color((Color *)&local_18,1);
    PopAnimRig::SetPAMColor(pPVar3,(Color *)&local_18);
    goto LAB_0403c6e4;
  }
  BoardEntity::CalcGridPosition();
  lVar2 = FUN_0403c4c4(local_20,local_1c);
  if ((lVar2 != 0) || (lVar2 = FUN_0403c5a8(local_20,local_1c), lVar2 != 0)) goto LAB_0403c6e4;
  lVar2 = FUN_0403c4c4(local_20 + -1,local_1c);
  if ((lVar2 == 0) && (lVar2 = FUN_0403c5a8(local_20 + -1,local_1c), lVar2 == 0)) {
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_18,"");
    lVar2 = Board::GetPlantAt(pBVar4,local_20 + -1,local_1c,(string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
    if (lVar2 == 0) goto LAB_0403c75c;
    Plant::GetType();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    bVar1 = std::operator==("kernelpult",(string *)(lVar2 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    if (!bVar1) goto LAB_0403c75c;
  }
  else {
LAB_0403c75c:
    lVar2 = FUN_0403c4c4(local_20 + 1,local_1c);
    if ((lVar2 != 0) || (lVar2 = FUN_0403c5a8(local_20 + 1,local_1c), lVar2 != 0))
    goto LAB_0403c6e4;
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_18,"");
    lVar2 = Board::GetPlantAt(pBVar4,local_20 + 1,local_1c,(string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
    if (lVar2 == 0) goto LAB_0403c6e4;
    Plant::GetType();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    bVar1 = std::operator==("kernelpult",(string *)(lVar2 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    if (!bVar1) goto LAB_0403c6e4;
  }
  Sexy::Color::Color((Color *)&local_18);
  fVar5 = (float)PVZ_T();
  fVar5 = cosf(fVar5 * 9.424778);
  local_18 = 0x54;
  fVar5 = (fVar5 + 2.0) * 0.33333334;
  if (0.33 <= fVar5) {
    local_18 = (int)(fVar5 * 255.0);
  }
  local_14 = local_18;
  local_10 = local_18;
  pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  PopAnimRig::SetPAMColor(pPVar3,(Color *)&local_18);
LAB_0403c6e4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

