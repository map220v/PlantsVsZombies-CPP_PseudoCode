// Class: ZombieToygun


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieToygun::findPlantForAirbubbleToAttack() */

void __thiscall ZombieToygun::findPlantForAirbubbleToAttack(ZombieToygun *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var6;
  float *pfVar7;
  float *pfVar8;
  long *plVar9;
  Plant *this_00;
  ResourceInfo *pRVar10;
  int extraout_w1;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  RtId aRStack_90 [8];
  Iterator aIStack_88 [48];
  long local_58 [11];
  
  local_58[10] = ___stack_chk_guard;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  local_58[8] = 0;
  local_58[9] = 0;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_88,uVar4,0x2c);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_88);
    if (!bVar1) {
      lVar5 = 0;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_88);
      ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
                ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)aIStack_88);
      if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
        do {
          if ((Plant *)local_58[lVar5] != (Plant *)0x0) {
            ProbabilitySet<Plant*>::AddItem
                      ((ProbabilitySet<Plant*> *)aIStack_88,(Plant *)local_58[lVar5],100);
          }
          iVar3 = (int)lVar5;
          lVar5 = lVar5 + 1;
        } while (iVar3 + 1 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
      }
      lVar5 = ProbabilitySet<Plant*>::GetSize((ProbabilitySet<Plant*> *)aIStack_88);
      if (lVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = ProbabilitySet<Plant*>::PickItem((ProbabilitySet<Plant*> *)aIStack_88);
      }
      ProbabilitySet<Plant*>::~ProbabilitySet((ProbabilitySet<Plant*> *)aIStack_88);
      if (local_58[10] == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_88);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_98,(RtWeakPtrBase *)aRStack_90);
    Sexy::RtId::~RtId(aRStack_90);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
    if ((-1 < *(int *)(lVar5 + 0x110)) &&
       (lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98),
       *(int *)(lVar5 + 0x110) < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc))) {
      p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var6);
      pfVar8 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      if (*pfVar7 <= *pfVar8) {
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
        iVar3 = (**(code **)(*plVar9 + 0x180))();
        if (1 < iVar3) {
          this_00 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
          cVar2 = Plant::IsInvincible(this_00,false);
          if (cVar2 == '\0') {
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
            if (local_58[*(int *)(lVar5 + 0x110)] != 0) {
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
              pfVar7 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)local_58[*(int *)(lVar5 + 0x110)]);
              fVar11 = *pfVar7;
              p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
              pfVar7 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost(p_Var6);
              if (*pfVar7 <= fVar11) goto LAB_033e8588;
            }
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
            iVar3 = *(int *)(lVar5 + 0x110);
            pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_98);
            local_58[iVar3] = (long)pRVar10;
          }
        }
      }
    }
LAB_033e8588:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
    Sexy::RtDbTable::Iterator::operator++(aIStack_88,extraout_w1);
  } while( true );
}


/* ZombieToygun::onPlaceOnBoard() */

void __thiscall ZombieToygun::onPlaceOnBoard(ZombieToygun *this)

