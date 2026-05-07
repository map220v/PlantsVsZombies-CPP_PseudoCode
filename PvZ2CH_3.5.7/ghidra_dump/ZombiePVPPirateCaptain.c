// Class: ZombiePVPPirateCaptain


/* ZombiePVPPirateCaptain::showParrot(bool) */

void __thiscall ZombiePVPPirateCaptain::showParrot(ZombiePVPPirateCaptain *this,bool param_1)

{
  ZombieHydraHeadAnimRig *this_00;
  
  if (this[0x810] != (ZombiePVPPirateCaptain)param_1) {
    this[0x810] = (ZombiePVPPirateCaptain)param_1;
    this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_PirateCaptain::ShowParrotLayers((ZombieAnimRig_PirateCaptain *)this_00,param_1);
    return;
  }
  return;
}


/* ZombiePVPPirateCaptain::onApplyCondition(ZombieConditions) */

void __thiscall ZombiePVPPirateCaptain::onApplyCondition(ZombiePVPPirateCaptain *this,uint param_2)

{
  bool bVar1;
  RtObject *this_00;
  ZombiePirateParrot *pZVar2;
  undefined4 uVar3;
  
  if ((param_2 & 0xfffffffd) != 0x40) {
    return;
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x808));
  if (!bVar1) {
    showParrot(this,false);
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x800) = uVar3;
    return;
  }
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
  pZVar2 = Sexy::RtObject::Cast<ZombiePirateParrot>(this_00);
  (**(code **)(*(long *)pZVar2 + 0xa18))();
  return;
}


/* ZombiePVPPirateCaptain::CancelZombieFood() */

void __thiscall ZombiePVPPirateCaptain::CancelZombieFood(ZombiePVPPirateCaptain *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x4c0))();
  if (cVar1 == '\0') {
    return;
  }
  Zombie::CancelZombieFood((Zombie *)this);
  return;
}


/* ZombiePVPPirateCaptain::ApplyZombieFood() */

void __thiscall ZombiePVPPirateCaptain::ApplyZombieFood(ZombiePVPPirateCaptain *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x4c0))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::ApplyZombieFood((Zombie *)this);
  return;
}


/* ZombiePVPPirateCaptain::onAnimationDone(std::string const&) */

void ZombiePVPPirateCaptain::onAnimationDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)param_1,0x1f), cVar1 != '\0')) {
    (**(code **)(*(long *)param_1 + 0x4b8))(param_1);
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
    *(undefined8 *)(param_1 + 0x830) = 0;
    *(undefined8 *)(param_1 + 0x838) = 0;
    *(undefined8 *)(param_1 + 0x840) = 0;
    *(undefined4 *)(param_1 + 0x848) = 0;
    return;
  }
  return;
}


/* ZombiePVPPirateCaptain::ZombiePVPPirateCaptain() */

void __thiscall ZombiePVPPirateCaptain::ZombiePVPPirateCaptain(ZombiePVPPirateCaptain *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06922390;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPPirateCaptain_06922dc0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x808));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x818));
  return;
}


/* ZombiePVPPirateCaptain::StaticNew() */

ZombiePVPPirateCaptain * ZombiePVPPirateCaptain::StaticNew(void)

{
  ZombiePVPPirateCaptain *this;
  
  this = ::operator_new(0x850);
  ZombiePVPPirateCaptain(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPPirateCaptain::OnParrotReturned() */

void __thiscall ZombiePVPPirateCaptain::OnParrotReturned(ZombiePVPPirateCaptain *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  RtObject *this_01;
  ZombiePirateParrot *pZVar2;
  ZombiePvpPirateCaptainProps *pZVar3;
  undefined4 uVar4;
  float fVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x808);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    showParrot(this,true);
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pZVar2 = Sexy::RtObject::Cast<ZombiePirateParrot>(this_01);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    uVar4 = FUN_049a3860(*(undefined4 *)(pZVar2 + 0x280));
    *(undefined4 *)(this + 0x804) = uVar4;
    fVar5 = (float)PVZ_T();
    pZVar3 = Zombie::GetProps<ZombiePvpPirateCaptainProps>((Zombie *)this);
    *(float *)(this + 0x800) = fVar5 + *(float *)(pZVar3 + 0x210);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPPirateCaptain::onLostHead() */

void __thiscall ZombiePVPPirateCaptain::onLostHead(ZombiePVPPirateCaptain *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *pRVar4;
  ZombiePirateParrot *pZVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x808));
  if (bVar1) {
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
    pZVar5 = Sexy::RtObject::Cast<ZombiePirateParrot>(pRVar4);
    (**(code **)(*(long *)pZVar5 + 0xa18))();
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x818);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      pZVar5 = Sexy::RtObject::Cast<ZombiePirateParrot>(pRVar4);
      (**(code **)(*(long *)pZVar5 + 0xa18))();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPPirateCaptain::~ZombiePVPPirateCaptain() */

void __thiscall ZombiePVPPirateCaptain::~ZombiePVPPirateCaptain(ZombiePVPPirateCaptain *this)

{
  *(undefined ***)this = &PTR_GetClass_06922390;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPPirateCaptain_06922dc0;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x818));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePVPPirateCaptain::~ZombiePVPPirateCaptain() */

