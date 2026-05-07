// Class: ZombieBungee


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBungee::getElectrocutePAMName() const */

void __thiscall ZombieBungee::getElectrocutePAMName(ZombieBungee *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_BUNGEE_SHOCK");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBungee::getAshPAMName() const */

void __thiscall ZombieBungee::getAshPAMName(ZombieBungee *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_BUNGEE_ASH");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieBungee::onZombieInitialize() */

void __thiscall ZombieBungee::onZombieInitialize(ZombieBungee *this)

{
  *(undefined4 *)(this + 0x820) = 0;
  this[0x828] = (ZombieBungee)0x0;
  *(undefined4 *)(this + 0x824) = 0;
  Zombie::SetIsFlying((Zombie *)this,true);
  Zombie::SetIsControlled((Zombie *)this,true);
  return;
}


/* ZombieBungee::CanBeTargetedByPlant(Sexy::RtWeakPtr<PlantType>, bool) const */

undefined8 ZombieBungee::CanBeTargetedByPlant(Zombie *param_1)

{
  int iVar1;
  
  iVar1 = Zombie::getZombieStateSerialization(param_1);
  if ((iVar1 != 0x23) && (iVar1 = Zombie::getZombieStateSerialization(param_1), iVar1 != 0x20)) {
    return 1;
  }
  return 0;
}


/* ZombieBungee::destroyEffect() */

void __thiscall ZombieBungee::destroyEffect(ZombieBungee *this)

{
  Zombie::RemoveAttachedEffect((Zombie *)this,"hand");
  Zombie::RemoveAttachedEffect((Zombie *)this,"riseHand");
  return;
}


/* ZombieBungee::~ZombieBungee() */

void __thiscall ZombieBungee::~ZombieBungee(ZombieBungee *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1c8f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBungee_06a1d380;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x810));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieBungee::~ZombieBungee() */

void __thiscall ZombieBungee::~ZombieBungee(ZombieBungee *this)

{
  ~ZombieBungee(this + -0x10);
  return;
}


/* ZombieBungee::~ZombieBungee() */

void __thiscall ZombieBungee::~ZombieBungee(ZombieBungee *this)

{
  ~ZombieBungee(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieBungee::~ZombieBungee() */

void __thiscall ZombieBungee::~ZombieBungee(ZombieBungee *this)

{
  ~ZombieBungee(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBungee::onPopAnimCommand(std::string const&, float, std::string const&, std::string const&)
    */

void ZombieBungee::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  int iVar2;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"effect");
  if (bVar1) {
    EATextSquish::Vec3::Vec3(aVStack_18,-3.0,-35.0,0.0);
    iVar2 = Board::MakeRenderOrder(0x62250,*(undefined4 *)(param_1 + 0x81c),1);
    Zombie::AddAttachedEffect
              ((Zombie *)param_1,"hand","POPANIM_ZOMBIE_ZOMBIE_BUNGEE","01",
               (SexyVector3 *)aVStack_18,iVar2,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBungee::onStopCallback(std::string const&) */

void __thiscall ZombieBungee::onStopCallback(ZombieBungee *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  
  cVar1 = Zombie::isInState((Zombie *)this,7);
  if ((cVar1 != '\0') || (cVar1 = Zombie::isInState((Zombie *)this,6), cVar1 != '\0')) {
    return;
  }
  bVar2 = std::operator==(param_1,"idle");
  if (bVar2) {
    if (*(int *)(this + 0x820) != 0) {
      Zombie::setZombieState((Zombie *)this,0x22,0);
      return;
    }
    *(undefined4 *)(this + 0x820) = 1;
    Zombie::setZombieState((Zombie *)this,0x21);
    return;
  }
  bVar2 = std::operator==(param_1,"grab");
  if (bVar2) {
    uVar3 = 0x23;
  }
  else {
    bVar2 = std::operator==(param_1,"rise");
    if (bVar2) {
      return;
    }
    bVar2 = std::operator==(param_1,"fall");
    if (!bVar2) {
      return;
    }
    uVar3 = 0x21;
  }
  Zombie::setZombieState((Zombie *)this,uVar3,0);
  return;
}


/* ZombieBungee::ZombieBungee() */

void __thiscall ZombieBungee::ZombieBungee(ZombieBungee *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06a1c8f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBungee_06a1d380;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x800));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x808));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x810));
  Sexy::Point::Point((Point *)(this + 0x818));
  return;
}


