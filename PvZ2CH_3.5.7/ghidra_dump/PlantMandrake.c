// Class: PlantMandrake


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMandrake::StaticClassInit() */

void PlantMandrake::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantMandrake");
    (*pcVar2)(plVar1,asStack_10,FUN_04d501b4,0xf8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMandrake::StaticGetClass() */

long * PlantMandrake::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantMandrake",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMandrake::GetClass() const */

long * PlantMandrake::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantMandrake",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMandrake::UpdatePlantfood() */

void __thiscall PlantMandrake::UpdatePlantfood(PlantMandrake *this)

{
  float fVar1;
  
  if ((*(int *)(*(long *)(this + 0x10) + 200) == 5) &&
     (fVar1 = (float)PVZ_T(), *(float *)(*(long *)(this + 0x10) + 0x128) < fVar1)) {
    (**(code **)(*(long *)this + 0x228))(this);
  }
  return;
}


/* PlantMandrake::Idle() */

void __thiscall PlantMandrake::Idle(PlantMandrake *this)

{
  long *plVar1;
  
  this[8] = (PlantMandrake)0x0;
  (**(code **)(*(long *)this + 0x228))();
  this[8] = (PlantMandrake)0x1;
  if ((*(uint *)(*(UIEasyButtonWidget **)(this + 0x10) + 200) & 0xfffffffd) != 0xd) {
    plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar1 + 0x118))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMandrake::alterAttackAnime() */

void __thiscall PlantMandrake::alterAttackAnime(PlantMandrake *this)

{
  int iVar1;
  RtObject *pRVar2;
  PlantMandrakeProps *pPVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04d4eea4(*(undefined8 *)(this + 0x10));
  if (iVar1 < 3) {
    if (iVar1 == 2) {
      Plant::GetProps();
      pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      pPVar3 = Sexy::RtObject::Cast<PlantMandrakeProps>(pRVar2);
      fVar6 = *(float *)(pPVar3 + 0x2b8);
      goto LAB_04d50b94;
    }
  }
  else {
    Plant::GetProps();
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pPVar3 = Sexy::RtObject::Cast<PlantMandrakeProps>(pRVar2);
    fVar6 = *(float *)(pPVar3 + 700);
LAB_04d50b94:
    fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (fVar5 < fVar6) {
      uVar4 = 1;
      this[0x37] = (PlantMandrake)0x2;
      goto LAB_04d50bd0;
    }
  }
  uVar4 = 0;
  this[0x37] = (PlantMandrake)0x1;
LAB_04d50bd0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* PlantMandrake::PlantMandrake() */

void __thiscall PlantMandrake::PlantMandrake(PlantMandrake *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x34] = (PlantMandrake)0x0;
  *(undefined ***)this = &PTR_GetClass_069b1f00;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 200));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  return;
}


/* PlantMandrake::StaticNew() */

PlantMandrake * PlantMandrake::StaticNew(void)

