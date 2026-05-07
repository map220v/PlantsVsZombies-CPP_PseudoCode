// Class: ZombossRobotCarProjectile


/* ZombossRobotCarProjectile::~ZombossRobotCarProjectile() */

void __thiscall
ZombossRobotCarProjectile::~ZombossRobotCarProjectile(ZombossRobotCarProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06a10a00;
  *(undefined ***)(this + 0x10) = &PTR__ZombossRobotCarProjectile_06a10bf0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ZombossRobotCarProjectile::~ZombossRobotCarProjectile() */

void __thiscall
ZombossRobotCarProjectile::~ZombossRobotCarProjectile(ZombossRobotCarProjectile *this)

{
  ~ZombossRobotCarProjectile(this + -0x10);
  return;
}


/* ZombossRobotCarProjectile::~ZombossRobotCarProjectile() */

void __thiscall
ZombossRobotCarProjectile::~ZombossRobotCarProjectile(ZombossRobotCarProjectile *this)

{
  ~ZombossRobotCarProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombossRobotCarProjectile::~ZombossRobotCarProjectile() */

void __thiscall
ZombossRobotCarProjectile::~ZombossRobotCarProjectile(ZombossRobotCarProjectile *this)

{
  ~ZombossRobotCarProjectile(this + -0x10);
  return;
}


/* ZombossRobotCarProjectile::onProjectileInitialized() */

void __thiscall ZombossRobotCarProjectile::onProjectileInitialized(ZombossRobotCarProjectile *this)

{
  FUN_04f11ea4(0x3e20d97c,this + 0xc4);
  FUN_04f12ee4(this + 0xc0);
  return;
}


/* ZombossRobotCarProjectile::onUpdate(float) */

void ZombossRobotCarProjectile::onUpdate(float param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar1;
  long lVar2;
  float fVar3;
  
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  if (*pfVar1 < -50.0) {
    (**(code **)(*(long *)in_x0 + 0x48))();
  }
  lVar2 = Projectile::GetVelocity((Projectile *)in_x0);
  if (0.0 < *(float *)(lVar2 + 8)) {
    fVar3 = (float)FUN_04f11ea0(*(undefined4 *)(in_x0 + 0xc4));
    FUN_04f11ea4(fVar3 + 0.007853982,in_x0 + 0xc4);
    return;
  }
  return;
}


/* ZombossRobotCarProjectile::ZombossRobotCarProjectile() */

void __thiscall
ZombossRobotCarProjectile::ZombossRobotCarProjectile(ZombossRobotCarProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06a10a00;
  *(undefined ***)(this + 0x10) = &PTR__ZombossRobotCarProjectile_06a10bf0;
  DVec3::DVec3((DVec3 *)(this + 0x1a8));
  DVec3::DVec3((DVec3 *)(this + 0x1b4));
  return;
}


/* ZombossRobotCarProjectile::StaticNew() */

ZombossRobotCarProjectile * ZombossRobotCarProjectile::StaticNew(void)

{
  ZombossRobotCarProjectile *this;
  
  this = ::operator_new(0x1c0);
  ZombossRobotCarProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotCarProjectile::StaticClassInit() */

void ZombossRobotCarProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossRobotCarProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04f18c5c,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotCarProjectile::StaticGetClass() */

long * ZombossRobotCarProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossRobotCarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRobotCarProjectile::GetClass() const */

long * ZombossRobotCarProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossRobotCarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotCarProjectile::reBoundOut() */

void __thiscall ZombossRobotCarProjectile::reBoundOut(ZombossRobotCarProjectile *this)

{
  undefined8 *puVar1;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_10 = *(undefined4 *)(puVar1 + 1);
  local_18 = (float)*puVar1;
  _local_18 = CONCAT44((int)((ulong)*puVar1 >> 0x20),local_18 - 700.0);
  Projectile::LaunchAt((Projectile *)this,(SexyVector3 *)&local_18,300.0,2.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotCarProjectile::setEndPosition(Sexy::SexyVector3) */

void ZombossRobotCarProjectile::setEndPosition
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_4)

{
  undefined4 uVar1;
  SexyVector3 *pSVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_40 = param_1;
  local_3c = param_2;
  local_38 = param_3;
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_4);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x1a8),pSVar2);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x1b4),(SexyVector3 *)&local_40);
  local_28 = Sexy::SexyVector3::operator-
                       ((SexyVector3 *)(param_4 + 0x1b4),(SexyVector3 *)(param_4 + 0x1a8));
  local_24 = param_2;
  local_20 = param_3;
  local_18 = Sexy::SexyVector3::operator/((SexyVector3 *)&local_28,0.3);
  local_14 = param_2;
  local_10 = param_3;
  Projectile::SetVelocity((Projectile *)param_4,(SexyVector3 *)&local_18);
  uVar1 = BoardTransforms::BoardSpaceToGridY(*(float *)(param_4 + 0x1b8));
  uVar1 = Board::MakeRenderOrder(0x64960,uVar1,0);
  FUN_04f11e98(param_4 + 0x50,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotCarProjectile::crushEntities() */

void __thiscall ZombossRobotCarProjectile::crushEntities(ZombossRobotCarProjectile *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  Plant *pPVar7;
  GridItem *pGVar8;
  RtObject *this_00;
  code *pcVar9;
  undefined8 local_b0;
  undefined8 local_a8;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"pvz1_robot_throw_car");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  Sexy::Insets::Insets((Insets *)&local_90);
  local_88 = BoardConstants::GRIDSQUARE_WIDTH();
  local_88 = local_88 * 3;
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  local_84 = iVar3 << 1;
  local_8c = (int)(*(float *)(this + 0x1b8) - (float)iVar3);
  local_90 = (int)(*(float *)(this + 0x1b4) - (float)(local_88 / 2));
  uVar4 = operator|(4,1);
  EntityFinder::GetEntitiesInRectangle(avStack_80,uVar4,(Insets *)&local_90);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    this_00 = (RtObject *)*puVar6;
    pPVar7 = Sexy::RtObject::Cast<Plant>(this_00);
    if (pPVar7 == (Plant *)0x0) {
      pGVar8 = Sexy::RtObject::Cast<GridItem>(this_00);
      if ((pGVar8 != (GridItem *)0x0) &&
         (cVar2 = (**(code **)(*(long *)pGVar8 + 0x1f8))(), cVar2 != '\0')) {
        pcVar9 = *(code **)(*(long *)pGVar8 + 0x120);
        Sexy::Point::Point(aPStack_a0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x0,local_98,local_94,aDStack_68,0x200000,0,aPStack_a0,0);
        (*pcVar9)(pGVar8,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
    }
    else {
      pcVar9 = *(code **)(*(long *)pPVar7 + 0x120);
      Sexy::Point::Point(aPStack_a0,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_98,local_94,aDStack_68,0x200000,0,aPStack_a0,0)
      ;
      (*pcVar9)(pPVar7,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotCarProjectile::OnCollideRoof() */

void __thiscall ZombossRobotCarProjectile::OnCollideRoof(ZombossRobotCarProjectile *this)

{
  undefined4 uVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_40,"idle2");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  uVar1 = Projectile::OnCollideGround((Projectile *)this);
  crushEntities(this);
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),0,-10,0.15);
  reBoundOut(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

