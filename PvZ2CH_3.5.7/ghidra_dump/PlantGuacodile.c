// Class: PlantGuacodile


/* PlantGuacodile::PlantGuacodile() */

void __thiscall PlantGuacodile::PlantGuacodile(PlantGuacodile *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06805ed0;
  return;
}


/* PlantGuacodile::StaticNew() */

PlantGuacodile * PlantGuacodile::StaticNew(void)

{
  PlantGuacodile *this;
  
  this = ::operator_new(0x28);
  PlantGuacodile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGuacodile::StaticClassInit() */

void PlantGuacodile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGuacodile");
    (*pcVar2)(plVar1,asStack_10,FUN_041f429c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGuacodile::StaticGetClass() */

long * PlantGuacodile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantGuacodile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGuacodile::GetClass() const */

long * PlantGuacodile::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantGuacodile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGuacodile::canAutoTrigger() const */

byte __thiscall PlantGuacodile::canAutoTrigger(PlantGuacodile *this)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = Plant::IsIceblocked(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    return 0;
  }
  cVar1 = FUN_041f4dc0(*(undefined4 *)(*(long *)(this + 0x10) + 0x28));
  if (cVar1 != '\0') {
    return 0;
  }
  bVar2 = (**(code **)(*(long *)this + 0x180))(this);
  return bVar2 ^ 1;
}


/* PlantGuacodile::~PlantGuacodile() */

void __thiscall PlantGuacodile::~PlantGuacodile(PlantGuacodile *this)

{
  *(undefined ***)this = &PTR_GetClass_06805ed0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantGuacodile::~PlantGuacodile() */

void __thiscall PlantGuacodile::~PlantGuacodile(PlantGuacodile *this)

{
  ~PlantGuacodile(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGuacodile::shootGuacodile(float) */

void __thiscall PlantGuacodile::shootGuacodile(PlantGuacodile *this,float param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar1;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)PlantFramework::Fire
                         ((PlantFramework *)this,
                          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                          &local_18,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  local_18 = (float)*puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  _local_18 = CONCAT44((int)((ulong)*puVar1 >> 0x20),param_1 + local_18);
  (**(code **)(*(long *)this_00 + 0x78))
            (this_00,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGuacodile::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantGuacodile::Fire
          (PlantGuacodile *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long extraout_x0;
  undefined8 uVar5;
  int iVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    iVar2 = FUN_041f4054(*(undefined8 *)(this + 0x10));
    if (iVar2 != 1) {
      iVar6 = 0x14;
      if (iVar2 != 2) {
        iVar6 = 0x28;
      }
      iVar2 = PlantFramework::Rand((PlantFramework *)this,100);
      if (iVar2 < iVar6) {
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 2;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
        lVar4 = PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,param_4);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
        goto LAB_041f5054;
      }
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    lVar4 = PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    shootGuacodile(this,60.0);
    nop();
    uVar5 = FUN_041f403c(*(undefined8 *)(extraout_x0 + 0xe0));
    uVar5 = operator|(uVar5,0x2000);
    FUN_041f4040((undefined8 *)(extraout_x0 + 0xe0),uVar5);
    uVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    FUN_041f405c(extraout_x0 + 0x1b5,uVar3);
    lVar4 = extraout_x0;
  }
LAB_041f5054:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* PlantGuacodile::Trigger() */

void __thiscall PlantGuacodile::Trigger(PlantGuacodile *this)

{
  GuacodileProjectile *this_00;
  
  shootGuacodile(this,-15.0);
  nop();
  GuacodileProjectile::SetJumpState(this_00);
  MessageRouter::Broadcast<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::PlantConvertedToProjectile,
             *(Plant **)(this + 0x10));
  Plant::KillPlant(*(Plant **)(this + 0x10),1,0,1);
  return;
}


/* PlantGuacodile::TryBlockPush() */

undefined8 __thiscall PlantGuacodile::TryBlockPush(PlantGuacodile *this)

{
  char cVar1;
  
  cVar1 = canAutoTrigger(this);
  if (cVar1 != '\0') {
    Trigger(this);
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGuacodile::UpdateUnconditionally() */

void __thiscall PlantGuacodile::UpdateUnconditionally(PlantGuacodile *this)

{
  char cVar1;
  bool bVar2;
  RealObject *this_00;
  code *pcVar3;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = canAutoTrigger(this);
  if (cVar1 != '\0') {
    (**(code **)(**(long **)(this + 0x10) + 0xb0))(auStack_30,*(long **)(this + 0x10));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntitiesTouchingRectangle
              (avStack_20,2,auStack_30,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
               *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      nop();
      cVar1 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10));
      if (cVar1 != '\0') {
        pcVar3 = *(code **)(*(long *)this_00 + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
        cVar1 = (*pcVar3)(this_00,aRStack_38,0);
        if ((cVar1 == '\0') ||
           (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 != '\0')) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        }
        else {
          cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
          if (cVar1 == '\0') {
            Trigger(this);
            break;
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGuacodile::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

void PlantGuacodile::CanTargetZombie(long *param_1)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_10);
  lVar3 = FUN_041f55dc(local_10,local_c);
  if (((lVar3 != 0) || (cVar1 == '\0')) ||
     (cVar1 = (**(code **)(*param_1 + 0x180))(param_1), uVar2 = 0, cVar1 != '\0')) {
    uVar2 = 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGuacodile::ShouldClipWithWater() const */

void PlantGuacodile::ShouldClipWithWater(void)

{
  long lVar1;
  long lVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  lVar2 = FUN_041f55dc(local_10,local_c);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2 == 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGuacodile::ApplyPlantfood() */

void __thiscall PlantGuacodile::ApplyPlantfood(PlantGuacodile *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  RealObject *this_00;
  SexyVector3 *this_01;
  ZombieTosserSubSystem *pZVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 auStack_d8 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  lVar4 = FUN_041f5320(*(undefined8 *)(this + 0x10));
  (**(code **)(*(long *)this + 0x2b8))(auStack_d8,this,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_c8,2,auStack_d8,0xffffffff,0xffffffff);
  local_f8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_c8);
  local_f0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_c8);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_f8,(__normal_iterator *)&local_f0), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f8);
    nop();
    cVar2 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10));
    if (cVar2 != '\0') {
      pcVar6 = *(code **)(*(long *)this_00 + 0x3d0);
      Plant::GetType();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)&local_e8);
      cVar2 = (*pcVar6)(this_00,aRStack_68,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_e8);
      if (cVar2 != '\0') {
        cVar2 = Zombie::CanBeLaunchedByPlants((Zombie *)this_00);
        if ((cVar2 != '\0') && (cVar2 = Zombie::IsControlled((Zombie *)this_00), cVar2 == '\0')) {
          this_01 = (SexyVector3 *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          uVar7 = 0;
          uVar8 = 0;
          EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,(float)(iVar3 << 1),0.0,0.0);
          local_e8 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aRStack_68);
          local_e4 = uVar7;
          local_e0 = uVar8;
          pZVar5 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b0);
          ZombieTosserSubSystem::LaunchZombie
                    ((ZombieTosserSubSystem *)0x43160000,0x3f800000,pZVar5,this_00,
                     (RtWeakPtr<Sexy::ResourceInfo> *)&local_e8,aRStack_b0,1);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_b0);
        }
        pcVar6 = *(code **)(*(long *)this_00 + 0x110);
        FUN_041f4070(*(undefined8 *)(lVar4 + 0x70));
        Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
        (*pcVar6)(this_00,aRStack_68);
        DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f8);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGuacodile::TakeDamage(DamageInfo const&) */

void PlantGuacodile::TakeDamage(DamageInfo *param_1)

{
  bool bVar1;
  char cVar2;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(in_x1 + 0x10),0x200);
  if ((bVar1) || (cVar2 = canAutoTrigger((PlantGuacodile *)param_1), cVar2 == '\0')) {
    PlantMagicbeans::TakeDamage(param_1);
  }
  else {
    DamageInfo::DamageInfo(aDStack_68,in_x1);
    local_60 = 0;
    Trigger((PlantGuacodile *)param_1);
    DamageInfo::DamageInfo(in_x8,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

