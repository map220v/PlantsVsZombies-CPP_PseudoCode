// Class: PlantSapfling


/* PlantSapfling::PlantSapfling() */

void __thiscall PlantSapfling::PlantSapfling(PlantSapfling *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067cf6e0;
  return;
}


/* PlantSapfling::StaticNew() */

PlantSapfling * PlantSapfling::StaticNew(void)

{
  PlantSapfling *this;
  
  this = ::operator_new(0x28);
  PlantSapfling(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSapfling::StaticClassInit() */

void PlantSapfling::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSapfling");
    (*pcVar2)(plVar1,asStack_10,FUN_0409a56c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSapfling::StaticGetClass() */

long * PlantSapfling::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSapfling",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSapfling::GetClass() const */

long * PlantSapfling::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSapfling",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSapfling::isValidSapLocation(int, int) */

void __thiscall PlantSapfling::isValidSapLocation(PlantSapfling *this,int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  Board *this_00;
  Point aPStack_10 [8];
  long local_8;
  
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  local_8 = ___stack_chk_guard;
  iVar2 = Board::GetGridSquareType(this_00,param_1,param_2);
  if ((iVar2 == 3) || (iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    Sexy::Point::Point(aPStack_10,param_1,param_2);
    bVar1 = Board::IsShallowWater(this_00,aPStack_10);
    bVar1 = bVar1 ^ 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantSapfling::~PlantSapfling() */

void __thiscall PlantSapfling::~PlantSapfling(PlantSapfling *this)

{
  *(undefined ***)this = &PTR_GetClass_067cf6e0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSapfling::~PlantSapfling() */

void __thiscall PlantSapfling::~PlantSapfling(PlantSapfling *this)

{
  ~PlantSapfling(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSapfling::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

void PlantSapfling::CanTargetZombie(TextureInfo *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  undefined1 uVar2;
  Zombie *pZVar3;
  ResourceInfo *pRVar4;
  long lVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = Zombie::IsFlying(pZVar3);
  if (cVar1 == '\0') {
    pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::IsInWater(pZVar3);
    if (cVar1 == '\0') {
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_2);
      lVar5 = FUN_0409bf0c(*(undefined8 *)(param_1 + 0x10));
      cVar1 = ZombieRestrictionSet::IsExcluded
                        ((ZombieRestrictionSet *)(lVar5 + 0x2d0),(Zombie *)pRVar4);
      uVar2 = 0;
      if (cVar1 == '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
        uVar2 = EA::Text::GlyphCache_Memory::EndUpdate(param_1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
      goto LAB_0409bfc0;
    }
  }
  uVar2 = 0;
LAB_0409bfc0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantSapfling::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantSapfling::LaunchProjectileAt
          (PlantSapfling *this,Projectile *param_1,SexyVector3 *param_2,float param_3,float param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  SapflingProjectile *pSVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  
  lVar2 = FUN_0409bf0c(*(undefined8 *)(this + 0x10));
  lVar3 = FUN_0409bf0c(*(undefined8 *)(this + 0x10));
  fVar10 = *(float *)(lVar3 + 0x2c4);
  lVar3 = FUN_0409bf0c(*(undefined8 *)(this + 0x10));
  fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar3 + 0x2c4));
  lVar3 = FUN_0409bf0c(*(undefined8 *)(this + 0x10));
  fVar9 = *(float *)(lVar3 + 0x2c0);
  lVar3 = FUN_0409bf0c(*(undefined8 *)(this + 0x10));
  fVar7 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar3 + 0x2c0));
  Projectile::LaunchAt(param_1,param_2,fVar6 + fVar10,fVar7 + fVar9);
  pSVar4 = Sexy::RtObject::Cast<SapflingProjectile>((RtObject *)param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(pSVar4 + 0x1a8),param_2);
  iVar1 = FUN_0409a200(*(undefined8 *)(this + 0x10));
  puVar5 = (undefined4 *)FUN_0409a21c(*(undefined8 *)(lVar2 + 0x2f8),(long)(iVar1 + -1));
  uVar8 = *puVar5;
  pSVar4 = Sexy::RtObject::Cast<SapflingProjectile>((RtObject *)param_1);
  FUN_0409a208(uVar8,pSVar4 + 0x1b4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSapfling::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantSapfling::Fire(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
                        PlantSapfling *param_4,RtWeakPtrBase *param_5,undefined8 param_6,
                        undefined8 param_7)

{
  char cVar1;
  int iVar2;
  Projectile *pPVar3;
  float *pfVar4;
  long *plVar5;
  long lVar6;
  Plant *pPVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  RtMixedPtrBase aRStack_30 [8];
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
    pPVar7 = *(Plant **)(param_4 + 0x10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
    pPVar3 = (Projectile *)
             Plant::Fire(pPVar7,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_6,param_7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    PlantFramework::FindTargetZombie(aRStack_30,param_4,0);
    DVec3::DVec3((DVec3 *)&local_28);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
    if (cVar1 == '\0') {
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_4 + 0x10));
      local_24 = pfVar4[1];
      local_28 = *pfVar4 + 600.0;
      local_20 = 0;
    }
    else {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      pcVar8 = *(code **)(*plVar5 + 0x3b0);
      lVar6 = FUN_0409bf0c(*(undefined8 *)(param_4 + 0x10));
      local_18 = (*pcVar8)(*(undefined4 *)(lVar6 + 0x2c0),plVar5);
      local_14 = param_2;
      local_10 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      lVar6 = FUN_0409bf0c(*(undefined8 *)(param_4 + 0x10));
      fVar9 = local_28 - *(float *)(lVar6 + 0x2cc) * (float)iVar2;
      local_28 = fVar9;
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_4 + 0x10));
      fVar10 = *pfVar4;
      if (fVar9 < fVar10) {
        iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
        local_28 = fVar10 + (float)iVar2 * 0.5;
      }
    }
    LaunchProjectileAt(param_4,pPVar3,(SexyVector3 *)&local_28,0.1,0.1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
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
/* PlantSapfling::launchSpecialProjectile(Sexy::SexyVector3, Sexy::RtWeakPtr<Zombie>,
   Sexy::RtWeakPtr<BoardEntity> const&) */

void PlantSapfling::launchSpecialProjectile
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,PlantSapfling *param_4,
               RtWeakPtrBase *param_5)

{
  char cVar1;
  int iVar2;
  RtObject *this;
  undefined8 uVar3;
  SapflingProjectile *pSVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
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
  uVar3 = FUN_0409a1e0(*(undefined8 *)(this + 0xe0));
  uVar3 = operator|(uVar3,0x2000);
  FUN_0409a1e4(this + 0xe0,uVar3);
  LaunchProjectileAt(param_4,(Projectile *)this,(SexyVector3 *)&local_20,1.0,0.15);
  *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 0xffffffff;
  pSVar4 = Sexy::RtObject::Cast<SapflingProjectile>(this);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_4 + 0x10));
  uVar7 = 0x3f800000;
  if (cVar1 == '\0') {
    lVar5 = FUN_0409bf0c(0x3f800000,*(undefined8 *)(param_4 + 0x10));
    iVar2 = FUN_0409a200(*(undefined8 *)(param_4 + 0x10));
    puVar6 = (undefined4 *)FUN_0409a21c(*(undefined8 *)(lVar5 + 0x2f8),(long)(iVar2 + -1));
    uVar7 = *puVar6;
  }
  FUN_0409a208(uVar7,pSVar4 + 0x1b4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSapfling::DoSpecial(int) */

void PlantSapfling::DoSpecial(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  PlantSapfling *this;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  RtWeakPtrBase *pRVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  BoardTransforms *this_01;
  undefined8 uVar9;
  TPoint *pTVar10;
  RtObject *this_02;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *p_Var11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined8 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  uint local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  this = (PlantSapfling *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xd0))(avStack_38,this,2);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  lVar5 = FUN_0409bf0c(*(undefined8 *)(this + 0x10));
  iVar2 = *(int *)(lVar5 + 0x2c8);
  p_Var11 = *(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> **)(gLawnApp + 0x9f0);
  if (0 < *(int *)(p_Var11 + 0xf8)) {
    iVar13 = 0;
    do {
      iVar12 = 0;
      if (0 < *(int *)(p_Var11 + 0xfc)) {
        do {
          while (cVar4 = isValidSapLocation(this,iVar13,iVar12), cVar4 == '\0') {
            iVar12 = iVar12 + 1;
            p_Var11 = *(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> **)
                       (gLawnApp + 0x9f0);
            if (*(int *)(p_Var11 + 0xfc) <= iVar12) goto LAB_0409d174;
          }
          iVar1 = iVar12 + 1;
          Sexy::Point::Point((Point *)&local_48,iVar13,iVar12);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)&local_48
                    );
          p_Var11 = *(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> **)
                     (gLawnApp + 0x9f0);
          iVar12 = iVar1;
        } while (iVar1 < *(int *)(p_Var11 + 0xfc));
      }
LAB_0409d174:
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(p_Var11 + 0xf8));
  }
  iVar13 = 0;
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(avStack_38);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(avStack_38);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<GridItemVase>*,std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>>>
            (uVar6,uVar7);
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_38);
  while( true ) {
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_38);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_48);
    if ((iVar2 <= iVar13) || (!bVar3)) break;
    pRVar8 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_70,pRVar8);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    this_01 = (BoardTransforms *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this_00);
    local_48 = *(undefined8 *)this_01;
    local_40 = *(undefined4 *)(this_01 + 8);
    fVar15 = *(float *)this_01;
    fVar14 = *(float *)(this_01 + 4);
    uVar6 = *(undefined8 *)this_01;
    BoardTransforms::BoardSpaceToGrid(this_01,fVar15,fVar14);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    p_Var11 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_68;
    local_60 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                         (uVar7,uVar9);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
    if (bVar3) {
LAB_0409d1d8:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    }
    else {
      p_Var11 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)0xffffffff;
      Sexy::Point::Point((Point *)&local_50,-1,-1);
      cVar4 = Sexy::TPoint<int>::operator==((TPoint<int> *)&local_68,(TPoint *)&local_50);
      if (cVar4 != '\0') goto LAB_0409d1d8;
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_20);
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
      local_58 = std::
                 remove<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                           (uVar7,uVar9,(TPoint<int> *)&local_68);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_50,(__normal_iterator *)&local_58);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::erase
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,local_50);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_70);
      if (bVar3) {
        this_02 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
        bVar3 = Sexy::RtObject::IsA<Zombie>(this_02);
        if (!bVar3) goto LAB_0409d31c;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)aRStack_70);
      }
      else {
LAB_0409d31c:
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_50);
      }
      iVar13 = iVar13 + 1;
      p_Var11 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_70;
      local_48 = uVar6;
      launchSpecialProjectile(fVar15,fVar14,local_40,this,(Point *)&local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
  }
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
            (uVar6,uVar7);
  if (iVar2 > iVar13) {
    do {
      iVar12 = (int)p_Var11;
      lVar5 = FUN_0409a224(local_20,local_18[0]);
      if (lVar5 == 0) break;
      iVar13 = iVar13 + 1;
      pTVar10 = (TPoint *)
                std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
      Sexy::Point::Point((Point *)&local_68,pTVar10);
      FUN_0409a2e8(local_18);
      BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)local_68,local_64,iVar12);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_48,(float)(int)local_60,(float)local_60._4_4_,0.0);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_58);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_50);
      p_Var11 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_50;
      launchSpecialProjectile
                ((undefined4)local_48,local_48._4_4_,local_40,this,
                 (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    } while (iVar13 < iVar2);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

