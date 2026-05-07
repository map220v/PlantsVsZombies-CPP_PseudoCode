// Class: PlantSporeshroom


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSporeshroom::StaticClassInit() */

void PlantSporeshroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSporeshroom");
    (*pcVar2)(plVar1,asStack_10,FUN_0416ff9c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSporeshroom::StaticGetClass() */

long * PlantSporeshroom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSporeshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSporeshroom::GetClass() const */

long * PlantSporeshroom::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSporeshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSporeshroom::calculateTargetLocationForZombie(PultProjectileProps const&, PlantWeapon,
   Zombie*) */

void PlantSporeshroom::calculateTargetLocationForZombie
               (undefined1 param_1_00 [16],undefined4 param_2,undefined4 param_3,long param_1,
               long param_5,undefined8 param_6,long *param_7)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  float fVar5;
  float local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_28);
  uVar4 = (**(code **)(*param_7 + 0x3b0))(*(undefined4 *)(param_5 + 0x10),param_7);
  local_18 = CONCAT44(param_2,uVar4);
  local_10 = param_3;
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
  fVar1 = local_28;
  if (*(char *)(param_5 + 0x20) != '\0') {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(param_1 + 0x10));
    fVar5 = *pfVar3;
    if (fVar1 < fVar5) {
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      local_28 = fVar5 + (float)iVar2 * 0.5;
    }
  }
  local_18 = CONCAT44(uStack_24,local_28);
  local_10 = local_20;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28,uStack_24,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSporeshroom::calculateTargetLocationForGridItem(PultProjectileProps const&, PlantWeapon,
   GridItem*) */

void PlantSporeshroom::calculateTargetLocationForGridItem(void)

{
  int local_30;
  int local_2c;
  float local_28;
  float fStack_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_28);
  GridItem::GetGridLocation();
  BoardTransforms::GridToBoardSpace((Point *)&local_18);
  local_28 = (float)local_30;
  fStack_24 = (float)local_2c;
  local_10 = 0x41c80000;
  local_18 = CONCAT44(fStack_24,local_28);
  local_20 = 0x41c80000;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28,fStack_24,0x41c80000);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSporeshroom::launchProjectile(PlantWeapon, PultProjectileProps const&, Zombie*, GridItem*)
    */

void PlantSporeshroom::launchProjectile
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined4 param_5,PultProjectileProps *param_6,long param_7,BoardEntity *param_8)