void __thiscall ZombiePVPPirateCaptain::~ZombiePVPPirateCaptain(ZombiePVPPirateCaptain *this)

{
  ~ZombiePVPPirateCaptain(this + -0x10);
  return;
}


/* ZombiePVPPirateCaptain::~ZombiePVPPirateCaptain() */

void __thiscall ZombiePVPPirateCaptain::~ZombiePVPPirateCaptain(ZombiePVPPirateCaptain *this)

{
  ~ZombiePVPPirateCaptain(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePVPPirateCaptain::~ZombiePVPPirateCaptain() */

void __thiscall ZombiePVPPirateCaptain::~ZombiePVPPirateCaptain(ZombiePVPPirateCaptain *this)

{
  ~ZombiePVPPirateCaptain(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPPirateCaptain::onZombieInitialize() */

void __thiscall ZombiePVPPirateCaptain::onZombieInitialize(ZombiePVPPirateCaptain *this)

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
  this[0x84c] = (ZombiePVPPirateCaptain)0x0;
  this[0x810] = (ZombiePVPPirateCaptain)0x1;
  *(undefined8 *)(this + 0x830) = 0;
  *(undefined8 *)(this + 0x838) = 0;
  *(undefined8 *)(this + 0x840) = 0;
  *(undefined4 *)(this + 0x848) = 0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPPirateCaptain::releaseParrot(Plant*) */

void __thiscall ZombiePVPPirateCaptain::releaseParrot(ZombiePVPPirateCaptain *this,Plant *param_1)

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
  this[0x84c] = (ZombiePVPPirateCaptain)0x1;
  showParrot(this,false);
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
  FUN_049a3890(param_1 + 0x50c);
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
/* ZombiePVPPirateCaptain::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombiePVPPirateCaptain::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  int iVar1;
  bool bVar2;
  string *psVar3;
  SexyVector3 *this;
  long lVar4;
  SexyVector3 *this_00;
  SexyVector3 *this_01;
  long *plVar5;
  code *pcVar6;
  string asStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined4 local_30;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==(param_4,"use_action");
  if ((!bVar2) || (iVar1 = *(int *)(param_1 + 0x848), 2 < iVar1)) goto LAB_049a4668;
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 0x830) == 0) goto LAB_049a46a8;
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
    local_30 = *(undefined4 *)(param_1 + 0x50);
    local_2b = 1;
    plVar5 = *(long **)(gLawnApp + 0x9f0);
    pcVar6 = *(code **)(*plVar5 + 0x318);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_40,"pirate_captain_parrot");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
    (*pcVar6)(plVar5,aRStack_38,0xfffffffb,(SpawnZombieParams *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    std::string::~string(asStack_40);
    nop();
    nop();
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)param_1);
    BoardEntity::PlaceOnBoard(this);
    Zombie::SetHitpoints((Zombie *)this,*(float *)(param_1 + 0x804));
    pcVar6 = *(code **)(*(long *)this + 0xa10);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)asStack_40);
    (*pcVar6)(this,aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
    (**(code **)(*(long *)this + 0xa08))
              (this,*(undefined4 *)(*(long *)(param_1 + 0x830) + 0x114),
               *(undefined4 *)(*(long *)(param_1 + 0x830) + 0x110));
    lVar4 = *(long *)(param_1 + 0x830);
  }
  else if (iVar1 == 1) {
    if (*(long *)(param_1 + 0x838) == 0) goto LAB_049a46a8;
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
    local_2b = 1;
    local_30 = *(undefined4 *)(param_1 + 0x50);
    plVar5 = *(long **)(gLawnApp + 0x9f0);
    pcVar6 = *(code **)(*plVar5 + 0x318);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_40,"pirate_captain_parrot");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
    (*pcVar6)(plVar5,aRStack_38,0xfffffffb,(SpawnZombieParams *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    std::string::~string(asStack_40);
    nop();
    nop();
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)param_1);
    BoardEntity::PlaceOnBoard(this_00);
    Zombie::SetHitpoints((Zombie *)this_00,*(float *)(param_1 + 0x804));
    pcVar6 = *(code **)(*(long *)this_00 + 0xa10);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)asStack_40);
    (*pcVar6)(this_00,aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
    (**(code **)(*(long *)this_00 + 0xa08))
              (this_00,*(undefined4 *)(*(long *)(param_1 + 0x838) + 0x114),
               *(undefined4 *)(*(long *)(param_1 + 0x838) + 0x110));
    lVar4 = *(long *)(param_1 + 0x838);
  }
  else {
    if ((iVar1 != 2) || (*(long *)(param_1 + 0x840) == 0)) {
LAB_049a46a8:
      *(int *)(param_1 + 0x848) = iVar1 + 1;
      goto LAB_049a4668;
    }
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
    local_30 = *(undefined4 *)(param_1 + 0x50);
    local_2b = 1;
    plVar5 = *(long **)(gLawnApp + 0x9f0);
    pcVar6 = *(code **)(*plVar5 + 0x318);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_40,"pirate_captain_parrot");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
    (*pcVar6)(plVar5,aRStack_38,0xfffffffb,(SpawnZombieParams *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    std::string::~string(asStack_40);
    nop();
    nop();
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)param_1);
    BoardEntity::PlaceOnBoard(this_01);
    Zombie::SetHitpoints((Zombie *)this_01,*(float *)(param_1 + 0x804));
    pcVar6 = *(code **)(*(long *)this_01 + 0xa10);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)asStack_40);
    (*pcVar6)(this_01,aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
    (**(code **)(*(long *)this_01 + 0xa08))
              (this_01,*(undefined4 *)(*(long *)(param_1 + 0x840) + 0x114),
               *(undefined4 *)(*(long *)(param_1 + 0x840) + 0x110));
    lVar4 = *(long *)(param_1 + 0x840);
  }
  FUN_049a3890(lVar4 + 0x50c);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)asStack_40);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (param_1 + 0x818),(RtWeakPtr *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  *(int *)(param_1 + 0x848) = *(int *)(param_1 + 0x848) + 1;
LAB_049a4668:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPPirateCaptain::findPlantForParrotToBigAttack() */

void __thiscall ZombiePVPPirateCaptain::findPlantForParrotToBigAttack(ZombiePVPPirateCaptain *this)

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
  Plant *pPVar10;
  ResourceInfo *pRVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int extraout_w1;
  int extraout_w1_00;
  uint uVar14;
  Plant **ppPVar15;
  float fVar16;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_d0 [8];
  ResourceInfo *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  RtId aRStack_a8 [32];
  Iterator aIStack_88 [48];
  Plant *local_58 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x830) = 0;
  *(undefined8 *)(this + 0x838) = 0;
  *(undefined8 *)(this + 0x840) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_c0);
  local_58[0] = (Plant *)0x0;
  local_58[1] = (Plant *)0x0;
  local_58[2] = (Plant *)0x0;
  local_58[3] = (Plant *)0x0;
  local_58[4] = (Plant *)0x0;
  local_58[5] = (Plant *)0x0;
  local_58[6] = (Plant *)0x0;
  local_58[7] = (Plant *)0x0;
  local_58[8] = (Plant *)0x0;
  local_58[9] = (Plant *)0x0;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_88,uVar4,0x2c);
  while( true ) {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_88);
    uVar14 = (uint)bVar1;
    if (!bVar1) break;
    Sexy::RtDbTable::Iterator::operator*(aIStack_88);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_c8,(RtWeakPtrBase *)aRStack_a8);
    Sexy::RtId::~RtId(aRStack_a8);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_c8);
    if ((-1 < *(int *)(lVar5 + 0x110)) &&
       (lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_c8)
       , *(int *)(lVar5 + 0x110) < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc))) {
      p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_c8);
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var6);
      pfVar8 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      if (*pfVar7 <= *pfVar8) {
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)&local_c8);
        iVar3 = (**(code **)(*plVar9 + 0x180))();
        if (1 < iVar3) {
          pPVar10 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)&local_c8);
          cVar2 = Plant::IsInvincible(pPVar10,false);
          if (cVar2 == '\0') {
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_c8);
            cVar2 = FUN_049a385c(*(undefined1 *)(lVar5 + 0x50c));
            if (cVar2 == '\0') {
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_c8);
              if (local_58[*(int *)(lVar5 + 0x110)] != (Plant *)0x0) {
                lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_c8);
                pfVar7 = (float *)std::
                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                 *)local_58[*(int *)(lVar5 + 0x110)]);
                fVar16 = *pfVar7;
                p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_c8);
                pfVar7 = (float *)std::
                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::_M_leftmost(p_Var6);
                if (*pfVar7 <= fVar16) goto LAB_049a49a0;
              }
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_c8);
              iVar3 = *(int *)(lVar5 + 0x110);
              pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_c8);
              local_58[iVar3] = (Plant *)pRVar11;
            }
          }
        }
      }
    }