{
  ZombieToygun ZVar1;
  char cVar2;
  long lVar3;
  
  Zombie::updateGroundEffect((Zombie *)this);
  MessageRouter::Post<Zombie*,Zombie*>
            ((MessageRouter *)gMessageRouter,Message::ZombieAddedToBoard,(Zombie *)this);
  lVar3 = FUN_045b32dc(*(undefined8 *)(this + 0x550));
  Zombie::setupSkills((Zombie *)this,(vector *)(lVar3 + 0x1a0),*(float *)(lVar3 + 0x19c));
  Zombie::StartPerformingSkills((Zombie *)this);
  cVar2 = LawnApp::IsInModule(gLawnApp,4);
  if (cVar2 == '\0') {
    Zombie::setZombieState((Zombie *)this,1);
    ZVar1 = this[0x540];
  }
  else {
    Zombie::setZombieState((Zombie *)this,0x12,0);
    ZVar1 = this[0x540];
  }
  if (ZVar1 != (ZombieToygun)0x0) {
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  this[0x334] = (ZombieToygun)0x1;
  if (((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
      (lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar3 != 0)) &&
     (lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
     *(char *)(lVar3 + 0x114) != '\0')) {
    (**(code **)(*(long *)this + 0x438))(this);
  }
  cVar2 = NewPVPUtils::IsPlayingNewPVP();
  if (((cVar2 != '\0') && (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0)) &&
     (lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar3 != 0)) {
    (**(code **)(*(long *)this + 0x440))(this);
  }
  (**(code **)(*(long *)this + 0x858))(this);
  Zombie::initResilienceBar((Zombie *)this);
  return;
}


/* ZombieToygun::onTakeFatalDamage(DamageInfo const&) */

void ZombieToygun::onTakeFatalDamage(DamageInfo *param_1)

{
  if ((*(long *)(gLawnApp + 0x9f0) != 0) && (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0xdc8) != '\0')
     ) {
    Zombie::dropAllProjectiles((Zombie *)param_1);
    return;
  }
  return;
}


/* ZombieToygun::onSpawnAnimDone() */

void __thiscall ZombieToygun::onSpawnAnimDone(ZombieToygun *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieToygun::StaticClassInit() */

void ZombieToygun::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieToygun");
    (*pcVar2)(plVar1,asStack_10,FUN_04a75298,0x820,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieToygun::StaticGetClass() */

long * ZombieToygun::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieToygun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieToygun::GetClass() const */

long * ZombieToygun::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieToygun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieToygun::~ZombieToygun() */

void __thiscall ZombieToygun::~ZombieToygun(ZombieToygun *this)

{
  *(undefined ***)this = &PTR_GetClass_0693ad30;
  *(undefined ***)(this + 0x10) = &PTR__ZombieToygun_0693b748;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x818));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x810));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieToygun::~ZombieToygun() */

void __thiscall ZombieToygun::~ZombieToygun(ZombieToygun *this)

{
  ~ZombieToygun(this + -0x10);
  return;
}


/* ZombieToygun::~ZombieToygun() */

void __thiscall ZombieToygun::~ZombieToygun(ZombieToygun *this)

{
  ~ZombieToygun(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieToygun::~ZombieToygun() */

void __thiscall ZombieToygun::~ZombieToygun(ZombieToygun *this)

{
  ~ZombieToygun(this + -0x10);
  return;
}


/* ZombieToygun::ZombieToygun() */

void __thiscall ZombieToygun::ZombieToygun(ZombieToygun *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_0693ad30;
  *(undefined ***)(this + 0x10) = &PTR__ZombieToygun_0693b748;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x810));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x818));
  return;
}


/* ZombieToygun::StaticNew() */

ZombieToygun * ZombieToygun::StaticNew(void)

{
  ZombieToygun *this;
  
  this = ::operator_new(0x820);
  ZombieToygun(this);
  return this;
}


/* ZombieToygun::onApplyCondition(ZombieConditions) */

void __thiscall ZombieToygun::onApplyCondition(ZombieToygun *this,int param_2)

{
  bool bVar1;
  RtObject *this_00;
  ZombieAirbubble *this_01;
  undefined4 uVar2;
  
  if ((2 < param_2 - 0x42U) && (param_2 != 0x40)) {
    return;
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x818));
  if (!bVar1) {
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x808) = uVar2;
    return;
  }
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x818));
  this_01 = Sexy::RtObject::Cast<ZombieAirbubble>(this_00);
  ZombieAirbubble::OnToygunDied(this_01);
  return;
}


/* ZombieToygun::onLostHead() */

void __thiscall ZombieToygun::onLostHead(ZombieToygun *this)

{
  bool bVar1;
  RtObject *this_00;
  ZombieAirbubble *this_01;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x818));
  if (!bVar1) {
    return;
  }
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x818));
  this_01 = Sexy::RtObject::Cast<ZombieAirbubble>(this_00);
  ZombieAirbubble::OnToygunDied(this_01);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieToygun::OnAirbubbleLaunched() */

