// Class: PlantRapeflower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRapeflower::Initialize() */

void __thiscall PlantRapeflower::Initialize(PlantRapeflower *this)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  byte extraout_var;
  PVPManager *pPVar4;
  PlantAnimRig *pPVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  ProfileUtils::Profile();
  pPVar4 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar3 = PVPManager::IsLoadServerPlantData(pPVar4);
  if (iVar3 != 1) {
    pPVar4 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar3 = PVPManager::IsLoadServerPlantData(pPVar4);
    if (iVar3 != 3) {
      cVar1 = CustomLevelUtils::IsCustomLevel();
      if ((cVar1 == '\0') && (cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 == '\0')) {
        FUN_03f7dd3c(*(undefined4 *)(*(long *)(this + 0x10) + 0x294));
        uVar2 = (byte)~extraout_var >> 7;
      }
      else {
        uVar2 = false;
      }
      goto LAB_03f7ff74;
    }
  }
  pPVar4 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  Plant::GetType();
  uVar2 = PVPManager::GetTargetPlantAvatar(pPVar4,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
LAB_03f7ff74:
  PlantFramework::SetAvatarEnable((PlantFramework *)this,(bool)uVar2);
  pPVar5 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  PlantAnimRig::SetAvatarEnable(pPVar5,(bool)uVar2);
  pPVar5 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  iVar3 = FUN_03f7dd6c(*(undefined8 *)(this + 0x10));
  PlantAnimRig::SetPlantLevel(pPVar5,iVar3);
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::PlantCreate,*(Plant **)(this + 0x10));
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRapeflower::ApplyPlantfood() */