LAB_049a49a0:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_c8);
    Sexy::RtDbTable::Iterator::operator++(aIStack_88,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_88);
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
            ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)aIStack_88);
  ppPVar15 = local_58;
  if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
    do {
      if (*ppPVar15 != (Plant *)0x0) {
        std::vector<Plant*,std::allocator<Plant*>>::push_back
                  ((vector<Plant*,std::allocator<Plant*>> *)&local_c0,ppPVar15);
      }
      uVar14 = uVar14 + 1;
      ppPVar15 = ppPVar15 + 1;
    } while ((int)uVar14 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  }
  uVar4 = local_c0;
  uVar12 = FUN_049a387c(local_c0,local_b8);
  if (uVar12 < 3) {
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable((Iterator *)aRStack_a8,uVar4,0x2c);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aRStack_a8), bVar1)
    {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_a8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_d0,(RtWeakPtrBase *)&local_c8);
      Sexy::RtId::~RtId((RtId *)&local_c8);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_d0);
      if ((-1 < *(int *)(lVar5 + 0x110)) &&
         (lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_d0),
         *(int *)(lVar5 + 0x110) < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc))) {
        p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_d0);
        pfVar7 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(p_Var6);
        pfVar8 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
        if (*pfVar7 <= *pfVar8) {
          plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_d0);
          iVar3 = (**(code **)(*plVar9 + 0x180))();
          if (1 < iVar3) {
            pPVar10 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_d0);
            cVar2 = Plant::IsInvincible(pPVar10,false);
            if (cVar2 == '\0') {
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_d0);
              cVar2 = FUN_049a385c(*(undefined1 *)(lVar5 + 0x50c));
              if ((cVar2 == '\0') &&
                 (lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_d0),
                 local_58[*(int *)(lVar5 + 0x110)] != (Plant *)0x0)) {
                pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_d0);
                lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_d0);
                if (pRVar11 != (ResourceInfo *)local_58[*(int *)(lVar5 + 0x110)]) {
                  local_c8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                                       ((RtWeakPtr *)aRStack_d0);
                  std::vector<Plant*,std::allocator<Plant*>>::push_back
                            ((vector<Plant*,std::allocator<Plant*>> *)&local_c0,(Plant **)&local_c8)
                  ;
                }
              }
            }
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_d0);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_a8,extraout_w1_00);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_a8);
    uVar12 = FUN_049a387c(local_c0,local_b8);
    uVar4 = local_c0;
    if (uVar12 == 0) goto LAB_049a4bb0;
  }
  puVar13 = (undefined8 *)FUN_049a3888(uVar4,0);
  *(undefined8 *)(this + 0x830) = *puVar13;
  if (1 < uVar12) {
    puVar13 = (undefined8 *)FUN_049a3888(uVar4,1);
    *(undefined8 *)(this + 0x838) = *puVar13;
    if (uVar12 != 2) {
      puVar13 = (undefined8 *)FUN_049a3888(uVar4,2);
      *(undefined8 *)(this + 0x840) = *puVar13;
    }
  }
