// Class: PrimalRafflesiaSubsystem


/* PrimalRafflesiaSubsystem::onZombieDropHead(Zombie*) */

void PrimalRafflesiaSubsystem::onZombieDropHead(Zombie *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalRafflesiaSubsystem::StaticClassInit() */

void PrimalRafflesiaSubsystem::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieToxicosis");
    (*pcVar3)(plVar2,asStack_10,FUN_041911dc,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieExplodeInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04191414,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SpecialProjectileInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0418d1f4,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PrimalRafflesiaSubsystem");
    (*pcVar3)(plVar2,asStack_10,FUN_0419175c,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PrimalRafflesiaSubsystem::StaticGetClass() */

long * PrimalRafflesiaSubsystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"PrimalRafflesiaSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalRafflesiaSubsystem::GetClass() const */

long * PrimalRafflesiaSubsystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"PrimalRafflesiaSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalRafflesiaSubsystem::shouldZombieExplode(Zombie*) */

void PrimalRafflesiaSubsystem::shouldZombieExplode(Zombie *param_1)

{
  char cVar1;
  undefined1 uVar2;
  RtWeakPtrBase *this;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
    uVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)uVar2) {
LAB_0418f200:
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar2);
      }
      return;
    }
    this = (RtWeakPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==(this,(RtWeakPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    if (cVar1 != '\0') {
      uVar2 = 2;
      if (this[8] == (RtWeakPtrBase)0x0) {
        uVar2 = 1;
      }
      goto LAB_0418f200;
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  } while( true );
}


/* PrimalRafflesiaSubsystem::PrimalRafflesiaSubsystem() */

void __thiscall PrimalRafflesiaSubsystem::PrimalRafflesiaSubsystem(PrimalRafflesiaSubsystem *this)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067fb5a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<PrimalRafflesiaSubsystem,void(PrimalRafflesiaSubsystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDropHead);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<PrimalRafflesiaSubsystem,void(PrimalRafflesiaSubsystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDropHead,&local_50);
  return;
}


/* PrimalRafflesiaSubsystem::StaticNew() */

PrimalRafflesiaSubsystem * PrimalRafflesiaSubsystem::StaticNew(void)

{
  PrimalRafflesiaSubsystem *this;
  
  this = ::operator_new(0x58);
  PrimalRafflesiaSubsystem(this);
  return this;
}


/* PrimalRafflesiaSubsystem::~PrimalRafflesiaSubsystem() */

void __thiscall PrimalRafflesiaSubsystem::~PrimalRafflesiaSubsystem(PrimalRafflesiaSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067fb5a0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<SpecialProjectileInfo,std::allocator<SpecialProjectileInfo>>::~vector
            ((vector<SpecialProjectileInfo,std::allocator<SpecialProjectileInfo>> *)(this + 0x40));
  std::vector<ZombieToxicosis,std::allocator<ZombieToxicosis>>::~vector
            ((vector<ZombieToxicosis,std::allocator<ZombieToxicosis>> *)(this + 0x28));
  std::vector<ZombieExplodeInfo,std::allocator<ZombieExplodeInfo>>::~vector
            ((vector<ZombieExplodeInfo,std::allocator<ZombieExplodeInfo>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* PrimalRafflesiaSubsystem::~PrimalRafflesiaSubsystem() */

void __thiscall PrimalRafflesiaSubsystem::~PrimalRafflesiaSubsystem(PrimalRafflesiaSubsystem *this)

{
  ~PrimalRafflesiaSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalRafflesiaSubsystem::DoExplosion(Sexy::SexyVector2 const&, bool) */

void __thiscall
PrimalRafflesiaSubsystem::DoExplosion
          (PrimalRafflesiaSubsystem *this,SexyVector2 *param_1,bool param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  string *psVar6;
  long extraout_x0;
  undefined8 *puVar7;
  Zombie *this_00;
  Effect_PopAnim *this_01;
  PopAnim *pPVar8;
  long *extraout_x0_00;
  RtObject *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  string asStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_68,"primalrafflesia");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
  PlantImitater::GetImitatedPlant();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  DamageInfo::DamageInfo((DamageInfo *)asStack_68);
  local_60 = (float)*(int *)(extraout_x0 + 0x310);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  iVar1 = *(int *)(extraout_x0 + 0x314);
  uVar4 = BoardTransforms::BoardSpaceToGridY(*(float *)(param_1 + 4));
  uVar5 = operator|(2,4);
  EntityFinder::GetEntitiesTouchingCircle2D((float)iVar1,avStack_80,uVar5,param_1,uVar4,uVar4);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_90[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_80);
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)local_90);
    if (!bVar2) break;
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
    this_02 = (RtObject *)*puVar7;
    cVar3 = RealObject::IsOnOpposingTeam(this_02,1);
    if (cVar3 != '\0') {
      this_00 = Sexy::RtObject::Cast<Zombie>(this_02);
      if (this_00 == (Zombie *)0x0) {
        nop();
        if (((extraout_x0_00 != (long *)0x0) &&
            (cVar3 = (**(code **)(*extraout_x0_00 + 0xb8))(), cVar3 != '\0')) &&
           (cVar3 = (**(code **)(*extraout_x0_00 + 0x200))(extraout_x0_00), cVar3 != '\0')) {
          (**(code **)(*extraout_x0_00 + 0x110))(extraout_x0_00,asStack_68);
        }
      }
      else {
        uVar4 = operator|(1,8);
        cVar3 = Zombie::MatchesAny(this_00,uVar4);
        if (((cVar3 == '\0') &&
            (cVar3 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,7), cVar3 != '\0')) &&
           (cVar3 = Zombie::IsFlying(this_00), cVar3 == '\0')) {
          (**(code **)(*(long *)this_00 + 0x110))(this_00,asStack_68);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
  }
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_98,"POPANIM_EFFECTS_PRIMAL_RAFFLESIA_EXPLODE");
  GetPAMByName((string *)&local_98);
  pPVar8 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_90);
  Effect_PopAnim::CreatePopAnimRig(this_01,pPVar8,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_90);
  std::string::~string((string *)&local_98);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)local_90,*(float *)param_1,*(float *)(param_1 + 4) - 20.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)local_90,-1);
  FUN_0418d668(this_01 + 0x1c);
  Effect_PopAnim::SetCentered(this_01,true);
  if (param_2) {
    std::string::string((string *)local_90,"anim3");
  }
  else {
    std::string::string((string *)local_90,"anim2");
    bVar2 = false;
  }
  Effect_PopAnim::PlaySingleAnimation(this_01,(RtWeakPtr<Sexy::ResourceInfo> *)local_90,bVar2);
  std::string::~string((string *)local_90);
  nop();
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalRafflesiaSubsystem::DoSplashDamage(int, int) */

