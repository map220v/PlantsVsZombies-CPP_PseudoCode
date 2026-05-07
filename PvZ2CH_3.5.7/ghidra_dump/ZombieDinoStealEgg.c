// Class: ZombieDinoStealEgg


/* ZombieDinoStealEgg::updateState_Eat() */

void __thiscall ZombieDinoStealEgg::updateState_Eat(ZombieDinoStealEgg *this)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if ((this_00 == (RtObject *)0x0) || (bVar1 = Sexy::RtObject::IsA<GridItemArmrack>(this_00), bVar1)
     ) {
    cVar2 = Zombie::IsSuspended((Zombie *)this);
    if (cVar2 == '\0') {
      Zombie::setZombieState((Zombie *)this,1,0);
      return;
    }
  }
  else {
    bVar1 = Sexy::RtObject::IsA<GridItemFlame>(this_00);
    if (!bVar1) {
      (**(code **)(*(long *)this + 0x958))(this,this_00);
      return;
    }
  }
  return;
}


/* ZombieDinoStealEgg::onFallGetUpAnimDone(std::string const&) */

void ZombieDinoStealEgg::onFallGetUpAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,1);
      return;
    }
  }
  return;
}


/* ZombieDinoStealEgg::~ZombieDinoStealEgg() */

void __thiscall ZombieDinoStealEgg::~ZombieDinoStealEgg(ZombieDinoStealEgg *this)

