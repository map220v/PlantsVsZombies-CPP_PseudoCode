// Class: ZombieGong


/* ZombieGong::updateState_Gongging() */

void __thiscall ZombieGong::updateState_Gongging(ZombieGong *this)

{
  *(int *)(this + 0x808) = *(int *)(this + 0x808) + 1;
  return;
}


/* ZombieGong::onLostArm() */

void __thiscall ZombieGong::onLostArm(ZombieGong *this)

{
  this[0x800] = (ZombieGong)0x0;
  Zombie::setZombieState((Zombie *)this,1,0);
  return;
}


/* ZombieGong::~ZombieGong() */

void __thiscall ZombieGong::~ZombieGong(ZombieGong *this)

{
  *(undefined ***)this = &PTR_GetClass_068b8a90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieGong_068b94c0;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieGong::~ZombieGong() */

void __thiscall ZombieGong::~ZombieGong(ZombieGong *this)

{
  ~ZombieGong(this + -0x10);
  return;
}


/* ZombieGong::~ZombieGong() */

void __thiscall ZombieGong::~ZombieGong(ZombieGong *this)

{
  ~ZombieGong(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieGong::~ZombieGong() */

void __thiscall ZombieGong::~ZombieGong(ZombieGong *this)

{
  ~ZombieGong(this + -0x10);
  return;
}


/* ZombieGong::ZombieGong() */

void __thiscall ZombieGong::ZombieGong(ZombieGong *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068b8a90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieGong_068b94c0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x814));
  return;
}


/* ZombieGong::StaticNew() */

ZombieGong * ZombieGong::StaticNew(void)

{
  ZombieGong *this;
  
  this = ::operator_new(0x820);
  ZombieGong(this);
  return this;
}


/* ZombieGong::onZombieInitialize() */

void __thiscall ZombieGong::onZombieInitialize(ZombieGong *this)

{
  ZombieGongProps *pZVar1;
  undefined4 uVar2;
  
  this[0x800] = (ZombieGong)0x1;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x804) = uVar2;
  pZVar1 = Zombie::GetProps<ZombieGongProps>((Zombie *)this);
  *(undefined4 *)(this + 0x80c) = *(undefined4 *)(pZVar1 + 0x21c);
  pZVar1 = Zombie::GetProps<ZombieGongProps>((Zombie *)this);
  *(undefined4 *)(this + 0x810) = *(undefined4 *)(pZVar1 + 0x218);
  ValueRange::SetConstant((ValueRange *)(this + 0x814),0.0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGong::StaticClassInit() */

void ZombieGong::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieGong");
      (*pcVar4)(plVar1,asStack_150,FUN_046f72b4,0x820,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGong,void(ZombieGong::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieGong,void(ZombieGong::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieGong,void(ZombieGong::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_GONG_Gongging");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046f7058(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieGong::StaticGetClass() */

long * ZombieGong::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieGong",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGong::GetClass() const */

long * ZombieGong::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieGong",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGong::onPlaceOnBoard() */

void __thiscall ZombieGong::onPlaceOnBoard(ZombieGong *this)

{
  ZombieGongProps *pZVar1;
  float fVar2;
  
  Zombie::onPlaceOnBoard((Zombie *)this);
  pZVar1 = Zombie::GetProps<ZombieGongProps>((Zombie *)this);
  fVar2 = *(float *)(pZVar1 + 0x210);
  pZVar1 = Zombie::GetProps<ZombieGongProps>((Zombie *)this);
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x814),fVar2,*(float *)(pZVar1 + 0x214));
  fVar2 = (float)PVZ_T();
  *(undefined4 *)(this + 0x808) = 0;
  *(float *)(this + 0x804) = fVar2 + 8.0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGong::onUpdate() */

void __thiscall ZombieGong::onUpdate(ZombieGong *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ZombieHydraHeadAnimRig *this_00;
  long lVar5;
  string *psVar6;
  ZombieType *this_01;
  float *pfVar7;
  Zombie *this_02;
  int iVar8;
  long *plVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onUpdate((Zombie *)this);
  fVar12 = *(float *)(this + 0x804);
  fVar11 = (float)PVZ_T();
  if ((fVar12 <= fVar11) && (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) {
    fVar11 = (float)PVZ_T();
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar1 == '\0') {
      fVar12 = (float)ValueRange::GetRandomValue((ValueRange *)(this + 0x814));
    }
    else {
      fVar12 = *(float *)(this + 0x810);
    }
    *(float *)(this + 0x804) = fVar12 + fVar11;
    cVar1 = Zombie::isInState((Zombie *)this,0x1f);
    if ((((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)this,1), cVar1 != '\0')) &&
        (this[0x800] != (ZombieGong)0x0)) &&
       (cVar1 = RealObject::IsOnOpposingTeam(this,1), cVar1 != '\0')) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      std::string::string((string *)&local_18,"Play_Zomb_Kongfu_Gong_Strike");
      RealObject::PlayPositionalSound((RealObject *)this,(string *)&local_18,0.0);
      std::string::~string((string *)&local_18);
      nop();
      this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ZombieAnimRig_Gong::StartGongging((ZombieAnimRig_Gong *)this_00);
    }
  }
  cVar1 = Zombie::isInState((Zombie *)this,0x1f);
  if (((cVar1 != '\0') && (0x96 < *(int *)(this + 0x808))) &&
     (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) {
    *(undefined4 *)(this + 0x808) = 0;
    cVar1 = Zombie::HasCondition(this,1);
    if ((cVar1 == '\0') && (cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 != '\0')) {
      lVar5 = FUN_046f6d10(*(undefined8 *)(this + 0x550));
      local_48 = FUN_046f6ed8(*(undefined8 *)(lVar5 + 0x108));
      local_40 = FUN_046f6f28(*(undefined8 *)(lVar5 + 0x110));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
            bVar2) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
        if (0 < *(int *)(this + 0x80c)) {
          iVar8 = 0;
          do {
            while( true ) {
              psVar6 = (string *)
                       Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
              ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar6);
              cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_38);
              if (cVar1 == '\0') break;
              this_01 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
              ZombieType::EnsureResourceGroupsLoaded(this_01);
              std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
              _Hash_node(a_Stack_30);
              DVec3::DVec3((DVec3 *)&local_18);
              pfVar7 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)this);
              iVar3 = BoardTransforms::BoardSpaceToGridX(*pfVar7);
              iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
              if ((iVar4 <= iVar3) || (iVar3 < 0)) {
                iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
                iVar3 = iVar3 + -1;
              }
              iVar8 = iVar8 + 1;
              iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3 + -1);
              local_18 = (float)iVar3;
              iVar3 = BoardTransforms::BoardSpaceToGridY(pfVar7[1]);
              iVar3 = BoardTransforms::GridToBoardSpaceY(iVar3);
              local_14 = (float)iVar3;
              plVar9 = *(long **)(gLawnApp + 0x9f0);
              pcVar10 = *(code **)(*plVar9 + 0x318);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        (aRStack_28,(RtWeakPtrBase *)aRStack_38);
              (*pcVar10)(plVar9,aRStack_28,0xfffffffb,0);
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                        ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_30,
                         (RtWeakPtrBase *)aRStack_20);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
              this_02 = (Zombie *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_30);
              Zombie::RiseFromGround(this_02,(SexyVector3 *)&local_18,true);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_30);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
              if (*(int *)(this + 0x80c) <= iVar8) goto LAB_046f7a38;
            }
            iVar8 = iVar8 + 1;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          } while (iVar8 < *(int *)(this + 0x80c));
        }