void __thiscall
PrimalRafflesiaSubsystem::DoSplashDamage(PrimalRafflesiaSubsystem *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  string *psVar4;
  long extraout_x0;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  ulong uVar8;
  long *extraout_x0_00;
  RtObject *this_01;
  ulong uVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  Point aPStack_80 [24];
  string asStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  uVar9 = 0;
  std::string::string(asStack_68,"primalrafflesia");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
  PlantImitater::GetImitatedPlant();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  DamageInfo::DamageInfo((DamageInfo *)asStack_68);
  local_60 = (float)*(int *)(extraout_x0 + 0x318);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
  Sexy::Point::Point(aPStack_80,param_1 + -1,param_2 + -1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_98,aPStack_80);
  Sexy::Point::Point(aPStack_80,param_1 + 1,param_2 + -1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_98,aPStack_80);
  Sexy::Point::Point(aPStack_80,param_1 + -1,param_2 + 1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_98,aPStack_80);
  Sexy::Point::Point(aPStack_80,param_1 + 1,param_2 + 1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_98,aPStack_80);
  lVar5 = FUN_0418d428(local_98,local_90);
  if (lVar5 != 0) {
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_80);
      uVar3 = operator|(2,4);
      puVar6 = (undefined4 *)FUN_0418d434(local_98,uVar9);
      EntityFinder::GetEntitiesAtGridSquare(aPStack_80,uVar3,*puVar6,puVar6[1]);
      local_a8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aPStack_80);
      local_a0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aPStack_80);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0),
            bVar1) {
        puVar7 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
        this_01 = (RtObject *)*puVar7;
        cVar2 = RealObject::IsOnOpposingTeam(this_01,1);
        if (cVar2 != '\0') {
          this_00 = Sexy::RtObject::Cast<Zombie>(this_01);
          if (this_00 == (Zombie *)0x0) {
            nop();
            if (((extraout_x0_00 != (long *)0x0) &&
                (cVar2 = (**(code **)(*extraout_x0_00 + 0xb8))(), cVar2 != '\0')) &&
               (cVar2 = (**(code **)(*extraout_x0_00 + 0x200))(extraout_x0_00), cVar2 != '\0')) {
              (**(code **)(*extraout_x0_00 + 0x110))(extraout_x0_00,asStack_68);
            }
          }
          else {
            uVar3 = operator|(1,8);
            cVar2 = Zombie::MatchesAny(this_00,uVar3);
            if (((cVar2 == '\0') &&
                (cVar2 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,7), cVar2 != '\0')) &&
               (cVar2 = Zombie::IsFlying(this_00), cVar2 == '\0')) {
              (**(code **)(*(long *)this_00 + 0x110))(this_00,asStack_68);
            }
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
      }
      uVar9 = uVar9 + 1;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aPStack_80);
      uVar8 = FUN_0418d428(local_98,local_90);
    } while (uVar9 < uVar8);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_98);
  DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalRafflesiaSubsystem::Update() */