/* ZombieBungee::StaticNew() */

ZombieBungee * ZombieBungee::StaticNew(void)

{
  ZombieBungee *this;
  
  this = ::operator_new(0x830);
  ZombieBungee(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBungee::GetPlantToPick(Sexy::RtWeakPtr<PlantGroup>) */

void ZombieBungee::GetPlantToPick
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               undefined8 param_2,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  PlantGroup::GetPlantAtLayer(aRStack_10,uVar2,1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_18);
  if (!bVar1) {
    uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
    PlantGroup::GetPlantAtLayer(aRStack_10,uVar2,3);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_18);
    if (!bVar1) {
      uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
      PlantGroup::GetPlantAtLayer(aRStack_10,uVar2,2);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_18);
      if (!bVar1) {
        uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
        PlantGroup::GetPlantAtLayer(aRStack_10,uVar2,bVar1);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_18);
        if (!bVar1) {
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    (param_1);
          goto LAB_04f4b3cc;
        }
      }
    }
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)param_1,(RtWeakPtrBase *)a_Stack_18);
LAB_04f4b3cc:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBungee::killPickPlant() */

void __thiscall ZombieBungee::killPickPlant(ZombieBungee *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  RtObject *this_01;
  long *extraout_x0;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x810);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar1 = Sexy::RtObject::IsA<Plant>(this_01);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      Plant::KillPlant();
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      (**(code **)(*extraout_x0 + 0x230))();
    }
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBungee::updateState_Rise() */