void __thiscall PlantRapeflower::ApplyPlantfood(PlantRapeflower *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_Plant_WasabiWhip_Impact");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantRapeflower::PlantRapeflower() */

void __thiscall PlantRapeflower::PlantRapeflower(PlantRapeflower *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069dbc80;
  return;
}


/* PlantRapeflower::StaticNew() */

PlantRapeflower * PlantRapeflower::StaticNew(void)

{
  PlantRapeflower *this;
  
  this = ::operator_new(0x28);
  PlantRapeflower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRapeflower::StaticClassInit() */

void PlantRapeflower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantRapeflower");
    (*pcVar2)(plVar1,asStack_10,FUN_04e35d70,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantRapeflower::StaticGetClass() */

long * PlantRapeflower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantRapeflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantRapeflower::GetClass() const */

long * PlantRapeflower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantRapeflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantRapeflower::~PlantRapeflower() */

void __thiscall PlantRapeflower::~PlantRapeflower(PlantRapeflower *this)

{
  *(undefined ***)this = &PTR_GetClass_069dbc80;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantRapeflower::~PlantRapeflower() */

void __thiscall PlantRapeflower::~PlantRapeflower(PlantRapeflower *this)

{
  ~PlantRapeflower(this);
  AK::FreeHook(this);
  return;
}


/* PlantRapeflower::GetBurnDamage(float, int) */

void PlantRapeflower::GetBurnDamage(float param_1,int param_2)

{
  undefined8 uVar1;
  int in_w1;
  DamageInfo *in_x8;
  float fVar2;
  float fVar3;
  
  DamageInfo::DamageInfo(in_x8);
  fVar2 = (float)Plant::GetTotalDamageRate(*(Plant **)((ulong)(uint)param_2 + 0x10));
  fVar3 = (float)Plant::GetDamageConstValue(*(Plant **)((ulong)(uint)param_2 + 0x10));
  *(undefined8 *)in_x8 = 0;
  *(float *)(in_x8 + 8) = fVar3 + fVar2 * (float)in_w1 * param_1;
  uVar1 = operator|(0x400,0x1000);
  *(undefined8 *)(in_x8 + 0x10) = uVar1;
  return;
}


/* PlantRapeflower::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantRapeflower::LaunchProjectileAt
          (PlantRapeflower *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_04e37abc(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 700);
  lVar1 = FUN_04e37abc(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar1 + 700));
  lVar1 = FUN_04e37abc(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar1 + 0x2b8);
  lVar1 = FUN_04e37abc(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar1 + 0x2b8));
  Projectile::LaunchAt(param_1,param_2,fVar2 + fVar5,fVar3 + fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRapeflower::FindZombie() */

void __thiscall PlantRapeflower::FindZombie(PlantRapeflower *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  GridItem *pGVar8;
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
  uVar6 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares((Insets *)&local_20,uVar6,(Insets *)&local_30);
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
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_01 = (RtObject *)*puVar7;
    pGVar8 = Sexy::RtObject::Cast<GridItem>(this_01);
    if (pGVar8 == (GridItem *)0x0) {
      this_00 = Sexy::RtObject::Cast<Zombie>(this_01);
      if ((((this_00 != (Zombie *)0x0) && (cVar2 = RealObject::IsOnTeam(this_00,1), cVar2 == '\0'))
          && (cVar2 = FUN_04e36918(*(undefined4 *)(this_00 + 0xcc)), cVar2 == '\0')) &&
         ((iVar3 = Zombie::GetInvisibleState(this_00), iVar3 != 2 &&
          (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')))) break;
    }
    else {
      cVar2 = RealObject::IsOnTeam(pGVar8,1);
      if (((cVar2 != '\0') &&
          (cVar2 = (**(code **)(*(long *)pGVar8 + 0x208))(pGVar8), cVar2 != '\0')) ||
         ((cVar2 = RealObject::IsOnTeam(pGVar8,2), cVar2 != '\0' &&
          (cVar2 = (**(code **)(*(long *)pGVar8 + 0x200))(pGVar8), cVar2 != '\0')))) break;
    }
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


/* PlantRapeflower::FindTargetAndFire(PlantWeapon) */

char PlantRapeflower::FindTargetAndFire(PlantRapeflower *param_1)

{
  char cVar1;
  
  cVar1 = Plant::CanFindTarget(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 == '\0') {
    return '\0';
  }
  cVar1 = FindZombie(param_1);
  if (cVar1 == '\0') {
    return '\x01';
  }
  (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRapeflower::ConfirmZombieTarget() */

void PlantRapeflower::ConfirmZombieTarget(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long in_x0;
  undefined8 *puVar7;
  Zombie *this;
  undefined8 uVar8;
  Insets *pIVar9;
  int iVar10;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  int local_30 [4];
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  iVar10 = 0;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  Sexy::Insets::Insets((Insets *)&local_40);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_60);
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(in_x0 + 0x10));
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(in_x0 + 0x10));
  iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets((Insets *)&local_20,iVar3,iVar4,iVar5,1);
  local_40 = local_20;
  uStack_38 = uStack_18;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesInGridSquares((Insets *)&local_20,2,(Insets *)&local_40);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
  iVar3 = iVar10;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
    uVar8 = operator|(1,4);
    uVar8 = operator|(uVar8,0x80);
    uVar8 = operator|(uVar8,0x200);
    uVar8 = operator|(uVar8,0x800);
    uVar6 = operator|(uVar8,0x2000);
    if (((((this != (Zombie *)0x0) && (cVar2 = RealObject::IsOnTeam(this,1), cVar2 == '\0')) &&
         (cVar2 = FUN_04e36918(*(undefined4 *)(this + 0xcc)), cVar2 == '\0')) &&
        ((iVar4 = Zombie::GetInvisibleState(this), iVar4 != 2 &&
         (cVar2 = (**(code **)(*(long *)this + 0x328))(this), cVar2 == '\0')))) &&
       (cVar2 = Zombie::MatchesAny(this,uVar6,*(undefined8 *)(in_x0 + 0x10)), cVar2 == '\0')) {
      pIVar9 = (Insets *)(**(code **)(*(long *)this + 0x178))(this);
      Sexy::Insets::Insets((Insets *)local_30,pIVar9);
      cVar2 = Zombie::HasCondition(this,0x86);
      if (cVar2 == '\0') {
        cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)in_x8);
        if ((cVar2 != '\0') || (local_30[0] < iVar3)) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,(RtWeakPtrBase *)aRStack_48);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
          iVar3 = local_30[0];
        }
      }
      else {
        cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)a_Stack_60);
        if ((cVar2 != '\0') || (local_30[0] < iVar10)) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_60,(RtWeakPtrBase *)aRStack_48)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
          iVar10 = local_30[0];
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)in_x8);
  if ((cVar2 != '\0') &&
     (bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_60), bVar1)) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)a_Stack_60);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_60);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRapeflower::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantRapeflower::Fire
               (undefined1 param_1 [16],float param_2,float param_3,PlantFramework *param_4,
               undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  RtObject *pRVar3;
  PlantRapeflowerProps *pPVar4;
  RapeflowerProjectile *this;
  ResourceInfo *pRVar5;
  long *plVar6;
  float *pfVar7;
  long lVar8;
  Plant *pPVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  RtMixedPtrBase aRStack_e0 [8];
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  int local_c8;
  int local_c4;
  undefined4 local_68;
  float local_64;
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_4 + 0x180))();
  if (cVar1 != '\0') {
    (**(code **)(*(long *)param_4 + 0xa8))(param_4,0);
    this = (RapeflowerProjectile *)0x0;
    goto LAB_04e38c64;
  }
  iVar2 = FUN_04e35558(*(undefined8 *)(param_4 + 0x10));
  fVar12 = (float)PlantFramework::Rand(param_4,1.0);
  FUN_04e35534((RtWeakPtr<Sexy::ResourceInfo> *)&local_68,*(undefined8 *)(param_4 + 0x10));
  pRVar3 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  pPVar4 = Sexy::RtObject::Cast<PlantRapeflowerProps_const>(pRVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  if (iVar2 == 1) {
    param_2 = *(float *)(pPVar4 + 0x2c8);
    lVar8 = *(long *)(param_4 + 0x10);
    uVar11 = (uint)(fVar12 <= param_2);
    uVar10 = uVar11;
  }
  else {
    if (iVar2 == 2) {
      param_2 = *(float *)(pPVar4 + 0x2c0);
      uVar11 = 2;
      if (param_2 < fVar12) {
        uVar11 = 0;
      }
    }
    else {
      uVar11 = 0;
      if (1 < iVar2) {
        param_2 = *(float *)(pPVar4 + 0x2c4);
        if (param_2 < fVar12) {
          param_3 = *(float *)(pPVar4 + 0x2c0);
          param_2 = param_2 + param_3;
          if (fVar12 <= param_2) {
            uVar11 = 2;
          }
          else {
            if (iVar2 != 5) {
              if (iVar2 == 4) {
                fVar12 = (float)PlantFramework::Rand(param_4,0.4);
                param_2 = *(float *)(pPVar4 + 0x2c8);
                if (fVar12 <= param_2) goto LAB_04e38d5c;
              }
              uVar11 = 0;
              goto LAB_04e38ad8;
            }
LAB_04e38d5c:
            uVar11 = 1;
          }
        }
        else {
          uVar11 = 3;
        }
        lVar8 = *(long *)(param_4 + 0x10);
        uVar10 = uVar11 + 4;
        if (iVar2 != 5) {
          uVar10 = uVar11;
        }
        goto LAB_04e38ae0;
      }
    }
LAB_04e38ad8:
    lVar8 = *(long *)(param_4 + 0x10);
    uVar10 = uVar11;
  }
LAB_04e38ae0:
  *(uint *)(lVar8 + 0x150) = uVar10;
  ConfirmZombieTarget();
  pPVar9 = *(Plant **)(param_4 + 0x10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)aRStack_e0);
  pRVar3 = (RtObject *)Plant::Fire(pPVar9,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68,param_6,0);
  this = Sexy::RtObject::Cast<RapeflowerProjectile>(pRVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  (**(code **)(*(long *)param_4 + 0xf8))((RtWeakPtr<Sexy::ResourceInfo> *)&local_68,param_4,param_7)
  ;
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  DVec3::DVec3((DVec3 *)&local_d8);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_e0);
  if (cVar1 == '\0') {
    if (pRVar5 == (ResourceInfo *)0x0) {
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_4 + 0x10));
      local_d4 = pfVar7[1];
      local_d8 = *pfVar7 + 600.0;
      local_d0 = 0;
    }
    else {
      GridItem::GetGridLocation();
      BoardTransforms::GridToBoardSpace((Point *)&local_68);
      local_d8 = (float)local_c8;
      local_d0 = 0x41c80000;
      local_d4 = (float)local_c4;
    }
  }
  else {
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_e0);
    local_68 = (**(code **)(*plVar6 + 0x3b0))(*(undefined4 *)(pPVar4 + 0x2b8));
    local_64 = param_2;
    local_60 = param_3;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_d8,(SexyVector3 *)&local_68);
  }
  LaunchProjectileAt((PlantRapeflower *)param_4,(Projectile *)this,(SexyVector3 *)&local_d8,0.1,0.1)
  ;
  GetBurnDamage(*(float *)(pPVar4 + 0x2cc),(int)param_4);
  DamageInfo::DamageInfo((DamageInfo *)&local_68,(DamageInfo *)&local_c8);
  RapeflowerProjectile::SetDamageInfo(this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  FUN_04e35560(this + 0x208,uVar11);
  PlantWizardThorns::GetTotalDamage((PlantWizardThorns *)param_4,*(float *)(pPVar4 + 0x2d4));
  FUN_04e35568(this + 0x210);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)aRStack_e0);
  Projectile::SetTarget((Projectile *)this,(RtWeakPtr *)&local_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  if (iVar2 == 5) {
    FUN_04e35598(this + 0x214);
  }
  DamageInfo::~DamageInfo((DamageInfo *)&local_c8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_e0);
LAB_04e38c64:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRapeflower::DoSpecial(int) */

void PlantRapeflower::DoSpecial(int param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  PlantRapeflower *this;
  RtObject *pRVar6;
  PlantRapeflowerProps *pPVar7;
  undefined8 uVar8;
  long *plVar9;
  Zombie *pZVar10;
  RealObject *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar11;
  SharkMinion *this_02;
  RapeflowerProjectile *pRVar12;
  RealObject *this_03;
  int extraout_w1;
  int extraout_w1_00;
  code *pcVar13;
  Plant *pPVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  RtWeakPtr<Sexy::SoundResource> aRStack_108 [8];
  int local_100;
  int local_fc;
  Vec3 aVStack_f8 [16];
  Iterator aIStack_e8 [32];
  DamageInfo aDStack_c8 [96];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  this = (PlantRapeflower *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  uVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  uVar3 = uVar3 & 0xff;
  iVar15 = 0;
  FUN_04e35534(aRStack_68,*(undefined8 *)(this + 0x10));
  pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  pPVar7 = Sexy::RtObject::Cast<PlantRapeflowerProps_const>(pRVar6);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  DamageInfo::DamageInfo(aDStack_c8);
  GetBurnDamage(*(float *)(pPVar7 + 0x2d0),param_1);
  DamageInfo::operator=(aDStack_c8,(DamageInfo *)aRStack_68);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  uVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_e8,uVar8,0x29);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_e8), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_e8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_100,(RtWeakPtrBase *)aRStack_68);
    Sexy::RtId::~RtId((RtId *)aRStack_68);
    plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_100);
    cVar2 = (**(code **)(*plVar9 + 0x328))();
    if (cVar2 == '\0') {
      pZVar10 = (Zombie *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_100);
      cVar2 = Zombie::IsInvisible(pZVar10);
      if (cVar2 == '\0') {
        this_00 = (RealObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_100);
        cVar2 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10));
        if (cVar2 != '\0') {
          this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_100);
          pfVar11 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost(this_01);
          fVar16 = *pfVar11;
          fVar17 = pfVar11[1];
          if (fVar16 <= 800.0) {
            plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)&local_100);
            pcVar13 = *(code **)(*plVar9 + 0x20);
            uVar8 = Zomboss::StaticGetClass();
            cVar2 = (*pcVar13)(plVar9,uVar8);
            if (cVar2 != '\0') {
              pZVar10 = (Zombie *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_100);
              cVar2 = Zombie::IsFlying(pZVar10);
              if (cVar2 != '\0') goto LAB_04e38e50;
            }
            iVar15 = iVar15 + 1;
            *(uint *)(*(long *)(this + 0x10) + 0x150) = uVar3;
            EATextSquish::Vec3::Vec3(aVStack_f8,fVar16,fVar17,50.0);
            pPVar14 = *(Plant **)(this + 0x10);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)&local_100);
            this_02 = (SharkMinion *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_100);
            uVar4 = SharkMinion::getRow(this_02);
            pRVar6 = (RtObject *)Plant::Fire(pPVar14,aRStack_68,uVar4,0);
            pRVar12 = Sexy::RtObject::Cast<RapeflowerProjectile>(pRVar6);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
            uVar8 = FUN_04e35518(*(undefined8 *)(pRVar12 + 0xe0));
            uVar8 = operator|(uVar8,0x2000);
            FUN_04e3551c(pRVar12 + 0xe0,uVar8);
            LaunchProjectileAt(this,(Projectile *)pRVar12,(SexyVector3 *)aVStack_f8,1.0,0.15);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)&local_100);
            Projectile::SetTarget((Projectile *)pRVar12,(RtWeakPtr *)aRStack_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
            DamageInfo::DamageInfo((DamageInfo *)aRStack_68,aDStack_c8);
            RapeflowerProjectile::SetDamageInfo(pRVar12,aRStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
            FUN_04e35560(pRVar12 + 0x208,uVar3);
            FUN_04e355a4(pRVar12 + 0x20c);
            PlantWizardThorns::GetTotalDamage((PlantWizardThorns *)this,*(float *)(pPVar7 + 0x2d8));
            FUN_04e35568(pRVar12 + 0x210);
            *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
            if (0x1e < iVar15) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_100);
              break;
            }
          }
        }
      }
    }
