// Class: ZombiePVPChickenFarmer


/* ZombiePVPChickenFarmer::ApplyZombieFood() */

void __thiscall ZombiePVPChickenFarmer::ApplyZombieFood(ZombiePVPChickenFarmer *this)

{
  Zombie::ApplyZombieFood((Zombie *)this);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* ZombiePVPChickenFarmer::~ZombiePVPChickenFarmer() */

void __thiscall ZombiePVPChickenFarmer::~ZombiePVPChickenFarmer(ZombiePVPChickenFarmer *this)

{
  *(undefined ***)this = &PTR_GetClass_06920da0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPChickenFarmer_069217e8;
  ZombieChickenFarmer::~ZombieChickenFarmer((ZombieChickenFarmer *)this);
  return;
}


/* non-virtual thunk to ZombiePVPChickenFarmer::~ZombiePVPChickenFarmer() */

void __thiscall ZombiePVPChickenFarmer::~ZombiePVPChickenFarmer(ZombiePVPChickenFarmer *this)

{
  ~ZombiePVPChickenFarmer(this + -0x10);
  return;
}


/* ZombiePVPChickenFarmer::~ZombiePVPChickenFarmer() */

void __thiscall ZombiePVPChickenFarmer::~ZombiePVPChickenFarmer(ZombiePVPChickenFarmer *this)

{
  ~ZombiePVPChickenFarmer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePVPChickenFarmer::~ZombiePVPChickenFarmer() */

void __thiscall ZombiePVPChickenFarmer::~ZombiePVPChickenFarmer(ZombiePVPChickenFarmer *this)

{
  ~ZombiePVPChickenFarmer(this + -0x10);
  return;
}


/* ZombiePVPChickenFarmer::ZombiePVPChickenFarmer() */

void __thiscall ZombiePVPChickenFarmer::ZombiePVPChickenFarmer(ZombiePVPChickenFarmer *this)

{
  ZombieChickenFarmer::ZombieChickenFarmer((ZombieChickenFarmer *)this);
  *(undefined ***)this = &PTR_GetClass_06920da0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPChickenFarmer_069217e8;
  return;
}


/* ZombiePVPChickenFarmer::StaticNew() */

ZombiePVPChickenFarmer * ZombiePVPChickenFarmer::StaticNew(void)

{
  ZombiePVPChickenFarmer *this;
  
  this = ::operator_new(0x808);
  ZombiePVPChickenFarmer(this);
  return this;
}


/* ZombiePVPChickenFarmer::onAnimStopped(std::string const&) */

void __thiscall ZombiePVPChickenFarmer::onAnimStopped(ZombiePVPChickenFarmer *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = std::operator==(param_1,"plantfood");
  if (bVar1) {
    cVar2 = Zombie::isInState((Zombie *)this,0x1f);
  }
  else {
    bVar1 = std::operator==(param_1,"plantfood02");
    if (!bVar1) {
      return;
    }
    cVar2 = Zombie::isInState((Zombie *)this,0x1f);
  }
  if (cVar2 == '\0') {
    return;
  }
  (**(code **)(*(long *)this + 0x4b8))(this);
  Zombie::setZombieState((Zombie *)this,1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPChickenFarmer::onEnterState_Spawn(ZombieState) */

void ZombiePVPChickenFarmer::onEnterState_Spawn(Zombie *param_1)

{
  long *plVar1;
  char *__s;
  code *pcVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  if (param_1[0x800] == (Zombie)0x0) {
    __s = "plantfood";
  }
  else {
    __s = "plantfood02";
  }
  std::string::string(asStack_58,__s);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  (*pcVar2)(plVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  std::string::string(asStack_58,"Play_Zomb_PVP_ChickenFarmer_Skill");
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
/* ZombiePVPChickenFarmer::SpawnChicken() */

void __thiscall ZombiePVPChickenFarmer::SpawnChicken(ZombiePVPChickenFarmer *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  ZombiePVPChickenFarmerProps *pZVar4;
  string *psVar5;
  PlayerInfo *this_00;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  Board *pBVar9;
  undefined1 auVar10 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_2b;
  undefined1 local_2a;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar4 = Zombie::GetProps<ZombiePVPChickenFarmerProps>((Zombie *)this);
  if (pZVar4 != (ZombiePVPChickenFarmerProps *)0x0) {
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
    local_30 = FUN_049a1f04(*(undefined4 *)(this + 0x50));
    local_2b = 1;
    local_2a = 1;
    pBVar9 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
    uVar2 = SharkMinion::getRow((SharkMinion *)this);
    this_00 = (PlayerInfo *)
              Board::AddZombieInRow
                        (pBVar9,(RtWeakPtr<Sexy::SoundResource> *)&local_40,uVar2,0xfffffffb,
                         (SpawnZombieParams *)&local_30,1,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    lVar6 = PlayerInfo::GetPlantNewAvatarPiecesInfo(this_00);
    FUN_049a1fc4(lVar6 + 0x35);
    puVar7 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_00);
    local_40 = *puVar7;
    local_38 = *(undefined4 *)(puVar7 + 1);
    puVar8 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_40 = CONCAT44(local_40._4_4_,*puVar8);
    (**(code **)(*(long *)this_00 + 0x78))(this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
    iVar3 = FUN_049a1f00(*(undefined4 *)(this + 0x24));
    RealObject::JoinTeam((RealObject *)this_00,iVar3);
    Zombie::SetFacing((Zombie *)this_00,iVar3 == 1);
    FUN_049a1fbc(this_00 + 0x59b);
    cVar1 = Zombie::HasCondition(this,0x19);
    if (cVar1 != '\0') {
      auVar10 = PVZ_EOT();
      Zombie::ApplyCondition((Zombie *)auVar10,0,this_00,0x19,1);
    }
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPChickenFarmer::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombiePVPChickenFarmer::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"spawn");
  if (!bVar1) {
    return;
  }
  SpawnChicken((ZombiePVPChickenFarmer *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPChickenFarmer::StaticClassInit() */

void ZombiePVPChickenFarmer::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombiePVPChickenFarmer");
      (*pcVar4)(plVar1,asStack_150,FUN_049a3534,0x808,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePVPChickenFarmer,void(ZombiePVPChickenFarmer::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombiePVPChickenFarmer,void(ZombiePVPChickenFarmer::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePVPChickenFarmer,void(ZombiePVPChickenFarmer::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PVP_CF_SPAWN");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_049a32d8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombiePVPChickenFarmer::StaticGetClass() */

long * ZombiePVPChickenFarmer::StaticGetClass(void)

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
  uVar2 = ZombieChickenFarmer::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPChickenFarmer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPChickenFarmer::GetClass() const */

long * ZombiePVPChickenFarmer::GetClass(void)

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
  uVar2 = ZombieChickenFarmer::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPChickenFarmer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