{
  *(undefined ***)this = &PTR_GetClass_068fb7d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDinoStealEgg_068fc218;
  std::string::~string((string *)(this + 0x800));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieDinoStealEgg::~ZombieDinoStealEgg() */

void __thiscall ZombieDinoStealEgg::~ZombieDinoStealEgg(ZombieDinoStealEgg *this)

{
  ~ZombieDinoStealEgg(this + -0x10);
  return;
}


/* ZombieDinoStealEgg::~ZombieDinoStealEgg() */

void __thiscall ZombieDinoStealEgg::~ZombieDinoStealEgg(ZombieDinoStealEgg *this)

{
  ~ZombieDinoStealEgg(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieDinoStealEgg::~ZombieDinoStealEgg() */

void __thiscall ZombieDinoStealEgg::~ZombieDinoStealEgg(ZombieDinoStealEgg *this)

{
  ~ZombieDinoStealEgg(this + -0x10);
  return;
}


/* ZombieDinoStealEgg::ZombieDinoStealEgg() */

void __thiscall ZombieDinoStealEgg::ZombieDinoStealEgg(ZombieDinoStealEgg *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068fb7d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDinoStealEgg_068fc218;
  Set8BytesTo0(this + 0x800);
  return;
}


/* ZombieDinoStealEgg::StaticNew() */

ZombieDinoStealEgg * ZombieDinoStealEgg::StaticNew(void)

{
  ZombieDinoStealEgg *this;
  
  this = ::operator_new(0x810);
  ZombieDinoStealEgg(this);
  return this;
}


/* ZombieDinoStealEgg::GetEggLayerName(std::string const&) */

void ZombieDinoStealEgg::GetEggLayerName(string *param_1)

{
  bool bVar1;
  string *in_x1;
  size_t in_x2;
  string *in_x8;
  
  Set8BytesTo0();
  bVar1 = std::operator==(in_x1,"dinoegg_bronto");
  if (bVar1) {
    std::string::append(in_x8,"dan1",in_x2);
    return;
  }
  bVar1 = std::operator==(in_x1,"dinoegg_zomshell");
  if (bVar1) {
    std::string::append(in_x8,"dan2",in_x2);
  }
  else {
    bVar1 = std::operator==(in_x1,"dinoegg_ptero");
    if (bVar1) {
      std::string::append(in_x8,"dan3",in_x2);
      return;
    }
    bVar1 = std::operator==(in_x1,"dinoegg_tyranno");
    if (bVar1) {
      std::string::append(in_x8,"dan4",in_x2);
    }
  }
  return;
}


/* ZombieDinoStealEgg::onThrowEggAnimDone(std::string const&) */

void ZombieDinoStealEgg::onThrowEggAnimDone(string *param_1)

{
  char cVar1;
  ZombieHydraHeadAnimRig *this;
  
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_DinoStealEgg::SetHasEgg((ZombieAnimRig_DinoStealEgg *)this,false);
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x20);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoStealEgg::ThrowEgg() */

void __thiscall ZombieDinoStealEgg::ThrowEgg(ZombieDinoStealEgg *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  RtObject *this_00;
  GridItemEgg *this_01;
  long lVar4;
  PopAnimRig *this_02;
  float *pfVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_03;
  int *piVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  uint local_44 [2];
  int local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  float local_28;
  float local_24;
  undefined4 local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c((string *)(this + 0x800));
  if (cVar1 == '\0') {
    BoardEntity::CalcGridPosition();
    this_00 = (RtObject *)
              Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(this + 0x800),0,0,1);
    this_01 = Sexy::RtObject::Cast<GridItemEgg>(this_00);
    if (this_01 != (GridItemEgg *)0x0) {
      GridItemEgg::SetLevelHitpoints(this_01,*(int *)(this + 0x50));
      Sexy::Insets::Insets(aIStack_18);
      lVar4 = Zombie::GetAnimRig((Zombie *)this);
      lVar4 = FUN_047fe1b8(*(undefined8 *)(lVar4 + 0x20));
      uVar9 = *(undefined4 *)(*(long *)(lVar4 + 0x50) + 0xc);
      lVar4 = Zombie::GetAnimRig((Zombie *)this);
      lVar4 = FUN_047fe1b8(*(undefined8 *)(lVar4 + 0x20));
      lVar7 = *(long *)(lVar4 + 0x50);
      lVar4 = Zombie::GetAnimRig((Zombie *)this);
      lVar4 = FUN_047fe1b8(*(undefined8 *)(lVar4 + 0x20));
      *(float *)(lVar7 + 0xc) = (float)((int)*(float *)(*(long *)(lVar4 + 0x50) + 0xc) + -1);
      this_02 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
      GetEggLayerName((string *)this);
      PopAnimRig::CalcSymbolRect(this_02,(string *)&local_28,(TRect *)aIStack_18);
      std::string::~string((string *)&local_28);
      lVar4 = Zombie::GetAnimRig((Zombie *)this);
      lVar4 = FUN_047fe1b8(*(undefined8 *)(lVar4 + 0x20));
      *(undefined4 *)(*(long *)(lVar4 + 0x50) + 0xc) = uVar9;
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      fVar10 = *pfVar5;
      Sexy::TRect<int>::GetCenter();
      iVar2 = FUN_047fe420(local_28);
      this_03 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_03);
      fVar8 = *(float *)(lVar4 + 0xc4);
      iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(local_3c);
      lVar4 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_01);
      EATextSquish::Vec3::Vec3
                ((Vec3 *)&local_38,(fVar10 + (float)iVar2) - fVar8,(float)iVar3,
                 *(float *)(lVar4 + 8));
      iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(local_38);
      iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(local_34);
      Sexy::Point::Point((Point *)&local_28,iVar2,iVar3);
      GridItem::SetGridLocationUnbounded((GridItem *)this_01,(string *)&local_28,1);
      (**(code **)(*(long *)this_00 + 0x78))(this_00,(Vec3 *)&local_38);
      DVec3::DVec3((DVec3 *)&local_28);
      local_44[0] = 0;
      piVar6 = eastl::max_alt<int>((int *)(this + 0x808),(int *)local_44);
      iVar2 = BoardTransforms::GridToBoardSpaceX(*piVar6);
      local_28 = (float)iVar2;
      iVar2 = BoardTransforms::GridToBoardSpaceY(local_3c);
      local_24 = (float)iVar2;
      local_20 = 0;
      local_30 = 0x42900000;
      GridItemEgg::FlyThroughAir(local_38,local_34,0x42900000,local_28,local_24,0,this_01);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoStealEgg::PlaceEgg() */

void __thiscall ZombieDinoStealEgg::PlaceEgg(ZombieDinoStealEgg *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  RtObject *this_00;
  GridItemEgg *this_01;
  float *pfVar4;
  PopAnimRig *this_02;
  RtWeakPtr<Sexy::ResourceInfo> *this_03;
  long lVar5;
  float fVar6;
  float fVar7;
  int local_34;
  Point aPStack_30 [8];
  float local_28;
  float local_24;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c((string *)(this + 0x800));
  if (cVar1 == '\0') {
    BoardEntity::CalcGridPosition();
    this_00 = (RtObject *)
              Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(this + 0x800),0,0,1);
    if ((this_00 != (RtObject *)0x0) &&
       (this_01 = Sexy::RtObject::Cast<GridItemEgg>(this_00), this_01 != (GridItemEgg *)0x0)) {
      GridItemEgg::SetLevelHitpoints(this_01,*(int *)(this + 0x50));
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      fVar7 = *pfVar4;
      Sexy::Insets::Insets(aIStack_18);
      this_02 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
      GetEggLayerName((string *)this);
      PopAnimRig::CalcSymbolRect(this_02,(string *)&local_28,(TRect *)aIStack_18);
      std::string::~string((string *)&local_28);
      Sexy::TRect<int>::GetCenter();
      iVar2 = FUN_047fe420(local_28);
      this_03 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_03);
      fVar6 = *(float *)(lVar5 + 0xc4);
      iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(local_34);
      lVar5 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_01);
      EATextSquish::Vec3::Vec3
                ((Vec3 *)&local_28,(fVar7 + (float)iVar2) - fVar6,(float)iVar3,*(float *)(lVar5 + 8)
                );
      iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(local_28);
      iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(local_24);
      Sexy::Point::Point(aPStack_30,iVar2,iVar3);
      GridItem::SetGridLocationUnbounded((GridItem *)this_01,aPStack_30,1);
      (**(code **)(*(long *)this_00 + 0x78))(this_00,(string *)&local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDinoStealEgg::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieDinoStealEgg::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  
  bVar1 = std::operator==(param_3,"die2");
  if (bVar1) {
    bVar1 = std::operator==(param_4,"use_action");
    if (bVar1) {
      pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
      cVar2 = FUN_047fe1bc(pZVar3[0x250]);
      if (cVar2 != '\0') {
        PlaceEgg((ZombieDinoStealEgg *)param_1);
        return;
      }
    }
  }
  else {
    bVar1 = std::operator==(param_3,"fell");
    if ((bVar1) && (bVar1 = std::operator==(param_4,"use_action"), bVar1)) {
      ThrowEgg((ZombieDinoStealEgg *)param_1);
      return;
    }
  }
  return;
}


/* ZombieDinoStealEgg::updateState_Walk() */

void __thiscall ZombieDinoStealEgg::updateState_Walk(ZombieDinoStealEgg *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  BoardEntity *this_00;
  ZombieHydraHeadAnimRig *pZVar4;
  ZombieDinoStealEggProps *pZVar5;
  
  cVar1 = Zombie::IsControlled((Zombie *)this);
  if (cVar1 == '\0') {
    this_00 = (BoardEntity *)(**(code **)(*(long *)this + 0x228))(this);
    if (this_00 != (BoardEntity *)0x0) {
      pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      cVar1 = FUN_047fe1bc(pZVar4[0x250]);
      if (cVar1 != '\0') {
        uVar2 = BoardEntity::CalcColumnPosition(this_00);
        *(undefined4 *)(this + 0x808) = uVar2;
        Zombie::setZombieState((Zombie *)this,0x1f,0);
        return;
      }
      Zombie::setZombieState((Zombie *)this,2);
      return;
    }
    pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    cVar1 = FUN_047fe1bc(pZVar4[0x250]);
    if (cVar1 != '\0') {
      iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
      pZVar5 = Zombie::GetProps<ZombieDinoStealEggProps>((Zombie *)this);
      if (iVar3 <= *(int *)(pZVar5 + 0x228)) {
        pZVar5 = Zombie::GetProps<ZombieDinoStealEggProps>((Zombie *)this);
        *(int *)(this + 0x808) = *(int *)(pZVar5 + 0x228) + -2;
        Zombie::setZombieState((Zombie *)this,0x1f,0);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoStealEgg::onEnterState_FallGetUp(ZombieState) */

void ZombieDinoStealEgg::onEnterState_FallGetUp(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onFallGetUpAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_DinoStealEgg::PlayFallGetUp((ZombieAnimRig_DinoStealEgg *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoStealEgg::onEnterState_ThrowEgg(ZombieState) */

void ZombieDinoStealEgg::onEnterState_ThrowEgg(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onThrowEggAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_DinoStealEgg::PlayThrowEgg((ZombieAnimRig_DinoStealEgg *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::string(asStack_58,"Play_Zomb_Dino_Extra_Egg_Fly");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoStealEgg::StaticClassInit() */

void ZombieDinoStealEgg::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieDinoStealEgg");
      (*pcVar4)(plVar1,asStack_150,FUN_04800284,0x810,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieDinoStealEgg,void(ZombieDinoStealEgg::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieDinoStealEgg,void(ZombieDinoStealEgg::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieDinoStealEgg,void(ZombieDinoStealEgg::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZDBS_ThrowEgg");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047fff80(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieDinoStealEgg,void(ZombieDinoStealEgg::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieDinoStealEgg,void(ZombieDinoStealEgg::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieDinoStealEgg,void(ZombieDinoStealEgg::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZDBS_FallGetUp");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047fff80(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieDinoStealEgg::StaticGetClass() */

long * ZombieDinoStealEgg::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDinoStealEgg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDinoStealEgg::GetClass() const */

long * ZombieDinoStealEgg::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDinoStealEgg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoStealEgg::PickDinoEgg() */

void ZombieDinoStealEgg::PickDinoEgg(void)

{
  bool bVar1;
  Zombie *in_x0;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar2;
  ZombieDinoStealEggProps *pZVar3;
  EntityWeight *pEVar4;
  size_t in_x2;
  string *in_x8;
  string asStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  string asStack_60 [8];
  EntityWeight aEStack_58 [16];
  undefined1 auStack_48 [8];
  undefined4 local_40;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(in_x0);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  FUN_05475d88(asStack_78,lVar2 + 8);
  Set8BytesTo0();
  bVar1 = std::operator==(asStack_78,"dino_stealegg");
  if (bVar1) {
    ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
    pZVar3 = Zombie::GetProps<ZombieDinoStealEggProps>(in_x0);
    local_70 = FUN_047fed5c(*(undefined8 *)(pZVar3 + 0x210));
    local_68 = FUN_047fedac(*(undefined8 *)(pZVar3 + 0x218));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar1)
    {
      pEVar4 = (EntityWeight *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
      EntityWeight::EntityWeight(aEStack_58,pEVar4);
      FUN_05475d88(asStack_60,auStack_48);
      ProbabilitySet<std::string>::AddItem
                ((ProbabilitySet<std::string> *)aPStack_38,asStack_60,local_40);
      std::string::~string(asStack_60);
      EntityWeight::~EntityWeight(aEStack_58);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_70);
    }
    ProbabilitySet<std::string>::PickItem();
    FUN_05474278();
    std::string::~string((string *)aEStack_58);
    ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_38);
  }
  else {
    bVar1 = std::operator==(asStack_78,"dino_stealptero");
    if (bVar1) {
      std::string::append(in_x8,"dinoegg_ptero",in_x2);
    }
    else {
      bVar1 = std::operator==(asStack_78,"dino_stealbronto");
      if (bVar1) {
        std::string::append(in_x8,"dinoegg_bronto",in_x2);
      }
      else {
        bVar1 = std::operator==(asStack_78,"dino_stealtyranno");
        if (bVar1) {
          std::string::append(in_x8,"dinoegg_tyranno",in_x2);
        }
        else {
          std::operator==(asStack_78,"dino_stealzomshell");
          std::string::append(in_x8,"dinoegg_zomshell",in_x2);
        }
      }
    }
  }
  std::string::~string(asStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoStealEgg::onZombieInitialize() */

void __thiscall ZombieDinoStealEgg::onZombieInitialize(ZombieDinoStealEgg *this)

{
  ZombieHydraHeadAnimRig *this_00;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onZombieInitialize((Zombie *)this);
  *(undefined4 *)(this + 0x808) = 0;
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  PickDinoEgg();
  thunk_FUN_05475e00(this + 0x800,asStack_18);
  GetEggLayerName((string *)this);
  ZombieAnimRig_DinoStealEgg::SetCarriedEgg((ZombieAnimRig_DinoStealEgg *)this_00,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoStealEgg::findTarget() */

void __thiscall ZombieDinoStealEgg::findTarget(ZombieDinoStealEgg *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ZombieHydraHeadAnimRig *pZVar4;
  Plant *extraout_x0;
  Plant *pPVar5;
  float fVar6;
  float fVar7;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  cVar1 = FUN_047fe1bc(pZVar4[0x250]);
  if (cVar1 == '\0') {
    pPVar5 = (Plant *)Zombie::findTarget((Zombie *)this);
  }
  else {
    cVar1 = Zombie::IsSuspended((Zombie *)this);
    if (cVar1 == '\0') {
      cVar1 = Zombie::IsIgnoreFindTarget((Zombie *)this);
      if (cVar1 == '\0') {
        fVar7 = *(float *)(this + 0x1c);
        fVar6 = (float)FUN_047fe27c(*(undefined4 *)(this + 0x18),fVar7,*(undefined4 *)(this + 0x20))
        ;
        Sexy::Insets::Insets((Insets *)&local_30);
        local_28 = BoardConstants::GRIDSQUARE_WIDTH();
        iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
        local_24 = (int)((double)iVar3 * 1.2);
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        local_30 = (int)(fVar6 - (float)iVar3 * 1.2);
        local_2c = (int)(fVar7 - (float)local_24);
        iVar3 = SharkMinion::getRow((SharkMinion *)this);
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
        (**(code **)(*(long *)this + 0xd0))((__normal_iterator *)&local_38,this);
        EntityFinder::GetEntitiesTouchingRectangle
                  (avStack_20,1,(Insets *)&local_30,(iVar3 - local_38._4_4_) + 1);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_20);
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
              bVar2) {
          std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
          nop();
          cVar1 = Zombie::WillTargetPlant((Zombie *)this,extraout_x0);
          pPVar5 = extraout_x0;
          if (cVar1 != '\0') goto LAB_04800ba0;
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
        }
        pPVar5 = (Plant *)0x0;
LAB_04800ba0:
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
        goto LAB_04800a18;
      }
    }
    pPVar5 = (Plant *)0x0;
  }
LAB_04800a18:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar5);
}

