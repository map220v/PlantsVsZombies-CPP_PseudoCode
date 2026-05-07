// Class: PlantPrimalRafflesia


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalRafflesia::isValidTargetGridItem(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
PlantPrimalRafflesia::isValidTargetGridItem(PlantPrimalRafflesia *this,RtWeakPtr *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtObject *this_01;
  long *extraout_x0;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar1 = Sexy::RtObject::IsA<GridItem>(this_01);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      nop();
      cVar2 = (**(code **)(*extraout_x0 + 0x200))();
      if (cVar2 != '\0') {
        this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x28);
        uVar3 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
        local_18 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                             (uVar3,uVar4,param_2);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        goto LAB_03c09480;
      }
    }
  }
  bVar1 = false;
LAB_03c09480:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantPrimalRafflesia::UpdatePlantfood() */

void __thiscall PlantPrimalRafflesia::UpdatePlantfood(PlantPrimalRafflesia *this)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_0418d1d0(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
  bVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x40));
  if (bVar1 <= (4 < iVar2)) {
    (**(code **)(*(long *)this + 0x228))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalRafflesia::StaticClassInit() */

void PlantPrimalRafflesia::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPrimalRafflesia");
    (*pcVar2)(plVar1,asStack_10,FUN_04190ef4,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPrimalRafflesia::StaticGetClass() */

long * PlantPrimalRafflesia::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPrimalRafflesia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPrimalRafflesia::GetClass() const */

long * PlantPrimalRafflesia::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPrimalRafflesia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPrimalRafflesia::PlantPrimalRafflesia() */

void __thiscall PlantPrimalRafflesia::PlantPrimalRafflesia(PlantPrimalRafflesia *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067fafc0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* PlantPrimalRafflesia::StaticNew() */

PlantPrimalRafflesia * PlantPrimalRafflesia::StaticNew(void)

{
  PlantPrimalRafflesia *this;
  
  this = ::operator_new(0x48);
  PlantPrimalRafflesia(this);
  return this;
}


/* PlantPrimalRafflesia::CancelPlantfood() */

void __thiscall PlantPrimalRafflesia::CancelPlantfood(PlantPrimalRafflesia *this)

{
  SoccerGameModule *this_00;
  SexyVector3 *pSVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  this_00 = (SoccerGameModule *)FUN_0418fc18(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_00 != (SoccerGameModule *)0x0) {
    this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    pSVar1 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_01);
    SoccerGameModule::DoShot(this_00,pSVar1,(BoardEntity *)this_01);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalRafflesia::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

void PlantPrimalRafflesia::CanTargetZombie(TextureInfo *param_1,RtWeakPtr *param_2)

{
  char cVar1;
  undefined1 uVar2;
  ResourceInfo *pRVar3;
  long lVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  lVar4 = FUN_0418fd00(*(undefined8 *)(param_1 + 0x10));
  cVar1 = ZombieRestrictionSet::IsExcluded((ZombieRestrictionSet *)(lVar4 + 0x2d0),(Zombie *)pRVar3)
  ;
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    uVar2 = EA::Text::GlyphCache_Memory::EndUpdate(param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantPrimalRafflesia::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float,
   bool, bool) */

void __thiscall
PlantPrimalRafflesia::LaunchProjectileAt
          (PlantPrimalRafflesia *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4,bool param_5,bool param_6)

{
  long lVar1;
  PrimalRafflesiaProjectile *pPVar2;
  PrimalRafflesiaPlantfoodProjectile *pPVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_0418fd00(*(undefined8 *)(this + 0x10));
  lVar1 = FUN_0418fd00(*(undefined8 *)(this + 0x10));
  fVar7 = *(float *)(lVar1 + 0x2c4);
  lVar1 = FUN_0418fd00(*(undefined8 *)(this + 0x10));
  fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar1 + 0x2c4));
  lVar1 = FUN_0418fd00(*(undefined8 *)(this + 0x10));
  fVar6 = *(float *)(lVar1 + 0x2c0);
  lVar1 = FUN_0418fd00(*(undefined8 *)(this + 0x10));
  fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar1 + 0x2c0));
  Projectile::LaunchAt(param_1,param_2,fVar4 + fVar7,fVar5 + fVar6);
  if (!param_6) {
    pPVar2 = Sexy::RtObject::Cast<PrimalRafflesiaProjectile>((RtObject *)param_1);
    Sexy::SexyVector3::operator=((SexyVector3 *)(pPVar2 + 0x1a8),param_2);
    pPVar2 = Sexy::RtObject::Cast<PrimalRafflesiaProjectile>((RtObject *)param_1);
    FUN_0418d1b4(pPVar2 + 0x1b4,param_5);
    pPVar2 = Sexy::RtObject::Cast<PrimalRafflesiaProjectile>((RtObject *)param_1);
    FUN_0418d1bc(pPVar2 + 0x1b5,0);
    return;
  }
  pPVar3 = Sexy::RtObject::Cast<PrimalRafflesiaPlantfoodProjectile>((RtObject *)param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(pPVar3 + 0x1a8),param_2);
  pPVar3 = Sexy::RtObject::Cast<PrimalRafflesiaPlantfoodProjectile>((RtObject *)param_1);
  FUN_0418d1b4(pPVar3 + 0x1b4,param_5);
  pPVar3 = Sexy::RtObject::Cast<PrimalRafflesiaPlantfoodProjectile>((RtObject *)param_1);
  FUN_0418d1bc(pPVar3 + 0x1b5,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalRafflesia::launchProjectile(Zombie*, GridItem*) */

void PlantPrimalRafflesia::launchProjectile(Zombie *param_1,GridItem *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  Projectile *pPVar5;
  BoardEntity *in_x2;
  code *pcVar6;
  Plant *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var7;
  long lVar8;
  undefined8 uVar9;
  RealObject *this_00;
  bool bVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_28);
  if (param_2 == (GridItem *)0x0) {
    if ((in_x2 == (BoardEntity *)0x0) || (cVar1 = BoardEntity::IsOnScreen(in_x2), cVar1 == '\0')) {
      this = *(Plant **)(param_1 + 0x10);
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      local_24 = pfVar4[1];
      local_28 = *pfVar4 + 600.0;
      local_20 = 0;
    }
    else {
      GridItem::GetGridLocation();
      BoardTransforms::GridToBoardSpace((Point *)local_18);
      this = *(Plant **)(param_1 + 0x10);
      local_28 = (float)local_30;
      local_20 = 0x41c80000;
      local_24 = (float)local_2c;
    }
  }
  else {
    pcVar6 = *(code **)(*(long *)param_2 + 0x3b0);
    lVar3 = FUN_0418fd00(*(undefined8 *)(param_1 + 0x10));
    local_18[0] = (*pcVar6)(*(undefined4 *)(lVar3 + 0x2c0),param_2);
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)local_18);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    lVar3 = FUN_0418fd00(*(undefined8 *)(param_1 + 0x10));
    this = *(Plant **)(param_1 + 0x10);
    fVar14 = local_28 - *(float *)(lVar3 + 0x2c8) * (float)iVar2;
    local_28 = fVar14;
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar16 = *pfVar4;
    if (fVar14 < fVar16) {
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      local_28 = fVar16 + (float)iVar2 * 0.5;
      cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
      lVar3 = *(long *)(param_1 + 0x10);
      goto joined_r0x04190250;
    }
  }
  cVar1 = Plant::GetAvatarEnable(this);
  lVar3 = *(long *)(param_1 + 0x10);
joined_r0x04190250:
  if (cVar1 == '\0') {
    iVar2 = FUN_0418d18c(lVar3);
    bVar10 = false;
    if (iVar2 < 2) {
      *(undefined4 *)(lVar3 + 0x150) = 2;
    }
    else {
      cVar1 = FUN_0418d194(lVar3);
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x150) = 3;
        bVar10 = false;
      }
      else {
        *(undefined4 *)(lVar3 + 0x150) = 7;
      }
    }
  }
  else {
    cVar1 = FUN_0418d194();
    bVar10 = true;
    if (cVar1 == '\0') {
      *(undefined4 *)(lVar3 + 0x150) = 4;
    }
    else {
      *(undefined4 *)(lVar3 + 0x150) = 8;
    }
  }
  FUN_0418d168((RtWeakPtr<Sexy::ResourceInfo> *)local_18,lVar3);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  lVar3 = FUN_0418d1dc(*(undefined8 *)(lVar3 + 0x70),
                       (long)*(int *)(*(long *)(param_1 + 0x10) + 0x150));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)(lVar3 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_30);
  if (cVar1 == '\0') {
    pPVar5 = (Projectile *)0x0;
  }
  else {
    p_Var7 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(param_1 + 0x10);
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var7);
    fVar15 = *pfVar4;
    FUN_0418d168((RtWeakPtr<Sexy::ResourceInfo> *)local_18,p_Var7);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    lVar8 = *(long *)(param_1 + 0x10);
    lVar3 = FUN_0418d1dc(*(undefined8 *)(lVar3 + 0x70),(long)*(int *)(lVar8 + 0x150));
    fVar16 = *(float *)(lVar8 + 0xc4);
    fVar14 = *(float *)(lVar3 + 0x68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    p_Var7 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(param_1 + 0x10);
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var7);
    uVar11 = *(undefined4 *)(lVar3 + 4);
    FUN_0418d168((RtWeakPtr<Sexy::ResourceInfo> *)local_18,p_Var7);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    lVar8 = *(long *)(param_1 + 0x10);
    lVar3 = FUN_0418d1dc(*(undefined8 *)(lVar3 + 0x70),(long)*(int *)(lVar8 + 0x150));
    fVar13 = *(float *)(lVar8 + 0xc4);
    fVar12 = *(float *)(lVar3 + 0x6c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)&local_30);
    pPVar5 = (Projectile *)
             Board::AddProjectile
                       ((Board *)(fVar15 + fVar14 * fVar16),uVar11,-(fVar12 * fVar13),uVar9,
                        (RtWeakPtr<Sexy::ResourceInfo> *)local_18,*(undefined8 *)(param_1 + 0x10),0)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    if (pPVar5 != (Projectile *)0x0) {
      LaunchProjectileAt((PlantPrimalRafflesia *)param_1,pPVar5,(SexyVector3 *)&local_28,0.1,0.1,
                         bVar10,true);
    }
    this_00 = *(RealObject **)(param_1 + 0x10);
    std::string::string((string *)local_18,"Play_Plant_PrimalRafflesia_Attack");
    RealObject::PlayPositionalSound(this_00,(string *)local_18,0.0);
    std::string::~string((string *)local_18);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pPVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalRafflesia::isValidTargetZombie(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
PlantPrimalRafflesia::isValidTargetZombie(PlantPrimalRafflesia *this,RtWeakPtr *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtObject *this_01;
  Zombie *this_02;
  Zombie *this_03;
  long extraout_x0;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar1 = Sexy::RtObject::IsA<Zombie>(this_01);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      nop();
      cVar2 = Zombie::IsTargetable(this_02);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        nop();
        cVar2 = Zombie::IsIgnoringAllDamage(this_03);
        if (cVar2 == '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          nop();
          cVar2 = FUN_0418e88c(*(undefined4 *)(extraout_x0 + 0xcc));
          if (cVar2 == '\0') {
            this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x28);
            uVar3 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin(this_00);
            uVar4 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_00);
            local_18 = std::
                       find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                                 (uVar3,uVar4,param_2);
            local_10 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end(this_00);
            bVar1 = __gnu_cxx::operator==
                              ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
            goto LAB_04191108;
          }
        }
      }
    }
  }
  bVar1 = false;