void __thiscall ZombieToygun::OnAirbubbleLaunched(ZombieToygun *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  ZombiePirateCaptainProps *pZVar2;
  RtObject *this_01;
  ZombieAirbubble *pZVar3;
  float fVar4;
  undefined4 uVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x818);
  this[0x800] = (ZombieToygun)0x0;
  local_8 = ___stack_chk_guard;
  fVar4 = (float)PVZ_T();
  pZVar2 = Zombie::GetProps<ZombiePirateCaptainProps>((Zombie *)this);
  *(float *)(this + 0x808) = fVar4 + *(float *)(pZVar2 + 0x210);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pZVar3 = Sexy::RtObject::Cast<ZombieAirbubble>(this_01);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    uVar5 = FUN_04a74758(*(undefined4 *)(pZVar3 + 0x280));
    *(undefined4 *)(this + 0x804) = uVar5;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieToygun::startSpawnAnim() */

void __thiscall ZombieToygun::startSpawnAnim(ZombieToygun *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_c8 [8];
  RtId aRStack_c0 [8];
  string asStack_b8 [8];
  RtMixedPtr aRStack_b0 [8];
  RtId aRStack_a8 [8];
  string asStack_a0 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_c8);
  std::string::string(asStack_b8,"onSpawnAnimDone");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_98,aRStack_c0,asStack_b8);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_b0);
  std::string::string(asStack_a0,"onShoot");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_50,aRStack_a8,asStack_a0);
  ZombieAnimRig_Toygun::PlayPowerAnim((ZombieAnimRig_Toygun *)pZVar1,aRStack_98,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_a0);
  nop();
  Sexy::RtId::~RtId(aRStack_a8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_98);
  std::string::~string(asStack_b8);
  nop();
  Sexy::RtId::~RtId(aRStack_c0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieToygun::onZombieInitialize() */

void __thiscall ZombieToygun::onZombieInitialize(ZombieToygun *this)

{
  string *psVar1;
  long lVar2;
  RtObject *this_00;
  ZombiePirateCaptainParrotProps *pZVar3;
  ZombiePirateCaptainProps *pZVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_10,"children_airbubble");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar2 + 0xa0));
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  pZVar3 = Sexy::RtObject::Cast<ZombiePirateCaptainParrotProps_const>(this_00);
  fVar6 = *(float *)(pZVar3 + 0x18);
  fVar5 = (float)Zombie::GetExtraHitPointsmodifier((Zombie *)this);
  *(float *)(this + 0x804) = fVar5 * fVar6;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x818),(RtWeakPtr *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x810),(RtWeakPtr *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  this[0x800] = (ZombieToygun)0x1;
  fVar5 = (float)PVZ_T();
  pZVar4 = Zombie::GetProps<ZombiePirateCaptainProps>((Zombie *)this);
  *(float *)(this + 0x808) = fVar5 + *(float *)(pZVar4 + 0x210);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieToygun::TakeShoot(Plant*) */

void __thiscall ZombieToygun::TakeShoot(ZombieToygun *this,Plant *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  PopAnimRig *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  string *psVar6;
  SexyVector3 *this_01;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  Vec3 aVStack_50 [16];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    lVar4 = Zombie::GetAnimRig((Zombie *)this);
    lVar4 = FUN_04a74754(*(undefined8 *)(lVar4 + 0x20));
    uVar1 = *(undefined4 *)(*(long *)(lVar4 + 0x50) + 0xc);
    lVar4 = Zombie::GetAnimRig((Zombie *)this);
    lVar4 = FUN_04a74754(*(undefined8 *)(lVar4 + 0x20));
    lVar7 = *(long *)(lVar4 + 0x50);
    lVar4 = Zombie::GetAnimRig((Zombie *)this);
    lVar4 = FUN_04a74754(*(undefined8 *)(lVar4 + 0x20));
    *(float *)(lVar7 + 0xc) = (float)((int)*(float *)(*(long *)(lVar4 + 0x50) + 0xc) + -1);
    Sexy::Insets::Insets((Insets *)&local_40);
    this_00 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    std::string::string((string *)&local_30,"paopao");
    PopAnimRig::CalcSymbolRect(this_00,(string *)&local_30,(TRect *)&local_40);
    std::string::~string((string *)&local_30);
    nop();
    lVar4 = Zombie::GetAnimRig((Zombie *)this);
    lVar4 = FUN_04a74754(*(undefined8 *)(lVar4 + 0x20));
    *(undefined4 *)(*(long *)(lVar4 + 0x50) + 0xc) = uVar1;
    fVar12 = *(float *)(this + 0x1c);
    fVar10 = (float)FUN_04a74768(*(undefined4 *)(this + 0x18),fVar12,*(undefined4 *)(this + 0x20));
    iVar2 = FUN_04a7482c(local_40 + local_38 / 2);
    pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
    fVar11 = *(float *)(lVar4 + 0xc4);
    iVar3 = FUN_04a7482c(local_3c + local_34 / 2);
    pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
    EATextSquish::Vec3::Vec3
              (aVStack_50,((fVar10 + 11.0) - fVar11) + (float)iVar2,
               ((fVar12 + 30.0) - *(float *)(lVar4 + 200)) + (float)iVar3,0.0);
    this[0x800] = (ZombieToygun)0x1;
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
    local_2b = 1;
    local_30 = *(undefined4 *)(this + 0x50);
    plVar8 = *(long **)(gLawnApp + 0x9f0);
    pcVar9 = *(code **)(*plVar8 + 0x318);
    psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_60,"children_airbubble");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar6);
    (*pcVar9)(plVar8,aRStack_58,0xfffffffb,(string *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    std::string::~string(asStack_60);
    nop();
    nop();
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)this);
    BoardEntity::PlaceOnBoard(this_01);
    Zombie::SetHitpoints((Zombie *)this_01,*(float *)(this + 0x804));
    ZombieAirbubble::SetTargetColAndRow
              ((ZombieAirbubble *)this_01,*(int *)(param_1 + 0x114),*(int *)(param_1 + 0x110));
    (**(code **)(*(long *)this_01 + 0x78))(this_01,aVStack_50);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_58,(RtWeakPtrBase *)asStack_60);
    ZombieAirbubble::SetToygun((ZombieAirbubble *)this_01,aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x818),(RtWeakPtrBase *)aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_58);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x810),(RtWeakPtr *)aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieToygun::onShoot() */

