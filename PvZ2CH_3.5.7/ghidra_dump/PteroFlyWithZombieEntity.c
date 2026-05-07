// Class: PteroFlyWithZombieEntity


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PteroFlyWithZombieEntity::StaticClassInit() */

void PteroFlyWithZombieEntity::StaticClassInit(void)

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
    std::string::string(asStack_10,"PteroFlyWithZombieEntity");
    (*pcVar2)(plVar1,asStack_10,FUN_03611174,0xc0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PteroFlyWithZombieEntity::StaticGetClass() */

long * PteroFlyWithZombieEntity::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"PteroFlyWithZombieEntity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PteroFlyWithZombieEntity::GetClass() const */

long * PteroFlyWithZombieEntity::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"PteroFlyWithZombieEntity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PteroFlyWithZombieEntity::PteroFlyWithZombieEntity() */

void __thiscall PteroFlyWithZombieEntity::PteroFlyWithZombieEntity(PteroFlyWithZombieEntity *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)(this + 0x10) = &PTR__PteroFlyWithZombieEntity_06667ed8;
  *(undefined ***)this = &PTR_GetClass_06667cf0;
  *(undefined4 *)(this + 0xa8) = 0x43fa0000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8));
  return;
}


/* PteroFlyWithZombieEntity::StaticNew() */

PteroFlyWithZombieEntity * PteroFlyWithZombieEntity::StaticNew(void)

{
  PteroFlyWithZombieEntity *this;
  
  this = ::operator_new(0xc0);
  PteroFlyWithZombieEntity(this);
  return this;
}


/* PteroFlyWithZombieEntity::~PteroFlyWithZombieEntity() */

void __thiscall PteroFlyWithZombieEntity::~PteroFlyWithZombieEntity(PteroFlyWithZombieEntity *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0xb0);
  *(undefined ***)this = &PTR_GetClass_06667cf0;
  *(undefined ***)(this + 0x10) = &PTR__PteroFlyWithZombieEntity_06667ed8;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to PteroFlyWithZombieEntity::~PteroFlyWithZombieEntity() */

void __thiscall PteroFlyWithZombieEntity::~PteroFlyWithZombieEntity(PteroFlyWithZombieEntity *this)

{
  ~PteroFlyWithZombieEntity(this + -0x10);
  return;
}


/* PteroFlyWithZombieEntity::~PteroFlyWithZombieEntity() */

void __thiscall PteroFlyWithZombieEntity::~PteroFlyWithZombieEntity(PteroFlyWithZombieEntity *this)

{
  ~PteroFlyWithZombieEntity(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PteroFlyWithZombieEntity::~PteroFlyWithZombieEntity() */

void __thiscall PteroFlyWithZombieEntity::~PteroFlyWithZombieEntity(PteroFlyWithZombieEntity *this)

{
  ~PteroFlyWithZombieEntity(this + -0x10);
  return;
}


/* PteroFlyWithZombieEntity::SetTargetZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PteroFlyWithZombieEntity::SetTargetZombie(PteroFlyWithZombieEntity *this,RtWeakPtr *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  undefined8 uVar1;
  RealObject *this_01;
  Zombie *this_02;
  undefined1 auVar2 [16];
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0xb8);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  auVar2 = PVZ_EOT();
  Zombie::ApplyCondition((Zombie *)auVar2,0,uVar1,0x18,1);
  this_01 = (RealObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  RealObject::SetDisableSnapToGround(this_01,true);
  this_02 = (Zombie *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Zombie::SetIgnoresAllDamage(this_02,true);
  return;
}


/* PteroFlyWithZombieEntity::onArrive() */

void __thiscall PteroFlyWithZombieEntity::onArrive(PteroFlyWithZombieEntity *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  Zombie *pZVar2;
  RealObject *this_01;
  
  this_00 = (RtWeakPtr *)(this + 0xb8);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::EndCondition(pZVar2,0x18);
    this_01 = (RealObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    RealObject::SetDisableSnapToGround(this_01,false);
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::SetIgnoresAllDamage(pZVar2,false);
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PteroFlyWithZombieEntity::onUpdate() */

void __thiscall PteroFlyWithZombieEntity::onUpdate(PteroFlyWithZombieEntity *this)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  code *pcVar4;
  float local_28;
  float fStack_24;
  float local_20;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_20 = *(float *)(puVar2 + 1);
  local_28 = (float)*puVar2;
  local_28 = *(float *)(this + 0xa4) + local_28;
  fStack_24 = (float)((ulong)*puVar2 >> 0x20);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb8));
  if (bVar1) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
    pcVar4 = *(code **)(*plVar3 + 0x78);
    EATextSquish::Vec3::Vec3(aVStack_18,local_28,fStack_24,local_20 + 30.0);
    (*pcVar4)(plVar3,aVStack_18);
  }
  BoardEntity::SetPosition((BoardEntity *)this,(SexyVector3 *)&local_28);
  if (*(float *)(this + 0xa8) < local_28) {
    onArrive(this);
  }
  if (900.0 < local_28) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PteroFlyWithZombieEntity::initialize(float) */

void __thiscall PteroFlyWithZombieEntity::initialize(PteroFlyWithZombieEntity *this,float param_1)

{
  LawnApp *this_00;
  char cVar1;
  Effect_PopAnim *this_01;
  Effect_PopAnim *this_02;
  ResourceInfo *pRVar2;
  Board *this_03;
  float fVar3;
  string asStack_30 [8];
  RtWeakPtr aRStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"CreatureDinoPterodactylGroup");
  cVar1 = LawnApp::IsGroupLoadComplete(this_00,asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (cVar1 == '\0') {
    this_03 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_30,"CreatureDinoPterodactylGroup");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)asStack_20,asStack_30,1,aRStack_28
              );
    Board::LoadResourceGroupsForGameplay(this_03,(vector *)asStack_20);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)asStack_20);
    std::string::~string(asStack_30);
    nop();
  }
  *(float *)(this + 0xa8) = param_1;
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  nop();
  std::string::string(asStack_20,"POPANIM_ZOMBIE_ZOMBIE_DINO_PTERODACTYL");
  GetPAMByName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
  *(undefined4 *)(pRVar2 + 0x6c) = 0xbf800000;
  Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar2,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(this_02,true);
  std::string::string(asStack_20,"fly");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_02,asStack_20,0);
  std::string::~string(asStack_20);
  nop();
  if (this_01 != (Effect_PopAnim *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb0),(RtWeakPtrBase *)asStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_20,0.0,0.0,80.0);
    StandaloneEffect::SetAttached
              ((StandaloneEffect *)this_01,(RealObject *)this,(SexyVector3 *)asStack_20,2);
  }
  fVar3 = (float)Sexy::Rand(1.0);
  *(float *)(this + 0xa4) = fVar3 * 0.4 + 0.8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