LAB_04191108:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalRafflesia::findNextPlantfoodTarget() */

void PlantPrimalRafflesia::findNextPlantfoodTarget(void)

{
  bool bVar1;
  char cVar2;
  long *in_x0;
  RtWeakPtrBase *pRVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*in_x0 + 0xd0))(avStack_20,in_x0,0);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,pRVar3);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_40);
    cVar2 = isValidTargetZombie();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    if (cVar2 != '\0') goto LAB_04191d00;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,pRVar3);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_40);
    cVar2 = isValidTargetGridItem();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    if (cVar2 != '\0') goto LAB_04191d00;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
LAB_04191d14:
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_04191d00:
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  goto LAB_04191d14;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalRafflesia::ApplyPlantfood() */

void __thiscall PlantPrimalRafflesia::ApplyPlantfood(PlantPrimalRafflesia *this)

{
  RealObject *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  findNextPlantfoodTarget();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x40),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string((string *)aRStack_10,"Play_Plant_PrimalRafflesia_PlantFood");
  RealObject::PlayPositionalSound(this_00,(string *)aRStack_10,0.0);
  std::string::~string((string *)aRStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalRafflesia::makeSureWeStillHaveAPlantFoodTarget() */

void __thiscall
PlantPrimalRafflesia::makeSureWeStillHaveAPlantFoodTarget(PlantPrimalRafflesia *this)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x40));
  if (cVar1 == '\0') {
    findNextPlantfoodTarget();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x40),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPrimalRafflesia::~PlantPrimalRafflesia() */