void __thiscall PrimalRafflesiaSubsystem::Update(PrimalRafflesiaSubsystem *this)

{
  char cVar1;
  ResourceInfo *this_00;
  PopAnimRig *this_01;
  ulong uVar2;
  RtMixedPtrBase *this_02;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 local_48 [2];
  undefined8 local_38 [2];
  undefined8 local_28 [2];
  undefined4 local_18;
  undefined4 uStack_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x28);
    uVar2 = FUN_0418d3bc(uVar5,*(undefined8 *)(this + 0x30));
    if (uVar2 <= uVar6) break;
    this_02 = (RtMixedPtrBase *)FUN_0418d3e4(uVar5,uVar6);
    fVar7 = (float)PVZ_T();
    fVar10 = *(float *)(this_02 + 8);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_02);
    if (cVar1 == '\0') {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)this_02);
    }
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    if ((1.0 < fVar7 - fVar10) && (this_02[0xd] == (RtMixedPtrBase)0x0)) {
      uVar8 = *(undefined4 *)(this_00 + 0x18);
      this_02[0xd] = (RtMixedPtrBase)0x1;
      uVar9 = *(undefined4 *)(this_00 + 0x1c);
      local_18 = FUN_0418d678(uVar8,uVar9,*(undefined4 *)(this_00 + 0x20));
      uStack_14 = uVar9;
      DoExplosion(this,(SexyVector2 *)&local_18,(bool)this_02[0xc]);
    }
    Sexy::Color::Color((Color *)local_48);
    if (this_02[0xc] == (RtMixedPtrBase)0x0) {
      Sexy::Insets::Insets((Insets *)&local_18,0x91,0xfe,0xe9,0xff);
      local_48[0] = CONCAT44(uStack_14,local_18);
    }
    else {
      Sexy::Insets::Insets((Insets *)&local_18,0xcb,0x87,0xce,0xff);
      local_48[0] = CONCAT44(uStack_14,local_18);
    }
    uVar6 = uVar6 + 1;
    Sexy::Color::Color((Color *)local_28,1);
    Sexy::Insets::Insets((Insets *)&local_18,(Insets *)local_48);
    Sexy::ColorLerp((Sexy *)local_38,(fVar7 - fVar10) * 0.5,(Color *)local_28,
                    (RtWeakPtr<Sexy::SoundResource> *)&local_18);
    this_01 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this_00);
    PopAnimRig::SetPAMColor(this_01,(Color *)local_38);
  }
  uVar5 = *(undefined8 *)(this + 0x40);
  uVar6 = 0;
  lVar3 = FUN_0418d3ec(uVar5,*(undefined8 *)(this + 0x48));
  if (lVar3 != 0) {
    do {
      piVar4 = (int *)FUN_0418d41c(uVar5,uVar6);
      fVar7 = (float)PVZ_T();
      if (0.3 < fVar7 - (float)piVar4[2]) {
        DoSplashDamage(this,*piVar4,piVar4[1]);
        local_38[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)(this + 0x40));
        local_28[0] = __gnu_cxx::
                      __normal_iterator<CardGameLevelBonusData*,std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>>
                      ::operator+((__normal_iterator<CardGameLevelBonusData*,std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>>
                                   *)local_38,uVar6);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)local_28);
        std::vector<SpecialProjectileInfo,std::allocator<SpecialProjectileInfo>>::erase
                  ((vector<SpecialProjectileInfo,std::allocator<SpecialProjectileInfo>> *)
                   (this + 0x40),CONCAT44(uStack_14,local_18));
      }
      uVar6 = uVar6 + 1;
      uVar5 = *(undefined8 *)(this + 0x40);
      uVar2 = FUN_0418d3ec(uVar5,*(undefined8 *)(this + 0x48));
    } while (uVar6 < uVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalRafflesiaSubsystem::onZombieDestroyed(Zombie*) */

void PrimalRafflesiaSubsystem::onZombieDestroyed(Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x28);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
LAB_0419339c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (RtWeakPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,(RtWeakPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    if (cVar1 != '\0') {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<ZombieToxicosis,std::allocator<ZombieToxicosis>>::erase
                ((vector<ZombieToxicosis,std::allocator<ZombieToxicosis>> *)this,local_10);
      goto LAB_0419339c;
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalRafflesiaSubsystem::CauseZombieToxicosis(Zombie*, ExplodeLevelType) */

void __thiscall
PrimalRafflesiaSubsystem::CauseZombieToxicosis
          (PrimalRafflesiaSubsystem *this,undefined8 param_2,int param_3)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  ZombieToxicosis aZStack_18 [8];
  undefined4 local_10;
  undefined1 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieToxicosis::ZombieToxicosis(aZStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)aZStack_18,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  local_10 = PVZ_T();
  local_c = param_3 == 2;
  std::vector<ZombieToxicosis,std::allocator<ZombieToxicosis>>::push_back
            ((vector<ZombieToxicosis,std::allocator<ZombieToxicosis>> *)(this + 0x28),aZStack_18);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aZStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalRafflesiaSubsystem::tryExplodeZombie(Zombie*, ExplodeLevelType) */

void __thiscall
PrimalRafflesiaSubsystem::tryExplodeZombie
          (PrimalRafflesiaSubsystem *this,undefined8 param_1,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  CauseZombieToxicosis(this,param_1,param_3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalRafflesiaSubsystem::ExplodeInstantly(Zombie*) */

void __thiscall
PrimalRafflesiaSubsystem::ExplodeInstantly(PrimalRafflesiaSubsystem *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  RtWeakPtrBase *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = shouldZombieExplode((Zombie *)this);
  if (0 < iVar3) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x10);
    tryExplodeZombie(this,param_1,iVar3);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      this_01 = (RtWeakPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      ToolPacketData::GetProps();
      cVar1 = Sexy::RtWeakPtrBase::operator==(this_01,(RtWeakPtrBase *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      if (cVar1 != '\0') {
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<ZombieExplodeInfo,std::allocator<ZombieExplodeInfo>>::erase
                  ((vector<ZombieExplodeInfo,std::allocator<ZombieExplodeInfo>> *)this_00,local_10);
        break;
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalRafflesiaSubsystem::MarkZombieExplode(Zombie*, bool) */

void __thiscall
PrimalRafflesiaSubsystem::MarkZombieExplode
          (PrimalRafflesiaSubsystem *this,Zombie *param_1,bool param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  VaseConfiguration aVStack_18 [8];
  undefined1 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  VaseConfiguration::VaseConfiguration(aVStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)aVStack_18,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  local_10 = param_2;
  std::vector<ZombieExplodeInfo,std::allocator<ZombieExplodeInfo>>::push_back
            ((vector<ZombieExplodeInfo,std::allocator<ZombieExplodeInfo>> *)(this + 0x10),
             (ZombieExplodeInfo *)aVStack_18);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalRafflesiaSubsystem::MarkSpecialProjectile(int, int) */

void __thiscall
PrimalRafflesiaSubsystem::MarkSpecialProjectile
          (PrimalRafflesiaSubsystem *this,int param_1,int param_2)

{
  int local_18;
  int local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SpecialProjectileInfo::SpecialProjectileInfo((SpecialProjectileInfo *)&local_18);
  local_18 = param_1;
  local_14 = param_2;
  local_10 = PVZ_T();
  std::vector<SpecialProjectileInfo,std::allocator<SpecialProjectileInfo>>::push_back
            ((vector<SpecialProjectileInfo,std::allocator<SpecialProjectileInfo>> *)(this + 0x40),
             (SpecialProjectileInfo *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

