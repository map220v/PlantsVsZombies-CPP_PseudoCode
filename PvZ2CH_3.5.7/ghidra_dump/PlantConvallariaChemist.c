// Class: PlantConvallariaChemist


/* PlantConvallariaChemist::UpdatePlantfood() */

void __thiscall PlantConvallariaChemist::UpdatePlantfood(PlantConvallariaChemist *this)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_03c05a00(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
  Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  bVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x40));
  if (bVar1 <= (4 < iVar2)) {
    (**(code **)(*(long *)this + 0x228))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantConvallariaChemist::StaticClassInit() */

void PlantConvallariaChemist::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantConvallariaChemist");
    (*pcVar2)(plVar1,asStack_10,FUN_03c0915c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantConvallariaChemist::StaticGetClass() */

long * PlantConvallariaChemist::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantConvallariaChemist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantConvallariaChemist::GetClass() const */

long * PlantConvallariaChemist::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantConvallariaChemist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantConvallariaChemist::PlantConvallariaChemist() */

void __thiscall PlantConvallariaChemist::PlantConvallariaChemist(PlantConvallariaChemist *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067448b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* PlantConvallariaChemist::StaticNew() */

PlantConvallariaChemist * PlantConvallariaChemist::StaticNew(void)

{
  PlantConvallariaChemist *this;
  
  this = ::operator_new(0x48);
  PlantConvallariaChemist(this);
  return this;
}


/* PlantConvallariaChemist::CancelPlantfood() */

void __thiscall PlantConvallariaChemist::CancelPlantfood(PlantConvallariaChemist *this)

{
  SoccerGameModule *this_00;
  SexyVector3 *pSVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  this_00 = (SoccerGameModule *)FUN_03c08288(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
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


/* PlantConvallariaChemist::PlayAttackAnimation() */

void __thiscall PlantConvallariaChemist::PlayAttackAnimation(PlantConvallariaChemist *this)

{
  char cVar1;
  long lVar2;
  RtObject *this_00;
  PlantAnimRig_ConvallariaChemist *pPVar3;
  float fVar4;
  
  cVar1 = FUN_03c05878(*(undefined8 *)(this + 0x10));
  if (cVar1 != '\0') {
    fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    lVar2 = FUN_03c08370(*(undefined8 *)(this + 0x10));
    if (fVar4 < *(float *)(lVar2 + 0x2cc)) {
      this_00 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_ConvallariaChemist>(this_00);
      if (pPVar3 != (PlantAnimRig_ConvallariaChemist *)0x0) {
        FUN_03c05898(pPVar3 + 0x3b8,1);
        PlantFramework::PlayAttackAnimation((PlantFramework *)this);
        return;
      }
    }
  }
  PlantFramework::PlayAttackAnimation((PlantFramework *)this);
  return;
}


/* PlantConvallariaChemist::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float,
   bool, bool) */

void __thiscall
PlantConvallariaChemist::LaunchProjectileAt
          (PlantConvallariaChemist *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4,bool param_5,bool param_6)

{
  long lVar1;
  ConvallariaChemistProjectile *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_03c08370(*(undefined8 *)(this + 0x10));
  lVar1 = FUN_03c08370(*(undefined8 *)(this + 0x10));
  fVar6 = *(float *)(lVar1 + 0x2c4);
  lVar1 = FUN_03c08370(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar1 + 0x2c4));
  lVar1 = FUN_03c08370(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 0x2c0);
  lVar1 = FUN_03c08370(*(undefined8 *)(this + 0x10));
  fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar1 + 0x2c0));
  Projectile::LaunchAt(param_1,param_2,fVar3 + fVar6,fVar4 + fVar5);
  if (!param_6 <= param_5) {
    return;
  }
  pCVar2 = Sexy::RtObject::Cast<ConvallariaChemistProjectile>((RtObject *)param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(pCVar2 + 0x1a8),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantConvallariaChemist::launchProjectile(Zombie*, GridItem*) */

void PlantConvallariaChemist::launchProjectile(Zombie *param_1,GridItem *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  Projectile *pPVar6;
  BoardEntity *in_x2;
  RealObject *this;
  code *pcVar7;
  Plant *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var8;
  long lVar9;
  undefined8 uVar10;
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
      this_00 = *(Plant **)(param_1 + 0x10);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this_00);
      local_24 = pfVar5[1];
      local_28 = *pfVar5 + 600.0;
      local_20 = 0;
    }
    else {
      GridItem::GetGridLocation();
      BoardTransforms::GridToBoardSpace((Point *)local_18);
      this_00 = *(Plant **)(param_1 + 0x10);
      local_28 = (float)local_30;
      local_20 = 0x41c80000;
      local_24 = (float)local_2c;
    }
  }
  else {
    pcVar7 = *(code **)(*(long *)param_2 + 0x3b0);
    lVar4 = FUN_03c08370(*(undefined8 *)(param_1 + 0x10));
    local_18[0] = (*pcVar7)(*(undefined4 *)(lVar4 + 0x2c0),param_2);
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)local_18);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    lVar4 = FUN_03c08370(*(undefined8 *)(param_1 + 0x10));
    this_00 = *(Plant **)(param_1 + 0x10);
    fVar14 = local_28 - *(float *)(lVar4 + 0x2c8) * (float)iVar3;
    local_28 = fVar14;
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this_00);
    fVar16 = *pfVar5;
    if (fVar14 < fVar16) {
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      local_28 = fVar16 + (float)iVar3 * 0.5;
      cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
      lVar4 = *(long *)(param_1 + 0x10);
      goto joined_r0x03c08820;
    }
  }
  cVar1 = Plant::GetAvatarEnable(this_00);
  lVar4 = *(long *)(param_1 + 0x10);