void __thiscall PlantPrimalRafflesia::~PlantPrimalRafflesia(PlantPrimalRafflesia *this)

{
  *(undefined ***)this = &PTR_GetClass_067fafc0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPrimalRafflesia::~PlantPrimalRafflesia() */

void __thiscall PlantPrimalRafflesia::~PlantPrimalRafflesia(PlantPrimalRafflesia *this)

{
  ~PlantPrimalRafflesia(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalRafflesia::launchSpecialProjectile() */

void __thiscall PlantPrimalRafflesia::launchSpecialProjectile(PlantPrimalRafflesia *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  RtObject *pRVar2;
  undefined8 uVar3;
  Zombie *pZVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x40);
  pZVar4 = (Zombie *)0x0;
  local_8 = ___stack_chk_guard;
  makeSureWeStillHaveAPlantFoodTarget(this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pRVar2 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pZVar4 = Sexy::RtObject::Cast<Zombie>(pRVar2);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pRVar2 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Sexy::RtObject::Cast<GridItem>(pRVar2);
  }
  uVar3 = launchProjectile((Zombie *)this,(GridItem *)pZVar4);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::push_back
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28),this_00);
  findNextPlantfoodTarget();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalRafflesia::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantPrimalRafflesia::Fire
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantPrimalRafflesia *param_4,undefined8 param_5,undefined8 param_6,
               undefined4 param_7)

