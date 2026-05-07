// Class: GiantEelProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiantEelProjectile::StaticClassInit() */

void GiantEelProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GiantEelProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d3a87c,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GiantEelProjectile::StaticGetClass() */

long * GiantEelProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GiantEelProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiantEelProjectile::GetClass() const */

long * GiantEelProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"GiantEelProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiantEelProjectile::SetUpElectrification(float, float, float, std::string) */

void GiantEelProjectile::SetUpElectrification
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  *(undefined4 *)(param_4 + 0x1a8) = param_1;
  *(undefined4 *)(param_4 + 0x1ac) = param_2;
  *(undefined4 *)(param_4 + 0x1b0) = param_3;
  thunk_FUN_05475e00(param_4 + 0x1b8);
  return;
}


/* GiantEelProjectile::GiantEelProjectile() */

void __thiscall GiantEelProjectile::GiantEelProjectile(GiantEelProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069adf70;
  *(undefined ***)(this + 0x10) = &PTR__GiantEelProjectile_069ae160;
  Set8BytesTo0(this + 0x1b8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  return;
}


/* GiantEelProjectile::StaticNew() */

GiantEelProjectile * GiantEelProjectile::StaticNew(void)

{
  GiantEelProjectile *this;
  
  this = ::operator_new(0x1d8);
  GiantEelProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiantEelProjectile::electrifyWaterTiles() */

void __thiscall GiantEelProjectile::electrifyWaterTiles(GiantEelProjectile *this)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  SexyVector3 *pSVar4;
  undefined8 *puVar5;
  GridItemElectricTile *this_00;
  RtObject *this_01;
  GridItemElectricTile *this_02;
  Board *this_03;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar4 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  cVar1 = RealObject::IsOnWaterTile((RealObject *)this,pSVar4);
  if (cVar1 != '\0') {
    bVar3 = false;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    uVar7 = *(undefined4 *)(this + 0x1c);
    uVar6 = FUN_04d36338(*(undefined4 *)(this + 0x18),uVar7,*(undefined4 *)(this + 0x20));
    local_28 = CONCAT44(uVar7,uVar6);
    EntityFinder::GetEntitiesTouchingPoint
              (avStack_20,4,(__normal_iterator *)&local_28,0xffffffff,0xffffffff);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      if (((RtObject *)*puVar5 != (RtObject *)0x0) &&
         (bVar2 = Sexy::RtObject::IsA<GridItemElectricTile>((RtObject *)*puVar5), bVar2)) {
        bVar3 = true;
        nop();
        GridItemElectricTile::ResetTimer(this_00,*(float *)(this + 0x1a8));
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    if (!bVar3) {
      this_03 = *(Board **)(gLawnApp + 0x9f0);
      RealObject::CalcGridPosition();
      if ((((this_03 != (Board *)0x0) &&
           (cVar1 = FUN_04d361f8(this_03 + 0xf8,this_03 + 0xfc,(__normal_iterator *)&local_28),
           cVar1 != '\0')) &&
          (this_01 = (RtObject *)
                     Board::AddGridItem(this_03,(string *)(this + 0x1b8),(int)local_28,
                                        local_28._4_4_,1), this_01 != (RtObject *)0x0)) &&
         (bVar3 = Sexy::RtObject::IsA<GridItemElectricTile>(this_01), bVar3)) {
        nop();
        GridItemElectricTile::InitializeProperties
                  (this_02,*(float *)(this + 0x1a8),*(float *)(this + 0x1b0),
                   *(float *)(this + 0x1ac));
      }
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


/* GiantEelProjectile::onInitialized() */

void __thiscall GiantEelProjectile::onInitialized(GiantEelProjectile *this)

{
  size_t in_x2;
  
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  std::string::append((string *)(this + 0x1b8),"",in_x2);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1c0));
  return;
}


/* GiantEelProjectile::~GiantEelProjectile() */

void __thiscall GiantEelProjectile::~GiantEelProjectile(GiantEelProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069adf70;
  *(undefined ***)(this + 0x10) = &PTR__GiantEelProjectile_069ae160;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1c0));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1c0));
  std::string::~string((string *)(this + 0x1b8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to GiantEelProjectile::~GiantEelProjectile() */

void __thiscall GiantEelProjectile::~GiantEelProjectile(GiantEelProjectile *this)

{
  ~GiantEelProjectile(this + -0x10);
  return;
}


/* GiantEelProjectile::~GiantEelProjectile() */

void __thiscall GiantEelProjectile::~GiantEelProjectile(GiantEelProjectile *this)

{
  ~GiantEelProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GiantEelProjectile::~GiantEelProjectile() */

void __thiscall GiantEelProjectile::~GiantEelProjectile(GiantEelProjectile *this)

{
  ~GiantEelProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiantEelProjectile::onUpdate(float) */

void GiantEelProjectile::onUpdate(float param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  char cVar2;
  GiantEelProjectile *in_x0;
  RtWeakPtrBase *pRVar3;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(in_x0 + 0x1c0);
  local_8 = ___stack_chk_guard;
  electrifyWaterTiles(in_x0);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
    if (cVar2 == '\0') {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_20);
      local_20 = std::
                 vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
                 erase((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                        *)this,local_10);
    }
    else {
      FUN_04d38324((__normal_iterator *)&local_20);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiantEelProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall GiantEelProjectile::OnCollideEntity(GiantEelProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  RtWeakPtrBase *pRVar5;
  RtObject *this_01;
  GiantEelProjectileProps *pGVar6;
  Zombie *pZVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  RtWeakPtrBase aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) goto LAB_04d3aec8;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1c0);
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70), bVar1) {
    pRVar5 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,pRVar5);
    ToolPacketData::GetProps();
    cVar2 = Sexy::RtWeakPtrBase::operator==(aRStack_68,(RtWeakPtrBase *)aRStack_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      goto LAB_04d3aec8;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
  }
  this_01 = (RtObject *)Projectile::GetProps((Projectile *)this);
  if ((this_01 == (RtObject *)0x0) ||
     (pGVar6 = Sexy::RtObject::Cast<GiantEelProjectileProps>(this_01),
     pGVar6 == (GiantEelProjectileProps *)0x0)) goto LAB_04d3aec8;
  cVar2 = ClassRestrictionSet::IsIncluded
                    ((ClassRestrictionSet *)(pGVar6 + 0x1e0),(GameObject *)param_1);
  if (cVar2 == '\0') {
    pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if (pZVar7 != (Zombie *)0x0) {
      pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
      cVar2 = Zombie::CanTakeFatalDamage(pZVar7);
      if (cVar2 == '\0') goto LAB_04d3ae68;
    }
    pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if (pZVar7 == (Zombie *)0x0) goto LAB_04d3ae68;
    pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    iVar3 = Zombie::GetSizeType(pZVar7);
    if (1 < iVar3) goto LAB_04d3ae68;
    iVar3 = FUN_04d361e0(*(undefined4 *)(this + 0x70));
    iVar4 = FUN_04d361e4(*(undefined4 *)(param_1 + 0x50));
    if (*(int *)(&DAT_05755920 + (long)(iVar3 + -1) * 4) < iVar4) goto LAB_04d3ae68;
    DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
    (**(code **)(*(long *)this + 0x178))(this,(DamageInfo *)aRStack_68,0);
    (**(code **)(*(long *)param_1 + 0x120))(param_1,(DamageInfo *)aRStack_68);
    (**(code **)(*(long *)this + 0x168))(this,param_1);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  }
  else {
LAB_04d3ae68:
    (**(code **)(*(long *)this + 0x1b0))(this,param_1);
    (**(code **)(*(long *)this + 0x168))(this,param_1);
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)&local_70);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::push_back
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             this_00,(RtWeakPtr *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
LAB_04d3aec8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