joined_r0x03c08820:
  if (cVar1 == '\0') {
    *(undefined4 *)(lVar4 + 0x150) = 1;
  }
  else {
    *(undefined4 *)(lVar4 + 0x150) = 2;
  }
  FUN_03c05854((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  lVar4 = FUN_03c05a0c(*(undefined8 *)(lVar4 + 0x70),
                       (long)*(int *)(*(long *)(param_1 + 0x10) + 0x150));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)(lVar4 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_30);
  if (cVar2 == '\0') {
    pPVar6 = (Projectile *)0x0;
  }
  else {
    p_Var8 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(param_1 + 0x10);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var8);
    fVar15 = *pfVar5;
    FUN_03c05854((RtWeakPtr<Sexy::ResourceInfo> *)local_18,p_Var8);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    lVar9 = *(long *)(param_1 + 0x10);
    lVar4 = FUN_03c05a0c(*(undefined8 *)(lVar4 + 0x70),(long)*(int *)(lVar9 + 0x150));
    fVar16 = *(float *)(lVar9 + 0xc4);
    fVar14 = *(float *)(lVar4 + 0x68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    p_Var8 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(param_1 + 0x10);
    lVar4 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var8);
    uVar11 = *(undefined4 *)(lVar4 + 4);
    FUN_03c05854((RtWeakPtr<Sexy::ResourceInfo> *)local_18,p_Var8);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    lVar9 = *(long *)(param_1 + 0x10);
    lVar4 = FUN_03c05a0c(*(undefined8 *)(lVar4 + 0x70),(long)*(int *)(lVar9 + 0x150));
    fVar13 = *(float *)(lVar9 + 0xc4);
    fVar12 = *(float *)(lVar4 + 0x6c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)&local_30);
    pPVar6 = (Projectile *)
             Board::AddProjectile
                       ((Board *)(fVar15 + fVar14 * fVar16),uVar11,-(fVar12 * fVar13),uVar10,
                        (RtWeakPtr<Sexy::ResourceInfo> *)local_18,*(undefined8 *)(param_1 + 0x10),0)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    if (pPVar6 != (Projectile *)0x0) {
      LaunchProjectileAt((PlantConvallariaChemist *)param_1,pPVar6,(SexyVector3 *)&local_28,0.1,0.1,
                         cVar1 != '\0',true);
    }
    this = *(RealObject **)(param_1 + 0x10);
    std::string::string((string *)local_18,"Play_Plant_PrimalRafflesia_Attack");
    RealObject::PlayPositionalSound(this,(string *)local_18,0.0);
    std::string::~string((string *)local_18);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pPVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantConvallariaChemist::isValidTargetZombie(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
PlantConvallariaChemist::isValidTargetZombie(PlantConvallariaChemist *this,RtWeakPtr *param_2)

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
          cVar2 = FUN_03c07578(*(undefined4 *)(extraout_x0 + 0xcc));
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
            goto LAB_03c09370;
          }
        }
      }
    }
  }
  bVar1 = false;
LAB_03c09370:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantConvallariaChemist::findNextPlantfoodTarget() */

void PlantConvallariaChemist::findNextPlantfoodTarget(void)

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
    if (cVar2 != '\0') goto LAB_03c09bd8;
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
    cVar2 = PlantPrimalRafflesia::isValidTargetGridItem();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    if (cVar2 != '\0') goto LAB_03c09bd8;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
LAB_03c09bec:
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_03c09bd8:
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  goto LAB_03c09bec;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantConvallariaChemist::ApplyPlantfood() */

void __thiscall PlantConvallariaChemist::ApplyPlantfood(PlantConvallariaChemist *this)

