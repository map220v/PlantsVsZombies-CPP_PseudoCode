// Class: PlantBloomingHearts


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBloomingHearts::StaticClassInit() */

void PlantBloomingHearts::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBloomingHearts");
    (*pcVar2)(plVar1,asStack_10,FUN_03afcc74,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBloomingHearts::StaticGetClass() */

long * PlantBloomingHearts::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantBloomingHearts",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBloomingHearts::GetClass() const */

long * PlantBloomingHearts::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantBloomingHearts",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBloomingHearts::PlantBloomingHearts() */

void __thiscall PlantBloomingHearts::PlantBloomingHearts(PlantBloomingHearts *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06727950;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* PlantBloomingHearts::StaticNew() */

PlantBloomingHearts * PlantBloomingHearts::StaticNew(void)

{
  PlantBloomingHearts *this;
  
  this = ::operator_new(0x48);
  PlantBloomingHearts(this);
  return this;
}


/* PlantBloomingHearts::launchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantBloomingHearts::launchProjectileAt
          (PlantBloomingHearts *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_03afbf2c(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 700);
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * fVar5);
  fVar4 = *(float *)(lVar1 + 0x2b8);
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * fVar4);
  Projectile::LaunchAt(param_1,param_2,fVar2 + fVar5,fVar3 + fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBloomingHearts::launchSpecialProjectile(Sexy::SexyVector3, Sexy::RtWeakPtr<BoardEntity>,
   Sexy::RtWeakPtr<BoardEntity> const&) */

void PlantBloomingHearts::launchSpecialProjectile
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,
               PlantBloomingHearts *param_4,RtWeakPtrBase *param_5,RtWeakPtr *param_6)

{
  char cVar1;
  Projectile *this;
  undefined8 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_4 + 0x10));
  if (cVar1 == '\0') {
    *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 1;
  }
  else {
    *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 2;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_5);
  this = (Projectile *)
         Plant::Fire(*(Plant **)(param_4 + 0x10),aRStack_10,
                     *(undefined4 *)(*(Plant **)(param_4 + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  uVar2 = FUN_03afadc8(*(undefined8 *)(this + 0xe0));
  uVar2 = operator|(uVar2,0x2000);
  FUN_03afadcc(this + 0xe0,uVar2);
  launchProjectileAt(param_4,this,(SexyVector3 *)&local_20,1.0,0.15);
  Projectile::SetTarget(this,param_6);
  *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBloomingHearts::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantBloomingHearts::Fire
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantBloomingHearts *param_4,RtWeakPtrBase *param_5,undefined8 param_6,
               undefined4 param_7)

{
  float fVar1;
  char cVar2;
  Projectile *pPVar3;
  long lVar4;
  long *plVar5;
  float *pfVar6;
  RealObject *this;
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
  cVar2 = (**(code **)(*(long *)param_4 + 0x180))();
  if (cVar2 == '\0') {
    pPVar7 = *(Plant **)(param_4 + 0x10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
    pPVar3 = (Projectile *)
             Plant::Fire(pPVar7,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_6,param_7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    PlantFramework::FindTargetZombie(aRStack_38,param_4,0);
    (**(code **)(*(long *)param_4 + 0xf8))
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_4,param_7);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    DVec3::DVec3((DVec3 *)&local_28);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
    if (cVar2 == '\0') {
      if (lVar4 == 0) {
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(param_4 + 0x10));
        local_24 = pfVar6[1];
        local_20 = 0;
        local_28 = *pfVar6 + 600.0;
      }
      else {
        GridItem::GetGridLocation();
        BoardTransforms::GridToBoardSpace((Point *)&local_18);
        local_20 = 0x41c80000;
        local_24 = (float)local_2c;
        local_28 = (float)local_30;
      }
    }
    else {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pcVar8 = *(code **)(*plVar5 + 0x3b0);
      lVar4 = FUN_03afbf2c(*(undefined8 *)(param_4 + 0x10));
      local_18 = (*pcVar8)(*(undefined4 *)(lVar4 + 0x2b8),plVar5);
      local_14 = param_2;
      local_10 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
      fVar1 = local_28;
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_4 + 0x10));
      if (fVar1 < *pfVar6) {
        local_28 = *pfVar6;
      }
    }
    launchProjectileAt(param_4,pPVar3,(SexyVector3 *)&local_28,0.1,0.1);
    this = *(RealObject **)(param_4 + 0x10);
    std::string::string((string *)&local_18,"Play_Cabbagepult_Throw");
    RealObject::PlayPositionalSound(this,(string *)&local_18,0.0);
    std::string::~string((string *)&local_18);
    nop();
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
/* PlantBloomingHearts::FindTargetZombieInRow(int, PlantWeapon, int*, PlantTargetParams&,
   Sexy::TRect<int>) */

void PlantBloomingHearts::FindTargetZombieInRow
               (RtWeakPtr<Sexy::SoundResource> *param_1,long param_2,int param_3,undefined8 param_4,
               int *param_5,int *param_6,undefined8 param_7)

{
  RtWeakPtrBase *pRVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 uVar6;
  float *pfVar7;
  ulong uVar8;
  Insets *pIVar9;
  int iVar10;
  ulong uVar11;
  float fVar12;
  int iVar13;
  uint local_4c;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_48 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  int local_30 [4];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_48);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_40);
  cVar2 = Board::RowCanHaveZombies(*(Board **)(gLawnApp + 0x9f0),param_3);
  if (cVar2 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)a_Stack_48);
  }
  else {
    if (param_5 != (int *)0x0) {
      *param_5 = 0;
    }
    uVar11 = 0;
    iVar10 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,param_7,
               param_3,param_3);
    uVar6 = local_20;
    lVar5 = FUN_03afade4(local_20,local_18);
    iVar13 = iVar10;
    if (lVar5 != 0) {
      do {
        FUN_03afadf0(uVar6,uVar11);
        nop();
        uVar6 = operator|(1,4);
        uVar6 = operator|(uVar6,0x80);
        uVar6 = operator|(uVar6,0x200);
        uVar6 = operator|(uVar6,0x800);
        local_4c = operator|(uVar6,0x2000);
        if (param_6[1] == 0) {
          operator|=(&local_4c,8);
        }
        cVar2 = Zombie::MatchesAny((Zombie *)this,local_4c,*(undefined8 *)(param_2 + 0x10));
        if ((cVar2 == '\0') &&
           (((((uint)param_6[1] >> 2 & 1) == 0 ||
             (cVar2 = FUN_03afbb58(*(undefined4 *)(this + 0xcc)), cVar2 == '\0')) &&
            (cVar2 = Creature::IsOnBoard(), cVar2 != '\0')))) {
          if (((uint)param_6[1] >> 1 & 1) != 0) {
            pfVar7 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(this);
            fVar12 = *pfVar7;
            Plant::GetCenterPt();
            if (fVar12 <= (float)local_30[0]) goto LAB_03afc5d4;
          }
          cVar2 = Zombie::IsIgnoringAllDamage((Zombie *)this);
          if (cVar2 == '\0') {
            pIVar9 = (Insets *)(**(code **)(*(long *)this + 0x178))(this);
            Sexy::Insets::Insets((Insets *)local_30,pIVar9);
            iVar4 = local_30[0];
            if (*param_6 != 2) {
              iVar4 = -local_30[0];
            }
            cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)a_Stack_48);
            if ((iVar13 < iVar4) || (cVar2 != '\0')) {
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                        ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_48,
                         (RtWeakPtrBase *)aRStack_38);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
              cVar2 = Zombie::HasCondition(this,0x49);
              iVar13 = iVar4;
            }
            else {
              cVar2 = Zombie::HasCondition(this,0x49);
            }
            if ((cVar2 != '\0') &&
               ((cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!
                                   ((RtMixedPtr<Sexy::Image> *)a_Stack_40), cVar2 != '\0' ||
                (iVar10 < iVar4)))) {
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                        ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_40,
                         (RtWeakPtrBase *)aRStack_38);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
              iVar10 = iVar4;
            }
          }
        }
