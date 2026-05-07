// Class: ZombieCursor


/* ZombieCursor::~ZombieCursor() */

void __thiscall ZombieCursor::~ZombieCursor(ZombieCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_067a1f30;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  PacketCursor::~PacketCursor((PacketCursor *)this);
  return;
}


/* ZombieCursor::~ZombieCursor() */

void __thiscall ZombieCursor::~ZombieCursor(ZombieCursor *this)

{
  ~ZombieCursor(this);
  AK::FreeHook(this);
  return;
}


/* ZombieCursor::ZombieCursor() */

void __thiscall ZombieCursor::ZombieCursor(ZombieCursor *this)

{
  PacketCursor::PacketCursor((PacketCursor *)this);
  *(undefined ***)this = &PTR_GetClass_067a1f30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  this[0x50] = (ZombieCursor)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  return;
}


/* ZombieCursor::StaticGetClass() */

long * ZombieCursor::StaticGetClass(void)

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
  uVar2 = PacketCursor::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCursor",uVar2,StaticNew);
  return sClass;
}


/* ZombieCursor::GetClass() const */

long * ZombieCursor::GetClass(void)

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
  uVar2 = PacketCursor::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCursor",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCursor::OnUsedPacket(Sexy::RtWeakPtr<SeedPacket>, int, int, bool, int) */

