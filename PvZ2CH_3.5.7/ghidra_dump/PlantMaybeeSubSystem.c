// Class: PlantMaybeeSubSystem


/* PlantMaybeeSubSystem::isViableTarget(Zombie*) */

char __thiscall PlantMaybeeSubSystem::isViableTarget(PlantMaybeeSubSystem *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  SexyVector3 *pSVar7;
  
  if (param_1 == (Zombie *)0x0) {
    return '\0';
  }
  uVar6 = operator|(1,8);
  cVar1 = Zombie::MatchesAny(param_1,uVar6);
  if (cVar1 == '\0') {
    bVar2 = Zombie::IsTargetable(param_1);
    bVar3 = Sexy::RtObject::IsA<ZombiePirateBarrel>((RtObject *)param_1);
    pSVar7 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),pSVar7);
    cVar4 = RealObject::IsOnOpposingTeam(param_1,1);
    if ((cVar4 != '\0') && (bVar3 < bVar2)) {
      if (*(code **)(*(long *)param_1 + 0x338) == Zombie::IsSwingingIn) {
        cVar5 = Zombie::IsSwingingIn();
      }
      else {
        cVar5 = (**(code **)(*(long *)param_1 + 0x338))(param_1);
      }
      if (((cVar5 == '\0') && (cVar1 == '\0')) &&
         (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')) {
        return cVar4;
      }
    }
  }
  else {
    Sexy::RtObject::IsA<ZombiePirateBarrel>((RtObject *)param_1);
    pSVar7 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),pSVar7);
    RealObject::IsOnOpposingTeam(param_1,1);
  }
  return '\0';
}


/* PlantMaybeeSubSystem::isBeeExpired(MaybeeBee*) */