{
  char cVar1;
  Projectile *this;
  undefined8 uVar2;
  float *pfVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
  this = (Projectile *)
         Plant::Fire(*(Plant **)(param_4 + 0x10),
                     (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18,
                     *(undefined4 *)(*(Plant **)(param_4 + 0x10) + 0x110),param_5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  uVar2 = FUN_0416e370(*(undefined8 *)(this + 0xe0));
  uVar2 = operator|(uVar2,0x100000000000);
  FUN_0416e374(this + 0xe0,uVar2);
  DVec3::DVec3((DVec3 *)&local_28);
  if (param_7 == 0) {
    if ((param_8 == (BoardEntity *)0x0) || (cVar1 = BoardEntity::IsOnScreen(param_8), cVar1 == '\0')
       ) {
      pfVar3 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_4 + 0x10));
      local_24 = pfVar3[1];
      local_28 = *pfVar3 + 600.0;
      local_20 = 0;
      Projectile::LaunchAtFromProps(this,(SexyVector3 *)&local_28,param_6);
    }
    else {
      local_18 = calculateTargetLocationForGridItem(param_4,param_6,param_5,param_8);
      local_14 = param_2;
      local_10 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
      Projectile::LaunchAtFromProps(this,(SexyVector3 *)&local_28,param_6);
    }
  }
  else {
    local_18 = calculateTargetLocationForZombie(param_4,param_6,param_5,param_7);
    local_14 = param_2;
    local_10 = param_3;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
    Projectile::LaunchAtFromProps(this,(SexyVector3 *)&local_28,param_6);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_30);
    Projectile::SetTarget(this,(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* PlantSporeshroom::markTargetZombieForDeath() */

void __thiscall PlantSporeshroom::markTargetZombieForDeath(PlantSporeshroom *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  RtObject *this_01;
  Zombie *pZVar2;
  Zombie *this_02;
  
  this_00 = (RtWeakPtr *)(this + 0x40);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pZVar2 = Sexy::RtObject::Cast<Zombie>(this_01);
    if (pZVar2 != (Zombie *)0x0) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      Zombie::SetMarkedForDeath(this_02);
      return;
    }
  }
  return;
}


/* PlantSporeshroom::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantSporeshroom::onAnimStoppedCallback(PlantSporeshroom *this,string *param_1)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = std::operator==(param_1,"grow");
  if (bVar1) {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x118))();
  }
  return;
}


/* PlantSporeshroom::Initialize() */

void __thiscall PlantSporeshroom::Initialize(PlantSporeshroom *this)

{
  int iVar1;
  SporeshroomSubsystem *this_00;
  
  PlantFramework::Initialize((PlantFramework *)this);
  this_00 = Board::GetGameSubSystem<SporeshroomSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  iVar1 = FUN_0416e388(*(undefined8 *)(this + 0x10));
  SporeshroomSubsystem::RecordSporeshroomLevel(this_00,iVar1);
  return;
}


/* PlantSporeshroom::PlantSporeshroom() */

void __thiscall PlantSporeshroom::PlantSporeshroom(PlantSporeshroom *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067f4bd0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* PlantSporeshroom::StaticNew() */

PlantSporeshroom * PlantSporeshroom::StaticNew(void)

{
  PlantSporeshroom *this;
  
  this = ::operator_new(0x48);
  PlantSporeshroom(this);
  return this;
}


/* PlantSporeshroom::UpdatePlantfood() */

void __thiscall PlantSporeshroom::UpdatePlantfood(PlantSporeshroom *this)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  SoccerGameModule *this_00;
  SexyVector3 *pSVar4;
  int iVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  
  iVar3 = FUN_0416e39c(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  iVar5 = 3;
  if (cVar1 != '\0') {
    iVar5 = 4;
  }
  bVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x40));
  if (bVar2 <= (iVar5 <= iVar3)) {
    (**(code **)(*(long *)this + 0x228))(this);
    if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
       (this_00 = (SoccerGameModule *)
                  FUN_0416f6a8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
       this_00 != (SoccerGameModule *)0x0)) {
      this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(this + 0x10);
      pSVar4 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_01);
      SoccerGameModule::DoShot(this_00,pSVar4,(BoardEntity *)this_01);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSporeshroom::launchNormalProjectile() */

void __thiscall PlantSporeshroom::launchNormalProjectile(PlantSporeshroom *this)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::FindTargetZombie(aRStack_18,this,0);
  (**(code **)(*(long *)this + 0xf8))(aRStack_10,this,0);
  lVar4 = *(long *)(this + 0x10);
  iVar1 = FUN_0416e388(lVar4);
  *(uint *)(lVar4 + 0x150) = (uint)(1 < iVar1);
  lVar4 = FUN_0416f7f0(lVar4);
  uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  uVar2 = launchProjectile(this,0,lVar4 + 0x310,uVar2,uVar3);
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSporeshroom::PlayGrowAnimation() */

void __thiscall PlantSporeshroom::PlayGrowAnimation(PlantSporeshroom *this)

{
  PopAnimRig *pPVar1;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_68,"grow");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSporeshroom::isValidTargetZombie(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall PlantSporeshroom::isValidTargetZombie(PlantSporeshroom *this,RtWeakPtr *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtObject *pRVar3;
  Zombie *this_01;
  Zombie *this_02;
  long extraout_x0;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar1 = Sexy::RtObject::IsA<Zombie>(pRVar3);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      nop();
      cVar2 = Zombie::IsTargetable(this_01);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        nop();
        cVar2 = Zombie::IsIgnoringAllDamage(this_02);
        if (cVar2 == '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          nop();
          cVar2 = FUN_0416f008(*(undefined4 *)(extraout_x0 + 0xcc));
          if (cVar2 == '\0') {
            pRVar3 = (RtObject *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
            bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>(pRVar3);
            if (!bVar1) {
              this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x28);
              uVar4 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin(this_00);
              uVar5 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(this_00);
              local_18 = std::
                         find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                                   (uVar4,uVar5,param_2);
              local_10 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end(this_00);
              bVar1 = __gnu_cxx::operator==
                                ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
              goto LAB_041701b0;
            }
          }
        }
      }
    }
  }
  bVar1 = false;
