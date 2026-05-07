// Class: MissileToeLvl5Projectile


/* MissileToeLvl5Projectile::onExplosionAnimStopped(StandaloneEffect*) */

void MissileToeLvl5Projectile::onExplosionAnimStopped(StandaloneEffect *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MissileToeLvl5Projectile::StaticClassInit() */

void MissileToeLvl5Projectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"MissileToeLvl5Projectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03bf7bac,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MissileToeLvl5Projectile::StaticGetClass() */

long * MissileToeLvl5Projectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MissileToeLvl5Projectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MissileToeLvl5Projectile::GetClass() const */

long * MissileToeLvl5Projectile::GetClass(void)

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
  (*pcVar3)(plVar1,"MissileToeLvl5Projectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MissileToeLvl5Projectile::MissileToeLvl5Projectile() */

void __thiscall MissileToeLvl5Projectile::MissileToeLvl5Projectile(MissileToeLvl5Projectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06741e10;
  *(undefined ***)(this + 0x10) = &PTR__MissileToeLvl5Projectile_06742000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  this[0x1b0] = (MissileToeLvl5Projectile)0x0;
  return;
}


/* MissileToeLvl5Projectile::StaticNew() */

MissileToeLvl5Projectile * MissileToeLvl5Projectile::StaticNew(void)

{
  MissileToeLvl5Projectile *this;
  
  this = ::operator_new(0x1b8);
  MissileToeLvl5Projectile(this);
  return this;
}


/* MissileToeLvl5Projectile::~MissileToeLvl5Projectile() */

void __thiscall MissileToeLvl5Projectile::~MissileToeLvl5Projectile(MissileToeLvl5Projectile *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  
  this_00 = (RtWeakPtr *)(this + 0x1a8);
  *(undefined ***)this = &PTR_GetClass_06741e10;
  *(undefined ***)(this + 0x10) = &PTR__MissileToeLvl5Projectile_06742000;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to MissileToeLvl5Projectile::~MissileToeLvl5Projectile() */

void __thiscall MissileToeLvl5Projectile::~MissileToeLvl5Projectile(MissileToeLvl5Projectile *this)

{
  ~MissileToeLvl5Projectile(this + -0x10);
  return;
}


/* MissileToeLvl5Projectile::~MissileToeLvl5Projectile() */

void __thiscall MissileToeLvl5Projectile::~MissileToeLvl5Projectile(MissileToeLvl5Projectile *this)

{
  ~MissileToeLvl5Projectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MissileToeLvl5Projectile::~MissileToeLvl5Projectile() */

void __thiscall MissileToeLvl5Projectile::~MissileToeLvl5Projectile(MissileToeLvl5Projectile *this)

{
  ~MissileToeLvl5Projectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MissileToeLvl5Projectile::InitExplosionAnim() */

void __thiscall MissileToeLvl5Projectile::InitExplosionAnim(MissileToeLvl5Projectile *this)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  float fVar5;
  float fVar6;
  float local_28;
  float local_24;
  RtWeakPtr aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,0.0,-10.0);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar5 = *pfVar2;
  fVar6 = pfVar2[1];
  lVar3 = Projectile::getProps((Projectile *)this);
  GetPAMByName((string *)(lVar3 + 0x140));
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3
            (aVStack_18,(float)(int)(local_28 + fVar5),(float)(int)(local_24 + fVar6),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_18,-1);
  if (*(code **)(*(long *)this + 400) == Projectile::CalcRenderOrder) {
    iVar1 = Projectile::CalcRenderOrder((Projectile *)this);
  }
  else {
    iVar1 = (**(code **)(*(long *)this + 400))();
  }
  FUN_03bf255c(this_00 + 0x1c,iVar1 + 1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1a8),(RtWeakPtrBase *)aVStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MissileToeLvl5Projectile::PlayLevel5TimeCountDownAnim() */

void __thiscall
MissileToeLvl5Projectile::PlayLevel5TimeCountDownAnim(MissileToeLvl5Projectile *this)

{
  PopAnimRig *pPVar1;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_58,"missle_in");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onProjectileAnimStop");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MissileToeLvl5Projectile::PlayLevel5AfterExplosionAm() */

void __thiscall MissileToeLvl5Projectile::PlayLevel5AfterExplosionAm(MissileToeLvl5Projectile *this)

{
  PopAnimRig *pPVar1;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_58,"plantfood3");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onProjectileAnimStop");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MissileToeLvl5Projectile::RemoveUndamageableEntitiesFromList(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) */

void __thiscall
MissileToeLvl5Projectile::RemoveUndamageableEntitiesFromList
          (MissileToeLvl5Projectile *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  GridItem *pGVar5;
  RtObject *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
LAB_03bf9124:
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  do {
    if (!bVar1) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (RtObject *)*puVar3;
    if (this_00 == (RtObject *)0x0) {
LAB_03bf9218:
      FUN_03bf5778((__normal_iterator *)&local_18);
      goto LAB_03bf9124;
    }
    pZVar4 = Sexy::RtObject::Cast<Zombie>(this_00);
    if ((pZVar4 == (Zombie *)0x0) ||
       (((cVar2 = (**(code **)(*(long *)pZVar4 + 0x328))(), cVar2 == '\0' &&
         (cVar2 = (**(code **)(*(long *)pZVar4 + 0x330))(pZVar4), cVar2 == '\0')) &&
        (cVar2 = RealObject::IsOnTeam(pZVar4,1), cVar2 == '\0')))) {
      bVar1 = Sexy::RtObject::IsA<GridItem>(this_00);
      if ((!bVar1) || (pGVar5 = Sexy::RtObject::Cast<GridItem>(this_00), pGVar5 == (GridItem *)0x0))
      goto LAB_03bf9218;
      cVar2 = (**(code **)(*(long *)pGVar5 + 0x200))();
      if (cVar2 != '\0') break;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_18 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                         ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,local_10);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  } while( true );
  FUN_03bf5778((__normal_iterator *)&local_18);
  goto LAB_03bf9124;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MissileToeLvl5Projectile::DoExplosion(bool) */

void __thiscall MissileToeLvl5Projectile::DoExplosion(MissileToeLvl5Projectile *this,bool param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long extraout_x0;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  Insets aIStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    (**(code **)(*(long *)this + 0x170))(this,0);
  }
  else {
    Projectile::GetProps((Projectile *)this);
    nop();
    if (extraout_x0 != 0) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
      fVar4 = (float)FUN_03bf2794(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                  *(undefined4 *)(this + 0x20));
      fVar5 = *(float *)(this + 0x1c);
      FUN_03bf2794(*(undefined4 *)(this + 0x18),fVar5,*(undefined4 *)(this + 0x20));
      BoardTransforms::BoardSpaceToGrid((BoardTransforms *)(ulong)(uint)fVar5,fVar4,fVar5);
      Sexy::Insets::Insets
                (aIStack_90,local_a8 + -1,local_a4 + -1,*(int *)(extraout_x0 + 0x1e4),
                 *(int *)(extraout_x0 + 0x1e8));
      uVar2 = operator|(2,4);
      EntityFinder::GetEntitiesInGridSquares(avStack_80,uVar2,aIStack_90);
      RemoveUndamageableEntitiesFromList(this,(vector *)avStack_80);
      DamageInfo::DamageInfo(aDStack_68);
      operator|=(auStack_58,*(undefined8 *)(extraout_x0 + 0x30));
      local_60 = (float)FUN_03bf2570(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                     *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
      local_60 = local_60 * *(float *)(extraout_x0 + 0x1e0);
      local_a0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_80);
      local_98 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98),
            bVar1) {
        puVar3 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
        (**(code **)(*(long *)*puVar3 + 0x110))((long *)*puVar3,aDStack_68);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
      }
      DamageInfo::~DamageInfo(aDStack_68);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MissileToeLvl5Projectile::OnCollideGround() */

void __thiscall MissileToeLvl5Projectile::OnCollideGround(MissileToeLvl5Projectile *this)

{
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1b0] == (MissileToeLvl5Projectile)0x0) {
    EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
    Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)aVStack_18);
    Projectile::SetAcceleration((Projectile *)this,(SexyVector3 *)aVStack_18);
    DoExplosion(this,true);
    PlayLevel5TimeCountDownAnim(this);
    this[0x1b0] = (MissileToeLvl5Projectile)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* MissileToeLvl5Projectile::onProjectileAnimStop(std::string const&) */

void __thiscall
MissileToeLvl5Projectile::onProjectileAnimStop(MissileToeLvl5Projectile *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"missle_in");
  if (bVar1) {
    DoExplosion(this,false);
    PlayLevel5AfterExplosionAm(this);
    return;
  }
  bVar1 = std::operator==(param_1,"plantfood3");
  if (!bVar1) {
    return;
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}

