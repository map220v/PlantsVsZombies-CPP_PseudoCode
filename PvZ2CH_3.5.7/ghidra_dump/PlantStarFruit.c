// Class: PlantStarFruit


/* PlantStarFruit::CancelPlantfood() */

void __thiscall PlantStarFruit::CancelPlantfood(PlantStarFruit *this)

{
  Plant::DisablePlantfoodAnimation(*(Plant **)(this + 0x10));
  return;
}


/* PlantStarFruit::PlantStarFruit() */

void __thiscall PlantStarFruit::PlantStarFruit(PlantStarFruit *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067c64f0;
  return;
}


/* PlantStarFruit::StaticNew() */

PlantStarFruit * PlantStarFruit::StaticNew(void)

{
  PlantStarFruit *this;
  
  this = ::operator_new(0x40);
  PlantStarFruit(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStarFruit::StaticClassInit() */

void PlantStarFruit::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantStarFruit");
    (*pcVar2)(plVar1,asStack_10,FUN_0406e290,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantStarFruit::StaticGetClass() */

long * PlantStarFruit::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantStarFruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantStarFruit::GetClass() const */

long * PlantStarFruit::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantStarFruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantStarFruit::~PlantStarFruit() */

void __thiscall PlantStarFruit::~PlantStarFruit(PlantStarFruit *this)

{
  *(undefined ***)this = &PTR_GetClass_067c64f0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantStarFruit::~PlantStarFruit() */

void __thiscall PlantStarFruit::~PlantStarFruit(PlantStarFruit *this)

{
  ~PlantStarFruit(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStarFruit::ApplyPlantfood() */

void __thiscall PlantStarFruit::ApplyPlantfood(PlantStarFruit *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    lVar3 = FUN_0406e5f0(*(undefined8 *)(this + 0x10));
    iVar2 = *(int *)(lVar3 + 0x2b8);
    FUN_0406de44(aRStack_10,*(undefined8 *)(this + 0x10));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    *(float *)(this + 0x28) = (float)iVar2 / *(float *)(lVar3 + 0x38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    lVar3 = FUN_0406e5f0(*(undefined8 *)(this + 0x10));
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(lVar3 + 0x2b8);
  }
  else {
    FUN_0406de44(aRStack_18,*(undefined8 *)(this + 0x10));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    fVar6 = *(float *)(lVar3 + 0x38);
    FUN_0406de44(aRStack_10,*(undefined8 *)(this + 0x10));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    fVar5 = *(float *)(lVar3 + 0x38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    lVar3 = FUN_0406e5f0(*(undefined8 *)(this + 0x10));
    iVar2 = *(int *)(lVar3 + 0x2b8);
    lVar3 = FUN_0406e5f0(*(undefined8 *)(this + 0x10));
    iVar2 = (int)((float)iVar2 + (float)*(int *)(lVar3 + 0x2b8) * 0.5);
    *(int *)(this + 0x34) = iVar2;
    *(float *)(this + 0x28) = (float)iVar2 / (fVar6 + fVar5 * 0.5);
  }
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x2c) = uVar4;
  *(undefined4 *)(this + 0x38) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStarFruit::fireProjectile(int, Sexy::RtWeakPtr<ProjectilePropertySheet>, int) */

void __thiscall
PlantStarFruit::fireProjectile
          (PlantStarFruit *this,int param_1,RtWeakPtrBase *param_3,undefined8 param_4)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  Projectile *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0406e5f0(*(undefined8 *)(this + 0x10));
  this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_01);
  lVar3 = FUN_0406de78(*(undefined8 *)(lVar1 + 0x70),(long)param_1);
  fVar4 = *(float *)(lVar3 + 0x68);
  fVar5 = *(float *)(lVar3 + 0x6c);
  fVar6 = *(float *)(this_01 + 0xc4);
  fVar9 = *pfVar2;
  fVar8 = pfVar2[1];
  lVar3 = *(long *)(gLawnApp + 0x9f0);
  fVar7 = fVar6 * *(float *)(lVar1 + 700);
  if (*(char *)(lVar3 + 0x119) != '\0') {
    fVar7 = fVar7 + pfVar2[2] + 1.0;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_3);
  this_00 = (Projectile *)
            Board::AddProjectile
                      ((Board *)(fVar9 + fVar4 * fVar6),fVar8 + fVar6 * fVar5,fVar7,lVar3,aRStack_18
                       ,*(undefined8 *)(this + 0x10),param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  switch(param_1) {
  case 0:
  case 6:
    fVar4 = -100.0;
    break;
  case 1:
  case 7:
    fVar4 = -225.0;
    goto LAB_0406e948;
  case 2:
  case 8:
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,-225.0,0.0,0.0);
    Projectile::SetVelocity(this_00,(SexyVector3 *)aRStack_18);
    goto switchD_0406e8dc_caseD_5;
  case 3:
  case 9:
    fVar4 = 225.0;
LAB_0406e948:
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,fVar4,0.0);
    Projectile::SetVelocity(this_00,(SexyVector3 *)aRStack_18);
    goto switchD_0406e8dc_caseD_5;
  case 4:
  case 10:
    fVar4 = 100.0;
    break;
  default:
    goto switchD_0406e8dc_caseD_5;
  }
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,200.0,fVar4,0.0);
  Projectile::SetVelocity(this_00,(SexyVector3 *)aRStack_18);
switchD_0406e8dc_caseD_5:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStarFruit::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantStarFruit::Fire(PlantFramework *param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  RealObject *this;
  float fVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)param_1 + 0x180))();
  if (cVar2 != '\0') {
    uVar7 = 0;
    goto LAB_0406ea88;
  }
  this = *(RealObject **)(param_1 + 0x10);
  iVar4 = *(int *)(this + 0x150);
  uVar7 = 0;
  std::string::string(asStack_10,"Play_Plant_StarFruit_Attack");
  RealObject::PlayPositionalSound(this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  FUN_0406de44(asStack_10,*(undefined8 *)(param_1 + 0x10));
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  lVar5 = FUN_0406de78(*(undefined8 *)(lVar5 + 0x70),(long)iVar4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(lVar5 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
  if (cVar2 != '\0') {
    iVar4 = FUN_0406de68(*(undefined8 *)(param_1 + 0x10));
    if (1 < iVar4) {
      fVar9 = (float)PlantFramework::Rand(param_1,1.0);
      cVar2 = Plant::IsSkillCheat(*(Plant **)(param_1 + 0x10));
      if (((cVar2 != '\0') &&
          (cVar2 = Plant::IsSkillActivate(*(Plant **)(param_1 + 0x10)), cVar2 != '\0')) ||
         (bVar3 = Plant::IsSkillCheat(*(Plant **)(param_1 + 0x10)), bVar3 < (fVar9 < 0.4))) {
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        iVar4 = FUN_0406de68(uVar7);
        if (iVar4 != 2) {
          if (iVar4 < 3) goto LAB_0406eb24;
          iVar4 = 3;
        }
        uVar8 = 6;
        while( true ) {
          FUN_0406de44(aRStack_18,uVar7);
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          lVar5 = FUN_0406de78(*(undefined8 *)(lVar5 + 0x70),uVar8);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)(lVar5 + 8));
          uVar6 = uVar8 & 0xffffffff;
          uVar8 = uVar8 + 1;
          uVar7 = fireProjectile((PlantStarFruit *)param_1,uVar6,asStack_10,iVar4);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          if (uVar8 == 0xb) break;
          uVar7 = *(undefined8 *)(param_1 + 0x10);
        }
        goto LAB_0406ea80;
      }
    }
LAB_0406eb24:
    iVar4 = 0;
    do {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_20);
      iVar1 = iVar4 + 1;
      uVar7 = fireProjectile((PlantStarFruit *)param_1,iVar4,asStack_10,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      iVar4 = iVar1;
    } while (iVar1 != 5);
  }
LAB_0406ea80:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
LAB_0406ea88:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStarFruit::UpdatePlantfood() */

void __thiscall PlantStarFruit::UpdatePlantfood(PlantStarFruit *this)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  float *pfVar4;
  long lVar5;
  int *piVar6;
  SexyTransform2D *this_00;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  Vec3 aVStack_60 [16];
  undefined8 local_50;
  float local_48;
  undefined8 local_40;
  undefined4 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3(aVStack_60,*pfVar4,pfVar4[1],0.0);
  Plant::GetProps();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  lVar5 = FUN_0406de78(*(undefined8 *)(lVar5 + 0x70),5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  fVar11 = (float)PVZ_T();
  local_40 = CONCAT44(local_40._4_4_,*(int *)(this + 0x34) - *(int *)(this + 0x30));
  local_50 = CONCAT44(local_50._4_4_,
                      (int)((fVar11 - *(float *)(this + 0x2c)) * *(float *)(this + 0x28)) -
                      *(int *)(this + 0x30));
  piVar6 = eastl::min_alt<int>((int *)&local_50,(int *)&local_40);
  iVar1 = *piVar6;
  if (0 < iVar1) {
    iVar10 = 0;
    do {
      iVar9 = 0;
      do {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)(lVar5 + 8));
        this_00 = (SexyTransform2D *)
                  fireProjectile(this,iVar9,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        uVar7 = FUN_0406de30(*(undefined8 *)(this_00 + 0xe0));
        uVar7 = operator|(uVar7,0x2000);
        FUN_0406de34(this_00 + 0xe0,uVar7);
        bVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
        if (bVar2 == 0) {
          puVar8 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this_00);
          local_50 = *puVar8;
          local_48 = *(float *)(puVar8 + 1);
          fVar11 = sinf((float)*(int *)(this + 0x30) * 10.0);
          local_48 = local_48 - fVar11 * 5.0;
          local_50 = CONCAT44(local_50._4_4_ + fVar11 * 5.0,(float)local_50 + fVar11 * 5.0);
          (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_50);
          puVar8 = (undefined8 *)Projectile::GetVelocityScale((Projectile *)this_00);
          local_40 = *puVar8;
          local_38 = *(undefined4 *)(puVar8 + 1);
          fVar11 = (float)PlantFramework::Rand((PlantFramework *)this,0.7);
          EATextSquish::Vec3::operator*=((Vec3 *)&local_40,fVar11 + 1.0);
          Projectile::SetVelocityScale((Projectile *)this_00,(SexyVector3 *)&local_40);
        }
        else {
          Sexy::SexyTransform2D::CreateRotation
                    ((SexyTransform2D *)(ulong)bVar2,*(float *)(this + 0x38));
          Projectile::ApplyRotationToVelocity(this_00);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != 5);
      *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
      cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      if (cVar3 != '\0') {
        *(float *)(this + 0x38) = *(float *)(this + 0x38) + 0.15;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStarFruit::FindTarget(PVZDB::TableIndex) */

void PlantStarFruit::FindTarget
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,long param_2
               ,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var6;
  long lVar7;
  float *pfVar8;
  RtObject *pRVar9;
  Zombie *pZVar10;
  GridItem *pGVar11;
  SharkMinion *this;
  long *plVar12;
  Insets *pIVar13;
  int extraout_w1;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [2];
  int local_30;
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,param_3);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
LAB_0406f178:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_58,(RtWeakPtrBase *)local_38);
    Sexy::RtId::~RtId((RtId *)local_38);
    pRVar9 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    pZVar10 = Sexy::RtObject::Cast<Zombie>(pRVar9);
    if (pZVar10 == (Zombie *)0x0) {
LAB_0406f0c4:
      pRVar9 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      pGVar11 = Sexy::RtObject::Cast<GridItem>(pRVar9);
      if ((pGVar11 == (GridItem *)0x0) ||
         (cVar2 = (**(code **)(*(long *)pGVar11 + 0x200))(), cVar2 != '\0')) {
        this = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
        iVar4 = SharkMinion::getRow(this);
        plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
        pIVar13 = (Insets *)(**(code **)(*plVar12 + 0x178))();
        Sexy::Insets::Insets((Insets *)&local_48,pIVar13);
        pIVar13 = (Insets *)
                  (**(code **)(**(long **)(param_2 + 0x10) + 0x178))(*(long **)(param_2 + 0x10));
        Sexy::Insets::Insets((Insets *)local_38,pIVar13);
        if (*(int *)(*(long *)(param_2 + 0x10) + 0x110) == iVar4) {
          if (local_38[0] + local_30 <= local_48) goto LAB_0406f03c;
        }
        else if ((local_38[0] + local_30 <= local_48) || (local_48 + local_40 <= local_38[0])) {
          p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
          lVar7 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(p_Var6);
          p_Var6 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     **)(param_2 + 0x10);
          pfVar8 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(p_Var6);
          fVar16 = *pfVar8;
          if (pfVar8[1] <= *(float *)(lVar7 + 4)) {
            FUN_0406de44(aRStack_50,p_Var6);
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
            lVar7 = FUN_0406de78(*(undefined8 *)(lVar7 + 0x70),4);
            fVar16 = fVar16 + *(float *)(lVar7 + 0x68) *
                              *(float *)(*(long *)(param_2 + 0x10) + 0xc4);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
            p_Var6 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       **)(param_2 + 0x10);
            lVar7 = std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var6);
            fVar15 = *(float *)(lVar7 + 4);
            FUN_0406de44(aRStack_50,p_Var6);
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
            lVar7 = FUN_0406de78(*(undefined8 *)(lVar7 + 0x70),4);
            fVar15 = fVar15 + *(float *)(lVar7 + 0x6c) *
                              *(float *)(*(long *)(param_2 + 0x10) + 0xc4);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
            fVar14 = ((float)(local_44 + local_3c) - fVar15) / ((float)local_48 - fVar16);
            fVar16 = ((float)local_44 - fVar15) / ((float)(local_48 + local_40) - fVar16);
          }
          else {
            FUN_0406de44(aRStack_50,p_Var6);
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
            lVar7 = FUN_0406de78(*(undefined8 *)(lVar7 + 0x70),0);
            fVar16 = fVar16 + *(float *)(lVar7 + 0x68) *
                              *(float *)(*(long *)(param_2 + 0x10) + 0xc4);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
            p_Var6 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       **)(param_2 + 0x10);
            lVar7 = std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var6);
            fVar17 = *(float *)(lVar7 + 4);
            FUN_0406de44(aRStack_50,p_Var6);
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
            lVar7 = FUN_0406de78(*(undefined8 *)(lVar7 + 0x70),0);
            fVar14 = *(float *)(lVar7 + 0x6c);
            fVar15 = *(float *)(*(long *)(param_2 + 0x10) + 0xc4);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
            fVar15 = (fVar17 + fVar14 * fVar15) - (float)local_44;
            fVar14 = fVar15 / ((float)local_48 - fVar16);
            fVar16 = (fVar15 - (float)local_3c) / ((float)(local_48 + local_40) - fVar16);
          }
          if ((0.5 <= fVar16) || (fVar14 <= 0.5)) goto LAB_0406f03c;
        }
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)param_1,(RtWeakPtr *)aRStack_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
        goto LAB_0406f178;
      }
    }
    else {
      uVar5 = operator|(1,0x200);
      uVar5 = operator|(uVar5,0x800);
      uVar3 = operator|(uVar5,0x2000);
      cVar2 = Zombie::MatchesAny(pZVar10,uVar3,*(undefined8 *)(param_2 + 0x10));
      if (cVar2 == '\0') goto LAB_0406f0c4;
    }
LAB_0406f03c:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStarFruit::FindTargetDamageableGridItem(Sexy::TRect<int>&, PlantWeapon) */

void PlantStarFruit::FindTargetDamageableGridItem
               (RtWeakPtr<Sexy::SoundResource> *param_1_00,undefined8 param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindTarget(aRStack_10,param_1,0x2f);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStarFruit::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

void PlantStarFruit::FindTargetZombie(RtWeakPtr<Sexy::SoundResource> *param_1_00,undefined8 param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindTarget(aRStack_10,param_1,0x29);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}

