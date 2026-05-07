// Class: ZombiePirateCaptain


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateCaptain::StaticClassInit() */

void ZombiePirateCaptain::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePirateCaptain");
    (*pcVar2)(plVar1,asStack_10,FUN_046ad320,0x818,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePirateCaptain::StaticGetClass() */

long * ZombiePirateCaptain::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePirateCaptain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePirateCaptain::GetClass() const */

long * ZombiePirateCaptain::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePirateCaptain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePirateCaptain::~ZombiePirateCaptain() */

void __thiscall ZombiePirateCaptain::~ZombiePirateCaptain(ZombiePirateCaptain *this)

{
  *(undefined ***)this = &PTR_GetClass_068ad4d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePirateCaptain_068adee8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePirateCaptain::~ZombiePirateCaptain() */

void __thiscall ZombiePirateCaptain::~ZombiePirateCaptain(ZombiePirateCaptain *this)

{
  ~ZombiePirateCaptain(this + -0x10);
  return;
}


/* ZombiePirateCaptain::~ZombiePirateCaptain() */

void __thiscall ZombiePirateCaptain::~ZombiePirateCaptain(ZombiePirateCaptain *this)

{
  ~ZombiePirateCaptain(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePirateCaptain::~ZombiePirateCaptain() */

void __thiscall ZombiePirateCaptain::~ZombiePirateCaptain(ZombiePirateCaptain *this)

{
  ~ZombiePirateCaptain(this + -0x10);
  return;
}


/* ZombiePirateCaptain::ZombiePirateCaptain() */

void __thiscall ZombiePirateCaptain::ZombiePirateCaptain(ZombiePirateCaptain *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068ad4d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePirateCaptain_068adee8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x808));
  return;
}


/* ZombiePirateCaptain::StaticNew() */

ZombiePirateCaptain * ZombiePirateCaptain::StaticNew(void)

{
  ZombiePirateCaptain *this;
  
  this = ::operator_new(0x818);
  ZombiePirateCaptain(this);
  return this;
}


/* ZombiePirateCaptain::CanParrotPlant(Sexy::RtWeakPtr<Plant>) */

byte ZombiePirateCaptain::CanParrotPlant(RtWeakPtr<Sexy::ResourceInfo> *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  Plant *pPVar5;
  undefined8 uVar6;
  
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  iVar3 = (**(code **)(*plVar4 + 0x180))();
  if (1 < iVar3) {
    pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    cVar1 = Plant::IsInvincible(pPVar5,false);
    if (cVar1 == '\0') {
      pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
      cVar1 = Plant::IsSwapping(pPVar5);
      if (cVar1 == '\0') {
        uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
        cVar1 = Plant::HasCondition(uVar6,0x1d);
        if (cVar1 == '\0') {
          pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
          bVar2 = Plant::IsConvertedByCondition(pPVar5);
          return bVar2 ^ 1;
        }
      }
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateCaptain::GetPlantToParrot(Sexy::RtWeakPtr<PlantGroup>) */

void __thiscall
ZombiePirateCaptain::GetPlantToParrot
          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
          ZombiePirateCaptain *this)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  PlantGroup::GetPlantAtLayer(aRStack_10,uVar3,0);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_18);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)a_Stack_18);
    cVar2 = CanParrotPlant(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (cVar2 == '\0') goto LAB_046acfe4;
LAB_046ad080:
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)param_1,(RtWeakPtrBase *)a_Stack_18);
  }
  else {
LAB_046acfe4:
    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    PlantGroup::GetPlantAtLayer(aRStack_10,uVar3,1);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_18);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)a_Stack_18);
      cVar2 = CanParrotPlant(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (cVar2 != '\0') goto LAB_046ad080;
    }
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* ZombiePirateCaptain::onLostHead() */

void __thiscall ZombiePirateCaptain::onLostHead(ZombiePirateCaptain *this)