{
  PlantMandrake *this;
  
  this = ::operator_new(0xf8);
  PlantMandrake(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMandrake::ApplyPlantfood() */

void __thiscall PlantMandrake::ApplyPlantfood(PlantMandrake *this)

{
  Plant *pPVar1;
  RealObject *this_00;
  RtMixedPtr aRStack_f8 [8];
  RtId aRStack_f0 [8];
  string asStack_e8 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_e0 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_e8,"Play_CoconutCannon_PF_Fire");
  RealObject::PlayPositionalSound(this_00,asStack_e8,0.0);
  std::string::~string(asStack_e8);
  nop();
  pPVar1 = *(Plant **)(this + 0x10);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_f8);
  std::string::string(asStack_e8,"onPlantfoodStartedCallback");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_e0,aRStack_f0,asStack_e8);
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_98);
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50);
  Plant::EnablePlantfoodAnimation(pPVar1,aRStack_e0,aRStack_98,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_98);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_e0);
  std::string::~string(asStack_e8);
  nop();
  Sexy::RtId::~RtId(aRStack_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMandrake::FindZombie() */

void __thiscall PlantMandrake::FindZombie(PlantMandrake *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  GridItem *pGVar7;
  Zombie *this_00;
  RtObject *this_01;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_30);
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets((Insets *)&local_20,iVar3,iVar4,iVar5,1);
  local_30 = local_20;
  uStack_28 = uStack_18;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesInGridSquares((Insets *)&local_20,2,(Insets *)&local_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_01 = (RtObject *)*puVar6;
    pGVar7 = Sexy::RtObject::Cast<GridItem>(this_01);
    if ((((pGVar7 == (GridItem *)0x0) ||
         ((cVar2 = RealObject::IsOnTeam(pGVar7,1), cVar2 != '\0' &&
          (cVar2 = (**(code **)(*(long *)pGVar7 + 0x208))(pGVar7), cVar2 != '\0')))) ||
        ((cVar2 = RealObject::IsOnTeam(pGVar7,2), cVar2 != '\0' &&
         (cVar2 = (**(code **)(*(long *)pGVar7 + 0x200))(pGVar7), cVar2 != '\0')))) &&
       ((((this_00 = Sexy::RtObject::Cast<Zombie>(this_01), this_00 != (Zombie *)0x0 &&
          (cVar2 = Zombie::IsFlying(this_00), cVar2 == '\0')) &&
         (cVar2 = RealObject::IsOnTeam(this_00,1), cVar2 == '\0')) &&
        (((cVar2 = FUN_04d500b4(*(undefined4 *)(this_00 + 0xcc)), cVar2 == '\0' &&
          (iVar3 = Zombie::GetInvisibleState(this_00), iVar3 != 2)) &&
         (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')))))) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* PlantMandrake::~PlantMandrake() */

void __thiscall PlantMandrake::~PlantMandrake(PlantMandrake *this)

{
  *(undefined ***)this = &PTR_GetClass_069b1f00;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xe0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 200));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xb0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x98));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x80));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x68));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x50));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantMandrake::~PlantMandrake() */

void __thiscall PlantMandrake::~PlantMandrake(PlantMandrake *this)

{
  ~PlantMandrake(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMandrake::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantMandrake::Fire(PlantMandrake *param_1)

{
  PlantMandrake PVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Plant *this;
  RtObject *pRVar5;
  ParkourProjectile *this_00;
  PopAnimRig *pPVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [4];
  int local_c;
  long local_8;
  
  PVar1 = param_1[0x37];
  local_8 = ___stack_chk_guard;
  this = *(Plant **)(param_1 + 0x10);
  if (PVar1 == (PlantMandrake)0x4) {
    cVar2 = Plant::GetAvatarEnable(this);
    if (cVar2 == '\0') {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      pRVar5 = (RtObject *)
               Plant::Fire(*(Plant **)(param_1 + 0x10),a_Stack_10,
                           *(undefined4 *)(*(Plant **)(param_1 + 0x10) + 0x110),0);
      this_00 = (ParkourProjectile *)Sexy::RtObject::Cast<ParkourPlantfoodProjectile>(pRVar5);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
      lVar7 = *(long *)(param_1 + 0x10);
      *(undefined4 *)(lVar7 + 0x150) = 3;
      if (this_00 == (ParkourProjectile *)0x0) goto LAB_04d55508;
    }
    else {
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 4;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      pRVar5 = (RtObject *)
               Plant::Fire(*(Plant **)(param_1 + 0x10),a_Stack_10,
                           *(undefined4 *)(*(Plant **)(param_1 + 0x10) + 0x110),0);
      this_00 = (ParkourProjectile *)Sexy::RtObject::Cast<ParkourPlantfoodAvatarProjectile>(pRVar5);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
      if (this_00 == (ParkourProjectile *)0x0) goto LAB_04d55508;
      lVar7 = *(long *)(param_1 + 0x10);
    }
    uVar4 = FUN_04d4eea4(lVar7);
    FUN_04d4eebc((ParkourPlantfoodProjectile *)(this_00 + 0x1c0),uVar4);
    iVar3 = FUN_04d4ee74(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x294));
    ParkourPlantfoodProjectile::SetAvatarIndex((ParkourPlantfoodProjectile *)this_00,iVar3);
  }
  else {
    if (PVar1 == (PlantMandrake)0x2) {
      *(undefined4 *)(this + 0x150) = 1;
    }
    else if (PVar1 == (PlantMandrake)0x3) {
      *(undefined4 *)(this + 0x150) = 2;
    }
    else {
      *(undefined4 *)(this + 0x150) = 0;
    }
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    pRVar5 = (RtObject *)
             Plant::Fire(*(Plant **)(param_1 + 0x10),a_Stack_10,
                         *(undefined4 *)(*(Plant **)(param_1 + 0x10) + 0x110),0);
    this_00 = Sexy::RtObject::Cast<ParkourProjectile>(pRVar5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    if (this_00 != (ParkourProjectile *)0x0) {
      iVar3 = FUN_04d4ee74(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x294));
      ParkourProjectile::SetAvatarIndex(this_00,iVar3);
      if (param_1[0x37] == (PlantMandrake)0x2) {
        FUN_04d4eeac(this_00 + 0x208,1);
        pPVar6 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this_00);
        PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(param_1 + 0x50),true);
        pPVar6 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this_00);
        PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(param_1 + 0x68),false);
        pPVar6 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this_00);
        PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(param_1 + 0x80),false);
        pPVar6 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this_00);
        PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(param_1 + 0x38),true);
      }
      else if (param_1[0x37] == (PlantMandrake)0x3) {
        iVar3 = alterAttackAnime(param_1);
        FUN_04d4eeb4(this_00 + 0x20c,iVar3 != 0);
        FUN_04d4eeac(this_00 + 0x208,2);
        pPVar6 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this_00);
        PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(param_1 + 0x50),false);
        pPVar6 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this_00);
        PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(param_1 + 0x38),false);
        pPVar6 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this_00);
        PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(param_1 + 0x68),true);
      }
      else {
        FUN_04d4eeac(this_00 + 0x208,0);
        pPVar6 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this_00);
        PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(param_1 + 0x50),true);
        pPVar6 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this_00);
        PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(param_1 + 0x38),false);
        pPVar6 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this_00);
        PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(param_1 + 0x68),false);
      }
      pPVar6 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this_00);
      PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(param_1 + 0xe0),false);
      fVar8 = (float)PlantFramework::Rand((PlantFramework *)param_1,32.5);
      fVar9 = (float)PlantFramework::Rand((PlantFramework *)param_1,0.080000006);
      BoardEntity::CalcGridPosition();
      ParkourProjectile::SetInitialLaunchValues(this_00,fVar8 + 325.0,fVar9 + 0.8,local_c);
    }
  }