{
  char cVar1;
  int iVar2;
  ResourceInfo *pRVar3;
  long lVar4;
  long *plVar5;
  float *pfVar6;
  Point *extraout_x1;
  RealObject *this;
  Projectile *pPVar7;
  code *pcVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var9;
  long lVar10;
  undefined8 uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
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
  if (cVar1 != '\0') {
    launchSpecialProjectile(param_4);
    pPVar7 = (Projectile *)0x0;
    goto LAB_0419368c;
  }
  PlantFramework::FindTargetZombie(aRStack_38,param_4);
  (**(code **)(*(long *)param_4 + 0xf8))((RtWeakPtr *)&local_18,param_4,param_7);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  DVec3::DVec3((DVec3 *)&local_28);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
  if (cVar1 == '\0') {
    if (pRVar3 == (ResourceInfo *)0x0) {
      this = *(RealObject **)(param_4 + 0x10);
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      local_24 = pfVar6[1];
      local_28 = *pfVar6 + 600.0;
      local_20 = 0;
    }
    else {
      GridItem::GetGridLocation();
      BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)&local_18,extraout_x1);
      this = *(RealObject **)(param_4 + 0x10);
      local_28 = (float)local_30;
      local_20 = 0x41c80000;
      local_24 = (float)local_2c;
    }
