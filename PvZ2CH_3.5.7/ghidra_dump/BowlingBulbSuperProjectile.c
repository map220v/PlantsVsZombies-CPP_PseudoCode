// Class: BowlingBulbSuperProjectile


/* BowlingBulbSuperProjectile::~BowlingBulbSuperProjectile() */

void __thiscall
BowlingBulbSuperProjectile::~BowlingBulbSuperProjectile(BowlingBulbSuperProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06807200;
  *(undefined ***)(this + 0x10) = &PTR__BowlingBulbSuperProjectile_068073f0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BowlingBulbSuperProjectile::~BowlingBulbSuperProjectile() */

void __thiscall
BowlingBulbSuperProjectile::~BowlingBulbSuperProjectile(BowlingBulbSuperProjectile *this)

{
  ~BowlingBulbSuperProjectile(this + -0x10);
  return;
}


/* BowlingBulbSuperProjectile::~BowlingBulbSuperProjectile() */

void __thiscall
BowlingBulbSuperProjectile::~BowlingBulbSuperProjectile(BowlingBulbSuperProjectile *this)

{
  ~BowlingBulbSuperProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BowlingBulbSuperProjectile::~BowlingBulbSuperProjectile() */

void __thiscall
BowlingBulbSuperProjectile::~BowlingBulbSuperProjectile(BowlingBulbSuperProjectile *this)

{
  ~BowlingBulbSuperProjectile(this + -0x10);
  return;
}


/* BowlingBulbSuperProjectile::BowlingBulbSuperProjectile() */

void __thiscall
BowlingBulbSuperProjectile::BowlingBulbSuperProjectile(BowlingBulbSuperProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (BowlingBulbSuperProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_06807200;
  *(undefined ***)(this + 0x10) = &PTR__BowlingBulbSuperProjectile_068073f0;
  DailySignActivityWidget::setIsCanAwardToday((DailySignActivityWidget *)this,true);
  return;
}


/* BowlingBulbSuperProjectile::StaticNew() */

BowlingBulbSuperProjectile * BowlingBulbSuperProjectile::StaticNew(void)

{
  BowlingBulbSuperProjectile *this;
  
  this = ::operator_new(0x1a8);
  BowlingBulbSuperProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingBulbSuperProjectile::StaticClassInit() */

void BowlingBulbSuperProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BowlingBulbSuperProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_041f83cc,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingBulbSuperProjectile::StaticGetClass() */

long * BowlingBulbSuperProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BowlingBulbSuperProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingBulbSuperProjectile::GetClass() const */

long * BowlingBulbSuperProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BowlingBulbSuperProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingBulbSuperProjectile::onSplitAnimaFinish() */

void __thiscall BowlingBulbSuperProjectile::onSplitAnimaFinish(BowlingBulbSuperProjectile *this)

{
  bool bVar1;
  undefined8 *puVar2;
  RtObject *this_00;
  BowlingBulbSuperProjectileProps *pBVar3;
  RtWeakPtrBase *pRVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Board *pBVar8;
  undefined4 uVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
                    /* WARNING: Load size is inaccurate */
  pBVar8._0_4_ = *puVar2;
  uVar7 = *(undefined4 *)((long)puVar2 + 4);
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pBVar3 = Sexy::RtObject::Cast<BowlingBulbSuperProjectileProps>(this_00);
  if (pBVar3 != (BowlingBulbSuperProjectileProps *)0x0) {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(pBVar3 + 0x1e0));
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(pBVar3 + 0x1e0));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1)
    {
      pRVar4 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,pRVar4);
      uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
      uVar5 = Projectile::GetInstigator((Projectile *)this);
      Board::AddProjectile(pBVar8._0_4_,uVar7,0,uVar6,aRStack_10,uVar5,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
  }
  (**(code **)(*(long *)this + 0x48))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingBulbSuperProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
BowlingBulbSuperProjectile::OnCollideEntity(BowlingBulbSuperProjectile *this,BoardEntity *param_1)

{
  undefined1 uVar1;
  PopAnimRig *pPVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  uVar1 = 0;
  local_8 = ___stack_chk_guard;
  if (this[0x1a5] == (BowlingBulbSuperProjectile)0x0) {
    this[0x1a5] = (BowlingBulbSuperProjectile)0x1;
    pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    if (pPVar2 != (PopAnimRig *)0x0) {
      Projectile::SetVelocity((Projectile *)this,0.0,0.0,0.0);
      std::string::string(asStack_58,"bullets_split");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onSplitAnimaFinish");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
    }
    uVar1 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