{
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantConvallariaChemist::makeSureWeStillHaveAPlantFoodTarget() */

void __thiscall
PlantConvallariaChemist::makeSureWeStillHaveAPlantFoodTarget(PlantConvallariaChemist *this)

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


/* PlantConvallariaChemist::~PlantConvallariaChemist() */

void __thiscall PlantConvallariaChemist::~PlantConvallariaChemist(PlantConvallariaChemist *this)

{
  *(undefined ***)this = &PTR_GetClass_067448b0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantConvallariaChemist::~PlantConvallariaChemist() */

void __thiscall PlantConvallariaChemist::~PlantConvallariaChemist(PlantConvallariaChemist *this)

{
  ~PlantConvallariaChemist(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantConvallariaChemist::launchSpecialProjectile() */

void __thiscall PlantConvallariaChemist::launchSpecialProjectile(PlantConvallariaChemist *this)

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
/* PlantConvallariaChemist::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantConvallariaChemist::Fire
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantConvallariaChemist *param_4,undefined8 param_5,undefined8 param_6,
               undefined4 param_7)

{
  char cVar1;
  int iVar2;
  ResourceInfo *pRVar3;
  RtObject *this;
  PlantAnimRig_ConvallariaChemist *pPVar4;
  long lVar5;
  long *plVar6;
  float *pfVar7;
  Point *extraout_x1;
  RealObject *this_00;
  Projectile *pPVar8;
  code *pcVar9;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var10;
  long lVar11;
  undefined8 uVar12;
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
  if (cVar1 == '\0') {
    PlantFramework::FindTargetZombie(aRStack_38,param_4);
    (**(code **)(*(long *)param_4 + 0xf8))((RtWeakPtr *)&local_18,param_4,param_7);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    DVec3::DVec3((DVec3 *)&local_28);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
    if (cVar1 == '\0') {
      if (pRVar3 == (ResourceInfo *)0x0) {
        this_00 = *(RealObject **)(param_4 + 0x10);
        pfVar7 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_00);
        local_24 = pfVar7[1];
        local_28 = *pfVar7 + 600.0;
        local_20 = 0;
      }
      else {
        GridItem::GetGridLocation();
        BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)&local_18,extraout_x1);
        this_00 = *(RealObject **)(param_4 + 0x10);
        local_28 = (float)local_30;
        local_20 = 0x41c80000;
        local_24 = (float)local_2c;
      }
    }
    else {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pcVar9 = *(code **)(*plVar6 + 0x3b0);
      lVar5 = FUN_03c08370(*(undefined8 *)(param_4 + 0x10));
      local_18 = (*pcVar9)(*(undefined4 *)(lVar5 + 0x2c0),plVar6);
      local_14 = param_2;
      local_10 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      lVar5 = FUN_03c08370(*(undefined8 *)(param_4 + 0x10));
      this_00 = *(RealObject **)(param_4 + 0x10);
      fVar13 = local_28 - *(float *)(lVar5 + 0x2c8) * (float)iVar2;
      local_28 = fVar13;
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this_00);
      fVar14 = *pfVar7;
      if (fVar13 < fVar14) {
        iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
        this_00 = *(RealObject **)(param_4 + 0x10);
        local_28 = fVar14 + (float)iVar2 * 0.5;
      }
    }
    std::string::string((string *)&local_18,"Play_Plant_PrimalRafflesia_Attack");
    RealObject::PlayPositionalSound(this_00,(string *)&local_18,0.0);
    std::string::~string((string *)&local_18);
    nop();
    this = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_4 + 0x10));
    pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_ConvallariaChemist>(this);
    if ((pPVar4 != (PlantAnimRig_ConvallariaChemist *)0x0) &&
       (cVar1 = FUN_03c058a0(pPVar4[0x3b8]), cVar1 != '\0')) {
      *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 3;
      FUN_03c05898(pPVar4 + 0x3b8,0);
    }
    pPVar8 = (Projectile *)0x0;
    FUN_03c05854((RtWeakPtr *)&local_18,*(undefined8 *)(param_4 + 0x10));
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    lVar5 = FUN_03c05a0c(*(undefined8 *)(lVar5 + 0x70),
                         (long)*(int *)(*(long *)(param_4 + 0x10) + 0x150));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)(lVar5 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_30);
    if (cVar1 != '\0') {
      p_Var10 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(param_4 + 0x10);
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var10);
      fVar18 = *pfVar7;
      FUN_03c05854((RtWeakPtr *)&local_18,p_Var10);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      lVar11 = *(long *)(param_4 + 0x10);
      lVar5 = FUN_03c05a0c(*(undefined8 *)(lVar5 + 0x70),(long)*(int *)(lVar11 + 0x150));
      fVar14 = *(float *)(lVar11 + 0xc4);
      fVar13 = *(float *)(lVar5 + 0x68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      p_Var10 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(param_4 + 0x10);
      lVar5 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(p_Var10);
      uVar15 = *(undefined4 *)(lVar5 + 4);
      FUN_03c05854((RtWeakPtr *)&local_18,p_Var10);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      lVar11 = *(long *)(param_4 + 0x10);
      lVar5 = FUN_03c05a0c(*(undefined8 *)(lVar5 + 0x70),(long)*(int *)(lVar11 + 0x150));
      fVar17 = *(float *)(lVar11 + 0xc4);
      fVar16 = *(float *)(lVar5 + 0x6c);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      uVar12 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)&local_30);
      pPVar8 = (Projectile *)
               Board::AddProjectile
                         ((Board *)(fVar18 + fVar13 * fVar14),uVar15,-(fVar16 * fVar17),uVar12,
                          (RtWeakPtr *)&local_18,*(undefined8 *)(param_4 + 0x10),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      if (pPVar8 != (Projectile *)0x0) {
        LaunchProjectileAt(param_4,pPVar8,(SexyVector3 *)&local_28,0.1,0.1,false,false);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  else {
    launchSpecialProjectile(param_4);
    pPVar8 = (Projectile *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar8);
}

