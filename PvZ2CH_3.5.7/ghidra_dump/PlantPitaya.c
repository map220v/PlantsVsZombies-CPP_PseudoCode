// Class: PlantPitaya


/* PlantPitaya::ApplyPlantfood() */

void __thiscall PlantPitaya::ApplyPlantfood(PlantPitaya *this)

{
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  *(undefined4 *)(this + 0x40) = 0;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* PlantPitaya::Initialize() */

void __thiscall PlantPitaya::Initialize(PlantPitaya *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPitaya::playFireSound() */

void __thiscall PlantPitaya::playFireSound(PlantPitaya *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(RealObject **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_Plant_MelonPult_Attack");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPitaya::playPlantfoodLaunchSound() */

void __thiscall PlantPitaya::playPlantfoodLaunchSound(PlantPitaya *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(RealObject **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_Plant_MelonPult_Nitro");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPitaya::StaticClassInit() */

void PlantPitaya::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPitaya");
    (*pcVar2)(plVar1,asStack_10,FUN_04081614,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPitaya::StaticGetClass() */

long * PlantPitaya::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPitaya",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPitaya::GetClass() const */

long * PlantPitaya::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPitaya",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPitaya::PlantPitaya() */

void __thiscall PlantPitaya::PlantPitaya(PlantPitaya *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067ca9d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* PlantPitaya::StaticNew() */

PlantPitaya * PlantPitaya::StaticNew(void)

{
  PlantPitaya *this;
  
  this = ::operator_new(0x48);
  PlantPitaya(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPitaya::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, PlantWeapon) */

void PlantPitaya::LaunchProjectileAt
               (PlantFramework *param_1,Projectile *param_2,SexyVector3 *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_040812a4(*(undefined8 *)(param_1 + 0x10));
  fVar3 = _FUN_04081390;
  fVar5 = *(float *)(lVar1 + 0x2c4);
  fVar2 = (float)PlantFramework::Rand(param_1,fVar5 * _FUN_04081390);
  fVar4 = *(float *)(lVar1 + 0x2c0);
  fVar3 = (float)PlantFramework::Rand(param_1,fVar4 * fVar3);
  Projectile::LaunchAt(param_2,param_3,fVar2 + fVar5,fVar3 + fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPitaya::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantPitaya::Fire(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4,
                      RtWeakPtrBase *param_5,undefined8 param_6,undefined4 param_7)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  ResourceInfo *this;
  float *pfVar4;
  long *plVar5;
  long lVar6;
  Plant *pPVar7;
  code *pcVar8;
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
  cVar1 = (**(code **)(*param_4 + 0x180))();
  if (cVar1 == '\0') {
    pPVar7 = (Plant *)param_4[2];
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
    uVar3 = Plant::Fire(pPVar7,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_6,param_7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    PlantFramework::FindTargetZombie(aRStack_38,param_4,0);
    (**(code **)(*param_4 + 0xf8))((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_4,param_7);
    this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    DVec3::DVec3((DVec3 *)&local_28);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
    if (cVar1 == '\0') {
      if ((this == (ResourceInfo *)0x0) ||
         (bVar2 = Sexy::RtObject::IsA<GridItemFlame>((RtObject *)this), bVar2)) {
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_4[2]);
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
      pcVar8 = *(code **)(*plVar5 + 0x3b0);
      lVar6 = FUN_040812a4(param_4[2]);
      local_18 = (*pcVar8)(*(undefined4 *)(lVar6 + 0x2c0),plVar5);
      local_14 = param_2;
      local_10 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
    }
    (**(code **)(*param_4 + 0x528))(param_4);
    LaunchProjectileAt(param_4,uVar3,(DVec3 *)&local_28,param_7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  else {
    (**(code **)(*param_4 + 0xa8))(param_4,0);
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* PlantPitaya::~PlantPitaya() */

void __thiscall PlantPitaya::~PlantPitaya(PlantPitaya *this)

{
  *(undefined ***)this = &PTR_GetClass_067ca9d0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPitaya::~PlantPitaya() */

void __thiscall PlantPitaya::~PlantPitaya(PlantPitaya *this)

{
  ~PlantPitaya(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPitaya::DoSpecial(int) */

void PlantPitaya::DoSpecial(int param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  PlantFramework *this;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  RtWeakPtrBase *pRVar15;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var16;
  float *pfVar17;
  SharkMinion *pSVar18;
  Projectile *pPVar19;
  int extraout_w1;
  int iVar20;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  Plant *pPVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  int local_40;
  int local_3c;
  RtId aRStack_38 [16];
  Iterator aIStack_28 [32];
  long local_8;
  
  this = (PlantFramework *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x40) == 0) {
    (**(code **)(*(long *)this + 0x530))();
  }
  iVar22 = 0;
  iVar6 = Board::CountZombiesOnScreen(*(Board **)(gLawnApp + 0x9f0),false);
  iVar7 = Board::CountDamagableGridItemsOnScreen();
  lVar10 = FUN_04081080(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
  iVar20 = *(int *)(this + 0x40);
  uVar11 = Sexy::LazySingleton<PVZDB>::GetInstance();
  uVar3 = 0;
  if ((long)(4 - iVar20) != 0) {
    uVar3 = (ulong)((iVar6 + iVar7) - lVar10) / (ulong)(long)(4 - iVar20);
  }
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar11,0x29);
  while ((bVar4 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar4 &&
         ((ulong)(long)iVar22 < uVar3))) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtId::~RtId(aRStack_38);
    plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    cVar5 = (**(code **)(*plVar13 + 0x328))();
    if (cVar5 == '\0') {
      plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      cVar5 = (**(code **)(*plVar13 + 0x330))();
      if (cVar5 == '\0') {
        uVar11 = *(undefined8 *)(this + 0x28);
        lVar14 = FUN_04081080(uVar11,*(undefined8 *)(this + 0x30));
        lVar12 = 0;
        do {
          if (lVar12 == lVar14) {
            p_Var16 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
            pfVar17 = (float *)std::
                               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               ::_M_leftmost(p_Var16);
            fVar23 = *pfVar17;
            fVar24 = pfVar17[1];
            if (fVar23 <= 800.0) {
              iVar22 = iVar22 + 1;
              *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
              EATextSquish::Vec3::Vec3((Vec3 *)aRStack_38,fVar23,fVar24,50.0);
              pPVar21 = *(Plant **)(this + 0x10);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
              pSVar18 = (SharkMinion *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
              uVar8 = SharkMinion::getRow(pSVar18);
              pPVar19 = (Projectile *)
                        Plant::Fire(pPVar21,(RtWeakPtr<Sexy::SoundResource> *)&local_40,uVar8,1);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
              uVar11 = FUN_04081070(*(undefined8 *)(pPVar19 + 0xe0));
              uVar11 = operator|(uVar11,0x2000);
              FUN_04081074(pPVar19 + 0xe0,uVar11);
              LaunchProjectileAt(this,pPVar19,aRStack_38,1);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
              Projectile::SetTarget(pPVar19,(RtWeakPtr *)&local_40);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
              *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
              std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
              ::push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                           *)(this + 0x28),(RtWeakPtr *)&local_40);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
              iVar20 = extraout_w1_02;
              goto LAB_040819b4;
            }
            break;
          }
          pRVar15 = (RtWeakPtrBase *)FUN_0408108c(uVar11,lVar12);
          cVar5 = Sexy::RtWeakPtrBase::operator==(pRVar15,(RtWeakPtrBase *)aRStack_48);
          lVar12 = lVar12 + 1;
        } while (cVar5 == '\0');
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    iVar20 = extraout_w1;
LAB_040819b4:
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar20);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar11 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar11,0x2f);
  do {
    bVar4 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if ((!bVar4) || (uVar3 <= (ulong)(long)iVar22)) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      lVar12 = FUN_04081080(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
      if (lVar10 == lVar12) {
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
        iVar7 = PlantFramework::Rand(this);
        iVar20 = *(int *)(*(long *)(this + 0x10) + 0x114);
        iVar22 = (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) - iVar20) + 1;
        iVar6 = 0;
        if (iVar22 != 0) {
          iVar6 = iVar7 / iVar22;
        }
        iVar9 = PlantFramework::Rand(this);
        iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = iVar9 / iVar1;
        }
        BoardTransforms::GridToBoardSpacePos
                  ((BoardTransforms *)(ulong)(uint)(iVar20 + (iVar7 - iVar6 * iVar22)),
                   iVar9 - iVar2 * iVar1,iVar1);
        EATextSquish::Vec3::Vec3((Vec3 *)aIStack_28,(float)local_40,(float)local_3c,0.0);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_38);
        lVar10 = Plant::Fire(*(Plant **)(this + 0x10),
                             (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                             aRStack_38,*(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        uVar11 = FUN_04081070(*(undefined8 *)(lVar10 + 0xe0));
        uVar11 = operator|(uVar11,0x2000);
        FUN_04081074((undefined8 *)(lVar10 + 0xe0),uVar11);
        LaunchProjectileAt(this,lVar10,aIStack_28,1);
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
      }
      *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtId::~RtId(aRStack_38);
    plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    cVar5 = (**(code **)(*plVar13 + 0x200))();
    if (cVar5 != '\0') {
      uVar11 = *(undefined8 *)(this + 0x28);
      lVar14 = FUN_04081080(uVar11,*(undefined8 *)(this + 0x30));
      lVar12 = 0;
      do {
        if (lVar12 == lVar14) {
          iVar22 = iVar22 + 1;
          p_Var16 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          pfVar17 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost(p_Var16);
          fVar23 = *pfVar17;
          fVar24 = pfVar17[1];
          *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
          EATextSquish::Vec3::Vec3((Vec3 *)aRStack_38,fVar23,fVar24,50.0);
          pPVar21 = *(Plant **)(this + 0x10);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
          pSVar18 = (SharkMinion *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          uVar8 = SharkMinion::getRow(pSVar18);
          pPVar19 = (Projectile *)
                    Plant::Fire(pPVar21,(RtWeakPtr<Sexy::SoundResource> *)&local_40,uVar8,1);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          uVar11 = FUN_04081070(*(undefined8 *)(pPVar19 + 0xe0));
          uVar11 = operator|(uVar11,0x2000);
          FUN_04081074(pPVar19 + 0xe0,uVar11);
          LaunchProjectileAt(this,pPVar19,aRStack_38,1);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
          Projectile::SetTarget(pPVar19,(RtWeakPtr *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                     *)(this + 0x28),(RtWeakPtr *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          iVar20 = extraout_w1_00;
          goto LAB_04081b38;
        }
        pRVar15 = (RtWeakPtrBase *)FUN_0408108c(uVar11,lVar12);
        cVar5 = Sexy::RtWeakPtrBase::operator==(pRVar15,(RtWeakPtrBase *)aRStack_48);
        lVar12 = lVar12 + 1;
      } while (cVar5 == '\0');
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    iVar20 = extraout_w1_01;
LAB_04081b38:
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar20);
  } while( true );
}