LAB_041935cc:
    iVar2 = FUN_0418d18c(this);
    if (1 < iVar2) goto LAB_041935e0;
LAB_04193768:
    cVar1 = FUN_0418d194(this);
    bVar12 = false;
    if (cVar1 != '\0') goto LAB_041935ec;
  }
  else {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pcVar8 = *(code **)(*plVar5 + 0x3b0);
    lVar4 = FUN_0418fd00(*(undefined8 *)(param_4 + 0x10));
    local_18 = (*pcVar8)(*(undefined4 *)(lVar4 + 0x2c0),plVar5);
    local_14 = param_2;
    local_10 = param_3;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    lVar4 = FUN_0418fd00(*(undefined8 *)(param_4 + 0x10));
    this = *(RealObject **)(param_4 + 0x10);
    fVar13 = local_28 - *(float *)(lVar4 + 0x2c8) * (float)iVar2;
    local_28 = fVar13;
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar14 = *pfVar6;
    if (fVar13 < fVar14) {
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      this = *(RealObject **)(param_4 + 0x10);
      local_28 = fVar14 + (float)iVar2 * 0.5;
      goto LAB_041935cc;
    }
    iVar2 = FUN_0418d18c(this);
    if (iVar2 < 2) goto LAB_04193768;
LAB_041935e0:
    cVar1 = FUN_0418d194(this);
    if (cVar1 == '\0') {
      *(undefined4 *)(this + 0x150) = 1;
      bVar12 = false;
    }
    else {
LAB_041935ec:
      bVar12 = true;
      *(undefined4 *)(this + 0x150) = 6;
    }
  }
  pPVar7 = (Projectile *)0x0;
  std::string::string((string *)&local_18,"Play_Plant_PrimalRafflesia_Attack");
  RealObject::PlayPositionalSound(this,(string *)&local_18,0.0);
  std::string::~string((string *)&local_18);
  nop();
  FUN_0418d168((RtWeakPtr *)&local_18,*(undefined8 *)(param_4 + 0x10));
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  lVar4 = FUN_0418d1dc(*(undefined8 *)(lVar4 + 0x70),
                       (long)*(int *)(*(long *)(param_4 + 0x10) + 0x150));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)(lVar4 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_30);
  if (cVar1 != '\0') {
    p_Var9 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(param_4 + 0x10);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var9);
    fVar18 = *pfVar6;
    FUN_0418d168((RtWeakPtr *)&local_18,p_Var9);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    lVar10 = *(long *)(param_4 + 0x10);
    lVar4 = FUN_0418d1dc(*(undefined8 *)(lVar4 + 0x70),(long)*(int *)(lVar10 + 0x150));
    fVar14 = *(float *)(lVar10 + 0xc4);
    fVar13 = *(float *)(lVar4 + 0x68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    p_Var9 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(param_4 + 0x10);
    lVar4 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var9);
    uVar15 = *(undefined4 *)(lVar4 + 4);
    FUN_0418d168((RtWeakPtr *)&local_18,p_Var9);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    lVar10 = *(long *)(param_4 + 0x10);
    lVar4 = FUN_0418d1dc(*(undefined8 *)(lVar4 + 0x70),(long)*(int *)(lVar10 + 0x150));
    fVar17 = *(float *)(lVar10 + 0xc4);
    fVar16 = *(float *)(lVar4 + 0x6c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    uVar11 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)&local_30);
    pPVar7 = (Projectile *)
             Board::AddProjectile
                       ((Board *)(fVar18 + fVar13 * fVar14),uVar15,-(fVar16 * fVar17),uVar11,
                        (RtWeakPtr *)&local_18,*(undefined8 *)(param_4 + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    if (pPVar7 != (Projectile *)0x0) {
      LaunchProjectileAt(param_4,pPVar7,(SexyVector3 *)&local_28,0.1,0.1,bVar12,false);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
LAB_0419368c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar7);
}