void __thiscall ZombieToygun::onShoot(ZombieToygun *this)

{
  ResourceInfo *pRVar1;
  
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x810));
  TakeShoot(this,(Plant *)pRVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieToygun::checkForAirbubbleRelease() */

void __thiscall ZombieToygun::checkForAirbubbleRelease(ZombieToygun *this)

{
  ZombieToygun ZVar1;
  char cVar2;
  long lVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = RealObject::IsOnTeam(this,1);
  if (cVar2 == '\0') {
    if (this[0x800] != (ZombieToygun)0x0) {
      fVar4 = (float)PVZ_T();
      if (*(float *)(this + 0x808) < fVar4) {
        OnAirbubbleLaunched(this);
        ZVar1 = this[0x800];
      }
      else {
        ZVar1 = this[0x800];
      }
      if (ZVar1 != (ZombieToygun)0x0) goto LAB_04a760dc;
    }
    lVar3 = findPlantForAirbubbleToAttack(this);
    if (lVar3 != 0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x810),(RtWeakPtrBase *)aRStack_10)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Zombie::setZombieState((Zombie *)this,3,0);
    }
  }
LAB_04a760dc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieToygun::updateState_Walk() */

void __thiscall ZombieToygun::updateState_Walk(ZombieToygun *this)

{
  checkForAirbubbleRelease(this);
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* ZombieToygun::updateState_Eat() */

void __thiscall ZombieToygun::updateState_Eat(ZombieToygun *this)

{
  checkForAirbubbleRelease(this);
  Zombie::updateState_Eat((Zombie *)this);
  return;
}


/* ZombieToygun::onEnterState_Attack(ZombieState) */

void ZombieToygun::onEnterState_Attack(ZombieToygun *param_1)

{
  ResourceInfo *pRVar1;
  
  Zombie::onEnterState_Attack();
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x810));
  if (pRVar1 != (ResourceInfo *)0x0) {
    startSpawnAnim(param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieToygun::onExitState_Attack(ZombieState) */

void __thiscall ZombieToygun::onExitState_Attack(ZombieToygun *this)

{
  long *plVar1;
  code *pcVar2;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig((Zombie *)this);
  pcVar2 = *(code **)(*plVar1 + 0x118);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar2)(plVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

