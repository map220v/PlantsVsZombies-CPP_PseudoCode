// Class: ZombieCardGameProtector


/* ZombieCardGameProtector::~ZombieCardGameProtector() */

void __thiscall ZombieCardGameProtector::~ZombieCardGameProtector(ZombieCardGameProtector *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1a280;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCardGameProtector_06a1acf0;
  ZombieFutureProtector::~ZombieFutureProtector((ZombieFutureProtector *)this);
  return;
}


/* non-virtual thunk to ZombieCardGameProtector::~ZombieCardGameProtector() */

void __thiscall ZombieCardGameProtector::~ZombieCardGameProtector(ZombieCardGameProtector *this)

{
  ~ZombieCardGameProtector(this + -0x10);
  return;
}


/* ZombieCardGameProtector::~ZombieCardGameProtector() */

void __thiscall ZombieCardGameProtector::~ZombieCardGameProtector(ZombieCardGameProtector *this)

{
  ~ZombieCardGameProtector(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieCardGameProtector::~ZombieCardGameProtector() */

void __thiscall ZombieCardGameProtector::~ZombieCardGameProtector(ZombieCardGameProtector *this)

{
  ~ZombieCardGameProtector(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCardGameProtector::StaticClassInit() */

void ZombieCardGameProtector::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieCardGameProtector");
    (*pcVar2)(plVar1,asStack_10,FUN_04f45b24,0x838,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCardGameProtector::StaticGetClass() */

long * ZombieCardGameProtector::StaticGetClass(void)

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
  uVar2 = ZombieFutureProtector::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCardGameProtector",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCardGameProtector::GetClass() const */

long * ZombieCardGameProtector::GetClass(void)

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
  uVar2 = ZombieFutureProtector::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCardGameProtector",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCardGameProtector::ZombieCardGameProtector() */

void __thiscall ZombieCardGameProtector::ZombieCardGameProtector(ZombieCardGameProtector *this)

{
  ZombieFutureProtector::ZombieFutureProtector((ZombieFutureProtector *)this);
  *(undefined ***)this = &PTR_GetClass_06a1a280;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCardGameProtector_06a1acf0;
  return;
}


/* ZombieCardGameProtector::StaticNew() */

ZombieCardGameProtector * ZombieCardGameProtector::StaticNew(void)

{
  ZombieCardGameProtector *this;
  
  this = ::operator_new(0x838);
  ZombieCardGameProtector(this);
  return this;
}


/* ZombieCardGameProtector::updateState_Walk() */

void __thiscall ZombieCardGameProtector::updateState_Walk(ZombieCardGameProtector *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *extraout_x0;
  undefined8 uVar6;
  ZombieFutureProtectorProps *pZVar7;
  float *pfVar8;
  float fVar9;
  
  Zombie::updateState_Walk((Zombie *)this);
  if ((((this[0x818] == (ZombieCardGameProtector)0x0) &&
       (fVar9 = (float)PVZ_T(), *(float *)(this + 0x820) < fVar9)) && (*(int *)(this + 0x81c) != 0))
     && (cVar2 = RealObject::IsOnTeam(this,1), cVar2 != '\0')) {
    pZVar7 = Zombie::GetProps<ZombieFutureProtectorProps>((Zombie *)this);
    fVar9 = *(float *)(pZVar7 + 0x224);
    iVar3 = (int)fVar9;
    iVar4 = BoardTransforms::GridToBoardSpaceX(iVar3);
    iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
    pfVar8 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    if ((float)(int)((float)iVar4 + (fVar9 - (float)iVar3) * (float)iVar5) <= *pfVar8) {
      ZombieFutureProtector::activateShield((ZombieFutureProtector *)this);
    }
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x828));
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828));
    nop();
    uVar6 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    (**(code **)(*extraout_x0 + 0x78))(extraout_x0,uVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCardGameProtector::spawnShield() */

void __thiscall ZombieCardGameProtector::spawnShield(ZombieCardGameProtector *this)

{
  undefined4 uVar1;
  long lVar2;
  ResourceInfo *this_00;
  ZombieFutureProtectorProps *pZVar3;
  Board *this_01;
  int local_28;
  int local_24;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_18,"protectorshield");
  lVar2 = Board::AddGridItem(this_01,asStack_18,local_28,local_24,1);
  std::string::~string(asStack_18);
  nop();
  if (lVar2 != 0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x828),(RtWeakPtrBase *)asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x828));
    pZVar3 = Zombie::GetProps<ZombieFutureProtectorProps>((Zombie *)this);
    GridItemProtectorShield::SetShieldSize
              ((GridItemProtectorShield *)this_00,*(float *)(pZVar3 + 0x228),
               *(float *)(pZVar3 + 0x22c));
    GridItemProtectorShield::SetShieldHP
              ((GridItemProtectorShield *)this_00,*(float *)(pZVar3 + 0x230));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)aRStack_20);
    GridItemProtectorShield::SetShieldParent((GridItemProtectorShield *)this_00,asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    uVar1 = FUN_04f459d4(*(undefined4 *)(this + 0x24));
    FUN_04f459d8(this_00 + 0x24,uVar1);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,0.0);
    GridItemProtectorShield::SetReverseShield
              ((GridItemProtectorShield *)this_00,true,(SexyVector3 *)asStack_18);
    std::string::string(asStack_18,"cardgame_protectorshieldsegment");
    GridItemProtectorShield::setShieldTypeStr(this_00,asStack_18);
    std::string::~string(asStack_18);
    nop();
    FUN_04f459e0(this_00 + 0x220);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

