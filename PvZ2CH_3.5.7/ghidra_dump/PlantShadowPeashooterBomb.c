// Class: PlantShadowPeashooterBomb


/* PlantShadowPeashooterBomb::~PlantShadowPeashooterBomb() */

void __thiscall
PlantShadowPeashooterBomb::~PlantShadowPeashooterBomb(PlantShadowPeashooterBomb *this)

{
  *(undefined ***)this = &PTR_GetClass_0673aaf0;
  *(undefined ***)(this + 0x10) = &PTR__PlantShadowPeashooterBomb_0673ace0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PlantShadowPeashooterBomb::~PlantShadowPeashooterBomb() */

void __thiscall
PlantShadowPeashooterBomb::~PlantShadowPeashooterBomb(PlantShadowPeashooterBomb *this)

{
  ~PlantShadowPeashooterBomb(this + -0x10);
  return;
}


/* PlantShadowPeashooterBomb::~PlantShadowPeashooterBomb() */

void __thiscall
PlantShadowPeashooterBomb::~PlantShadowPeashooterBomb(PlantShadowPeashooterBomb *this)

{
  ~PlantShadowPeashooterBomb(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantShadowPeashooterBomb::~PlantShadowPeashooterBomb() */

void __thiscall
PlantShadowPeashooterBomb::~PlantShadowPeashooterBomb(PlantShadowPeashooterBomb *this)

{
  ~PlantShadowPeashooterBomb(this + -0x10);
  return;
}


/* PlantShadowPeashooterBomb::PlantShadowPeashooterBomb() */

void __thiscall
PlantShadowPeashooterBomb::PlantShadowPeashooterBomb(PlantShadowPeashooterBomb *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0673aaf0;
  *(undefined ***)(this + 0x10) = &PTR__PlantShadowPeashooterBomb_0673ace0;
  return;
}


/* PlantShadowPeashooterBomb::StaticNew() */

PlantShadowPeashooterBomb * PlantShadowPeashooterBomb::StaticNew(void)

{
  PlantShadowPeashooterBomb *this;
  
  this = ::operator_new(0x1b8);
  PlantShadowPeashooterBomb(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowPeashooterBomb::StaticClassInit() */

void PlantShadowPeashooterBomb::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantShadowPeashooterBomb");
    (*pcVar2)(plVar1,asStack_10,FUN_03bc9408,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantShadowPeashooterBomb::StaticGetClass() */

long * PlantShadowPeashooterBomb::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantShadowPeashooterBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantShadowPeashooterBomb::GetClass() const */

long * PlantShadowPeashooterBomb::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantShadowPeashooterBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantShadowPeashooterBomb::InitializeBomb(PlantShadowPeashooter*, int) */

void __thiscall
PlantShadowPeashooterBomb::InitializeBomb
          (PlantShadowPeashooterBomb *this,PlantShadowPeashooter *param_1,int param_2)

{
  *(PlantShadowPeashooter **)(this + 0x1a8) = param_1;
  *(int *)(this + 0x1b0) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowPeashooterBomb::dealDamage(int) */

void __thiscall PlantShadowPeashooterBomb::dealDamage(PlantShadowPeashooterBomb *this,int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  PlantAction *pPVar8;
  RtObject *this_00;
  Plant *this_01;
  undefined8 uVar9;
  float *pfVar10;
  undefined8 *puVar11;
  RtWeakPtrBase *pRVar12;
  long *plVar13;
  RealObject *pRVar14;
  float fVar15;
  float fVar16;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_120 [8];
  undefined8 local_118;
  undefined8 local_110 [3];
  undefined8 local_f8 [3];
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  PlantAction aPStack_80 [44];
  int local_54;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_e0);
  pPVar8 = (PlantAction *)FUN_03bc5a90(*(undefined8 *)(lVar7 + 0x70),2);
  PlantAction::PlantAction(aPStack_80,pPVar8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_e0);
  lVar7 = Projectile::GetInstigator((Projectile *)this);
  if (lVar7 != 0) {
    this_00 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
    this_01 = Sexy::RtObject::Cast<Plant>(this_00);
    if (this_01 != (Plant *)0x0) {
      fVar15 = (float)FUN_03bc59c0(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                                   *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8)
                                  );
      fVar16 = (float)FUN_03bc59d0(*(undefined4 *)(this_01 + 0x3bc));
      local_d8 = (float)Plant::GetExtraDPSmodifier(this_01);
      local_d8 = fVar16 * fVar15 * local_d8;
      goto LAB_03bca6c4;
    }
  }
  local_d8 = 1.0;
LAB_03bca6c4:
  DamageInfo::DamageInfo((DamageInfo *)&local_e0);
  local_d8 = local_d8 * (float)local_54;
  uVar9 = operator|(0x4000000000,0x1000);
  local_d0 = operator|(uVar9,0x2000);
  local_e0 = *(undefined8 *)(*(long *)(this + 0x1a8) + 0x10);
  if (param_1 == 3) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_110);
    (**(code **)(**(long **)(this + 0x1a8) + 0xd0))
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               local_f8,*(long **)(this + 0x1a8),0);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    operator=((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              local_110,(vector *)local_f8);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               local_f8);
    local_118 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)local_110);
    local_f8[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)local_110);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_118,(__normal_iterator *)local_f8), bVar3)
    {
      pRVar12 = (RtWeakPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_118);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_120,pRVar12);
      pRVar14 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_120);
      cVar4 = RealObject::IsOnOpposingTeam(pRVar14,*(RealObject **)(*(long *)(this + 0x1a8) + 0x10))
      ;
      if (cVar4 != '\0') {
        plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_120);
        (**(code **)(*plVar13 + 0x110))(plVar13,(RtWeakPtr<Sexy::ResourceInfo> *)&local_e0);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_120);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_118);
    }
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               local_110);
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_f8);
    Plant::GetProps();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_110);
    lVar7 = FUN_03bc5a90(*(undefined8 *)(lVar7 + 0x70),(long)(param_1 + 1));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_110);
    iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar15 = *(float *)(lVar7 + 0x14);
    iVar2 = *(int *)(*(long *)(*(long *)(this + 0x1a8) + 0x10) + 0x110);
    iVar1 = (int)fVar15 / 2;
    uVar6 = operator|(2,4);
    pfVar10 = (float *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)this);
    Sexy::FastCurve::SetOutRange((FastCurve *)local_110,*pfVar10,pfVar10[1]);
    EntityFinder::GetEntitiesTouchingCircle2D
              ((float)iVar5 * SQRT(fVar15),
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_f8,uVar6,
               (RtWeakPtr<Sexy::ResourceInfo> *)local_110,iVar2 - iVar1,iVar1 + iVar2);
    local_118 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)local_f8);
    local_110[0] = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_f8);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_118,(__normal_iterator *)local_110), bVar3
          ) {
      puVar11 = (undefined8 *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_118);
      pRVar14 = (RealObject *)*puVar11;
      cVar4 = RealObject::IsOnOpposingTeam(pRVar14,*(RealObject **)(*(long *)(this + 0x1a8) + 0x10))
      ;
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pRVar14 + 0x110))(pRVar14,(RtWeakPtr<Sexy::ResourceInfo> *)&local_e0);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_118);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_f8);
  }
  DamageInfo::~DamageInfo((DamageInfo *)&local_e0);
  PlantAction::~PlantAction(aPStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowPeashooterBomb::OnCollideGround() */

void __thiscall PlantShadowPeashooterBomb::OnCollideGround(PlantShadowPeashooterBomb *this)

{
  undefined8 uVar1;
  int iVar2;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  iVar2 = *(int *)(this + 0x1b0);
  local_8 = ___stack_chk_guard;
  if (iVar2 == 3) {
    Sexy::Insets::Insets(aIStack_28,0xff,0xff,0xff,0xff);
    uVar1 = Effect_ScreenFade::Create();
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f800000,0,0x3f800000,uVar1,0,aIStack_18,2);
    Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),5,-6,0.0);
    iVar2 = *(int *)(this + 0x1b0);
  }
  dealDamage(this,iVar2);
  Projectile::OnCollideGround((Projectile *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