void ZombieCursor::OnUsedPacket
               (undefined8 param_1,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  Board *pBVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  Board::DoZombieAtGridSingle(pBVar1,aRStack_10,param_3,param_4,0,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCursor::StaticNew() */

ZombieCursor * ZombieCursor::StaticNew(void)

{
  ZombieCursor *this;
  
  this = ::operator_new(0x60);
  ZombieCursor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCursor::OnUsed(Sexy::RtWeakPtr<ZombieType const>, int, int) */

void __thiscall
ZombieCursor::OnUsed(ZombieCursor *this,RtWeakPtrBase *param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Zombie *this_00;
  ZombieSwashbuckler *this_01;
  code *pcVar5;
  Board *pBVar6;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  if (this_00 == (Zombie *)0x0) {
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aVStack_18,param_2);
    Board::DoRainZombieAtGridSingle
              (pBVar6,(RtWeakPtr<Sexy::SoundResource> *)aVStack_18,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
  }
  else {
    Zombie::SetIgnoresAllDamage(this_00,false);
    Zombie::SetIsTargetable(this_00,true);
    Zombie::EndCondition(this_00,0x18);
    Zombie::EndCondition(this_00,0x9a);
    (**(code **)(*(long *)this_00 + 0x80))(this_00,0);
    Zombie::SetIgnoresCollisions(this_00,false);
    Zombie::InvokeInvisible(this_00,false,false,false);
    bVar1 = Sexy::RtObject::IsA<ZombieSwashbuckler>((RtObject *)this_00);
    if (bVar1) {
      this_01 = Sexy::RtObject::Cast<ZombieSwashbuckler>((RtObject *)this_00);
      ZombieSwashbuckler::SwingEnd(this_01);
    }
    cVar2 = Zombie::HasCondition(this_00,0x55);
    if (cVar2 != '\0') {
      Zombie::EndCondition(this_00,0x55);
    }
    iVar3 = BoardTransforms::GridToBoardSpaceX(param_3);
    iVar4 = BoardTransforms::GridToBoardSpaceY(param_4);
    pcVar5 = *(code **)(*(long *)this_00 + 0x78);
    EATextSquish::Vec3::Vec3(aVStack_18,(float)iVar3,(float)iVar4,0.0);
    (*pcVar5)(this_00,aVStack_18);
    Zombie::SetIsControlled(this_00,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCursor::ZombieCursor(Sexy::Touch const&, Sexy::RtWeakPtr<SeedPacket>) */

void __thiscall
ZombieCursor::ZombieCursor
          (ZombieCursor *this,undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  PopAnimRig *pPVar1;
  code *pcVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)param_3);
  PacketCursor::PacketCursor((PacketCursor *)this,param_1,aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48);
  *(undefined ***)this = &PTR_GetClass_067a1f30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  this[0x50] = (ZombieCursor)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  this[0x50] = (ZombieCursor)0x0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  PowerupUI::GetPowerupDownImage();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)this_00);
  pPVar1 = (PopAnimRig *)CreateStandaloneZombieAnimRig(aRStack_58,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  pcVar2 = *(code **)(*(long *)pPVar1 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar2)(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  BaseCursor::setAnimRig((BaseCursor *)this,pPVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCursor::ZombieCursor(Sexy::Touch const&, Sexy::RtWeakPtr<ZombieType const>,
   Sexy::TRect<int>) */

void __thiscall
ZombieCursor::ZombieCursor(ZombieCursor *this,undefined8 param_1,RtWeakPtr *param_3,TRect *param_4)

{
  PopAnimRig *this_00;
  code *pcVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_01;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_58);
  PacketCursor::PacketCursor((PacketCursor *)this,param_1,a_Stack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
  this_01 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48);
  *(undefined ***)this = &PTR_GetClass_067a1f30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_01)
  ;
  this[0x50] = (ZombieCursor)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  this[0x50] = (ZombieCursor)0x0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_01,param_3);
  BaseCursor::setCursorBoardOrigin((BaseCursor *)this,param_4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_58,(RtWeakPtrBase *)this_01);
  this_00 = (PopAnimRig *)CreateStandaloneZombieAnimRig(a_Stack_58,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
  pcVar1 = *(code **)(*(long *)this_00 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar1)(this_00,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  PopAnimRig::SetMirrorX(this_00,true);
  DComponent::setEnabled((DComponent *)this,true);
  BaseCursor::setAnimRig((BaseCursor *)this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCursor::ZombieCursor(Sexy::Touch const&, Sexy::RtWeakPtr<ZombieType const>,
   Sexy::RtWeakPtr<Zombie>, Sexy::TRect<int>) */

void __thiscall
ZombieCursor::ZombieCursor
          (ZombieCursor *this,undefined8 param_1,RtWeakPtr *param_3,RtWeakPtr<Zombie> *param_4,
          TRect *param_5)

{
  PopAnimRig *pPVar1;
  undefined8 uVar2;
  code *pcVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_58);
  PacketCursor::PacketCursor((PacketCursor *)this,param_1,a_Stack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48);
  *(undefined ***)this = &PTR_GetClass_067a1f30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  this[0x50] = (ZombieCursor)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  this[0x50] = (ZombieCursor)0x0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_00,param_3);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x58),(RtWeakPtr *)param_4);
  BaseCursor::setCursorBoardOrigin((BaseCursor *)this,param_5);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_58,(RtWeakPtrBase *)this_00);
  pPVar1 = (PopAnimRig *)CreateStandaloneZombieAnimRig(a_Stack_58,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
  pcVar3 = *(code **)(*(long *)pPVar1 + 0x1d0);
  uVar2 = Sexy::RtWeakPtr<Zombie>::GetPtr(param_4);
  if (pcVar3 != ZombieAnimRig::CursorAnimChange) {
    (*pcVar3)(pPVar1,uVar2);
  }
  pcVar3 = *(code **)(*(long *)pPVar1 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar3)(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  BaseCursor::setAnimRig((BaseCursor *)this,pPVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCursor::IsInsideOriginRect() const */

undefined8 __thiscall ZombieCursor::IsInsideOriginRect(ZombieCursor *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar2 = FUN_03f6b954(uVar3);
    if (((lVar2 != 0) && (lVar2 = FUN_03f6c224(uVar3), lVar2 != 0)) &&
       (cVar1 = FUN_03f6b950(this[0x23]), cVar1 != '\0')) {
      return 0;
    }
  }
  uVar3 = BaseCursor::IsInsideOriginRect();
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCursor::tryToUse() */

void __thiscall ZombieCursor::tryToUse(ZombieCursor *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  char *pcVar2;
  ArenaBattleModule *this_01;
  PacketCursor *pPVar3;
  code *pcVar4;
  Board *pBVar5;
  float fVar6;
  int local_18;
  uint local_14;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))(&local_18);
  if (((local_18 < 0) || (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) <= local_18)) ||
     (9 < local_14)) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_drop");
  }
  else {
    this_01 = (ArenaBattleModule *)
              FUN_03f6c218(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (this_01 != (ArenaBattleModule *)0x0) {
      BaseCursor::GetBoardPosition();
      fVar6 = (float)ArenaBattleModule::calcGoalX(this_01);
      if ((float)local_10[0] < fVar6) {
        pBVar5 = *(Board **)(gLawnApp + 0x9f0);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_10);
        Board::GiveAdvice(pBVar5,local_18,local_14,
                          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_10
                          ,0x25);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
        goto LAB_03f6c31c;
      }
    }
    this_00 = (RtMixedPtrBase *)(this + 0x40);
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 == '\0') {
      pcVar4 = *(code **)(*(long *)this + 0x90);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)(this + 0x48));
      (*pcVar4)(this,(RtWeakPtr<Sexy::SoundResource> *)local_10,local_18,local_14);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    }
    else {
      pPVar3 = (PacketCursor *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      if (*(code **)(*(long *)pPVar3 + 0x1c8) == SeedPacket::TryUse) {
        cVar1 = SeedPacket::TryUse(pPVar3);
      }
      else {
        cVar1 = (**(code **)(*(long *)pPVar3 + 0x1c8))(pPVar3,this);
      }
      if (cVar1 == '\0') {
        pcVar4 = *(code **)(*(long *)this + 0x98);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)this_00);
        (*pcVar4)(this,(RtWeakPtr<Sexy::SoundResource> *)local_10,local_18,local_14,0,1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
      }
    }
    this[0x50] = (ZombieCursor)0x1;
  }
LAB_03f6c31c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