LAB_049a4bb0:
  ProbabilitySet<Plant*>::~ProbabilitySet((ProbabilitySet<Plant*> *)aIStack_88);
  std::vector<Plant*,std::allocator<Plant*>>::~vector
            ((vector<Plant*,std::allocator<Plant*>> *)&local_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPPirateCaptain::onEnterState_BigCasting(ZombieState) */

void ZombiePVPPirateCaptain::onEnterState_BigCasting(ZombiePVPPirateCaptain *param_1)

{
  bool bVar1;
  RtObject *this;
  ZombiePirateParrot *pZVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x808));
  if (bVar1) {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x808));
    pZVar2 = Sexy::RtObject::Cast<ZombiePirateParrot>(this);
    (**(code **)(*(long *)pZVar2 + 0xa18))();
  }
  findPlantForParrotToBigAttack(param_1);
  showParrot(param_1,true);
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_PirateCaptain::StartBigCasting((ZombieAnimRig_PirateCaptain *)pZVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::string(asStack_58,"Play_Zomb_PVP_Captian_Skill");
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
/* ZombiePVPPirateCaptain::StaticClassInit() */

void ZombiePVPPirateCaptain::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombiePVPPirateCaptain");
      (*pcVar4)(plVar1,asStack_150,FUN_049a5134,0x850,0);
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
  Delegate1<ZombiePVPPirateCaptain,void(ZombiePVPPirateCaptain::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombiePVPPirateCaptain,void(ZombiePVPPirateCaptain::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePVPPirateCaptain,void(ZombiePVPPirateCaptain::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PVPPIRATECAPTAIN_BigCasting");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_049a4ed8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombiePVPPirateCaptain::StaticGetClass() */

long * ZombiePVPPirateCaptain::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePVPPirateCaptain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPPirateCaptain::GetClass() const */

long * ZombiePVPPirateCaptain::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePVPPirateCaptain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPPirateCaptain::findPlantForParrotToAttack() */

void __thiscall ZombiePVPPirateCaptain::findPlantForParrotToAttack(ZombiePVPPirateCaptain *this)

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
            cVar2 = FUN_049a385c(*(undefined1 *)(lVar5 + 0x50c));
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
                if (*pfVar7 <= fVar11) goto LAB_049a558c;
              }
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
              iVar3 = *(int *)(lVar5 + 0x110);
              pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_98);
              local_58[iVar3] = (long)pRVar10;
            }
          }
        }
      }
    }
