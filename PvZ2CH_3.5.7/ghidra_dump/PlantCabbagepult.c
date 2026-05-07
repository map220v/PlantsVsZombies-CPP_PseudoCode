// Class: PlantCabbagepult


/* PlantCabbagepult::PlantCabbagepult() */

void __thiscall PlantCabbagepult::PlantCabbagepult(PlantCabbagepult *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067b7240;
  return;
}


/* PlantCabbagepult::StaticNew() */

PlantCabbagepult * PlantCabbagepult::StaticNew(void)

{
  PlantCabbagepult *this;
  
  this = ::operator_new(0x28);
  PlantCabbagepult(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCabbagepult::StaticClassInit() */

void PlantCabbagepult::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCabbagepult");
    (*pcVar2)(plVar1,asStack_10,FUN_040266a4,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCabbagepult::StaticGetClass() */

long * PlantCabbagepult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCabbagepult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCabbagepult::GetClass() const */

long * PlantCabbagepult::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCabbagepult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCabbagepult::~PlantCabbagepult() */

void __thiscall PlantCabbagepult::~PlantCabbagepult(PlantCabbagepult *this)

{
  *(undefined ***)this = &PTR_GetClass_067b7240;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantCabbagepult::~PlantCabbagepult() */

void __thiscall PlantCabbagepult::~PlantCabbagepult(PlantCabbagepult *this)

{
  ~PlantCabbagepult(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCabbagepult::Initialize() */

void __thiscall PlantCabbagepult::Initialize(PlantCabbagepult *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  lVar5 = *(long *)(this + 0x10);
  local_1c = 1.0;
  iVar1 = FUN_04026478(lVar5);
  if (*(code **)(*(long *)this + 0x410) == PlantFramework::GetMiniLevel) {
    iVar2 = PlantFramework::GetMiniLevel((PlantFramework *)this);
  }
  else {
    iVar2 = (**(code **)(*(long *)this + 0x410))();
    lVar5 = *(long *)(this + 0x10);
  }
  if (iVar1 - iVar2 == 1) {
    lVar3 = FUN_04026aa8(lVar5);
    lVar5 = *(long *)(this + 0x10);
    fVar6 = 1.0 - *(float *)(lVar3 + 0x2b8);
  }
  else if (iVar1 - iVar2 < 2) {
    fVar6 = 1.0;
  }
  else {
    lVar3 = FUN_04026aa8(lVar5);
    lVar5 = *(long *)(this + 0x10);
    fVar6 = 1.0 - *(float *)(lVar3 + 700);
  }
  local_1c = (float)FUN_0402646c(*(undefined4 *)(lVar5 + 0x3cc));
  local_1c = local_1c * fVar6;
  local_10[0] = 0x3c23d70a;
  pfVar4 = eastl::max_alt<float>((float *)local_10,&local_1c);
  fVar7 = *pfVar4;
  Plant::GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  lVar3 = FUN_040264b4(*(undefined8 *)(lVar3 + 0x70));
  fVar6 = *(float *)(lVar3 + 0x20);
  Plant::GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  lVar3 = FUN_040264b4(*(undefined8 *)(lVar3 + 0x70));
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)(lVar5 + 0xb4),fVar7 * fVar6,fVar7 * *(float *)(lVar3 + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  lVar3 = *(long *)(this + 0x10);
  Plant::GetProps();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  lVar5 = FUN_040264b4(*(undefined8 *)(lVar5 + 0x70));
  fVar6 = *(float *)(lVar5 + 0x24);
  Plant::GetProps();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  lVar5 = FUN_040264b4(*(undefined8 *)(lVar5 + 0x70));
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)(lVar3 + 0xbc),fVar7 * fVar6,fVar7 * *(float *)(lVar5 + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCabbagepult::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantCabbagepult::LaunchProjectileAt
          (PlantCabbagepult *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  GoldCabbageProjectile *this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar3 = FUN_04026d80(*(undefined8 *)(this + 0x10));
  fVar7 = *(float *)(lVar3 + 0x2c4);
  lVar3 = FUN_04026d80(*(undefined8 *)(this + 0x10));
  fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar3 + 0x2c4));
  lVar3 = FUN_04026d80(*(undefined8 *)(this + 0x10));
  fVar6 = *(float *)(lVar3 + 0x2c0);
  lVar3 = FUN_04026d80(*(undefined8 *)(this + 0x10));
  fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar3 + 0x2c0));
  fVar5 = fVar5 + fVar6;
  if ((param_1 != (Projectile *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<GoldCabbageProjectile>((RtObject *)param_1), bVar1)) {
    this_00 = Sexy::RtObject::Cast<GoldCabbageProjectile>((RtObject *)param_1);
    cVar2 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar2 == '\0') {
      StickybombRiceLV5Projectile::setFlyTotalTime
                ((StickybombRiceLV5Projectile *)this_00,fVar5,param_2,false,false);
    }
    else {
      bVar1 = (bool)Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      StickybombRiceLV5Projectile::setFlyTotalTime
                ((StickybombRiceLV5Projectile *)this_00,fVar5,param_2,true,bVar1);
    }
  }
  Projectile::LaunchAt(param_1,param_2,fVar4 + fVar7,fVar5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCabbagepult::normalFire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantCabbagepult::normalFire
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantCabbagepult *param_4,RtWeakPtrBase *param_5,undefined8 param_6,
               undefined4 param_7)

{
  char cVar1;
  Projectile *pPVar2;
  ResourceInfo *pRVar3;
  float *pfVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  RealObject *this;
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
    cVar1 = FUN_04026480(pPVar8);
    uVar7 = 3;
    if (cVar1 == '\0') {
      uVar7 = 0;
    }
    *(undefined4 *)(pPVar8 + 0x150) = uVar7;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
    pPVar2 = (Projectile *)
             Plant::Fire(pPVar8,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_6,param_7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    PlantFramework::FindTargetZombie(aRStack_38,param_4,0);
    (**(code **)(*(long *)param_4 + 0xf8))
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_4,param_7);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    DVec3::DVec3((DVec3 *)&local_28);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
    if (cVar1 == '\0') {
      if (pRVar3 == (ResourceInfo *)0x0) {
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(param_4 + 0x10));
        local_24 = pfVar4[1];
        local_28 = *pfVar4 + 600.0;
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
      lVar6 = FUN_04026d80(*(undefined8 *)(param_4 + 0x10));
      local_18 = (*pcVar9)(*(undefined4 *)(lVar6 + 0x2c0),plVar5);
      local_14 = param_2;
      local_10 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
    }
    LaunchProjectileAt(param_4,pPVar2,(SexyVector3 *)&local_28,0.1,0.1);
    this = *(RealObject **)(param_4 + 0x10);
    std::string::string((string *)&local_18,"Play_CabbagePult_Throw");
    RealObject::PlayPositionalSound(this,(string *)&local_18,0.0);
    std::string::~string((string *)&local_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  else {
    (**(code **)(*(long *)param_4 + 0xa8))(param_4,0);
    pPVar2 = (Projectile *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCabbagepult::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantCabbagepult::Fire
          (PlantCabbagepult *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  uVar1 = normalFire(this,aRStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCabbagepult::DoSpecial(int) */

void PlantCabbagepult::DoSpecial(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  PlantCabbagepult *this;
  undefined8 uVar6;
  long *plVar7;
  Zombie *pZVar8;
  RealObject *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar9;
  SharkMinion *this_02;
  Projectile *pPVar10;
  RealObject *this_03;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  Plant *pPVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  int local_48;
  int local_44;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  RtId aRStack_38 [16];
  Iterator aIStack_28 [32];
  long local_8;
  
  this = (PlantCabbagepult *)(ulong)(uint)param_1;
  pPVar11 = *(Plant **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04026480(pPVar11);
  if (cVar1 == '\0') {
    cVar1 = Plant::GetAvatarEnable(pPVar11);
    uVar3 = 2;
    if (cVar1 == '\0') {
      uVar3 = 1;
    }
  }
  else {
    cVar1 = Plant::GetAvatarEnable(pPVar11);
    uVar3 = 5;
    if (cVar1 == '\0') {
      uVar3 = 4;
    }
  }
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x29);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x2f);
      while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
        Sexy::RtDbTable::Iterator::operator*(aIStack_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)aRStack_38);
        Sexy::RtId::~RtId(aRStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        nop();
        cVar1 = (**(code **)(*(long *)this_03 + 0x200))();
        if ((((cVar1 == '\0') ||
             (cVar1 = (**(code **)(*(long *)this_03 + 0x210))(this_03,*(undefined8 *)(this + 0x10)),
             cVar1 == '\0')) ||
            (cVar1 = RealObject::IsOnOpposingTeam(this_03,*(RealObject **)(this + 0x10)),
            cVar1 == '\0')) ||
           ((iVar5 = FUN_04026470(*(undefined4 *)(this_03 + 0x130)),
            iVar5 < *(int *)(*(long *)(this + 0x10) + 0x114) ||
            (cVar1 = BoardEntity::IsOnScreen((BoardEntity *)this_03), cVar1 == '\0')))) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
          iVar5 = extraout_w1_01;
        }
        else {
          *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = uVar3;
          GridItem::GetGridLocation();
          BoardTransforms::GridToBoardSpace((Point *)aRStack_38);
          EATextSquish::Vec3::Vec3((Vec3 *)aRStack_38,(float)local_48,(float)local_44,25.0);
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_40);
          pPVar10 = (Projectile *)
                    Plant::Fire(*(Plant **)(this + 0x10),
                                (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                                aRStack_40,*(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),uVar3);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          uVar6 = FUN_0402645c(*(undefined8 *)(pPVar10 + 0xe0));
          uVar6 = operator|(uVar6,0x2000);
          FUN_04026460(pPVar10 + 0xe0,uVar6);
          LaunchProjectileAt(this,pPVar10,(SexyVector3 *)aRStack_38,1.0,0.15);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_50);
          Projectile::SetTarget(pPVar10,(RtWeakPtr *)aRStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
          iVar5 = extraout_w1_02;
        }
        Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
      }
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtId::~RtId(aRStack_38);
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    cVar1 = (**(code **)(*plVar7 + 0x328))();
    if (cVar1 == '\0') {
      pZVar8 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      cVar1 = Zombie::IsInvisible(pZVar8);
      if (cVar1 != '\0') goto LAB_04027294;
      this_00 = (RealObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48)
      ;
      cVar1 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10));
      if (cVar1 == '\0') goto LAB_04027294;
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      pfVar9 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_01);
      fVar13 = *pfVar9;
      fVar14 = pfVar9[1];
      if (800.0 < fVar13) goto LAB_04027294;
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      pcVar12 = *(code **)(*plVar7 + 0x20);
      uVar6 = Zomboss::StaticGetClass();
      cVar1 = (*pcVar12)(plVar7,uVar6);
      if (cVar1 != '\0') {
        pZVar8 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        cVar1 = Zombie::IsFlying(pZVar8);
        if (cVar1 != '\0') goto LAB_04027294;
      }
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = uVar3;
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_38,fVar13,fVar14,50.0);
      pPVar11 = *(Plant **)(this + 0x10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)&local_48);
      this_02 = (SharkMinion *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48)
      ;
      uVar4 = SharkMinion::getRow(this_02);
      pPVar10 = (Projectile *)Plant::Fire(pPVar11,aRStack_40,uVar4,uVar3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      uVar6 = FUN_0402645c(*(undefined8 *)(pPVar10 + 0xe0));
      uVar6 = operator|(uVar6,0x2000);
      FUN_04026460(pPVar10 + 0xe0,uVar6);
      LaunchProjectileAt(this,pPVar10,(SexyVector3 *)aRStack_38,1.0,0.15);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)&local_48);
      Projectile::SetTarget(pPVar10,(RtWeakPtr *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      iVar5 = extraout_w1_00;
    }
    else {
LAB_04027294:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      iVar5 = extraout_w1;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCabbagepult::avatarFire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantCabbagepult::avatarFire
          (PlantCabbagepult *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  Zombie *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  RtWeakPtrBase *pRVar12;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar13;
  RtWeakPtr *pRVar14;
  SharkMinion *pSVar15;
  BoardEntity *this_01;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  ulong uVar16;
  Projectile *this_02;
  Plant *pPVar17;
  float fVar18;
  float fVar19;
  int local_9c;
  int local_98;
  int local_94;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_90 [8];
  int local_88 [2];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  int local_78;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_40 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_90);
  PlantFramework::FindTargetZombie(aRStack_28,this,0);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_90,(RtWeakPtrBase *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)a_Stack_90);
  if (cVar2 != '\0') {
    (**(code **)(*(long *)this + 0xf8))(aRStack_28,this,param_4);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_90,(RtWeakPtrBase *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_70);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_40);
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aRStack_28,uVar6,0x29);
  while (bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aRStack_28), bVar3) {
    Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_80,(RtWeakPtrBase *)&local_78);
    Sexy::RtId::~RtId((RtId *)&local_78);
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
    cVar2 = (**(code **)(*plVar7 + 0x328))();
    if (cVar2 == '\0') {
      this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
      cVar2 = Zombie::IsInvisible(this_00);
      if (cVar2 != '\0') goto LAB_0402776c;
      p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
      pfVar9 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var8);
      if (800.0 < *pfVar9) goto LAB_0402776c;
      BoardTransforms::BoardSpaceToGrid(*pfVar9,pfVar9[1],&local_9c,&local_98);
      lVar10 = *(long *)(this + 0x10);
      fVar19 = *(float *)(lVar10 + 0x1c);
      fVar18 = (float)FUN_040264b8(*(undefined4 *)(lVar10 + 0x18),fVar19,
                                   *(undefined4 *)(lVar10 + 0x20));
      BoardTransforms::BoardSpaceToGrid(fVar18,fVar19,&local_94,local_88);
      if ((local_88[0] != local_98) || (local_9c < local_94)) goto LAB_0402776c;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_78,(RtWeakPtrBase *)aRStack_80);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )&local_70,(RtWeakPtr *)&local_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
      iVar5 = extraout_w1_00;
    }
    else {
LAB_0402776c:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
      iVar5 = extraout_w1;
    }
    Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_28,iVar5);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_28);
  uVar11 = FUN_040264a0(local_70,local_68);
  if (uVar11 < 2) {
    uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aRStack_28,uVar6,0x2f);
    while (bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aRStack_28), bVar3)
    {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_88,(RtWeakPtrBase *)&local_78);
      Sexy::RtId::~RtId((RtId *)&local_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_80,(RtWeakPtrBase *)&local_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
      cVar2 = (**(code **)(*plVar7 + 0x200))();
      if (cVar2 == '\0') {
LAB_04027d40:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
        iVar5 = extraout_w1_01;
      }
      else {
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
        iVar5 = FUN_04026470(*(undefined4 *)(lVar10 + 0x130));
        if (iVar5 < *(int *)(*(long *)(this + 0x10) + 0x114)) goto LAB_04027d40;
        this_01 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
        cVar2 = BoardEntity::IsOnScreen(this_01);
        if (cVar2 == '\0') goto LAB_04027d40;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
        GridItem::GetGridLocation();
        iVar5 = local_78;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
        GridItem::GetGridLocation();
        iVar1 = local_74;
        lVar10 = *(long *)(this + 0x10);
        fVar19 = *(float *)(lVar10 + 0x1c);
        fVar18 = (float)FUN_040264b8(*(undefined4 *)(lVar10 + 0x18),fVar19,
                                     *(undefined4 *)(lVar10 + 0x20));
        BoardTransforms::BoardSpaceToGrid(fVar18,fVar19,&local_98,&local_94);
        if ((local_94 != iVar1) || (iVar5 < local_98)) goto LAB_04027d40;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_78,(RtWeakPtrBase *)aRStack_80);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)&local_58,(RtWeakPtr *)&local_78);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
        iVar5 = extraout_w1_02;
      }
      Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_28,iVar5);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_28);
    uVar11 = FUN_040264a0(local_70,local_68);
  }
  lVar10 = FUN_040264a0(local_58,local_50);
  if (lVar10 + uVar11 < 2) {
    this_02 = (Projectile *)0x0;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,param_2);
    normalFire(this,aRStack_28,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  else {
    uVar16 = 0;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_88);
    uVar6 = local_70;
    uVar11 = FUN_040264a0(local_70,local_68);
    if (uVar11 != 0) {
      do {
        pRVar12 = (RtWeakPtrBase *)FUN_040264ac(uVar6,uVar16);
        cVar2 = Sexy::RtWeakPtrBase::operator==(pRVar12,(RtWeakPtrBase *)a_Stack_90);
        if (cVar2 == '\0') {
          cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)local_88);
          if (cVar2 == '\0') {
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
            fVar18 = (float)FUN_040264b8(*(undefined4 *)(lVar10 + 0x18),
                                         *(undefined4 *)(lVar10 + 0x1c),
                                         *(undefined4 *)(lVar10 + 0x20));
            pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_040264ac(local_70,uVar16);
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
            fVar19 = (float)FUN_040264b8(*(undefined4 *)(lVar10 + 0x18),
                                         *(undefined4 *)(lVar10 + 0x1c),
                                         *(undefined4 *)(lVar10 + 0x20));
            if (fVar19 < fVar18) goto LAB_04027a40;
          }
          else {
LAB_04027a40:
            pRVar14 = (RtWeakPtr *)FUN_040264ac(local_70,uVar16);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)local_88,pRVar14);
          }
          uVar6 = local_70;
          uVar11 = FUN_040264a0(local_70,local_68);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar11);
    }
    cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)local_88);
    uVar6 = local_58;
    if (cVar2 != '\0') {
      uVar11 = 0;
      uVar16 = FUN_040264a0(local_58,local_50);
      while (uVar11 < uVar16) {
        pRVar12 = (RtWeakPtrBase *)FUN_040264ac(uVar6,uVar11);
        cVar2 = Sexy::RtWeakPtrBase::operator==(pRVar12,(RtWeakPtrBase *)a_Stack_90);
        if (cVar2 == '\0') {
          cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)local_88);
          if (cVar2 == '\0') {
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
            fVar18 = (float)FUN_040264b8(*(undefined4 *)(lVar10 + 0x18),
                                         *(undefined4 *)(lVar10 + 0x1c),
                                         *(undefined4 *)(lVar10 + 0x20));
            pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_040264ac(local_58,uVar11);
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
            fVar19 = (float)FUN_040264b8(*(undefined4 *)(lVar10 + 0x18),
                                         *(undefined4 *)(lVar10 + 0x1c),
                                         *(undefined4 *)(lVar10 + 0x20));
            if (fVar19 < fVar18) goto LAB_04027b24;
          }
          else {
LAB_04027b24:
            pRVar14 = (RtWeakPtr *)FUN_040264ac(local_58,uVar11);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)local_88,pRVar14);
          }
          uVar6 = local_58;
          uVar11 = uVar11 + 1;
          uVar16 = FUN_040264a0(local_58,local_50);
        }
        else {
          uVar11 = uVar11 + 1;
        }
      }
    }
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_90);
    if (bVar3) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_80,(RtWeakPtrBase *)a_Stack_90);
      p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
      pfVar9 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var8);
      fVar18 = *pfVar9;
      fVar19 = pfVar9[1];
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0;
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_28,fVar18,fVar19,50.0);
      pPVar17 = *(Plant **)(this + 0x10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_78,(RtWeakPtrBase *)aRStack_80);
      pSVar15 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
      uVar4 = SharkMinion::getRow(pSVar15);
      this_02 = (Projectile *)
                Plant::Fire(pPVar17,(RtWeakPtr<Sexy::SoundResource> *)&local_78,uVar4,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
      uVar6 = FUN_0402645c(*(undefined8 *)(this_02 + 0xe0));
      FUN_04026460(this_02 + 0xe0,uVar6);
      LaunchProjectileAt(this,this_02,(SexyVector3 *)aRStack_28,1.0,0.15);
      Projectile::SetTarget(this_02,(RtWeakPtr *)aRStack_80);
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
    }
    else {
      this_02 = (Projectile *)0x0;
    }
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)local_88);
    if (bVar3) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_80,(RtWeakPtrBase *)local_88);
      p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
      pfVar9 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var8);
      fVar18 = *pfVar9;
      fVar19 = pfVar9[1];
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0;
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_28,fVar18,fVar19,50.0);
      pPVar17 = *(Plant **)(this + 0x10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_78,(RtWeakPtrBase *)aRStack_80);
      pSVar15 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
      uVar4 = SharkMinion::getRow(pSVar15);
      this_02 = (Projectile *)
                Plant::Fire(pPVar17,(RtWeakPtr<Sexy::SoundResource> *)&local_78,uVar4,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
      uVar6 = FUN_0402645c(*(undefined8 *)(this_02 + 0xe0));
      FUN_04026460(this_02 + 0xe0,uVar6);
      LaunchProjectileAt(this,this_02,(SexyVector3 *)aRStack_28,1.0,0.15);
      Projectile::SetTarget(this_02,(RtWeakPtr *)aRStack_80);
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
  }
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_40);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_58);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_02);
}

