// Class: StunionGasProjectile


/* StunionGasProjectile::onPostUpdate() */

void __thiscall StunionGasProjectile::onPostUpdate(StunionGasProjectile *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar4 = *pfVar3;
  if (fVar4 < *(float *)(this + 0x1a8)) {
    iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    if (fVar4 < (float)(iVar2 + iVar1 * iVar2 + 200)) {
      return;
    }
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StunionGasProjectile::StaticClassInit() */

void StunionGasProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"StunionGasProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_040b8f70,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StunionGasProjectile::StaticGetClass() */

long * StunionGasProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"StunionGasProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StunionGasProjectile::GetClass() const */

long * StunionGasProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"StunionGasProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StunionGasProjectile::SetTravelDistance(float) */

void __thiscall StunionGasProjectile::SetTravelDistance(StunionGasProjectile *this,float param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar3 = *pfVar1;
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  *(float *)(this + 0x1a8) = fVar3 + param_1 * (float)iVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StunionGasProjectile::onUpdate(float) */

void StunionGasProjectile::onUpdate(float param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar1;
  EffectAnimRig_StunionProjectile *this;
  float fVar2;
  float fVar3;
  float local_10;
  float local_c;
  long local_8;
  
  local_10 = 0.0;
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  fVar2 = *(float *)(in_x0 + 0x1a8);
  fVar3 = *pfVar1;
  pfVar1 = (float *)Projectile::GetVelocity((Projectile *)in_x0);
  local_c = (fVar2 - fVar3) / *pfVar1;
  pfVar1 = eastl::max_alt<float>(&local_10,&local_c);
  fVar2 = *pfVar1;
  Projectile::GetAnimRig((Projectile *)in_x0);
  nop();
  if (local_8 == ___stack_chk_guard) {
    EffectAnimRig_StunionProjectile::NotifyTimeRemaining(this,fVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StunionGasProjectile::StunionGasProjectile() */

void __thiscall StunionGasProjectile::StunionGasProjectile(StunionGasProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067d5f80;
  *(undefined ***)(this + 0x10) = &PTR__StunionGasProjectile_067d6170;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  return;
}


/* StunionGasProjectile::StaticNew() */

StunionGasProjectile * StunionGasProjectile::StaticNew(void)

{
  StunionGasProjectile *this;
  
  this = ::operator_new(0x1c8);
  StunionGasProjectile(this);
  return this;
}


/* StunionGasProjectile::~StunionGasProjectile() */

void __thiscall StunionGasProjectile::~StunionGasProjectile(StunionGasProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067d5f80;
  *(undefined ***)(this + 0x10) = &PTR__StunionGasProjectile_067d6170;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to StunionGasProjectile::~StunionGasProjectile() */

void __thiscall StunionGasProjectile::~StunionGasProjectile(StunionGasProjectile *this)

{
  ~StunionGasProjectile(this + -0x10);
  return;
}


/* StunionGasProjectile::~StunionGasProjectile() */

void __thiscall StunionGasProjectile::~StunionGasProjectile(StunionGasProjectile *this)

{
  ~StunionGasProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to StunionGasProjectile::~StunionGasProjectile() */

void __thiscall StunionGasProjectile::~StunionGasProjectile(StunionGasProjectile *this)

{
  ~StunionGasProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StunionGasProjectile::handleImpact(BoardEntity*) */

void __thiscall StunionGasProjectile::handleImpact(StunionGasProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int iVar2;
  Zombie *pZVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  PlantChilibeanSubSystem *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar3 != (Zombie *)0x0)) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1b0);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    ToolPacketData::GetProps();
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                         (uVar4,uVar5,aRStack_20);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    if (bVar1) {
      this_01 = Board::GetGameSubSystem<PlantChilibeanSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      iVar2 = FUN_040b74f8(*(undefined4 *)(this + 0x70));
      PlantChilibeanSubSystem::ApplyGasEffectToZombie
                (this_01,pZVar3,*(float *)(this + 0x1ac),1 < iVar2);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )this_00,(RtWeakPtr *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    }
  }
  Projectile::handleImpact((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