LAB_04d55508:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMandrake::onPlantfoodTrigger() */

void __thiscall PlantMandrake::onPlantfoodTrigger(PlantMandrake *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  RtObject *pRVar4;
  ParkourPlantfoodProjectile *pPVar5;
  ParkourPlantfoodAvatarProjectile *this_00;
  PopAnimRig *this_01;
  ParkourPlantfoodProjectile *this_02;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_02 = (ParkourPlantfoodProjectile *)0x0;
  local_8 = ___stack_chk_guard;
  if (this[0x37] == (PlantMandrake)0x4) {
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar1 == '\0') {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 3;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      pRVar4 = (RtObject *)
               Plant::Fire(*(Plant **)(this + 0x10),a_Stack_10,
                           *(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),0);
      pPVar5 = Sexy::RtObject::Cast<ParkourPlantfoodProjectile>(pRVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
      if (pPVar5 == (ParkourPlantfoodProjectile *)0x0) goto LAB_04d55794;
      uVar2 = FUN_04d4eea4(*(undefined8 *)(this + 0x10));
      FUN_04d4eebc(pPVar5 + 0x1c0,uVar2);
      this_02 = pPVar5;
    }
    else {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 4;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      pRVar4 = (RtObject *)
               Plant::Fire(*(Plant **)(this + 0x10),a_Stack_10,
                           *(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),0);
      this_00 = Sexy::RtObject::Cast<ParkourPlantfoodAvatarProjectile>(pRVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
      if (this_00 == (ParkourPlantfoodAvatarProjectile *)0x0) goto LAB_04d55794;
      uVar2 = FUN_04d4eea4(*(undefined8 *)(this + 0x10));
      FUN_04d4eebc(this_00 + 0x1c0,uVar2);
      this_01 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this_00);
      PopAnimRig::SetLayerVisibility(this_01,(vector *)(this + 0xe0),false);
      this_02 = (ParkourPlantfoodProjectile *)this_00;
    }
    iVar3 = FUN_04d4ee74(*(undefined4 *)(*(long *)(this + 0x10) + 0x294));
    ParkourPlantfoodProjectile::SetAvatarIndex(this_02,iVar3);
  }
LAB_04d55794:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_02);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMandrake::SetState(unsigned int) */

void __thiscall PlantMandrake::SetState(PlantMandrake *this,uint param_1)