LAB_03afc5d4:
        uVar6 = local_20;
        uVar11 = uVar11 + 1;
        uVar8 = FUN_03afade4(local_20,local_18);
      } while (uVar11 < uVar8);
    }
    if (param_5 != (int *)0x0) {
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_40);
      if (!bVar3) {
        iVar10 = iVar13;
      }
      *param_5 = iVar10;
    }
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_40);
    pRVar1 = (RtWeakPtrBase *)a_Stack_40;
    if (!bVar3) {
      pRVar1 = (RtWeakPtrBase *)a_Stack_48;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,pRVar1);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBloomingHearts::DoSpecial(int) */

void PlantBloomingHearts::DoSpecial(int param_1)

{
  bool bVar1;
  long *plVar2;
  RtWeakPtrBase *pRVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 *puVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  plVar2 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  (**(code **)(*plVar2 + 0xd0))(avStack_20,plVar2,1);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,pRVar3);
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this);
    local_30 = *puVar4;
    local_28 = *(undefined4 *)(puVar4 + 1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_50);
    launchSpecialProjectile
              ((undefined4)local_30,local_30._4_4_,local_28,plVar2,aRStack_38,aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBloomingHearts::~PlantBloomingHearts() */

void __thiscall PlantBloomingHearts::~PlantBloomingHearts(PlantBloomingHearts *this)

{
  *(undefined ***)this = &PTR_GetClass_06727950;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantBloomingHearts::~PlantBloomingHearts() */

void __thiscall PlantBloomingHearts::~PlantBloomingHearts(PlantBloomingHearts *this)

{
  ~PlantBloomingHearts(this);
  AK::FreeHook(this);
  return;
}