{
  bool bVar1;
  RtObject *this_00;
  ZombiePirateParrot *pZVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x808));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
    pZVar2 = Sexy::RtObject::Cast<ZombiePirateParrot>(this_00);
    (**(code **)(*(long *)pZVar2 + 0xa18))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateCaptain::OnParrotReturned() */

void __thiscall ZombiePirateCaptain::OnParrotReturned(ZombiePirateCaptain *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  RtObject *this_01;
  ZombiePirateParrot *pZVar2;
  ZombiePirateCaptainProps *pZVar3;
  undefined4 uVar4;
  float fVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x808);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    ZombiePVPPirateCaptain::showParrot((ZombiePVPPirateCaptain *)this,true);
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pZVar2 = Sexy::RtObject::Cast<ZombiePirateParrot>(this_01);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    uVar4 = FUN_046accb4(*(undefined4 *)(pZVar2 + 0x280));
    *(undefined4 *)(this + 0x804) = uVar4;
    fVar5 = (float)PVZ_T();
    pZVar3 = Zombie::GetProps<ZombiePirateCaptainProps>((Zombie *)this);
    *(float *)(this + 0x800) = fVar5 + *(float *)(pZVar3 + 0x210);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateCaptain::onZombieInitialize() */

void __thiscall ZombiePirateCaptain::onZombieInitialize(ZombiePirateCaptain *this)