void __thiscall ZombieBungee::updateState_Rise(ZombieBungee *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  undefined8 *puVar2;
  RtObject *pRVar3;
  GridItemLilyPad *this_01;
  GridItemFlowerPot *pGVar4;
  long lVar5;
  long *plVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var7;
  float *pfVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  undefined8 local_28;
  float local_20;
  int local_18;
  undefined4 local_14;
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x810);
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_28 = *puVar2;
  local_20 = *(float *)(puVar2 + 1);
  fVar10 = (float)PVZ_Dt();
  local_20 = local_20 + fVar10 * 300.0;
  (**(code **)(*(long *)this + 0x78))(this,&local_28);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    this_01 = Sexy::RtObject::Cast<GridItemLilyPad>(pRVar3);
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pGVar4 = Sexy::RtObject::Cast<GridItemFlowerPot>(pRVar3);
    if (this_01 != (GridItemLilyPad *)0x0) {
      lVar5 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_01);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,0.0,*(float *)(lVar5 + 4) - 450.0);
      FUN_04f4a6ec(local_18,local_14,this_01 + 0x1b0);
    }
    if (pGVar4 != (GridItemFlowerPot *)0x0) {
      if (*(long *)(gLawnApp + 0x9f0) == 0) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = 0.0;
        if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
          BoardTransforms::GridToBoardSpace((Point *)(this + 0x818));
          fVar10 = (float)Board::calculateRoofOffsetZ((float)local_18);
        }
      }
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,0.0,fVar10 - *(float *)(puVar2 + 1));
      FUN_04f4a704(local_18,local_14,pGVar4 + 0x1c8);
    }
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pcVar9 = *(code **)(*plVar6 + 0x78);
    p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pfVar8 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var7);
    fVar10 = *pfVar8;
    fVar11 = local_28._4_4_ - local_20;
    p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    lVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var7);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,fVar10,fVar11,*(float *)(lVar5 + 8));
    (*pcVar9)(plVar6,(FastCurve *)&local_18);
  }
  if (local_28._4_4_ - local_20 <= -300.0) {
    killPickPlant(this);
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBungee::onEnterState_Falling(ZombieState) */

void ZombieBungee::onEnterState_Falling(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  float fVar3;
  int local_80;
  int local_7c;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [8];
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpace((Point *)(param_1 + 0x818));
  if (*(long *)(gLawnApp + 0x9f0) == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 0.0;
    if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
      fVar3 = (float)Board::calculateRoofOffsetZ((float)local_80);
    }
  }
  pcVar2 = *(code **)(*(long *)param_1 + 0x78);
  EATextSquish::Vec3::Vec3(aVStack_60,(float)local_80,(float)local_7c,fVar3);
  (*pcVar2)(param_1,aVStack_60);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string(asStack_68,"onStopCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
             asStack_68);
  std::string::string((string *)aVStack_60,"fall");
  ZombieAnimRig_Bungee::PlayIdle((ZombieAnimRig_Bungee *)pZVar1,aRStack_50,aVStack_60);
  std::string::~string((string *)aVStack_60);
  nop();
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBungee::onEnterState_BungeeIdle(ZombieState) */

void ZombieBungee::onEnterState_BungeeIdle(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onStopCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  std::string::string(asStack_58,"idle");
  ZombieAnimRig_Bungee::PlayIdle((ZombieAnimRig_Bungee *)pZVar1,aRStack_50,asStack_58);
  std::string::~string(asStack_58);
  nop();
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBungee::onEnterState_Grab(ZombieState) */

void ZombieBungee::onEnterState_Grab(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onStopCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  std::string::string(asStack_58,"grab");
  ZombieAnimRig_Bungee::PlayIdle((ZombieAnimRig_Bungee *)pZVar1,aRStack_50,asStack_58);
  std::string::~string(asStack_58);
  nop();
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBungee::onEnterState_Rise(ZombieState) */

void ZombieBungee::onEnterState_Rise(Zombie *param_1)

{
  undefined4 uVar1;
  undefined *this;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  RealObject *this_00;
  RealObject *this_01;
  ZombieHydraHeadAnimRig *pZVar6;
  Effect_PopAnim *pEVar7;
  PopAnimRig *pPVar8;
  Plant *pPVar9;
  long *plVar10;
  UIEasyButtonWidget *this_02;
  RtMixedPtr aRStack_78 [8];
  RtWeakPtr aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
  if (lVar5 != 0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)aRStack_68);
    GetPlantToPick(aRStack_70,param_1,aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_70);
    if (bVar2) {
      pPVar9 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      if (*(code **)(*(long *)pPVar9 + 0x1f8) == Plant::IsInPlantFoodState) {
        cVar3 = Plant::IsInPlantFoodState(pPVar9);
      }
      else {
        cVar3 = (**(code **)(*(long *)pPVar9 + 0x1f8))();
      }
      if (cVar3 == '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
        Plant::GetType();
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
        bVar2 = std::operator!=((string *)(lVar5 + 8),"cobcannon");
        if (bVar2) {
          pPVar9 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
          cVar3 = Plant::IsIgnoreControlAndDmg(pPVar9);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
          if (cVar3 == '\0') {
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
            uVar1 = *(undefined4 *)(lVar5 + 0x110);
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x810),
                       (RtWeakPtrBase *)aRStack_70);
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
            *(undefined4 *)(lVar5 + 200) = 3;
            this = gMessageRouter;
            pPVar9 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
            MessageRouter::Broadcast<Plant*,Plant*>
                      ((MessageRouter *)this,Message::PlantDestory,pPVar9);
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
            *(undefined4 *)(lVar5 + 0x110) = uVar1;
            this_02 = (UIEasyButtonWidget *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
            pPVar8 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_02);
            std::string::string((string *)aRStack_60,"");
            Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)aRStack_50);
            PopAnimRig::PlayAndStop(pPVar8,aRStack_60,0,(DummyInit *)aRStack_50);
            std::string::~string((string *)aRStack_60);
            nop();
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
            goto LAB_04f4c370;
          }
        }
        else {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  }
  this_00 = (RealObject *)
            FUN_04f4c070(*(undefined4 *)(param_1 + 0x818),*(undefined4 *)(param_1 + 0x81c));
  this_01 = (RealObject *)
            FUN_04f4c154(*(undefined4 *)(param_1 + 0x818),*(undefined4 *)(param_1 + 0x81c));
  if (this_00 != (RealObject *)0x0) {
    this_00[0xa1] = (RealObject)0x0;
    RealObject::SetDisableSnapToGround(this_00,true);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x810),(RtWeakPtrBase *)aRStack_60
              );
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  }
  if (this_01 != (RealObject *)0x0) {
    this_01[0xa1] = (RealObject)0x0;
    RealObject::SetDisableSnapToGround(this_01,true);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x810),(RtWeakPtrBase *)aRStack_60
              );
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  }
LAB_04f4c370:
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x800));
  if (bVar2) {
    plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x800));
    (**(code **)(*plVar10 + 0x48))();
  }
  Zombie::RemoveAttachedEffect(param_1,"hand");
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_60,-3.0,-35.0,0.0);
  iVar4 = Board::MakeRenderOrder(0x62250,*(undefined4 *)(param_1 + 0x81c),1);
  Zombie::AddAttachedEffect
            (param_1,"riseHand","POPANIM_ZOMBIE_ZOMBIE_BUNGEE","02",(SexyVector3 *)aRStack_60,iVar4,
             true);
  pZVar6 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string((string *)aRStack_68,"onStopCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
             (RtId *)aRStack_70,aRStack_68);
  std::string::string((string *)aRStack_60,"grab02");
  ZombieAnimRig_Bungee::PlayRise((ZombieAnimRig_Bungee *)pZVar6,aRStack_50,aRStack_60);
  std::string::~string((string *)aRStack_60);
  nop();
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_68);
  nop();
  Sexy::RtId::~RtId((RtId *)aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x808));
  if (bVar2) {
    pEVar7 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x808));
    std::string::string((string *)aRStack_60,"animation02");
    Effect_PopAnim::PlaySingleAnimation(pEVar7,aRStack_60,0);
    std::string::~string((string *)aRStack_60);
    nop();
  }
  pPVar8 = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  Sexy::Insets::Insets((Insets *)aRStack_60,0xff,0xff,0xff,0xff);
  PopAnimRig::SetPAMColor(pPVar8,(Color *)aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBungee::onPlaceOnBoard() */

void __thiscall ZombieBungee::onPlaceOnBoard(ZombieBungee *this)

{
  Zombie::updateGroundEffect((Zombie *)this);
  MessageRouter::Post<Zombie*,ZombieBungee*>
            ((MessageRouter *)gMessageRouter,Message::ZombieAddedToBoard,this);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBungee::updateState_Hint() */

void __thiscall ZombieBungee::updateState_Hint(ZombieBungee *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  undefined4 uVar1;
  Effect_PopAnim *pEVar2;
  ResourceInfo *pRVar3;
  long lVar4;
  StandaloneEffect *this_01;
  float fVar5;
  float fVar6;
  int local_30;
  int local_2c;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar5 = (float)PVZ_Dt();
  fVar6 = *(float *)(this + 0x824);
  *(float *)(this + 0x824) = fVar5 + fVar6;
  if (2.0 < fVar5 + fVar6) {
    Zombie::setZombieState((Zombie *)this,0x20,0);
    this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x808);
    BoardTransforms::GridToBoardSpace((Point *)(this + 0x818));
    Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    pEVar2 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    std::string::string(asStack_28,"POPANIM_EFFECTS_ZOMBIE_BUNGEE_SHADOW");
    GetPAMByName(asStack_28);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
    Effect_PopAnim::CreatePopAnimRig(pEVar2,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    std::string::~string(asStack_28);
    nop();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar1 = Board::MakeRenderOrder(0x62250,*(undefined4 *)(this + 0x81c),1);
    FUN_04f4a6a8(lVar4 + 0x1c,uVar1);
    pEVar2 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Effect_PopAnim::SetCentered(pEVar2,true);
    if (*(long *)(gLawnApp + 0x9f0) == 0) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = 0.0;
      if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
        fVar5 = (float)Board::calculateRoofOffsetZ((float)local_30);
      }
    }
    this_01 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_20,(float)local_30,gCheat_Y + -30.0 + (float)local_2c,fVar5);
    StandaloneEffect::SetBoardSpaceOrigin(this_01,(SexyVector3 *)aRStack_20,-1);
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
    std::string::string(asStack_28,"animation");
    AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    nop();
    std::string::string(asStack_28,"animation03");
    PVZ_EOT();
    AnimationSequence::AddLoopingAnimation(aRStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    nop();
    pEVar2 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Effect_PopAnim::PlayAnimationSequence(pEVar2,(AnimationSequence *)aRStack_20);
    AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBungee::playHintEffect(Sexy::Point) */

void __thiscall ZombieBungee::playHintEffect(ZombieBungee *this,Point *param_2)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  undefined4 uVar1;
  Effect_PopAnim *pEVar2;
  ResourceInfo *pRVar3;
  long lVar4;
  StandaloneEffect *this_01;
  float fVar5;
  int local_30;
  int local_2c;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpace(param_2);
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x800);
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string(asStack_28,"POPANIM_EFFECTS_ZOMBIE_BUNGEE_TARGET");
  GetPAMByName(asStack_28);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(pEVar2,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::SetCentered(pEVar2,true);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  uVar1 = Board::MakeRenderOrder(0x62e08,*(undefined4 *)(this + 0x81c),2);
  FUN_04f4a6a8(lVar4 + 0x1c,uVar1);
  if (*(long *)(gLawnApp + 0x9f0) == 0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = 0.0;
    if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
      fVar5 = (float)Board::calculateRoofOffsetZ((float)local_30);
    }
  }
  this_01 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_20,(float)local_30,(float)local_2c - 10.0,fVar5);
  StandaloneEffect::SetBoardSpaceOrigin(this_01,(SexyVector3 *)aRStack_20,-1);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
  std::string::string(asStack_28,"bz_idle");
  AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"bz_hit");
  AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"bz_any");
  AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::PlayAnimationSequence(pEVar2,(AnimationSequence *)aRStack_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBungee::findGrabPlant() */

void __thiscall ZombieBungee::findGrabPlant(ZombieBungee *this)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  PVZDB *pPVar8;
  RtDbTable *pRVar9;
  long lVar10;
  SharkMinion *pSVar11;
  BoardEntity *pBVar12;
  BungeeCounterSubSystem *pBVar13;
  Plant *this_00;
  int *piVar14;
  RtObject *pRVar15;
  long extraout_x0;
  undefined8 uVar16;
  long extraout_x0_00;
  RtWeakPtrBase *pRVar17;
  int extraout_w1;
  int extraout_w1_00;
  char *__s;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  string *local_88;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58);
  uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar7,0x2c);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    pPVar8 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pRVar9 = (RtDbTable *)PVZDB::GetTable(pPVar8,0x2c);
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtDbTable::GetObjectForId(pRVar9,(RtId *)&local_68);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_78,(RtWeakPtrBase *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    Sexy::RtId::~RtId((RtId *)&local_68);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    if (*(char *)(lVar10 + 0x118) != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      Plant::GetType();
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      bVar1 = std::operator==((string *)(lVar10 + 8),"magicbeans");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      if (!bVar1) {
        pSVar11 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        iVar4 = SharkMinion::getRow(pSVar11);
        pBVar12 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        iVar5 = BoardEntity::CalcColumnPosition(pBVar12);
        if (((-1 < iVar4) && (iVar6 = BoardConstants::NUMBER_OF_COLUMNS(), iVar4 < iVar6)) &&
           ((-1 < iVar5 && (iVar6 = BoardConstants::NUMBER_OF_ROWS(), iVar5 < iVar6)))) {
          iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
          pBVar13 = Board::GetGameSubSystem<BungeeCounterSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          cVar2 = BungeeCounterSubSystem::isValidNum(pBVar13,iVar5 + iVar6 * iVar4);
          if (cVar2 != '\0') {
            this_00 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
            if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
              cVar2 = Plant::IsInPlantFoodState(this_00);
            }
            else {
              cVar2 = (**(code **)(*(long *)this_00 + 0x1f8))();
            }
            if (cVar2 == '\0') {
              bVar1 = false;
              iVar4 = 0;
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
              Plant::GetType();
              lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
              std::vector<PlantTag,std::allocator<PlantTag>>::vector
                        ((vector<PlantTag,std::allocator<PlantTag>> *)aRStack_40,
                         (vector *)(lVar10 + 0xf0));
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
              local_70 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)aRStack_40);
              local_68 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)aRStack_40);
              while( true ) {
                bVar3 = __gnu_cxx::operator!=
                                  ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68);
                if (!bVar3) break;
                piVar14 = (int *)std::__exception_ptr::exception_ptr::_M_get
                                           ((exception_ptr *)&local_70);
                if (*piVar14 == 4) {
                  iVar4 = iVar4 + 1;
                  bVar1 = true;
                }
                eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                          ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_70);
              }
              plantInfo::plantInfo((plantInfo *)&local_68);
              Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                        ((RtWeakPtr<SpartanBambooMatrixSystem> *)&local_68,
                         (RtWeakPtrBase *)aRStack_78);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
              Plant::GetProps();
              lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
              local_60 = *(undefined4 *)(lVar10 + 0x18);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
              local_5b = bVar3;
              if (iVar4 < 2) {
                local_5b = bVar1;
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
              Plant::GetType();
              lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
              local_5c = std::operator==((string *)(lVar10 + 8),"cobcannon");
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
              std::vector<plantInfo,std::allocator<plantInfo>>::push_back
                        ((vector<plantInfo,std::allocator<plantInfo>> *)&local_58,
                         (plantInfo *)&local_68);
              std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_68);
              std::vector<PlantTag,std::allocator<PlantTag>>::~vector
                        ((vector<PlantTag,std::allocator<PlantTag>> *)aRStack_40);
            }
          }
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar7,0x2f);
  bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
  if (bVar1) {
    do {
      pPVar8 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      pRVar9 = (RtDbTable *)PVZDB::GetTable(pPVar8,0x2f);
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtDbTable::GetObjectForId(pRVar9,(RtId *)&local_68);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_78,(RtWeakPtrBase *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      Sexy::RtId::~RtId((RtId *)&local_68);
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      if (*(char *)(lVar10 + 0xa1) != '\0') {
        pSVar11 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        iVar4 = SharkMinion::getRow(pSVar11);
        pBVar12 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        iVar5 = BoardEntity::CalcColumnPosition(pBVar12);
        if ((((-1 < iVar4) && (iVar6 = BoardConstants::NUMBER_OF_COLUMNS(), iVar4 < iVar6)) &&
            (-1 < iVar5)) && (iVar6 = BoardConstants::NUMBER_OF_ROWS(), iVar5 < iVar6)) {
          iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
          pRVar15 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
          bVar1 = Sexy::RtObject::IsA<GridItemLilyPad>(pRVar15);
          if (!bVar1) {
            pRVar15 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
            bVar1 = Sexy::RtObject::IsA<GridItemFlowerPot>(pRVar15);
            if (!bVar1) goto LAB_04f4f3d8;
          }
          pBVar13 = Board::GetGameSubSystem<BungeeCounterSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          cVar2 = BungeeCounterSubSystem::isValidNum(pBVar13,iVar5 + iVar6 * iVar4);
          if (cVar2 != '\0') {
            pRVar15 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
            bVar1 = Sexy::RtObject::IsA<GridItemLilyPad>(pRVar15);
            if (bVar1) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
              nop();
              cVar2 = FUN_04f4a6e8(*(undefined1 *)(extraout_x0_00 + 0x1a5));
              plantInfo::plantInfo((plantInfo *)aRStack_40);
              Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                        ((RtWeakPtr<SpartanBambooMatrixSystem> *)aRStack_40,
                         (RtWeakPtrBase *)aRStack_78);
              if (cVar2 == '\0') goto LAB_04f4f4bc;
LAB_04f4f3b8:
              local_38 = 0;
            }
            else {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
              nop();
              cVar2 = FUN_04f4a700(*(undefined1 *)(extraout_x0 + 0x1a5));
              plantInfo::plantInfo((plantInfo *)aRStack_40);
              Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                        ((RtWeakPtr<SpartanBambooMatrixSystem> *)aRStack_40,
                         (RtWeakPtrBase *)aRStack_78);
              if (cVar2 != '\0') goto LAB_04f4f3b8;
LAB_04f4f4bc:
              pRVar15 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
              bVar1 = Sexy::RtObject::IsA<GridItemLilyPad>(pRVar15);
              if (bVar1) {
                local_88 = (string *)
                           Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
                __s = "lilypad";
              }
              else {
                local_88 = (string *)
                           Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
                __s = "flowerpot";
              }
              std::string::string((string *)&local_70,__s);
              ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(local_88);
              lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
              lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar10 + 0x28));
              local_38 = *(undefined4 *)(lVar10 + 0x18);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
              std::string::~string((string *)&local_70);
              nop();
            }
            local_33 = 0;
            local_34 = 0;
            std::vector<plantInfo,std::allocator<plantInfo>>::push_back
                      ((vector<plantInfo,std::allocator<plantInfo>> *)&local_58,
                       (plantInfo *)aRStack_40);
            std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aRStack_40);
          }
        }
      }
