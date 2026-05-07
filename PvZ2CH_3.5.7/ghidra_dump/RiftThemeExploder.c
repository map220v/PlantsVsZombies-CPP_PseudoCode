// Class: RiftThemeExploder


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeExploder::StaticClassInit() */

void RiftThemeExploder::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeExploder");
    (*pcVar2)(plVar1,asStack_10,FUN_036f95b0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeExploder::StaticGetClass() */

long * RiftThemeExploder::StaticGetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeExploder",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeExploder::GetClass() const */

long * RiftThemeExploder::GetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeExploder",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeExploder::~RiftThemeExploder() */

void __thiscall RiftThemeExploder::~RiftThemeExploder(RiftThemeExploder *this)

{
  *(undefined ***)this = &PTR_GetClass_06686d00;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeExploder::~RiftThemeExploder() */

void __thiscall RiftThemeExploder::~RiftThemeExploder(RiftThemeExploder *this)

{
  ~RiftThemeExploder(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeExploder::RiftThemeExploder() */

void __thiscall RiftThemeExploder::RiftThemeExploder(RiftThemeExploder *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06686d00;
  return;
}


/* RiftThemeExploder::StaticNew() */

RiftThemeExploder * RiftThemeExploder::StaticNew(void)

{
  RiftThemeExploder *this;
  
  this = ::operator_new(0x20);
  RiftThemeExploder(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeExploder::DoExplode(int, int) */

void __thiscall RiftThemeExploder::DoExplode(RiftThemeExploder *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Plant *this_00;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,1,param_1,param_2);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
    if (((this_00 != (Plant *)0x0) && (0.0 < *(float *)(this_00 + 0xd8))) &&
       (cVar2 = Plant::IsInvincible(this_00,false), cVar2 == '\0')) {
      Plant::KillPlant(this_00,0,1,1);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeExploder::TryExplode(Zombie*) */

void __thiscall RiftThemeExploder::TryExplode(RiftThemeExploder *this,Zombie *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  Effect_PopAnim *pEVar4;
  ResourceInfo *pRVar5;
  float fVar6;
  float fVar7;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar6 = *pfVar3;
  fVar7 = pfVar3[1];
  pEVar4 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_CHERRYBOMB_EXPLOSION_TOP");
  GetPAMByName(asStack_20);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  (**(code **)(*(long *)pEVar4 + 0x80))(0x3fc00000,pEVar4);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)(int)(fVar6 - 130.0),(float)(int)(fVar7 - 290.0),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar4,(SexyVector3 *)aRStack_18,-1);
  FUN_036f7560(pEVar4 + 0x1c,500000);
  std::string::string((string *)aRStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(pEVar4,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  pEVar4 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  (**(code **)(*(long *)pEVar4 + 0x80))(0x3fc00000);
  std::string::string(asStack_20,"POPANIM_EFFECTS_CHERRYBOMB_EXPLOSION_REAR");
  GetPAMByName(asStack_20);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)(int)(fVar6 - 130.0),(float)(int)(fVar7 - 290.0),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar4,(SexyVector3 *)aRStack_18,-1);
  FUN_036f7560(pEVar4 + 0x1c,300000);
  std::string::string((string *)aRStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(pEVar4,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.0);
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
  DoExplode(this,iVar1,iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeExploder::onZombieDied(Zombie*, DamageInfo const*) */

void RiftThemeExploder::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (DamageInfo *)0x0) {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar1 = ZombieRestrictionSet::IsIncluded
                      ((ZombieRestrictionSet *)(extraout_x0 + 0x20),(Zombie *)param_2);
    if (cVar1 != '\0') {
      TryExplode((RiftThemeExploder *)param_1,(Zombie *)param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeExploder::Activate() */

void __thiscall RiftThemeExploder::Activate(RiftThemeExploder *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  RiftTheme::Activate((RiftTheme *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<RiftThemeExploder,void(RiftThemeExploder::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  return;
}