void __thiscall PlantMaybeeSubSystem::isBeeExpired(PlantMaybeeSubSystem *this,MaybeeBee *param_1)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  FUN_04e2d85c(*(undefined4 *)(param_1 + 0xc0),uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMaybeeSubSystem::isPreviouslySelected(Zombie*) */

void PlantMaybeeSubSystem::isPreviouslySelected(Zombie *param_1)

{
  char cVar1;
  BeeTargetEntry *pBVar2;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtrBase aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  BeeTargetEntry aBStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x10));
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!(bool)cVar1) {
LAB_04e3064c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    pBVar2 = (BeeTargetEntry *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    BeeTargetEntry::BeeTargetEntry(aBStack_20,pBVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aBStack_20);
    MaybeeBee::GetTarget();
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==(aRStack_30,(RtWeakPtrBase *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    if (cVar1 != '\0') {
      BeeTargetEntry::~BeeTargetEntry(aBStack_20);
      goto LAB_04e3064c;
    }
    BeeTargetEntry::~BeeTargetEntry(aBStack_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_40);
  } while( true );
}


/* PlantMaybeeSubSystem::PlantMaybeeSubSystem() */

void __thiscall PlantMaybeeSubSystem::PlantMaybeeSubSystem(PlantMaybeeSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_069dbb10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* PlantMaybeeSubSystem::StaticNew() */

PlantMaybeeSubSystem * PlantMaybeeSubSystem::StaticNew(void)

{
  PlantMaybeeSubSystem *this;
  
  this = ::operator_new(0x28);
  PlantMaybeeSubSystem(this);
  return this;
}


/* PlantMaybeeSubSystem::registerForEvents() */

void __thiscall PlantMaybeeSubSystem::registerForEvents(PlantMaybeeSubSystem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDamageTakenRaw);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const&,Sexy::CBMemberTranslatorX<PlantMaybeeSubSystem,void(PlantMaybeeSubSystem::*)(Zombie*,DamageInfo_const&)>>
            ((MessageRouter *)puVar1,Message::ZombieDamageTakenRaw,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMaybeeSubSystem::onZombieDamageTakenRaw(Zombie*, DamageInfo const&) */

void __thiscall
PlantMaybeeSubSystem::onZombieDamageTakenRaw
          (PlantMaybeeSubSystem *this,Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  bool bVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  SexyVector3 *this_01;
  undefined4 uVar4;
  undefined4 uVar5;
  Point aPStack_88 [16];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  DamageInfo aDStack_68 [84];
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::HasCondition(param_1,0x3c);
  if (cVar1 != '\0') {
    cVar1 = FUN_04e2f1dc(param_1 + 0x5c4);
    if ((cVar1 != '\0') &&
       (bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_2 + 0x10),0x80), bVar2)) {
      Sexy::Point::Point(aPStack_88,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x42f00000,local_78,local_74,aDStack_68,aPStack_88,0);
      local_14 = 0x41200000;
      FUN_04e2f204(param_1 + 0x5c4);
      (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
      Zombie::ApplyCondition((Zombie *)0x3f800000,0,param_1,0x18,1);
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string((string *)aPStack_88,"POPANIM_EFFECTS_MAYBEE_SHOCK");
      GetPAMByName((string *)aPStack_88);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_78);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
      std::string::~string((string *)aPStack_88);
      nop();
      Effect_PopAnim::SetCentered(this_00,true);
      this_01 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)param_1);
      uVar4 = 0;
      uVar5 = 0;
      EATextSquish::Vec3::Vec3((Vec3 *)aPStack_88,0.0,0.0,0.0);
      local_78 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aPStack_88);
      local_74 = uVar4;
      local_70 = uVar5;
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_78,-1)
      ;
      FUN_04e2da48(this_00 + 0x1c);
      std::string::string((string *)&local_78,"trigger");
      Effect_PopAnim::PlaySingleAnimation(this_00,(FastCurve *)&local_78,0);
      std::string::~string((string *)&local_78);
      nop();
      DamageInfo::~DamageInfo(aDStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMaybeeSubSystem::~PlantMaybeeSubSystem() */

void __thiscall PlantMaybeeSubSystem::~PlantMaybeeSubSystem(PlantMaybeeSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_069dbb10;
  std::vector<BeeTargetEntry,std::allocator<BeeTargetEntry>>::~vector
            ((vector<BeeTargetEntry,std::allocator<BeeTargetEntry>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* PlantMaybeeSubSystem::~PlantMaybeeSubSystem() */

void __thiscall PlantMaybeeSubSystem::~PlantMaybeeSubSystem(PlantMaybeeSubSystem *this)

{
  ~PlantMaybeeSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMaybeeSubSystem::checkFullBeeAttack(Zombie*) */

void __thiscall PlantMaybeeSubSystem::checkFullBeeAttack(PlantMaybeeSubSystem *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  vector *pvVar3;
  RtMixedPtrBase *this_00;
  int iVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  pvVar3 = (vector *)Zombie::GetTargetbyMaybee(param_1);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
            (avStack_20,pvVar3);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    this_00 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      iVar4 = iVar4 + 1;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            (avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4 == 6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMaybeeSubSystem::findTarget(std::vector<BoardEntity*, std::allocator<BoardEntity*> >,
   BeeTargetEntry) */

void __thiscall
PlantMaybeeSubSystem::findTarget
          (PlantMaybeeSubSystem *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  bool bVar1;
  char cVar2;
  Zombie *this_00;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *this_01;
  Zombie *extraout_x0;
  MaybeeBee *pMVar3;
  Zombie *pZVar4;
  undefined8 local_28;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    nop();
    this_01 = (vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              Zombie::GetTargetbyMaybee(this_00);
    cVar2 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
            empty(this_01);
    pZVar4 = this_00;
    if (cVar2 != '\0') goto LAB_04e3298c;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    nop();
    cVar2 = checkFullBeeAttack(this,extraout_x0);
    pZVar4 = extraout_x0;
    if (cVar2 == '\0') goto LAB_04e3298c;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
LAB_04e32960:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_04e3298c:
  pMVar3 = (MaybeeBee *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  MaybeeBee::SetTarget(pMVar3,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_3);
  Zombie::AddToTargetbyMaybee(pZVar4,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  goto LAB_04e32960;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMaybeeSubSystem::StaticClassInit() */

void PlantMaybeeSubSystem::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"plant",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"house",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"hp",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"normal",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"BeePlantfoodGroup");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"BeeTargetEntry");
    (*pcVar3)(plVar2,avStack_20,FUN_04e3215c,0x18,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"PlantMaybeeSubSystem");
    (*pcVar3)(plVar2,avStack_20,FUN_04e33528,0x28,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMaybeeSubSystem::StaticGetClass() */

long * PlantMaybeeSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantMaybeeSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMaybeeSubSystem::GetClass() const */

long * PlantMaybeeSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantMaybeeSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMaybeeSubSystem::reassignBeeTarget(BeeTargetEntry) */

void PlantMaybeeSubSystem::reassignBeeTarget
               (PlantMaybeeSubSystem *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2,
               undefined8 param_3,undefined8 param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *extraout_x0;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_88;
  int local_84;
  BoardEntity *local_80;
  BoardEntitySorter_Closest aBStack_78 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  undefined8 local_38 [3];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  BoardEntity::CalcGridPosition();
  Sexy::Point::Point((Point *)local_20,(TPoint *)&local_88);
  EntityFinder::BoardEntitySorter_Closest::BoardEntitySorter_Closest(aBStack_78,(Point *)local_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  if (*(int *)(param_2 + 8) == 1) {
    EntityFinder::GetEntitiesOnBoard(avStack_50,2);
  }
  else {
    BoardTransforms::GridToBoardSpaceRect
              ((BoardTransforms *)(ulong)(local_88 - 1),local_84 + -1,3,3,param_5);
    EntityFinder::GetEntitiesInRectangle(avStack_50,2,(Point *)local_20);
  }
  local_38[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_50);
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_50);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_38,(__normal_iterator *)local_20),
        bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_38);
    local_80 = (BoardEntity *)*puVar3;
    nop();
    cVar2 = isViableTarget(param_1,extraout_x0);
    if (cVar2 != '\0') {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68,&local_80);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_38);
  }
  cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  if (cVar2 == '\0') {
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_68);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_68);
    EntityFinder::BoardEntitySorter_Closest::BoardEntitySorter_Closest
              ((BoardEntitySorter_Closest *)local_20,aBStack_78);
    std::
    sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_Closest>
              (uVar4,uVar5,(Point *)local_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_38,(vector *)avStack_68);
    BeeTargetEntry::BeeTargetEntry((BeeTargetEntry *)local_20,(BeeTargetEntry *)param_2);
    findTarget(param_1,(generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_38,
               (Point *)local_20);
    BeeTargetEntry::~BeeTargetEntry((BeeTargetEntry *)local_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMaybeeSubSystem::Update() */

void __thiscall PlantMaybeeSubSystem::Update(PlantMaybeeSubSystem *this)

{
  vector *pvVar1;
  bool bVar2;
  char cVar3;
  RtWeakPtr *pRVar4;
  ResourceInfo *pRVar5;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  MaybeeBee *pMVar7;
  Zombie *pZVar8;
  RtWeakPtrBase *pRVar9;
  BeeTargetEntry *pBVar10;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20 [3];
  long local_8;
  
  pvVar1 = (vector *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_30 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(pvVar1);
LAB_04e338d8:
  local_20[0] = std::end<std::vector<DButton*,std::allocator<DButton*>>>(pvVar1);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)local_20);
  do {
    if (!bVar2) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar4 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar4);
    if (bVar2) {
      pRVar4 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar4);
      cVar3 = isBeeExpired(this,(MaybeeBee *)pRVar5);
      if (cVar3 == '\0') break;
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      pMVar7 = (MaybeeBee *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      cVar3 = MaybeeBee::HasTarget(pMVar7);
      if (cVar3 != '\0') {
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        MaybeeBee::GetTarget();
        pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        pRVar9 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_20,pRVar9);
        Zombie::ClearTargetbyMaybee(pZVar8,(RtWeakPtr<Sexy::SoundResource> *)local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      }
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      pMVar7 = (MaybeeBee *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      MaybeeBee::Die(pMVar7);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)local_20,(__normal_iterator *)&local_30);
    local_30 = std::vector<BeeTargetEntry,std::allocator<BeeTargetEntry>>::erase
                         ((vector<BeeTargetEntry,std::allocator<BeeTargetEntry>> *)pvVar1,
                          local_20[0]);
    local_20[0] = std::end<std::vector<DButton*,std::allocator<DButton*>>>(pvVar1);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)local_20);
  } while( true );
  pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
  pMVar7 = (MaybeeBee *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
  cVar3 = MaybeeBee::HasTarget(pMVar7);
  if (cVar3 == '\0') {
    pBVar10 = (BeeTargetEntry *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    BeeTargetEntry::BeeTargetEntry((BeeTargetEntry *)local_20,pBVar10);
    reassignBeeTarget(this,(RtWeakPtr<Sexy::SoundResource> *)local_20);
    BeeTargetEntry::~BeeTargetEntry((BeeTargetEntry *)local_20);
  }
  FUN_04e30688((__normal_iterator *)&local_30);
  goto LAB_04e338d8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMaybeeSubSystem::assignBeeTarget(BeeTargetEntry) */

void PlantMaybeeSubSystem::assignBeeTarget
               (PlantMaybeeSubSystem *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2,
               undefined8 param_3,undefined8 param_4,int param_5)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Zombie *extraout_x0;
  Zombie *extraout_x0_00;
  Zombie *extraout_x0_01;
  long lVar7;
  SharkMinion *pSVar8;
  Zombie *extraout_x0_02;
  undefined8 uVar9;
  undefined8 uVar10;
  MaybeeBee *pMVar11;
  Zombie *extraout_x0_03;
  uint local_88;
  int local_84;
  BoardEntity *local_80;
  undefined8 local_78 [2];
  undefined8 local_68 [3];
  Zombie *local_50 [3];
  Zombie *local_38 [3];
  BoardEntity *local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_68);
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0:
    this = param_2 + 0x10;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
    Board::GetGridBoundingRect();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    uVar5 = *(undefined4 *)(lVar7 + 0x110);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38,2,
               (RtWeakPtr<Sexy::SoundResource> *)local_20,uVar5,*(undefined4 *)(lVar7 + 0x110));
    local_78[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)local_38);
    local_50[0] = (Zombie *)
                  std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)local_38);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_78,(__normal_iterator *)local_50), bVar1) {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_78);
      nop();
      cVar2 = isViableTarget(param_1,extraout_x0_01);
      if ((cVar2 != '\0') && (cVar2 = isPreviouslySelected((Zombie *)param_1), cVar2 == '\0')) {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_68,local_20);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_78);
    }
    cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_68);
    if (cVar2 != '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
      EntityFinder::GetEntitiesOnBoard((RtWeakPtr<Sexy::SoundResource> *)local_20,2);
      local_80 = (BoardEntity *)
                 std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_20);
      local_78[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)local_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_80,(__normal_iterator *)local_78), bVar1
            ) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
        nop();
        cVar2 = isViableTarget(param_1,extraout_x0_03);
        if ((cVar2 != '\0') && (cVar2 = isPreviouslySelected((Zombie *)param_1), cVar2 == '\0')) {
          local_50[0] = extraout_x0_03;
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_68,
                     (BoardEntity **)local_50);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
    }
    cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_68);
    if (cVar2 == '\0') {
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)local_68);
      uVar10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      BoardEntity::CalcGridPosition();
      EntityFinder::BoardEntitySorter_Closest::BoardEntitySorter_Closest
                ((BoardEntitySorter_Closest *)local_20,(RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      std::
      sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_Closest>
                (uVar9,uVar10,(RtWeakPtr<Sexy::SoundResource> *)local_20);
      pMVar11 = (MaybeeBee *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      FUN_04e2da1c(local_68[0]);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)local_50);
      MaybeeBee::SetTarget(pMVar11,(RtWeakPtr<Sexy::SoundResource> *)local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_38);
    break;
  case 1:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
    EntityFinder::GetEntitiesOnBoard
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50,2);
    Sexy::Point::Point((Point *)&local_80,0,0);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_2 + 0x10));
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2 + 0x10);
      BoardEntity::CalcGridPosition();
      local_80 = local_20[0];
    }
    local_78[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)local_50);
    local_38[0] = (Zombie *)
                  std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)local_50);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_78,(__normal_iterator *)local_38), bVar1) {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_78);
      nop();
      cVar2 = isViableTarget(param_1,extraout_x0_00);
      if ((cVar2 != '\0') && (cVar2 = checkFullBeeAttack(param_1,extraout_x0_00), cVar2 == '\0')) {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_68,local_20);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_78);
    }
    cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_68);
    if (cVar2 == '\0') {
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)local_68);
      uVar10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_68);
      Sexy::Point::Point((Point *)local_38,(TPoint *)&local_80);
      EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
                ((BoardEntitySorter_ClosestByColumn *)local_20,(Point *)local_38);