{
  string *psVar1;
  long lVar2;
  RtObject *this_00;
  ZombiePirateCaptainParrotProps *pZVar3;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_10,"pirate_captain_parrot");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar2 + 0xa0));
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  pZVar3 = Sexy::RtObject::Cast<ZombiePirateCaptainParrotProps_const>(this_00);
  fVar5 = *(float *)(pZVar3 + 0x18);
  fVar4 = (float)Zombie::GetExtraHitPointsmodifier((Zombie *)this);
  *(float *)(this + 0x804) = fVar4 * fVar5;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x808),(RtWeakPtr *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  this[0x811] = (ZombiePirateCaptain)0x0;
  this[0x810] = (ZombiePirateCaptain)0x1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateCaptain::releaseParrot(Plant*) */

void __thiscall ZombiePirateCaptain::releaseParrot(ZombiePirateCaptain *this,Plant *param_1)

{
  string *psVar1;
  SexyVector3 *this_00;
  long *plVar2;
  code *pcVar3;
  string asStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined4 local_30;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x811] = (ZombiePirateCaptain)0x1;
  ZombiePVPPirateCaptain::showParrot((ZombiePVPPirateCaptain *)this,false);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  local_2b = 1;
  local_30 = *(undefined4 *)(this + 0x50);
  plVar2 = *(long **)(gLawnApp + 0x9f0);
  pcVar3 = *(code **)(*plVar2 + 0x318);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_40,"pirate_captain_parrot");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  (*pcVar3)(plVar2,aRStack_38,0xfffffffb,(SpawnZombieParams *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  std::string::~string(asStack_40);
  nop();
  nop();
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)this);
  BoardEntity::PlaceOnBoard(this_00);
  Zombie::SetHitpoints((Zombie *)this_00,*(float *)(this + 0x804));
  (**(code **)(*(long *)this_00 + 0xa08))
            (this_00,*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x110));
  pcVar3 = *(code **)(*(long *)this_00 + 0xa10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)asStack_40);
  (*pcVar3)(this_00,aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x808),(RtWeakPtrBase *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateCaptain::findPlantForParrotToAttack() */

void __thiscall ZombiePirateCaptain::findPlantForParrotToAttack(ZombiePirateCaptain *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *p_Var1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  PlantGroup *pPVar8;
  Plant *this_00;
  BoardEntity *pBVar9;
  SharkMinion *pSVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var11;
  float *pfVar12;
  ResourceInfo *pRVar13;
  int extraout_w1;
  uint uVar14;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  RtWeakPtr *this_03;
  float fVar15;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  RtWeakPtr aRStack_98 [8];
  RtId aRStack_90 [8];
  Iterator aIStack_88 [48];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_58;
  do {
    p_Var1 = this_01 + 8;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (this_01);
    this_01 = p_Var1;
  } while (p_Var1 != (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_8);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_88,uVar6,0x2d);
  while( true ) {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_88);
    uVar14 = (uint)bVar2;
    if (!bVar2) break;
    Sexy::RtDbTable::Iterator::operator*(aIStack_88);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_a0,(RtWeakPtrBase *)aRStack_90);
    Sexy::RtId::~RtId(aRStack_90);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
    iVar4 = FUN_046accb8(*(undefined4 *)(lVar7 + 0xa8));
    if (-1 < iVar4) {
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
      iVar4 = FUN_046accb8(*(undefined4 *)(lVar7 + 0xa8));
      if (iVar4 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
        pPVar8 = (PlantGroup *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
        cVar3 = PlantGroup::Empty(pPVar8);
        if (cVar3 == '\0') {
          pPVar8 = (PlantGroup *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
          PlantGroup::GetTopPlant(pPVar8);
          this_00 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
          cVar3 = Plant::CanBeRangeTargeted(this_00);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
          if (cVar3 != '\0') {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_90,(RtWeakPtrBase *)aRStack_a0);
            GetPlantToParrot((ZombiePirateCaptain *)aRStack_98,aRStack_90);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
            bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_98);
            if (!bVar2) goto LAB_046adaa0;
            cVar3 = NewPVPUtils::IsPlayingNewPVP();
            if (cVar3 == '\0') {
LAB_046adaec:
              lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
              bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool
                                ((RtWeakPtr *)
                                 ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                                  &local_58 + (long)*(int *)(lVar7 + 0x110) * 8));
              if (bVar2) {
                lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
                p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)
                                        ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>
                                          *)&local_58 + (long)*(int *)(lVar7 + 0x110) * 8));
                pfVar12 = (float *)std::
                                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   ::_M_leftmost(p_Var11);
                fVar15 = *pfVar12;
                p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
                pfVar12 = (float *)std::
                                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   ::_M_leftmost(p_Var11);
                if (*pfVar12 <= fVar15) goto LAB_046adaa0;
              }
              lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
              Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                        ((RtWeakPtr<PowerPropertySheet> *)
                         ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                          &local_58 + (long)*(int *)(lVar7 + 0x110) * 8),aRStack_98);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
            }
            else {
              iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
              iVar5 = SharkMinion::getRow((SharkMinion *)this);
              Sexy::Point::Point((Point *)aRStack_90,iVar4,iVar5);
              cVar3 = NewPVPUtils::IsOppoentRegion((Point *)aRStack_90);
              if (cVar3 == '\0') {
                pBVar9 = (BoardEntity *)
                         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
                iVar4 = BoardEntity::CalcColumnPosition(pBVar9);
                pSVar10 = (SharkMinion *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
                iVar5 = SharkMinion::getRow(pSVar10);
                Sexy::Point::Point((Point *)aRStack_90,iVar4,iVar5);
                cVar3 = NewPVPUtils::IsOppoentRegion((Point *)aRStack_90);
                if (cVar3 == '\0') goto LAB_046adaec;
              }
              else {
                pBVar9 = (BoardEntity *)
                         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
                iVar4 = BoardEntity::CalcColumnPosition(pBVar9);
                pSVar10 = (SharkMinion *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
                iVar5 = SharkMinion::getRow(pSVar10);
                Sexy::Point::Point((Point *)aRStack_90,iVar4,iVar5);
                cVar3 = NewPVPUtils::IsOppoentRegion((Point *)aRStack_90);
                if (cVar3 != '\0') goto LAB_046adaec;
              }
LAB_046adaa0:
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
            }
          }
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
    Sexy::RtDbTable::Iterator::operator++(aIStack_88,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_88);
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
            ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)aIStack_88);
  this_03 = (RtWeakPtr *)&local_58;
  if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
    do {
      while (bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_03), bVar2) {
        uVar14 = uVar14 + 1;
        pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_03);
        ProbabilitySet<Plant*>::AddItem((ProbabilitySet<Plant*> *)aIStack_88,(Plant *)pRVar13,100);
        this_03 = this_03 + 8;
        if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) <= (int)uVar14) goto LAB_046adbf4;
      }
      uVar14 = uVar14 + 1;
      this_03 = this_03 + 8;
    } while ((int)uVar14 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  }