LAB_041701b0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSporeshroom::CanApplyPlantfood() */

void __thiscall PlantSporeshroom::CanApplyPlantfood(PlantSporeshroom *this)

{
  byte bVar1;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xd0))(avStack_20,this,1);
  bVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          empty(avStack_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            (avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1 ^ 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSporeshroom::findNextPlantfoodTarget() */

void PlantSporeshroom::findNextPlantfoodTarget(void)

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
    if (cVar2 != '\0') goto LAB_041704ec;
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
    if (cVar2 != '\0') goto LAB_041704ec;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
LAB_04170500:
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_041704ec:
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  goto LAB_04170500;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSporeshroom::ApplyPlantfood() */

void __thiscall PlantSporeshroom::ApplyPlantfood(PlantSporeshroom *this)

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
/* PlantSporeshroom::makeSureWeStillHaveAPlantFoodTarget() */

void __thiscall PlantSporeshroom::makeSureWeStillHaveAPlantFoodTarget(PlantSporeshroom *this)

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


/* PlantSporeshroom::~PlantSporeshroom() */

void __thiscall PlantSporeshroom::~PlantSporeshroom(PlantSporeshroom *this)

{
  *(undefined ***)this = &PTR_GetClass_067f4bd0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSporeshroom::~PlantSporeshroom() */

void __thiscall PlantSporeshroom::~PlantSporeshroom(PlantSporeshroom *this)

{
  ~PlantSporeshroom(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSporeshroom::launchSpecialProjectile() */

void __thiscall PlantSporeshroom::launchSpecialProjectile(PlantSporeshroom *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  RtObject *pRVar5;
  undefined8 uVar6;
  GridItem *pGVar7;
  long lVar8;
  Zombie *pZVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x40);
  pZVar9 = (Zombie *)0x0;
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_0416f7f0(*(undefined8 *)(this + 0x10));
  makeSureWeStillHaveAPlantFoodTarget(this);
  markTargetZombieForDeath(this);
  lVar8 = *(long *)(this + 0x10);
  iVar2 = FUN_0416e388(lVar8);
  uVar3 = 2;
  if (1 < iVar2) {
    uVar3 = 3;
  }
  *(undefined4 *)(lVar8 + 0x150) = uVar3;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pRVar5 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pZVar9 = Sexy::RtObject::Cast<Zombie>(pRVar5);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  pGVar7 = (GridItem *)0x0;
  if (bVar1) {
    pRVar5 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pGVar7 = Sexy::RtObject::Cast<GridItem>(pRVar5);
  }
  lVar4 = launchProjectile(this,1,lVar4 + 0x338,pZVar9,pGVar7);
  uVar6 = FUN_0416e370(*(undefined8 *)(lVar4 + 0xe0));
  uVar6 = operator|(uVar6,0x2000);
  uVar6 = operator|(uVar6,0x100000000000);
  FUN_0416e374((undefined8 *)(lVar4 + 0xe0),uVar6);
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
  __stack_chk_fail(lVar4);
}


/* PlantSporeshroom::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantSporeshroom::Fire(PlantSporeshroom *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
  if (cVar1 == '\0') {
    launchNormalProjectile(param_1);
    return;
  }
  launchSpecialProjectile(param_1);
  return;
}