{
  int iVar1;
  RtObject *pRVar2;
  PlantAnimRig_Mandrake *pPVar3;
  long *plVar4;
  PlantMandrakeProps *pPVar5;
  PopAnimRig *pPVar6;
  char *pcVar7;
  long lVar8;
  UIEasyButtonWidget *this_00;
  float fVar9;
  float fVar10;
  float fVar11;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(uint *)(this_00 + 200) = param_1;
  switch(param_1) {
  case 5:
    this[0x37] = (PlantMandrake)0x4;
    this[0x35] = (PlantMandrake)0x0;
    FUN_04d4ee80((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58,this_00);
    pRVar2 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    pPVar5 = Sexy::RtObject::Cast<PlantMandrakeProps>(pRVar2);
    fVar11 = *(float *)(pPVar5 + 0x2c0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    iVar1 = FUN_04d4eea4(*(undefined8 *)(this + 0x10));
    if (1 < iVar1) {
      fVar11 = fVar11 - 2.0;
    }
    fVar9 = (float)PVZ_T();
    lVar8 = *(long *)(this + 0x10);
    fVar10 = (float)FUN_04d4ee78(*(undefined4 *)(lVar8 + 0x420));
    *(float *)(lVar8 + 0x128) = fVar9 + fVar11 * fVar10;
    onPlantfoodTrigger(this);
    break;
  case 0xb:
    pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
    pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_Mandrake>(pRVar2);
    pcVar7 = "idle";
    goto LAB_04d55a58;
  case 0xc:
    pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
    pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_Mandrake>(pRVar2);
    pcVar7 = "idle_lv5";
LAB_04d55a58:
    std::string::string(asStack_58,pcVar7);
    PlantAnimRig_HoyaCordata::setIdleTag((string *)pPVar3);
    std::string::~string(asStack_58);
    nop();
    plVar4 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar4 + 0x118))();
    break;
  case 0xd:
    if (this[0x37] == (PlantMandrake)0x3) {
      pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
      pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_Mandrake>(pRVar2);
      pcVar7 = "Jump_out_lv5";
    }
    else {
      pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
      pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_Mandrake>(pRVar2);
      pcVar7 = "Jump_out";
    }
    std::string::string(asStack_68,pcVar7);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_WizardThorns::PlayTapAnimation
              ((PlantAnimRig_WizardThorns *)pPVar3,asStack_68,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    this[0x35] = (PlantMandrake)0x0;
    break;
  case 0xe:
    pPVar3 = (PlantAnimRig_Mandrake *)FUN_04d50948(this_00);
    PlantAnimRig_Mandrake::PlayRecoverLooped(pPVar3);
    FUN_04d4ee80((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58,*(undefined8 *)(this + 0x10));
    pRVar2 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    pPVar5 = Sexy::RtObject::Cast<PlantMandrakeProps>(pRVar2);
    fVar11 = *(float *)(pPVar5 + 0x2c0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    iVar1 = FUN_04d4eea4(*(undefined8 *)(this + 0x10));
    if (1 < iVar1) {
      fVar11 = fVar11 - 2.0;
    }
    fVar9 = (float)PVZ_T();
    lVar8 = *(long *)(this + 0x10);
    fVar10 = (float)FUN_04d4ee78(*(undefined4 *)(lVar8 + 0x420));
    *(float *)(lVar8 + 0x128) = fVar9 + fVar11 * fVar10;
    break;
  case 0xf:
    iVar1 = FUN_04d4eea4(this_00);
    if ((iVar1 == 5) && (this[0x36] == (PlantMandrake)0x2)) {
      this[0x37] = (PlantMandrake)0x3;
      pPVar6 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
      PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(this + 0x50),false);
      pPVar6 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(this + 0x68),true);
      pPVar6 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(this + 0x38),false);
      pPVar6 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(this + 200),true);
      pPVar6 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(this + 0xb0),false);
      pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
      ;
      pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_Mandrake>(pRVar2);
      std::string::string(asStack_68,"grow_lv5");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_WizardThorns::PlayTapAnimation
                ((PlantAnimRig_WizardThorns *)pPVar3,asStack_68,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
      this[0x36] = (PlantMandrake)0x0;
    }
    else {
      alterAttackAnime(this);
      if (this[0x37] == (PlantMandrake)0x2) {
        pPVar6 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(this + 0x50),true);
        pPVar6 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(this + 0x68),false);
        pPVar6 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(this + 0x38),true);
        pPVar6 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(this + 0x80),false);
      }
      else if (this[0x37] == (PlantMandrake)0x1) {
        pPVar6 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(this + 0x50),true);
        pPVar6 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(this + 0x38),false);
        pPVar6 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        PopAnimRig::SetLayerVisibility(pPVar6,(vector *)(this + 0x68),false);
      }
      pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
      ;
      pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_Mandrake>(pRVar2);
      std::string::string(asStack_68,"grow");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_WizardThorns::PlayTapAnimation
                ((PlantAnimRig_WizardThorns *)pPVar3,asStack_68,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
      this[0x36] = (PlantMandrake)((char)this[0x36] + '\x01');
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMandrake::onPlantfoodStarted() */

void __thiscall PlantMandrake::onPlantfoodStarted(PlantMandrake *this)

{
  SetState(this,5);
  return;
}


/* PlantMandrake::CancelPlantfood() */

void __thiscall PlantMandrake::CancelPlantfood(PlantMandrake *this)

{
  int iVar1;
  Effect_AngerFlame *this_00;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar1 = Effect_AngerFlame::GetFlameCol(this_00);
  if (iVar1 != 0xd) {
    SetState(this,0xf);
    return;
  }
  SetState(this,*(uint *)(*(long *)(this + 0x10) + 200));
  return;
}


/* PlantMandrake::UpdateActions() */

void __thiscall PlantMandrake::UpdateActions(PlantMandrake *this)

{
  int iVar1;
  char cVar2;
  float fVar3;
  
  cVar2 = (**(code **)(*(long *)this + 0x180))();
  if (cVar2 != '\0') {
    return;
  }
  iVar1 = *(int *)(*(long *)(this + 0x10) + 200);
  if (iVar1 != 0xc) {
    if (iVar1 == 0xe) {
      fVar3 = (float)PVZ_T();
      if (fVar3 <= *(float *)(*(long *)(this + 0x10) + 0x128)) {
        return;
      }
      this[0x35] = (PlantMandrake)0x1;
      SetState(this,0xf);
      return;
    }
    if (iVar1 != 0xb) {
      return;
    }
  }
  cVar2 = FindZombie(this);
  if ((cVar2 != '\0') && (this[0x35] != (PlantMandrake)0x0)) {
    SetState(this,0xd);
    return;
  }
  return;
}


/* PlantMandrake::FindTargetAndFire(PlantWeapon) */

undefined8 PlantMandrake::FindTargetAndFire(PlantMandrake *param_1)

{
  char cVar1;
  undefined8 uVar2;
  float fVar3;
  
  cVar1 = Plant::CanFindTarget(*(undefined8 *)(param_1 + 0x10));
  if ((cVar1 == '\0') || (fVar3 = (float)PVZ_T(), fVar3 < *(float *)(param_1 + 0x2c))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if (*(int *)(*(long *)(param_1 + 0x10) + 200) - 0xbU < 2) {
      SetState(param_1,0xd);
    }
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMandrake::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantMandrake::onAnimStoppedCallback(PlantMandrake *this,string *param_1)

{
  bool bVar1;
  RtObject *pRVar2;
  PlantAnimRig_Mandrake *pPVar3;
  char *__s;
  RealObject *this_00;
  float fVar4;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"grow");
  if (bVar1) {
    fVar4 = (float)PVZ_T();
    *(float *)(this + 0x2c) = fVar4 + *(float *)(this + 0x28);
    SetState(this,0xb);
  }
  else {
    bVar1 = std::operator==(param_1,"grow_lv5");
    if (bVar1) {
      fVar4 = (float)PVZ_T();
      *(float *)(this + 0x2c) = fVar4 + *(float *)(this + 0x28);
      SetState(this,0xc);
    }
    else {
      bVar1 = std::operator==(param_1,"Jump_out");
      if (bVar1) {
        pRVar2 = (RtObject *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_Mandrake>(pRVar2);
        __s = "ready";
      }
      else {
        bVar1 = std::operator==(param_1,"ready");
        if (bVar1) {
          this_00 = *(RealObject **)(this + 0x10);
          std::string::string(asStack_58,"Play_Plant_BowlingBulb_Attack_Fire_01");
          RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
          std::string::~string(asStack_58);
          nop();
          pRVar2 = (RtObject *)
                   UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
          pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_Mandrake>(pRVar2);
          std::string::string(asStack_68,"attack_loop");
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
          std::string::string(asStack_58,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_60,asStack_58);
          PlantAnimRig_WizardThorns::PlayTapAnimation
                    ((PlantAnimRig_WizardThorns *)pPVar3,asStack_68,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string(asStack_58);
          nop();
          Sexy::RtId::~RtId(aRStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
          std::string::~string(asStack_68);
          nop();
          goto LAB_04d56078;
        }
        bVar1 = std::operator==(param_1,"Jump_out_lv5");
        if (bVar1) {
          pRVar2 = (RtObject *)
                   UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
          pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_Mandrake>(pRVar2);
          __s = "ready_lv5";
        }
        else {
          bVar1 = std::operator==(param_1,"ready_lv5");
          if (!bVar1) {
            bVar1 = std::operator==(param_1,"attack_loop");
            if (bVar1) {
              SetState(this,0xe);
            }
            goto LAB_04d56078;
          }
          pRVar2 = (RtObject *)
                   UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
          pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_Mandrake>(pRVar2);
          __s = "attack_loop";
        }
      }
      std::string::string(asStack_68,__s);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_WizardThorns::PlayTapAnimation
                ((PlantAnimRig_WizardThorns *)pPVar3,asStack_68,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
    }
  }
LAB_04d56078:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMandrake::SetLayerNames() */

void __thiscall PlantMandrake::SetLayerNames(PlantMandrake *this)

{
  string *psVar1;
  string *psVar2;
  string asStack_c0 [8];
  string asStack_b8 [8];
  string asStack_b0 [8];
  string asStack_a8 [8];
  string asStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_b8,"003");
  std::string::string(asStack_b0,"005");
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38),asStack_b8,2);
  std::string::~string(asStack_b0);
  std::string::~string(asStack_b8);
  nop();
  nop();
  std::string::string(asStack_b8,"zuojiao");
  std::string::string(asStack_b0,"y08");
  std::string::string(asStack_a8,"y07");
  std::string::string(asStack_a0,"y09");
  std::string::string(asStack_98,"y10");
  std::string::string(asStack_90,"y11");
  std::string::string(asStack_88,"shenti_01");
  std::string::string(asStack_80,"shenti_02");
  std::string::string(asStack_78,"shenti_03");
  std::string::string(asStack_70,"shenti_04");
  std::string::string(asStack_68,"youjiao");
  std::string::string(asStack_60,"zui01");
  std::string::string(asStack_58,"m1");
  std::string::string(asStack_50,"m2");
  std::string::string(asStack_48,"y05");
  std::string::string(asStack_40,"y06");
  std::string::string(asStack_38,"y4");
  std::string::string(asStack_30,"y3");
  std::string::string(asStack_28,"y01");
  std::string::string(asStack_20,"y02");
  std::string::string(asStack_18,"shenti03");
  std::string::string(asStack_10,"shenti02");
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x50),asStack_b8,0x16);
  psVar2 = asStack_10;
  do {
    psVar1 = psVar2 + -8;
    std::string::~string(psVar2);
    psVar2 = psVar1;
  } while (psVar1 != asStack_c0);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::string(asStack_b8,"001");
  std::string::string(asStack_b0,"002");
  std::string::string(asStack_a8,"004");
  std::string::string(asStack_a0,"006");
  std::string::string(asStack_98,"007");
  std::string::string(asStack_90,"008");
  std::string::string(asStack_88,"009");
  std::string::string(asStack_80,"010");
  std::string::string(asStack_78,"011");
  std::string::string(asStack_70,"012");
  std::string::string(asStack_68,"013");
  std::string::string(asStack_60,"014");
  std::string::string(asStack_58,"015");
  std::string::string(asStack_50,"016");
  std::string::string(asStack_48,"017");
  std::string::string(asStack_40,"018");
  std::string::string(asStack_38,"019");
  std::string::string(asStack_30,"020");
  std::string::string(asStack_28,"021");
  std::string::string(asStack_20,"022");
  std::string::string(asStack_18,"023");
  std::string::string(asStack_10,"024");
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x68),asStack_b8,0x16);
  psVar2 = asStack_10;
  do {
    psVar1 = psVar2 + -8;
    std::string::~string(psVar2);
    psVar2 = psVar1;
  } while (psVar1 != asStack_c0);
  psVar2 = asStack_70;
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::string(asStack_b8,"y02");
  std::string::string(asStack_b0,"y01");
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x80),asStack_b8,2);
  std::string::~string(asStack_b0);
  std::string::~string(asStack_b8);
  nop();
  nop();
  std::string::string(asStack_b8,"010");
  std::string::string(asStack_b0,"011");
  std::string::string(asStack_a8,"012");
  std::string::string(asStack_a0,"013");
  std::string::string(asStack_98,"014");
  std::string::string(asStack_90,"015");
  std::string::string(asStack_88,"016");
  std::string::string(asStack_80,"017");
  std::string::string(asStack_78,"021");
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xb0),asStack_b8,9);
  do {
    psVar2 = psVar2 + -8;
    std::string::~string(psVar2);
  } while (psVar2 != asStack_b8);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::string(asStack_b8,"zuojiao");
  std::string::string(asStack_b0,"shenti_01");
  std::string::string(asStack_a8,"shenti_02");
  std::string::string(asStack_a0,"shenti_03");
  std::string::string(asStack_98,"shenti_04");
  std::string::string(asStack_90,"youjiao");
  std::string::string(asStack_88,"zui01");
  std::string::string(asStack_80,"shenti03");
  std::string::string(asStack_78,"shenti02");
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 200),asStack_b8,9);
  psVar2 = asStack_70;
  do {
    psVar1 = psVar2;
    psVar2 = psVar1 + -8;
    std::string::~string(psVar2);
  } while (psVar2 != asStack_b8);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::string(psVar2,"024");
  std::string::string(psVar1,"025");
  std::string::string(psVar1 + 8,"026");
  std::string::string(psVar1 + 0x10,"027");
  std::string::string(psVar1 + 0x18,"028");
  std::string::string(psVar1 + 0x20,"029");
  std::string::string(psVar1 + 0x28,"030");
  std::string::string(psVar1 + 0x30,"031");
  std::string::string(psVar1 + 0x38,"032");
  std::string::string(psVar1 + 0x40,"033");
  std::string::string(psVar1 + 0x48,"036");
  std::string::string(psVar1 + 0x50,"034");
  std::string::string(psVar1 + 0x58,"035");
  std::string::string(psVar1 + 0x60,"037");
  std::string::string(psVar1 + 0x68,"038");
  std::string::string(psVar1 + 0x70,"039");
  std::string::string(psVar1 + 0x78,"040");
  std::string::string(psVar1 + 0x80,"041");
  std::string::string(psVar1 + 0x88,"042");
  std::string::string(psVar1 + 0x90,"043");
  std::string::string(psVar1 + 0x98,"044");
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xe0),psVar2,0x15);
  psVar2 = psVar1 + 0x98;
  do {
    psVar1 = psVar2 + -8;
    std::string::~string(psVar2);
    psVar2 = psVar1;
  } while (psVar1 != asStack_c0);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMandrake::Initialize() */

