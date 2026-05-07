// Class: PlantLotusShower


/* PlantLotusShower::PlantLotusShower() */

void __thiscall PlantLotusShower::PlantLotusShower(PlantLotusShower *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067d1660;
  return;
}


/* PlantLotusShower::StaticNew() */

PlantLotusShower * PlantLotusShower::StaticNew(void)

{
  PlantLotusShower *this;
  
  this = ::operator_new(0x28);
  PlantLotusShower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusShower::StaticClassInit() */

void PlantLotusShower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantLotusShower");
    (*pcVar2)(plVar1,asStack_10,FUN_040a7314,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLotusShower::StaticGetClass() */

long * PlantLotusShower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantLotusShower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantLotusShower::GetClass() const */

long * PlantLotusShower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantLotusShower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantLotusShower::~PlantLotusShower() */

void __thiscall PlantLotusShower::~PlantLotusShower(PlantLotusShower *this)

{
  *(undefined ***)this = &PTR_GetClass_067d1660;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantLotusShower::~PlantLotusShower() */

void __thiscall PlantLotusShower::~PlantLotusShower(PlantLotusShower *this)

{
  ~PlantLotusShower(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusShower::WaterLotusBullet(bool) */

void __thiscall PlantLotusShower::WaterLotusBullet(PlantLotusShower *this,bool param_1)

{
  char cVar1;
  undefined4 uVar2;
  Plant *this_00;
  SharkMinion *this_01;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = *(Plant **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this_00 + 0x150) = 3;
  if (param_1) {
    cVar1 = Plant::GetAvatarEnable(this_00);
    uVar2 = 5;
    if (cVar1 == '\0') {
      uVar2 = 4;
    }
    *(undefined4 *)(this_00 + 0x150) = uVar2;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  this_01 = *(SharkMinion **)(this + 0x10);
  uVar2 = SharkMinion::getRow(this_01);
  Plant::Fire((Plant *)this_01,a_Stack_10,uVar2,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLotusShower::Idle() */

void __thiscall PlantLotusShower::Idle(PlantLotusShower *this)

{
  long *plVar1;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusShower::WaterLotusLauncher(bool) */

void __thiscall PlantLotusShower::WaterLotusLauncher(PlantLotusShower *this,bool param_1)

{
  char cVar1;
  undefined4 uVar2;
  float *pfVar3;
  Effect_DropInWater *this_00;
  ResourceInfo *pRVar4;
  char *__s;
  string *__n;
  float fVar5;
  float fVar6;
  float fVar7;
  RtMixedPtrBase aRStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"POPANIM_EFFECTS_LOTUSHOOTER_PLANTFOOD_IN_WATER");
  GetPAMByName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
  if (cVar1 != '\0') {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    fVar7 = *pfVar3;
    fVar5 = pfVar3[1];
    fVar6 = pfVar3[2];
    this_00 = Board::AddEffect<Effect_DropInWater>(*(Board **)(gLawnApp + 0x9f0));
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
    Effect_PopAnim::SetCentered((Effect_PopAnim *)this_00,true);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,fVar7 + 70.0,(fVar5 - fVar6) - 25.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)asStack_18,-1);
    uVar2 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    uVar2 = Board::MakeRenderOrder(0x64960,uVar2,0);
    FUN_040a709c(this_00 + 0x1c,uVar2);
    __n = asStack_18;
    std::string::string(asStack_28,"IN_WATER");
    nop();
    if (param_1) {
      cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      if (cVar1 == '\0') {
        __s = "IN_WATER_PLANTFOOD";
      }
      else {
        __s = "IN_WATER_AVATAR";
      }
      std::string::append(asStack_28,__s,(size_t)__n);
    }
    Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,asStack_28,0);
    Effect_PopAnim::SetPopAnimDelegates((Effect_PopAnim *)this_00);
    FUN_040a70a8(this_00 + 0x118,param_1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)aRStack_20);
    CthulhuEyeballEffect::SetCthulhuEasyButton((CthulhuEyeballEffect *)this_00,asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    std::string::~string(asStack_28);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusShower::LandBulletProc(Projectile*, PlantWeapon, bool) */

void PlantLotusShower::LandBulletProc
               (undefined1 param_1_00 [16],undefined4 param_2,undefined4 param_3,long *param_1,
               Projectile *param_5,undefined4 param_6,char param_7)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  RtMixedPtrBase aRStack_40 [8];
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
  if (param_5 == (Projectile *)0x0) goto LAB_040a8914;
  DVec3::DVec3((DVec3 *)&local_28);
  lVar3 = FUN_040a87cc(param_1[2]);
  fVar6 = (float)ValueRange::GetRandomValue((ValueRange *)(lVar3 + 0x2b8));
  PlantFramework::FindTargetZombie(aRStack_40,param_1,0);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xf8))(aRStack_38,param_1,param_6);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      GridItem::GetGridLocation();
      BoardTransforms::GridToBoardSpace((Point *)&local_18);
      local_28 = (float)local_30;
      local_20 = 0x41c80000;
      local_24 = (float)local_2c;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      goto LAB_040a88f4;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1[2]);
    local_24 = pfVar5[1];
    local_28 = *pfVar5 + 600.0;
    local_20 = 0;
    if (param_7 != '\0') {
      iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar2 + -1);
      local_28 = (float)(iVar2 + -0x1e);
      local_20 = 0x41c80000;
    }
  }
  else {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    local_18 = (**(code **)(*plVar4 + 0x3b0))(fVar6);
    local_14 = param_2;
    local_10 = param_3;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
LAB_040a88f4:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  }
  fVar7 = (float)ValueRange::GetRandomValue((ValueRange *)(lVar3 + 0x2c0));
  Projectile::LaunchAt(param_5,(SexyVector3 *)&local_28,fVar7,fVar6);
LAB_040a8914:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusShower::LandLotusBullet(bool) */

void __thiscall PlantLotusShower::LandLotusBullet(PlantLotusShower *this,bool param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  Plant *this_00;
  SharkMinion *this_01;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = *(Plant **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this_00 + 0x150) = 0;
  if (param_1) {
    cVar1 = Plant::GetAvatarEnable(this_00);
    uVar2 = 2;
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
    *(undefined4 *)(this_00 + 0x150) = uVar2;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  this_01 = *(SharkMinion **)(this + 0x10);
  uVar2 = SharkMinion::getRow(this_01);
  uVar3 = Plant::Fire((Plant *)this_01,a_Stack_10,uVar2,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  LandBulletProc(this,uVar3,0,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* PlantLotusShower::CancelPlantfood() */

void __thiscall PlantLotusShower::CancelPlantfood(PlantLotusShower *this)

{
  char cVar1;
  SexyVector3 *pSVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  
  this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  cVar1 = RealObject::IsOnWaterTile((RealObject *)this_00,pSVar2);
  if (cVar1 != '\0') {
    WaterLotusLauncher(this,true);
    PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
    return;
  }
  LandLotusBullet(this,true);
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  return;
}


/* PlantLotusShower::ShouldClipWithWater() const */

bool __thiscall PlantLotusShower::ShouldClipWithWater(PlantLotusShower *this)

{
  long lVar1;
  
  lVar1 = FUN_040a8c60(*(undefined4 *)(*(long *)(this + 0x10) + 0x114),
                       *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  return lVar1 == 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotusShower::SquareDamage(float) */

void __thiscall PlantLotusShower::SquareDamage(PlantLotusShower *this,float param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  Zombie *this_00;
  SharkMinion *this_01;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 local_a0;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  uVar3 = operator|(2,4);
  uVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  uVar5 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  EntityFinder::GetEntitiesAtGridSquare(avStack_80,uVar3,uVar4,uVar5);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1) {
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    cVar2 = RealObject::IsOnOpposingTeam(*puVar8,1);
    if ((cVar2 != '\0') &&
       ((this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8), this_00 == (Zombie *)0x0 ||
        ((cVar2 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,7), cVar2 != '\0' &&
         (cVar2 = Zombie::IsInvisible(this_00), cVar2 == '\0')))))) {
      uVar10 = *(undefined8 *)(this + 0x10);
      pcVar9 = *(code **)(*(long *)*puVar8 + 0x110);
      iVar6 = BoardEntity::CalcColumnPosition((BoardEntity *)*puVar8);
      this_01 = (SharkMinion *)*puVar8;
      iVar7 = SharkMinion::getRow(this_01);
      Sexy::Point::Point(aPStack_90,iVar6,iVar7);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)param_1,local_88,local_84,aDStack_68,uVar10,aPStack_90,0)
      ;
      (*pcVar9)(this_01,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLotusShower::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

undefined8 PlantLotusShower::Fire(PlantLotusShower *param_1)

{
  char cVar1;
  char *pcVar2;
  SexyVector3 *pSVar3;
  undefined8 uVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
  if (cVar1 == '\0') {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_CoconutCannon_PF_Fire");
    this = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             **)(param_1 + 0x10);
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this);
    cVar1 = RealObject::IsOnWaterTile((RealObject *)this,pSVar3);
    if (cVar1 == '\0') {
      uVar4 = LandLotusBullet(param_1,false);
      return uVar4;
    }
    WaterLotusLauncher(param_1,false);
  }
  return 0;
}