LAB_049a558c:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
    Sexy::RtDbTable::Iterator::operator++(aIStack_88,extraout_w1);
  } while( true );
}


/* ZombiePVPPirateCaptain::checkForParrotRelease() */

void __thiscall ZombiePVPPirateCaptain::checkForParrotRelease(ZombiePVPPirateCaptain *this)

{
  char cVar1;
  long lVar2;
  Plant *pPVar3;
  ZombiePvpPirateCaptainProps *pZVar4;
  float fVar5;
  
  cVar1 = RealObject::IsOnTeam(this,1);
  if ((((cVar1 == '\0') && (this[0x810] != (ZombiePVPPirateCaptain)0x0)) &&
      (fVar5 = (float)PVZ_T(), *(float *)(this + 0x800) < fVar5)) &&
     (lVar2 = FUN_049a3870(*(undefined8 *)(this + 0x818),*(undefined8 *)(this + 0x820)), lVar2 == 0)
     ) {
    pPVar3 = (Plant *)findPlantForParrotToAttack(this);
    if (pPVar3 != (Plant *)0x0) {
      releaseParrot(this,pPVar3);
      return;
    }
    fVar5 = (float)PVZ_T();
    pZVar4 = Zombie::GetProps<ZombiePvpPirateCaptainProps>((Zombie *)this);
    *(float *)(this + 0x800) = fVar5 + *(float *)(pZVar4 + 0x214);
  }
  return;
}


/* ZombiePVPPirateCaptain::onPlaceOnBoard() */

void __thiscall ZombiePVPPirateCaptain::onPlaceOnBoard(ZombiePVPPirateCaptain *this)

{
  ZombiePvpPirateCaptainProps *pZVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  pZVar1 = Zombie::GetProps<ZombiePvpPirateCaptainProps>((Zombie *)this);
  *(float *)(this + 0x800) = fVar2 + *(float *)(pZVar1 + 0x210);
  Zombie::onPlaceOnBoard((Zombie *)this);
  return;
}


/* ZombiePVPPirateCaptain::updateState_Walk() */

void __thiscall ZombiePVPPirateCaptain::updateState_Walk(ZombiePVPPirateCaptain *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x4c0))();
  if (cVar1 == '\0') {
    checkForParrotRelease(this);
    Zombie::updateState_Walk((Zombie *)this);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* ZombiePVPPirateCaptain::updateState_Eat() */

void __thiscall ZombiePVPPirateCaptain::updateState_Eat(ZombiePVPPirateCaptain *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x4c0))();
  if (cVar1 == '\0') {
    checkForParrotRelease(this);
    Zombie::updateState_Eat((Zombie *)this);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}