LAB_04f4f3d8:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1_00);
      bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    } while (bVar1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_58);
  uVar16 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_58);
  std::
  sort<__gnu_cxx::__normal_iterator<plantInfo*,std::vector<plantInfo,std::allocator<plantInfo>>>,bool(*)(plantInfo,plantInfo)>
            (uVar7,uVar16,plantsOrder);
  lVar10 = FUN_04f4a734(local_58,local_50);
  if (lVar10 == 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8)
    ;
  }
  else {
    pRVar17 = (RtWeakPtrBase *)FUN_04f4a844(local_58,lVar10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr((RtWeakPtr<Sexy::SoundResource> *)in_x8,pRVar17)
    ;
  }
  std::vector<plantInfo,std::allocator<plantInfo>>::~vector
            ((vector<plantInfo,std::allocator<plantInfo>> *)&local_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBungee::onEnterState_Hint(ZombieState) */

void ZombieBungee::onEnterState_Hint(ZombieBungee *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  BungeeCounterSubSystem *pBVar6;
  char *__s;
  RtWeakPtr aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  findGrabPlant(param_1);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    BoardEntity::CalcGridPosition();
    *(undefined8 *)(param_1 + 0x818) = local_10;
  }
  else {
    pBVar6 = Board::GetGameSubSystem<BungeeCounterSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    cVar3 = BungeeCounterSubSystem::GetValidGrid(pBVar6,(Point *)(param_1 + 0x818));
    if (cVar3 == '\0') {
      (**(code **)(*(long *)param_1 + 0x48))(param_1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      goto LAB_04f4f754;
    }
  }
  pBVar6 = Board::GetGameSubSystem<BungeeCounterSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  iVar1 = *(int *)(param_1 + 0x81c);
  iVar5 = *(int *)(param_1 + 0x818);
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  BungeeCounterSubSystem::addUseNum(pBVar6,iVar5 + iVar1 * iVar4);
  Sexy::Point::Point((Point *)&local_10,(TPoint *)(param_1 + 0x818));
  playHintEffect(param_1,(Point *)&local_10);
  iVar1 = *(int *)(param_1 + 0x81c);
  if (iVar1 == 0) {
    std::string::string((string *)&local_10,"Zombie_Bungee_Bullet_Impact1");
    RealObject::PlayPositionalSound((RealObject *)param_1,(string *)&local_10,0.0);
    std::string::~string((string *)&local_10);
    nop();
    __s = "Zombie_Bungee_Scream1";
  }
  else {
    iVar5 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar1 == iVar5) {
      std::string::string((string *)&local_10,"Zombie_Bungee_Bullet_Impact3");
      RealObject::PlayPositionalSound((RealObject *)param_1,(string *)&local_10,0.0);
      std::string::~string((string *)&local_10);
      nop();
      __s = "Zombie_Bungee_Scream3";
    }
    else {
      std::string::string((string *)&local_10,"Zombie_Bungee_Bullet_Impact2");
      RealObject::PlayPositionalSound((RealObject *)param_1,(string *)&local_10,0.0);
      std::string::~string((string *)&local_10);
      nop();
      __s = "Zombie_Bungee_Scream2";
    }
  }
  std::string::string((string *)&local_10,__s);
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)&local_10,0.0);
  std::string::~string((string *)&local_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
LAB_04f4f754:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBungee::StaticClassInit() */

void ZombieBungee::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieBungee");
      (*pcVar4)(plVar1,asStack_150,FUN_04f4fd78,0x830,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBungee,void(ZombieBungee::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieBungee,void(ZombieBungee::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBungee,void(ZombieBungee::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUNGEE_Hint");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f4f85c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBungee,void(ZombieBungee::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieBungee,void(ZombieBungee::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBungee,void(ZombieBungee::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUNGEE_Falling");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f4f85c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBungee,void(ZombieBungee::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieBungee,void(ZombieBungee::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBungee,void(ZombieBungee::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUNGEE_Idle");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f4f85c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBungee,void(ZombieBungee::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombieBungee,void(ZombieBungee::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBungee,void(ZombieBungee::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUNGEE_Grab");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f4f85c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBungee,void(ZombieBungee::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate0::Delegate0<ZombieBungee,void(ZombieBungee::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBungee,void(ZombieBungee::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUNGEE_Rise");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f4f85c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieBungee::StaticGetClass() */

long * ZombieBungee::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBungee",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBungee::GetClass() const */

long * ZombieBungee::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBungee",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBungee::CalcRenderOrder() const */

void __thiscall ZombieBungee::CalcRenderOrder(ZombieBungee *this)

{
  if (this[0x828] == (ZombieBungee)0x0) {
    Board::MakeRenderOrder(0x62250,*(undefined4 *)(this + 0x81c),0xfffffffb);
    return;
  }
  Zombie::CalcRenderOrder((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieBungee::CalcRenderOrder() const */

void __thiscall ZombieBungee::CalcRenderOrder(ZombieBungee *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* ZombieBungee::onDestroy() */

void __thiscall ZombieBungee::onDestroy(ZombieBungee *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  BungeeCounterSubSystem *this_00;
  long *plVar5;
  
  Zombie::onDestroy((Zombie *)this);
  this_00 = Board::GetGameSubSystem<BungeeCounterSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  iVar1 = *(int *)(this + 0x818);
  iVar2 = *(int *)(this + 0x81c);
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  BungeeCounterSubSystem::removeUseNum(this_00,iVar1 + iVar2 * iVar4);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x800));
  if (bVar3) {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800));
    (**(code **)(*plVar5 + 0x48))();
  }
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x808));
  if (bVar3) {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
    (**(code **)(*plVar5 + 0x48))();
  }
  return;
}


/* ZombieBungee::CollidesWithType(CollisionTypeFlags) const */

undefined8 __thiscall ZombieBungee::CollidesWithType(ZombieBungee *this,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
  if ((iVar1 != 0x23) &&
     (iVar1 = Zombie::getZombieStateSerialization((Zombie *)this), iVar1 != 0x20)) {
    uVar2 = Zombie::CollidesWithType((Zombie *)this,param_2);
    return uVar2;
  }
  return 0;
}


/* ZombieBungee::onElectrocuted() */

void __thiscall ZombieBungee::onElectrocuted(ZombieBungee *this)

{
  Zombie::onElectrocuted((Zombie *)this);
  destroyEffect(this);
  return;
}


/* ZombieBungee::onTurnedToAsh() */

void __thiscall ZombieBungee::onTurnedToAsh(ZombieBungee *this)

{
  Zombie::onTurnedToAsh((Zombie *)this);
  destroyEffect(this);
  return;
}


/* ZombieBungee::onPlaceOnStreet() */

void __thiscall ZombieBungee::onPlaceOnStreet(ZombieBungee *this)

{
  Zombie::onPlaceOnStreet((Zombie *)this);
  this[0x828] = (ZombieBungee)0x1;
  return;
}