LAB_046adbf4:
  lVar7 = ProbabilitySet<Plant*>::GetSize((ProbabilitySet<Plant*> *)aIStack_88);
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = ProbabilitySet<Plant*>::PickItem((ProbabilitySet<Plant*> *)aIStack_88);
  }
  this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)&local_8;
  ProbabilitySet<Plant*>::~ProbabilitySet((ProbabilitySet<Plant*> *)aIStack_88);
  do {
    this_02 = this_02 + -8;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(this_02);
  } while (this_02 != (RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* ZombiePirateCaptain::checkForParrotRelease() */

void __thiscall ZombiePirateCaptain::checkForParrotRelease(ZombiePirateCaptain *this)

{
  char cVar1;
  Plant *pPVar2;
  ZombiePirateCaptainProps *pZVar3;
  float fVar4;
  
  cVar1 = RealObject::IsOnTeam(this,1);
  if (((cVar1 == '\0') && (this[0x810] != (ZombiePirateCaptain)0x0)) &&
     (fVar4 = (float)PVZ_T(), *(float *)(this + 0x800) < fVar4)) {
    pPVar2 = (Plant *)findPlantForParrotToAttack(this);
    if (pPVar2 != (Plant *)0x0) {
      releaseParrot(this,pPVar2);
      return;
    }
    fVar4 = (float)PVZ_T();
    pZVar3 = Zombie::GetProps<ZombiePirateCaptainProps>((Zombie *)this);
    *(float *)(this + 0x800) = fVar4 + *(float *)(pZVar3 + 0x214);
  }
  return;
}


/* ZombiePirateCaptain::onPlaceOnBoard() */

void __thiscall ZombiePirateCaptain::onPlaceOnBoard(ZombiePirateCaptain *this)

{
  ZombiePirateCaptainProps *pZVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  pZVar1 = Zombie::GetProps<ZombiePirateCaptainProps>((Zombie *)this);
  *(float *)(this + 0x800) = fVar2 + *(float *)(pZVar1 + 0x210);
  Zombie::onPlaceOnBoard((Zombie *)this);
  return;
}


/* ZombiePirateCaptain::updateState_Walk() */

void __thiscall ZombiePirateCaptain::updateState_Walk(ZombiePirateCaptain *this)

{
  checkForParrotRelease(this);
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* ZombiePirateCaptain::updateState_Eat() */

void __thiscall ZombiePirateCaptain::updateState_Eat(ZombiePirateCaptain *this)

{
  checkForParrotRelease(this);
  Zombie::updateState_Eat((Zombie *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateCaptain::onTakeFatalDamage(DamageInfo const&) */

void __thiscall
ZombiePirateCaptain::onTakeFatalDamage(ZombiePirateCaptain *this,DamageInfo *param_1)

{
  bool bVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x811] == (ZombiePirateCaptain)0x0) &&
     (bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x4000), !bVar1)) {
    std::string::string(asStack_10,"mutiny_ch");
    Achievement::Queue(asStack_10,100.0);
    std::string::~string(asStack_10);
    nop();
    Achievement::ShowAll();
    std::string::string(asStack_10,"mutiny_ch");
    Achievement::SubmitOneShotAchievement(asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  Zombie::onTakeFatalDamage((DamageInfo *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

