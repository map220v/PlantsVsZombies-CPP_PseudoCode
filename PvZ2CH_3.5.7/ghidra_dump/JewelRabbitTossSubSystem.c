// Class: JewelRabbitTossSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JewelRabbitTossSubSystem::StaticClassInit() */

void JewelRabbitTossSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"JewelRabbitTossSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_03630ba4,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JewelRabbitTossSubSystem::StaticGetClass() */

long * JewelRabbitTossSubSystem::StaticGetClass(void)

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
  uVar2 = ZombieTosserSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"JewelRabbitTossSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JewelRabbitTossSubSystem::GetClass() const */

long * JewelRabbitTossSubSystem::GetClass(void)

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
  uVar2 = ZombieTosserSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"JewelRabbitTossSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JewelRabbitTossSubSystem::tossZombieHorizontal(Zombie*) */

void __thiscall
JewelRabbitTossSubSystem::tossZombieHorizontal(JewelRabbitTossSubSystem *this,Zombie *param_1)

{
  int iVar1;
  SexyVector3 *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  uVar2 = 0;
  uVar3 = 0;
  EATextSquish::Vec3::Vec3(aVStack_60,(float)iVar1 + (float)iVar1,0.0,0.0);
  local_70 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_60);
  local_6c = uVar2;
  local_68 = uVar3;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
  ZombieTosserSubSystem::LaunchZombie
            ((ZombieTosserSubSystem *)0x0,0x3f000000,this,param_1,&local_70,aRStack_50,1);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JewelRabbitTossSubSystem::playDustEffect(Zombie*) */

void __thiscall
JewelRabbitTossSubSystem::playDustEffect(JewelRabbitTossSubSystem *this,Zombie *param_1)

{
  int iVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  undefined8 *puVar4;
  undefined8 local_28;
  undefined4 local_20;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)&local_28,"POPANIM_EFFECTS_JEWELRABBIT_BULLET");
    GetPAMByName((string *)&local_28);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string((string *)&local_28);
    nop();
    iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
    iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
    Effect_PopAnim::SetCentered(this_00,true);
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    local_28 = *puVar4;
    local_20 = *(undefined4 *)(puVar4 + 1);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,-30.0,0.0);
    EATextSquish::Vec3::operator+=((Vec3 *)&local_28,(Vec3 *)aRStack_18);
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this_00,(SexyVector3 *)&local_28,iVar1 + 0x62250 + iVar2 * 10000)
    ;
    std::string::string((string *)aRStack_18,"effect");
    Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JewelRabbitTossSubSystem::JewelRabbitTossSubSystem() */

void __thiscall JewelRabbitTossSubSystem::JewelRabbitTossSubSystem(JewelRabbitTossSubSystem *this)