LAB_046f7a38:
        std::move_iterator<SexyURL::KeyedValue*>::operator++
                  ((move_iterator<SexyURL::KeyedValue*> *)&local_48);
      }
    }
    else {
      cVar1 = Zombie::HasCondition(this,1);
      if (cVar1 == '\0') {
        (**(code **)(*(long *)this + 0x218))(this);
      }
    }
    Zombie::setZombieState((Zombie *)this,1,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGong::updateState_Die() */

void __thiscall ZombieGong::updateState_Die(ZombieGong *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0xcc),0x400);
  if (bVar1) {
    cVar2 = PopAnimRig::IsAnimFinished(*(undefined8 *)(this + 0xc0),*(undefined4 *)(this + 0xd0));
    if (cVar2 != '\0') {
      if (*(double *)(this + 400) < 10000.0) {
        *(undefined8 *)(this + 400) = 0x40c3880000000000;
        return;
      }
      if (10000.5 <= *(double *)(this + 400)) {
        pcVar4 = *(code **)(*(long *)this + 0x5e0);
        uVar3 = Zombie::getZombieStateSerialization((Zombie *)this);
        (*pcVar4)(this,uVar3);
        (**(code **)(*(long *)this + 0x48))(this);
      }
    }
  }
  else {
    cVar2 = EA::Text::GlyphCache_Memory::EndUpdate(*(TextureInfo **)(this + 0xc0));
    if (cVar2 != '\0') {
      (**(code **)(*(long *)this + 0x990))(this);
      return;
    }
  }
  return;
}


/* ZombieGong::onTakeFatalDamage(DamageInfo const&) */

void ZombieGong::onTakeFatalDamage(DamageInfo *param_1)

{
  Zombie::onTakeFatalDamage(param_1);
  param_1[0x800] = (DamageInfo)0x0;
  return;
}

