// Class: PlantStephania


/* PlantStephania::FindTargetAndFire(PlantWeapon) */

undefined8 PlantStephania::FindTargetAndFire(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(long *)(param_1 + 0x10) + 200) != 10) {
    uVar1 = PlantFramework::FindTargetAndFire();
    return uVar1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStephania::StaticClassInit() */

void PlantStephania::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"JuggledProjectileTimer");
    (*pcVar3)(plVar2,asStack_10,FUN_040f7f68,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantStephania");
    (*pcVar3)(plVar2,asStack_10,FUN_040f8160,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantStephania::StaticGetClass() */

long * PlantStephania::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantStephania",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantStephania::GetClass() const */

long * PlantStephania::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantStephania",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStephania::almostDoneJuggling() */

bool __thiscall PlantStephania::almostDoneJuggling(PlantStephania *this)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0xb8);
  lVar1 = FUN_040f48b8(uVar3,*(undefined8 *)(this + 0xc0));
  bVar2 = true;
  if ((lVar1 != 0) && (bVar2 = false, lVar1 == 1)) {
    lVar1 = FUN_040f48e0(uVar3,0);
    return *(float *)(lVar1 + 8) - *(float *)(this + 0xd0) < _FUN_040f4ec4;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStephania::normalFire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantStephania::normalFire
          (PlantStephania *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  Plant *pPVar2;
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_Plant_StarFruit_Attack");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  pPVar2 = *(Plant **)(this + 0x10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,param_2);
  uVar1 = Plant::Fire(pPVar2,asStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStephania::firePlantfoodProjectile(Zombie*, PlantWeapon) */

void PlantStephania::firePlantfoodProjectile(PlantFramework *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  Plant *this;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this = *(Plant **)(param_1 + 0x10);
  local_8 = ___stack_chk_guard;
  cVar2 = Plant::GetAvatarEnable(this);
  uVar5 = 2;
  if (cVar2 == '\0') {
    uVar5 = 1;
  }
  *(undefined4 *)(this + 0x150) = uVar5;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  lVar3 = PlantFramework::Fire
                    (param_1,a_Stack_10,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  uVar4 = FUN_040f488c(*(undefined8 *)(lVar3 + 0xe0));
  uVar4 = operator|(uVar4,0x2000);
  FUN_040f4890((undefined8 *)(lVar3 + 0xe0),uVar4);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStephania::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantStephania::Fire
          (PlantStephania *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    uVar2 = normalFire(this,aRStack_10,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    uVar2 = firePlantfoodProjectile(this,uVar2,param_4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStephania::launchProjectile(Projectile*) */

void PlantStephania::launchProjectile(Projectile *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  Projectile *in_x1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x1 != (Projectile *)0x0) {
    this = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             **)(param_1 + 0x10);
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_leftmost(this);
    lVar2 = FUN_040f6878(this);
    ValueRange::GetRandomValue((ValueRange *)(lVar2 + 0x2d8));
    (**(code **)(*(long *)in_x1 + 0x78))();
    lVar2 = FUN_040f6878(*(undefined8 *)(param_1 + 0x10));
    local_38 = *(undefined8 *)(lVar2 + 0x2c0);
    local_30 = *(undefined4 *)(lVar2 + 0x2c8);
    lVar2 = FUN_040f6878(*(undefined8 *)(param_1 + 0x10));
    local_20 = *(undefined4 *)(lVar2 + 0x2d4);
    local_28 = *(undefined8 *)(lVar2 + 0x2cc);
    local_18[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&local_38,1.0);
    Projectile::SetVelocity(in_x1,(SexyVector3 *)local_18);
    Projectile::SetAcceleration(in_x1,(SexyVector3 *)&local_28);
    FUN_040f4ae8(in_x1 + 0xd4);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_18);
    Projectile::SetTarget(in_x1,(RtWeakPtr *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    uVar3 = operator|(0x40,0x80);
    uVar3 = operator|(uVar3,7);
    uVar3 = operator|(uVar3,0x100);
    iVar1 = operator|(uVar3,8);
    DangerRoomManager::SetMaxLevel((DangerRoomManager *)in_x1,iVar1);
    Projectile::SetInstigator(in_x1,*(BoardEntity **)(param_1 + 0x10));
    Projectile::NotifyDeflection((BoardEntity *)in_x1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStephania::setState(unsigned int) */

void __thiscall PlantStephania::setState(PlantStephania *this,uint param_1)

{
  UIEasyButtonWidget *this_00;
  PlantAnimRig_Stephania *extraout_x0;
  long *plVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(uint *)(this_00 + 200) != param_1) {
    *(uint *)(this_00 + 200) = param_1;
    if (param_1 == 4) {
      plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
      (**(code **)(*plVar1 + 0x118))();
      *(undefined1 *)(*(long *)(this + 0x10) + 0x158) = 1;
    }
    else if (param_1 == 10) {
      UIEasyButtonWidget::GetImageNormal(this_00);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_Stephania::Juggling(extraout_x0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      *(undefined1 *)(*(long *)(this + 0x10) + 0x158) = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantStephania::testForNeedToStartJuggling() */

undefined8 __thiscall PlantStephania::testForNeedToStartJuggling(PlantStephania *this)

{
  char cVar1;
  long lVar2;
  
  lVar2 = FUN_040f48b8(*(undefined8 *)(this + 0xb8),*(undefined8 *)(this + 0xc0));
  if ((lVar2 != 0) && (cVar1 = almostDoneJuggling(this), cVar1 == '\0')) {
    setState(this,10);
    return 1;
  }
  return 0;
}


/* PlantStephania::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantStephania::onAnimStoppedCallback(PlantStephania *this,string *param_1)

{
  long lVar1;
  
  lVar1 = FUN_05474374(param_1,&DAT_0561ca98,0);
  if (lVar1 != -1) {
    setState(this,4);
    return;
  }
  return;
}


/* PlantStephania::PlantStephania() */

void __thiscall PlantStephania::PlantStephania(PlantStephania *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067e0e70;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x28));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x58));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x88));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb8));
  return;
}


/* PlantStephania::StaticNew() */

PlantStephania * PlantStephania::StaticNew(void)

{
  PlantStephania *this;
  
  this = ::operator_new(0xd8);
  PlantStephania(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStephania::dropAllProjectiles() */

void __thiscall PlantStephania::dropAllProjectiles(PlantStephania *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  GridItemPoolEntry *pGVar2;
  long *plVar3;
  undefined8 local_28;
  undefined8 local_20;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xb8);
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    pGVar2 = (GridItemPoolEntry *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    GridItemPoolEntry::GridItemPoolEntry((GridItemPoolEntry *)aRStack_18,pGVar2);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar1) {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      (**(code **)(*plVar3 + 0x48))();
    }
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_18);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
  }
  std::vector<JuggledProjectileTimer,std::allocator<JuggledProjectileTimer>>::clear
            ((vector<JuggledProjectileTimer,std::allocator<JuggledProjectileTimer>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantStephania::~PlantStephania() */

void __thiscall PlantStephania::~PlantStephania(PlantStephania *this)

{
  *(undefined ***)this = &PTR_GetClass_067e0e70;
  std::vector<JuggledProjectileTimer,std::allocator<JuggledProjectileTimer>>::~vector
            ((vector<JuggledProjectileTimer,std::allocator<JuggledProjectileTimer>> *)(this + 0xb8))
  ;
  std::
  set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
  ::~set((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
          *)(this + 0x88));
  std::
  set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
  ::~set((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
          *)(this + 0x58));
  std::
  set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
  ::~set((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
          *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantStephania::~PlantStephania() */

void __thiscall PlantStephania::~PlantStephania(PlantStephania *this)

{
  ~PlantStephania(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStephania::UpdateUnconditionally() */

void __thiscall PlantStephania::UpdateUnconditionally(PlantStephania *this)

{
  long lVar1;
  RtWeakPtr *this_00;
  ResourceInfo *this_01;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  testForNeedToStartJuggling(this);
  fVar3 = (float)PVZ_Dt();
  uVar2 = *(undefined8 *)(this + 0xb8);
  fVar4 = *(float *)(this + 0xd0);
  *(float *)(this + 0xd0) = fVar3 + fVar4;
  lVar1 = FUN_040f48b8(uVar2,*(undefined8 *)(this + 0xc0));
  if ((lVar1 != 0) &&
     (this_00 = (RtWeakPtr *)FUN_040f48e0(uVar2,0), *(float *)(this_00 + 8) < fVar3 + fVar4)) {
    this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    if (this_01 != (ResourceInfo *)0x0) {
      (**(code **)(*(long *)this_01 + 0x80))(this_01,0);
      Projectile::SetPaused((Projectile *)this_01,false);
      launchProjectile((Projectile *)this);
    }
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0xb8));
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<JuggledProjectileTimer,std::allocator<JuggledProjectileTimer>>::erase
              ((vector<JuggledProjectileTimer,std::allocator<JuggledProjectileTimer>> *)
               (this + 0xb8),local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStephania::isProjectileArrivingAtCatchableAngle(Projectile*) */

void PlantStephania::isProjectileArrivingAtCatchableAngle(Projectile *param_1)

{
  bool bVar1;
  int iVar2;
  SexyVector3 *this;
  SexyVector3 *pSVar3;
  long lVar4;
  Projectile *in_x1;
  float fVar5;
  double dVar6;
  float in_s1;
  ProjectilePropertySheet *local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = (ProjectilePropertySheet *)Projectile::GetProps(in_x1);
  local_20 = std::
             set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
             ::find((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
                     *)(param_1 + 0x88),&local_28);
  local_18 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 0x88));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18);
  if (!bVar1) {
    this = (SexyVector3 *)Projectile::GetVelocity(in_x1);
    pSVar3 = (SexyVector3 *)Projectile::GetVelocityScale(in_x1);
    fVar5 = (float)Sexy::SexyVector3::operator*(this,pSVar3);
    local_18 = CONCAT44(in_s1,fVar5);
    if (fVar5 < 0.0) {
      iVar2 = FloatApproxEqual(0.0,fVar5);
      if (iVar2 == 0) {
        dVar6 = atan((double)(ABS(in_s1) / ABS(fVar5)));
        fVar5 = (float)dVar6;
      }
      else {
        fVar5 = 1.5707964;
      }
      lVar4 = FUN_040f6878(*(undefined8 *)(param_1 + 0x10));
      bVar1 = fVar5 < *(float *)(lVar4 + 0x2ec) * 0.008726646;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStephania::canJuggleProjectile(Projectile*) */

void __thiscall PlantStephania::canJuggleProjectile(PlantStephania *this,Projectile *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  ProjectilePropertySheet *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_040f47e8(*(undefined4 *)(param_1 + 0x24));
  cVar1 = RealObject::IsOnOpposingTeam(*(undefined8 *)(this + 0x10),uVar3);
  if ((cVar1 == '\0') ||
     (cVar1 = isProjectileArrivingAtCatchableAngle((Projectile *)this), cVar1 == '\0')) {
    bVar2 = false;
  }
  else {
    local_20 = (ProjectilePropertySheet *)Projectile::GetProps(param_1);
    local_18 = std::
               set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
               ::find((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
                       *)(this + 0x28),&local_20);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x28));
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStephania::canThrowProjectile(Projectile*) */

void __thiscall PlantStephania::canThrowProjectile(PlantStephania *this,Projectile *param_1)

{
  char cVar1;
  undefined1 uVar2;
  ProjectilePropertySheet *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = (ProjectilePropertySheet *)Projectile::GetProps(param_1);
  cVar1 = canJuggleProjectile(this,param_1);
  uVar2 = 0;
  if (cVar1 != '\0') {
    local_18 = std::
               set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
               ::find((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
                       *)(this + 0x58),&local_20);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x58));
    uVar2 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStephania::buildProjectileSets() */

void __thiscall PlantStephania::buildProjectileSets(PlantStephania *this)

{
  bool bVar1;
  long lVar2;
  string *psVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 local_38;
  wstring awStack_30 [8];
  RtWeakPtr aRStack_28 [8];
  ResourceInfo *local_20;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_040f6878(*(undefined8 *)(this + 0x10));
  local_40 = FUN_040f65a4(*(undefined8 *)(lVar2 + 0x2f0));
  local_38 = FUN_040f65f4(*(undefined8 *)(lVar2 + 0x2f8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::ToWString(psVar3);
    Sexy::RtName::RtName(aRStack_18,awStack_30);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar4,0xc,aRStack_18);
    local_20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
    std::
    set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
    ::insert((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
              *)(this + 0x28),(ProjectilePropertySheet **)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(awStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  lVar2 = FUN_040f6878(*(undefined8 *)(this + 0x10));
  local_40 = FUN_040f65a4(*(undefined8 *)(lVar2 + 0x308));
  local_38 = FUN_040f65f4(*(undefined8 *)(lVar2 + 0x310));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::ToWString(psVar3);
    Sexy::RtName::RtName(aRStack_18,awStack_30);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar4,0xc,aRStack_18);
    local_20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
    std::
    set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
    ::insert((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
              *)(this + 0x58),(ProjectilePropertySheet **)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(awStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  lVar2 = FUN_040f6878(*(undefined8 *)(this + 0x10));
  local_40 = FUN_040f65a4(*(undefined8 *)(lVar2 + 800));
  local_38 = FUN_040f65f4(*(undefined8 *)(lVar2 + 0x328));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::ToWString(psVar3);
    Sexy::RtName::RtName(aRStack_18,awStack_30);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar4,0xc,aRStack_18);
    local_20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
    std::
    set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
    ::insert((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
              *)(this + 0x88),(ProjectilePropertySheet **)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(awStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantStephania::Initialize() */

void __thiscall PlantStephania::Initialize(PlantStephania *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0xd0) = 0;
  buildProjectileSets(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStephania::storeProjectileInJuggleLimbo(Projectile*) */

void __thiscall
PlantStephania::storeProjectileInJuggleLimbo(PlantStephania *this,Projectile *param_1)

{
  long lVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  FishingZombieInitData aFStack_18 [8];
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
  Projectile::SetPaused(param_1,true);
  FishingZombieInitData::FishingZombieInitData(aFStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)aFStack_18,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  fVar2 = *(float *)(this + 0xd0);
  lVar1 = FUN_040f6878(*(undefined8 *)(this + 0x10));
  local_10 = *(float *)(lVar1 + 0x2e4) + fVar2;
  std::vector<JuggledProjectileTimer,std::allocator<JuggledProjectileTimer>>::push_back
            ((vector<JuggledProjectileTimer,std::allocator<JuggledProjectileTimer>> *)(this + 0xb8),
             (JuggledProjectileTimer *)aFStack_18);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aFStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantStephania::OverrideProjectileCollision(Projectile*) */

ulong __thiscall
PlantStephania::OverrideProjectileCollision(PlantStephania *this,Projectile *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = canJuggleProjectile(this,param_1);
  if ((uVar1 & 0xff) == 0) {
    uVar3 = PlantFramework::OverrideProjectileCollision((PlantFramework *)this,param_1);
    return uVar3;
  }
  uVar2 = canThrowProjectile(this,param_1);
  if ((uVar2 & 0xff) != 0) {
    uVar3 = FUN_040f48b8(*(undefined8 *)(this + 0xb8),*(undefined8 *)(this + 0xc0));
    lVar4 = FUN_040f6878(*(undefined8 *)(this + 0x10));
    if (uVar3 < (ulong)(long)*(int *)(lVar4 + 0x2e0)) {
      storeProjectileInJuggleLimbo(this,param_1);
      return (ulong)(uVar2 & 0xff);
    }
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return (ulong)(uVar1 & 0xff);
}