{
  ZombieTosserSubSystem::ZombieTosserSubSystem((ZombieTosserSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0666d4d0;
  *(undefined4 *)(this + 0x70) = _FUN_0362ea4c;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  return;
}


/* JewelRabbitTossSubSystem::StaticNew() */

JewelRabbitTossSubSystem * JewelRabbitTossSubSystem::StaticNew(void)

{
  JewelRabbitTossSubSystem *this;
  
  this = ::operator_new(0x90);
  JewelRabbitTossSubSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JewelRabbitTossSubSystem::tossZombieParabolic(Zombie*) */

void __thiscall
JewelRabbitTossSubSystem::tossZombieParabolic(JewelRabbitTossSubSystem *this,Zombie *param_1)

{
  int iVar1;
  SexyVector3 *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  uVar2 = 0;
  uVar3 = 0;
  EATextSquish::Vec3::Vec3(aVStack_60,(float)iVar1 + (float)iVar1,0.0,0.0);
  local_70 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_60);
  local_6c = uVar2;
  local_68 = uVar3;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
  std::string::string((string *)aVStack_60,"onLandedCallback");
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_78,aVStack_60);
  ZombieTosserSubSystem::LaunchZombie
            ((ZombieTosserSubSystem *)0x43020000,0x3f000000,this,param_1,&local_70,aRStack_50,1);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aVStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JewelRabbitTossSubSystem::onLandedCallback(Zombie*) */

void __thiscall
JewelRabbitTossSubSystem::onLandedCallback(JewelRabbitTossSubSystem *this,Zombie *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Zombie *pZVar5;
  float fVar6;
  float fVar7;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    playDustEffect(this,param_1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
    uVar3 = SharkMinion::getRow((SharkMinion *)param_1);
    EntityFinder::GetEntitiesAtGridSquare(avStack_80,2,uVar2,uVar3);
    local_90 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90)
      ;
      pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      if (pZVar5 != (Zombie *)0x0) {
        DamageInfo::DamageInfo(aDStack_68);
        fVar6 = (float)FUN_0362bf4c(*(undefined4 *)(param_1 + 0x2ac));
        fVar7 = (float)FUN_0362bf48(*(undefined4 *)(param_1 + 0x284));
        local_60 = (fVar7 + fVar6) * *(float *)(this + 0x70);
        (**(code **)(*(long *)pZVar5 + 0x110))(pZVar5,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JewelRabbitTossSubSystem::~JewelRabbitTossSubSystem() */

void __thiscall JewelRabbitTossSubSystem::~JewelRabbitTossSubSystem(JewelRabbitTossSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0666d4d0;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x78));
  ZombieTosserSubSystem::~ZombieTosserSubSystem((ZombieTosserSubSystem *)this);
  return;
}


/* JewelRabbitTossSubSystem::~JewelRabbitTossSubSystem() */

void __thiscall JewelRabbitTossSubSystem::~JewelRabbitTossSubSystem(JewelRabbitTossSubSystem *this)

{
  ~JewelRabbitTossSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JewelRabbitTossSubSystem::onUpdate() */

void __thiscall JewelRabbitTossSubSystem::onUpdate(JewelRabbitTossSubSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  RtWeakPtrBase *pRVar4;
  BoardEntity *this_01;
  long *plVar5;
  undefined8 local_80;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0362bf68(*(undefined8 *)(this + 0x78),*(undefined8 *)(this + 0x80));
  if (lVar3 != 0) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x78);
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    while( true ) {
      local_68[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)local_68);
      if (!bVar1) break;
      pRVar4 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_78,pRVar4);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_78);
      if (bVar1) {
        this_01 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        cVar2 = BoardEntity::IsOnScreen(this_01);
        if (cVar2 != '\0') goto LAB_03633764;
        DamageInfo::DamageInfo((DamageInfo *)local_68);
        local_58 = 2;
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        (**(code **)(*plVar5 + 0x2f0))();
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        (**(code **)(*plVar5 + 0x48))();
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_70,(__normal_iterator *)&local_80);
        local_80 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::
                   erase((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                         this_00,local_70);
        MessageRouter::Broadcast<std::string_const&,char_const*>
                  ((MessageRouter *)gMessageRouter,Message::PlantKillZombie,"jewelrabbit");
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
      else {
LAB_03633764:
        FUN_0362e28c((__normal_iterator *)&local_80);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JewelRabbitTossSubSystem::Update() */

void __thiscall JewelRabbitTossSubSystem::Update(JewelRabbitTossSubSystem *this)

{
  ZombieTosserSubSystem::Update();
  onUpdate(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JewelRabbitTossSubSystem::tossZombieOff(Zombie*) */

void __thiscall
JewelRabbitTossSubSystem::tossZombieOff(JewelRabbitTossSubSystem *this,Zombie *param_1)

{
  float *pfVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  EATextSquish::Vec3::Vec3(aVStack_60,*pfVar1 + 400.0,-600.0,0.0);
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
  ZombieTosserSubSystem::LaunchZombie
            ((ZombieTosserSubSystem *)0x447a0000,0x3f800000,this,param_1,aVStack_60,aRStack_50,1);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_70);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x78),(RtWeakPtr *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

