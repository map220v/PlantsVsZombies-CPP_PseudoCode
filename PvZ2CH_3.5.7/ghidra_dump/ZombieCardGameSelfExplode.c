// Class: ZombieCardGameSelfExplode


/* ZombieCardGameSelfExplode::~ZombieCardGameSelfExplode() */

void __thiscall
ZombieCardGameSelfExplode::~ZombieCardGameSelfExplode(ZombieCardGameSelfExplode *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1b000;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCardGameSelfExplode_06a1ba30;
  ZombieSelfExplode::~ZombieSelfExplode((ZombieSelfExplode *)this);
  return;
}


/* non-virtual thunk to ZombieCardGameSelfExplode::~ZombieCardGameSelfExplode() */

void __thiscall
ZombieCardGameSelfExplode::~ZombieCardGameSelfExplode(ZombieCardGameSelfExplode *this)

{
  ~ZombieCardGameSelfExplode(this + -0x10);
  return;
}


/* ZombieCardGameSelfExplode::~ZombieCardGameSelfExplode() */

void __thiscall
ZombieCardGameSelfExplode::~ZombieCardGameSelfExplode(ZombieCardGameSelfExplode *this)

{
  ~ZombieCardGameSelfExplode(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieCardGameSelfExplode::~ZombieCardGameSelfExplode() */

void __thiscall
ZombieCardGameSelfExplode::~ZombieCardGameSelfExplode(ZombieCardGameSelfExplode *this)

{
  ~ZombieCardGameSelfExplode(this + -0x10);
  return;
}


/* ZombieCardGameSelfExplode::ZombieCardGameSelfExplode() */

void __thiscall
ZombieCardGameSelfExplode::ZombieCardGameSelfExplode(ZombieCardGameSelfExplode *this)

{
  ZombieSelfExplode::ZombieSelfExplode((ZombieSelfExplode *)this);
  *(undefined ***)this = &PTR_GetClass_06a1b000;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCardGameSelfExplode_06a1ba30;
  return;
}


/* ZombieCardGameSelfExplode::StaticNew() */

ZombieCardGameSelfExplode * ZombieCardGameSelfExplode::StaticNew(void)

{
  ZombieCardGameSelfExplode *this;
  
  this = ::operator_new(0x808);
  ZombieCardGameSelfExplode(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCardGameSelfExplode::StaticClassInit() */

void ZombieCardGameSelfExplode::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieCardGameSelfExplode");
    (*pcVar2)(plVar1,asStack_10,FUN_04f463e4,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCardGameSelfExplode::StaticGetClass() */

long * ZombieCardGameSelfExplode::StaticGetClass(void)

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
  uVar2 = ZombieSelfExplode::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCardGameSelfExplode",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCardGameSelfExplode::GetClass() const */

long * ZombieCardGameSelfExplode::GetClass(void)

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
  uVar2 = ZombieSelfExplode::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCardGameSelfExplode",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCardGameSelfExplode::ExplodeDirectly() */

void __thiscall ZombieCardGameSelfExplode::ExplodeDirectly(ZombieCardGameSelfExplode *this)

{
  char cVar1;
  int iVar2;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::isInState((Zombie *)this,4);
  if ((((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) &&
      (cVar1 = Zombie::IsSuspended((Zombie *)this), cVar1 == '\0')) &&
     (this[0x800] != (ZombieCardGameSelfExplode)0x0)) {
    this[0x800] = (ZombieCardGameSelfExplode)0x0;
    this[0x801] = (ZombieCardGameSelfExplode)0x1;
    iVar2 = (**(code **)(*(long *)this + 0x300))(this,2);
    if (iVar2 == 0) {
      __s = "Play_Zomb_Kongfu_SelfExplode_Surprise1";
    }
    else {
      __s = "Play_Zomb_Kongfu_SelfExplode_Surprise2";
    }
    std::string::string(asStack_10,__s);
    RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    Zombie::setZombieState((Zombie *)this,0x1f,0);
    ZombieSelfExplode::onBigBangAnimationDone((StandaloneEffect *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCardGameSelfExplode::updateState_Walk() */

void __thiscall ZombieCardGameSelfExplode::updateState_Walk(ZombieCardGameSelfExplode *this)

{
  long lVar1;
  
  if (this[0x800] == (ZombieCardGameSelfExplode)0x0) {
    ZombieSelfExplode::updateState_Walk((ZombieSelfExplode *)this);
    return;
  }
  lVar1 = (**(code **)(*(long *)this + 0x228))();
  if (lVar1 != 0) {
    ExplodeDirectly(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCardGameSelfExplode::DoSpecial() */

void __thiscall ZombieCardGameSelfExplode::DoSpecial(ZombieCardGameSelfExplode *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  EntityConditionTracker<Zombie,ZombieConditions> *this_00;
  undefined8 uVar12;
  undefined8 *puVar13;
  Plant *this_01;
  Zombie *this_02;
  GridItem *this_03;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined4 local_80;
  undefined4 local_7c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar8 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar18 = *pfVar8;
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar14 = (int)(pfVar8[1] - 30.0);
  lVar9 = *(long *)(gLawnApp + 0x9f0);
  iVar3 = (int)((float)(iVar3 / 2) + fVar18);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  lVar10 = FUN_04f461f4(*(undefined8 *)(this + 0x550));
  local_a8 = FUN_04f46630(*(undefined8 *)(lVar10 + 0x108));
  local_a0 = FUN_04f46680(*(undefined8 *)(lVar10 + 0x110));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0);
    if (!bVar1) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar11 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    iVar16 = piVar11[3];
    fVar18 = (float)Zombie::GetExtraDPSmodifier((Zombie *)this);
    this_00 = (EntityConditionTracker<Zombie,ZombieConditions> *)
              Zombie::GetConditionTracker((Zombie *)this);
    fVar17 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDPSModifier(this_00);
    uVar12 = operator|(0x20,0x400);
    uVar12 = operator|(uVar12,0x1000);
    Sexy::Point::Point((Point *)local_90,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)(fVar18 * fVar17 * (float)iVar16),local_80,local_7c,aDStack_68,uVar12,
               this,(Point *)local_90,0);
    if (*piVar11 == 0) {
      iVar16 = piVar11[1];
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      iVar5 = BoardTransforms::BoardSpaceToGridX(iVar3);
      iVar6 = BoardTransforms::BoardSpaceToGridY(iVar14);
      if (iVar16 == 0) {
        uVar12 = operator|(1,2);
        uVar7 = operator|(uVar12,4);
        Sexy::FastCurve::SetOutRange((FastCurve *)local_90,(float)iVar3,(float)iVar14);
        EntityFinder::GetEntitiesTouchingCircle2D
                  ((float)iVar4 * 1.44,(FastCurve *)&local_80,uVar7,(Point *)local_90,iVar6 + -1,
                   iVar6 + 1);
      }
      else if (iVar16 == 1) {
        uVar12 = operator|(1,2);
        uVar7 = operator|(uVar12,4);
        Sexy::FastCurve::SetOutRange((FastCurve *)local_90,(float)iVar3,(float)iVar14);
        EntityFinder::GetEntitiesTouchingCircle2D
                  ((float)iVar4 * 2.32,(FastCurve *)&local_80,uVar7,(Point *)local_90,iVar6 + -2,
                   iVar6 + 2);
      }
      else {
        if (iVar16 == 2) {
          uVar12 = operator|(1,2);
          uVar7 = operator|(uVar12,4);
          iVar15 = 9;
          iVar16 = 1;
          iVar5 = 0;
        }
        else {
          if (iVar16 != 3) goto LAB_04f468bc;
          uVar12 = operator|(1,2);
          uVar7 = operator|(uVar12,4);
          iVar16 = *(int *)(lVar9 + 0xfc);
          iVar15 = 1;
          iVar6 = 0;
        }
        Sexy::Insets::Insets((Insets *)local_90,iVar5,iVar6,iVar15,iVar16);
        EntityFinder::GetEntitiesInGridSquares((FastCurve *)&local_80,uVar7,(Point *)local_90);
      }
LAB_04f468bc:
      local_98 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_80);
      local_90[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_80);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_98,(__normal_iterator *)local_90), bVar1
            ) {
        puVar13 = (undefined8 *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
        this_01 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar13);
        this_02 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar13);
        this_03 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar13);
        if ((this_01 == (Plant *)0x0) ||
           (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this_01,(RealObject *)this),
           cVar2 == '\0')) {
          if ((this_02 == (Zombie *)0x0) ||
             (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this_02,(RealObject *)this),
             cVar2 == '\0')) {
            if (((this_03 != (GridItem *)0x0) &&
                (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this_03,(RealObject *)this),
                cVar2 != '\0')) &&
               (cVar2 = (**(code **)(*(long *)this_03 + 0x1f8))(this_03), cVar2 != '\0')) {
              (**(code **)(*(long *)this_03 + 0x110))(this_03,aDStack_68);
            }
          }
          else {
            (**(code **)(*(long *)this_02 + 0x110))(this_02,aDStack_68);
          }
        }
        else if ((0.0 < *(float *)(this_01 + 0xd8)) &&
                (cVar2 = Plant::IsInvincible(this_01,false), cVar2 == '\0')) {
          Plant::KillPlant(this_01,0,1,1);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
      }
      if ((char)piVar11[2] != '\0') {
        Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    }
    DamageInfo::~DamageInfo(aDStack_68);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_a8);
  } while( true );
}