LAB_04e38e50:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_100);
    Sexy::RtDbTable::Iterator::operator++(aIStack_e8,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_e8);
  uVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_e8,uVar8,0x2f);
  bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_e8);
  do {
    if ((0x1e < iVar15) || (bVar1 == false)) goto LAB_04e3910c;
    Sexy::RtDbTable::Iterator::operator*(aIStack_e8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_108,(RtWeakPtrBase *)aRStack_68);
    Sexy::RtId::~RtId((RtId *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_108);
    nop();
    cVar2 = (**(code **)(*(long *)this_03 + 0x200))();
    if (((cVar2 != '\0') &&
        (((cVar2 = (**(code **)(*(long *)this_03 + 0x210))(this_03,*(undefined8 *)(this + 0x10)),
          cVar2 != '\0' &&
          (cVar2 = RealObject::IsOnOpposingTeam(this_03,*(RealObject **)(this + 0x10)),
          cVar2 != '\0')) &&
         (iVar5 = FUN_04e35528(*(undefined4 *)(this_03 + 0x130)),
         *(int *)(*(long *)(this + 0x10) + 0x114) <= iVar5)))) &&
       (cVar2 = BoardEntity::IsOnScreen((BoardEntity *)this_03), cVar2 != '\0')) {
      iVar15 = iVar15 + 1;
      *(uint *)(*(long *)(this + 0x10) + 0x150) = uVar3;
      GridItem::GetGridLocation();
      BoardTransforms::GridToBoardSpace((Point *)aRStack_68);
      EATextSquish::Vec3::Vec3(aVStack_f8,(float)local_100,(float)local_fc,25.0);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_68);
      pRVar6 = (RtObject *)
               Plant::Fire(*(Plant **)(this + 0x10),aRStack_68,
                           *(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),0);
      pRVar12 = Sexy::RtObject::Cast<RapeflowerProjectile>(pRVar6);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      uVar8 = FUN_04e35518(*(undefined8 *)(pRVar12 + 0xe0));
      uVar8 = operator|(uVar8,0x2000);
      FUN_04e3551c(pRVar12 + 0xe0,uVar8);
      LaunchProjectileAt(this,(Projectile *)pRVar12,(SexyVector3 *)aVStack_f8,1.0,0.15);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)aRStack_108);
      Projectile::SetTarget((Projectile *)pRVar12,(RtWeakPtr *)aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      DamageInfo::DamageInfo((DamageInfo *)aRStack_68,aDStack_c8);
      RapeflowerProjectile::SetDamageInfo(pRVar12,aRStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      FUN_04e35560(pRVar12 + 0x208,uVar3);
      FUN_04e355a4(pRVar12 + 0x20c);
      PlantWizardThorns::GetTotalDamage((PlantWizardThorns *)this,*(float *)(pPVar7 + 0x2d8));
      FUN_04e35568(pRVar12 + 0x210);
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
      if (iVar15 == 0x1f) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_108);
LAB_04e3910c:
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_e8);
        DamageInfo::~DamageInfo(aDStack_c8);
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_108);
    Sexy::RtDbTable::Iterator::operator++(aIStack_e8,extraout_w1_00);
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_e8);
  } while( true );
}

