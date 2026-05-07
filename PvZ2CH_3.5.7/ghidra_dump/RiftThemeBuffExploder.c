// Class: RiftThemeBuffExploder


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBuffExploder::StaticClassInit() */

void RiftThemeBuffExploder::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeBuffExploder");
    (*pcVar2)(plVar1,asStack_10,FUN_036fcde8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeBuffExploder::StaticGetClass() */

long * RiftThemeBuffExploder::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeBuffExploder",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeBuffExploder::GetClass() const */

long * RiftThemeBuffExploder::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeBuffExploder",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeBuffExploder::~RiftThemeBuffExploder() */

void __thiscall RiftThemeBuffExploder::~RiftThemeBuffExploder(RiftThemeBuffExploder *this)

{
  *(undefined ***)this = &PTR_GetClass_06687c70;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeBuffExploder::~RiftThemeBuffExploder() */

void __thiscall RiftThemeBuffExploder::~RiftThemeBuffExploder(RiftThemeBuffExploder *this)

{
  ~RiftThemeBuffExploder(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeBuffExploder::RiftThemeBuffExploder() */

void __thiscall RiftThemeBuffExploder::RiftThemeBuffExploder(RiftThemeBuffExploder *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06687c70;
  return;
}


/* RiftThemeBuffExploder::StaticNew() */

RiftThemeBuffExploder * RiftThemeBuffExploder::StaticNew(void)

{
  RiftThemeBuffExploder *this;
  
  this = ::operator_new(0x20);
  RiftThemeBuffExploder(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBuffExploder::DoExplode(int, int) */

void __thiscall
RiftThemeBuffExploder::DoExplode(RiftThemeBuffExploder *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  long extraout_x0;
  undefined8 *puVar3;
  Zombie *pZVar4;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
  local_60 = *(undefined4 *)(extraout_x0 + 0x48);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  EntityFinder::GetEntitiesAtGridSquare(avStack_80,2,param_1,param_2);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
    if ((((pZVar4 != (Zombie *)0x0) &&
         (cVar2 = RealObject::IsOnOpposingTeam(pZVar4,1), cVar2 != '\0')) &&
        (cVar2 = (**(code **)(*(long *)pZVar4 + 0x328))(pZVar4), cVar2 == '\0')) &&
       ((cVar2 = (**(code **)(*(long *)pZVar4 + 0x330))(pZVar4), cVar2 == '\0' &&
        (cVar2 = FUN_03703204(*(undefined4 *)(pZVar4 + 0x28)), cVar2 == '\0')))) {
      (**(code **)(*(long *)pZVar4 + 0x110))(pZVar4,aRStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBuffExploder::TryExplode(Plant*) */

void __thiscall RiftThemeBuffExploder::TryExplode(RiftThemeBuffExploder *this,Plant *param_1)

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
/* RiftThemeBuffExploder::OnPlantDestroyed(Plant*) */

void __thiscall RiftThemeBuffExploder::OnPlantDestroyed(RiftThemeBuffExploder *this,Plant *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long extraout_x0;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 == '\0') {
    std::string::string(asStack_10,"xiu");
    cVar1 = Plant::HasTag(param_1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if ((cVar1 == '\0') && (param_1 != (Plant *)0x0)) {
      Plant::GetType();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      bVar2 = std::operator!=((string *)(lVar3 + 8),"lilypad");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      if (bVar2) {
        EntityComponent_GroundEffect::GetEffect();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
        cVar1 = PlantRestrictionSet::IsIncluded((Plant *)(extraout_x0 + 0x20));
        if (cVar1 != '\0') {
          TryExplode(this,param_1);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeBuffExploder::Activate() */

void __thiscall RiftThemeBuffExploder::Activate(RiftThemeBuffExploder *this)

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
            ((ReceivedDataCallback *)this,OnPlantDestroyed);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<RiftThemeBuffExploder,void(RiftThemeBuffExploder::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDestroyed,&local_40);
  return;
}