LAB_04e33b24:
      std::
      sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
                (uVar9,uVar10,(BeeTargetEntry *)local_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_38,(vector *)local_68);
      BeeTargetEntry::BeeTargetEntry((BeeTargetEntry *)local_20,(BeeTargetEntry *)param_2);
      findTarget(param_1,(vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_38,
                 (BeeTargetEntry *)local_20);
      BeeTargetEntry::~BeeTargetEntry((BeeTargetEntry *)local_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_38);
    }
    goto LAB_04e33b64;
  case 2:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    EntityFinder::GetEntitiesOnBoard
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20,2);
    local_78[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)local_20);
    local_50[0] = (Zombie *)
                  std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_78,(__normal_iterator *)local_50), bVar1) {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_78);
      nop();
      cVar2 = isViableTarget(param_1,extraout_x0);
      if ((cVar2 != '\0') && (cVar2 = isPreviouslySelected((Zombie *)param_1), cVar2 == '\0')) {
        local_38[0] = extraout_x0;
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_68,
                   (BoardEntity **)local_38);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_78);
    }
    cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_68);
    if (cVar2 == '\0') {
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)local_68);
      uVar10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_68);
      Sexy::Point::Point((Point *)local_50,0,0);
      EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
                ((BoardEntitySorter_ClosestByColumn *)local_38,(Point *)local_50);
      std::
      sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
                (uVar9,uVar10,(RtWeakPtr<Sexy::SoundResource> *)local_38);
      pMVar11 = (MaybeeBee *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      FUN_04e2da1c(local_68[0]);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_38,(RtWeakPtrBase *)local_50);
      MaybeeBee::SetTarget(pMVar11,(RtWeakPtr<Sexy::SoundResource> *)local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
    break;
  case 3:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    BoardEntity::CalcGridPosition();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    iVar3 = FUN_04e2d894(*(undefined4 *)(lVar7 + 200));
    iVar4 = 4;
    if (iVar3 != 2) {
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      iVar3 = FUN_04e2d894(*(undefined4 *)(lVar7 + 200));
      iVar4 = 3;
      if (2 < iVar3) {
        iVar4 = 5;
      }
    }
    BoardTransforms::GridToBoardSpaceRect
              ((BoardTransforms *)(ulong)local_88,local_84,iVar4,1,param_5);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
    pSVar8 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    uVar5 = SharkMinion::getRow(pSVar8);
    pSVar8 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    uVar6 = SharkMinion::getRow(pSVar8);
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50,2,local_78,
               uVar5,uVar6);
    local_80 = (BoardEntity *)
               std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_50);
    local_38[0] = (Zombie *)
                  std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)local_50);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_80,(__normal_iterator *)local_38), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      nop();
      cVar2 = isViableTarget(param_1,extraout_x0_02);
      if ((cVar2 != '\0') && (cVar2 = checkFullBeeAttack(param_1,extraout_x0_02), cVar2 == '\0')) {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_68,local_20);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
    }
    cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_68);
    if (cVar2 == '\0') {
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)local_68);
      uVar10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_68);
      Sexy::Point::Point((Point *)local_38,(TPoint *)&local_88);
      EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
                ((BoardEntitySorter_ClosestByColumn *)local_20,(Point *)local_38);
      goto LAB_04e33b24;
    }
LAB_04e33b64:
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_50);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMaybeeSubSystem::AddBee(MaybeeBee*, Sexy::RtWeakPtr<Plant>, BeePlantfoodGroup) */

void __thiscall
PlantMaybeeSubSystem::AddBee
          (PlantMaybeeSubSystem *this,undefined8 param_2,RtWeakPtr *param_3,undefined4 param_4)

{
  BeeTargetEntry aBStack_38 [8];
  undefined4 local_30;
  RtWeakPtr<PowerPropertySheet> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BeeTargetEntry::BeeTargetEntry(aBStack_38);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)aBStack_38,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  local_30 = param_4;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_28,param_3);
  std::vector<BeeTargetEntry,std::allocator<BeeTargetEntry>>::push_back
            ((vector<BeeTargetEntry,std::allocator<BeeTargetEntry>> *)(this + 0x10),aBStack_38);
  BeeTargetEntry::BeeTargetEntry((BeeTargetEntry *)aRStack_20,aBStack_38);
  assignBeeTarget(this,aRStack_20);
  BeeTargetEntry::~BeeTargetEntry((BeeTargetEntry *)aRStack_20);
  BeeTargetEntry::~BeeTargetEntry(aBStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