void __thiscall PlantMandrake::Initialize(PlantMandrake *this)

{
  int iVar1;
  RtObject *this_00;
  PlantAnimRig_Mandrake *pPVar2;
  PopAnimRig *pPVar3;
  UIEasyButtonWidget *this_01;
  undefined4 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x34] = (PlantMandrake)0x0;
  this[0x36] = (PlantMandrake)0x0;
  this[0x35] = (PlantMandrake)0x1;
  this[0x37] = (PlantMandrake)0x0;
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = uVar4;
  SetLayerNames(this);
  this_01 = *(UIEasyButtonWidget **)(this + 0x10);
  iVar1 = FUN_04d4eea4(this_01);
  uVar4 = 0x40800000;
  if (iVar1 < 2) {
    uVar4 = 0x40d00000;
  }
  *(undefined4 *)(this + 0x28) = uVar4;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_01);
  pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_Mandrake>(this_00);
  if (pPVar2 != (PlantAnimRig_Mandrake *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    PlantAnimRig_Mandrake::SetPlant(pPVar2,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  SetState(this,0xb);
  pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  PopAnimRig::SetLayerVisibility(pPVar3,(vector *)(this + 0x38),false);
  pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  PopAnimRig::SetLayerVisibility(pPVar3,(vector *)(this + 0x68),false);
  pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  PopAnimRig::SetLayerVisibility(pPVar3,(vector *)(this + 0xe0),false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

