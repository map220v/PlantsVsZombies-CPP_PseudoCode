// Class: MagicHat


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicHat::StaticClassInit() */

void MagicHat::StaticClassInit(void)

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
    std::string::string(asStack_10,"MagicHat");
    (*pcVar2)(plVar1,asStack_10,FUN_040d2e54,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagicHat::StaticGetClass() */

long * MagicHat::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"MagicHat",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagicHat::GetClass() const */

long * MagicHat::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"MagicHat",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagicHat::SetSpawnZombie(Sexy::RtWeakPtr<ZombieType const> const&, Sexy::Point const&, int) */

void __thiscall
MagicHat::SetSpawnZombie(MagicHat *this,RtWeakPtr *param_1,Point *param_2,int param_3)

{
  *(int *)(this + 0x10c) = param_3;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x118),param_1);
  *(undefined8 *)(this + 0x110) = *(undefined8 *)param_2;
  return;
}


/* MagicHat::MagicHat() */

void __thiscall MagicHat::MagicHat(MagicHat *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_067dbbf0;
  Sexy::Point::Point((Point *)(this + 0x110));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  *(undefined4 *)(this + 0x10c) = 0;
  return;
}


/* MagicHat::StaticNew() */

MagicHat * MagicHat::StaticNew(void)

{
  MagicHat *this;
  
  this = ::operator_new(0x120);
  MagicHat(this);
  return this;
}


/* MagicHat::~MagicHat() */

void __thiscall MagicHat::~MagicHat(MagicHat *this)

{
  *(undefined ***)this = &PTR_GetClass_067dbbf0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* MagicHat::~MagicHat() */

void __thiscall MagicHat::~MagicHat(MagicHat *this)

{
  ~MagicHat(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicHat::OnAnimCommand(std::string const&, std::string const&) */

void MagicHat::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  ZombieType *this;
  SexyVector3 *pSVar2;
  Point *extraout_x1;
  long *plVar3;
  code *pcVar4;
  int local_48;
  int local_44;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [16];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"spawn_zombie");
  if (bVar1) {
    BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)(param_1 + 0x110),extraout_x1);
    this = (ZombieType *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x118));
    ZombieType::EnsureResourceGroupsLoaded(this);
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
    local_2c = 0;
    local_30 = *(undefined4 *)(param_1 + 0x10c);
    local_2b = 1;
    plVar3 = *(long **)(gLawnApp + 0x9f0);
    pcVar4 = *(code **)(*plVar3 + 0x318);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)(param_1 + 0x118));
    pSVar2 = (SexyVector3 *)(*pcVar4)(plVar3,aRStack_40,0xfffffffb,(SpawnZombieParams *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    (**(code **)(*(long *)pSVar2 + 0x198))(pSVar2,*(undefined4 *)(param_1 + 0x10c));
    RealObject::JoinTeam((RealObject *)pSVar2,1);
    Zombie::SetFacing((Zombie *)pSVar2,1);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_40,(float)local_48,(float)local_44,0.0);
    BoardEntity::PlaceOnBoard(pSVar2);
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

