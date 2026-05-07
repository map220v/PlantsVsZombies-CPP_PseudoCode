// Class: Effect_MusicalNote


/* Effect_MusicalNote::cancelTouch() */

void Effect_MusicalNote::cancelTouch(void)

{
  return;
}


/* Effect_MusicalNote::~Effect_MusicalNote() */

void __thiscall Effect_MusicalNote::~Effect_MusicalNote(Effect_MusicalNote *this)

{
  *(undefined ***)this = &PTR_GetClass_0669b160;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_MusicalNote::~Effect_MusicalNote() */

void __thiscall Effect_MusicalNote::~Effect_MusicalNote(Effect_MusicalNote *this)

{
  ~Effect_MusicalNote(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_MusicalNote::StaticClassInit() */

void Effect_MusicalNote::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_MusicalNote");
    (*pcVar2)(plVar1,asStack_10,FUN_037e16b0,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_MusicalNote::StaticGetClass() */

long * Effect_MusicalNote::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_MusicalNote",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_MusicalNote::GetClass() const */

long * Effect_MusicalNote::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_MusicalNote",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_MusicalNote::Effect_MusicalNote() */

void __thiscall Effect_MusicalNote::Effect_MusicalNote(Effect_MusicalNote *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_0669b160;
  Sexy::Point::Point((Point *)(this + 0x114));
  return;
}


/* Effect_MusicalNote::StaticNew() */

Effect_MusicalNote * Effect_MusicalNote::StaticNew(void)

{
  Effect_MusicalNote *this;
  
  this = ::operator_new(0x128);
  Effect_MusicalNote(this);
  return this;
}


/* Effect_MusicalNote::init(Sexy::Point, float, float) */

void __thiscall
Effect_MusicalNote::init
          (undefined4 param_1,undefined4 param_2,Effect_MusicalNote *this,undefined8 *param_4)

{
  long lVar1;
  float fVar2;
  
  *(undefined8 *)(this + 0x114) = *param_4;
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar2 = (float)FUN_037e12f8(*(undefined4 *)(lVar1 + 0x38));
  *(undefined4 *)(this + 0x110) = 0;
  this[0x124] = (Effect_MusicalNote)0x0;
  *(undefined4 *)(this + 0x11c) = param_1;
  *(undefined4 *)(this + 0x120) = param_2;
  *(float *)(this + 0x10c) = fVar2 + 1.0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_MusicalNote::playBoomEffect() */

void Effect_MusicalNote::playBoomEffect(void)

{
  StandaloneEffect *in_x0;
  Effect_MusicalBoom *this;
  ResourceInfo *pRVar1;
  string asStack_20 [8];
  undefined4 local_18 [2];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_MusicalBoom>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_ARTIFACT_GUITAR_MUSICAL_BOOM");
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string(asStack_20);
  nop();
  DVec3::DVec3((DVec3 *)local_18);
  local_18[0] = StandaloneEffect::GetBoardSpaceOrigin(in_x0);
  StandaloneEffect::GetBoardSpaceOrigin(in_x0);
  local_10 = 0;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)local_18,-1);
  std::string::string(asStack_20,"animation1");
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,asStack_20,0);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_MusicalNote::registerForEvents() */

void __thiscall Effect_MusicalNote::registerForEvents(Effect_MusicalNote *this)

{
  Board *pBVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<Effect_MusicalNote,bool(Effect_MusicalNote::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<Effect_MusicalNote,void(Effect_MusicalNote::*)()>
            (aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,0xb,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_MusicalNote::onAnimStopped(std::string const&) */

void __thiscall Effect_MusicalNote::onAnimStopped(Effect_MusicalNote *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  PopAnimRig *pPVar3;
  RtObject *this_00;
  ArtifactGuitar *this_01;
  char *__s;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_05474374(param_1,&DAT_055a6dd0,0);
  if (lVar2 == -1) {
    bVar1 = std::operator==(param_1,"miss");
    if (((bVar1) || (bVar1 = std::operator==(param_1,"nice"), bVar1)) ||
       (bVar1 = std::operator==(param_1,"perfect"), bVar1)) {
      if (this[0x124] != (Effect_MusicalNote)0x0) {
        Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
        ArtifactMgr::GetActivatedArtifact();
        this_00 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
        this_01 = Sexy::RtObject::Cast<ArtifactGuitar>(this_00);
        ArtifactGuitar::SetEnd(this_01);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58)
        ;
      }
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  else {
    if (*(int *)(this + 0x110) == 3) {
      pPVar3 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
      __s = "nice";
    }
    else if (*(int *)(this + 0x110) == 4) {
      pPVar3 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
      __s = "perfect";
    }
    else {
      pPVar3 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
      __s = "miss";
    }
    std::string::string(asStack_68,__s);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimStopped");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar3,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_MusicalNote::perfectedBoom() */

void __thiscall Effect_MusicalNote::perfectedBoom(Effect_MusicalNote *this)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  undefined8 local_b0;
  undefined8 local_a8;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpaceRect
            ((BoardTransforms *)(ulong)*(uint *)(this + 0x114),*(int *)(this + 0x118),3,3,
             (int)___stack_chk_guard);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  EntityFinder::GetEntitiesInRectangle(avStack_80,2,auStack_90);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8), bVar2) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
    Sexy::Point::Point(aPStack_a0,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x43480000,local_98,local_94,aDStack_68,aPStack_a0,0);
    if ((pZVar4 != (Zombie *)0x0) && (cVar1 = RealObject::IsOnOpposingTeam(pZVar4,1), cVar1 != '\0')
       ) {
      (**(code **)(*(long *)pZVar4 + 0x110))(pZVar4,aDStack_68);
    }
    DamageInfo::~DamageInfo(aDStack_68);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  }
  playBoomEffect();
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_MusicalNote::handleTouch(Sexy::Touch const&) */

void __thiscall Effect_MusicalNote::handleTouch(Effect_MusicalNote *this,Touch *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  Point *extraout_x1;
  float fVar5;
  float fVar6;
  int local_18;
  int local_14;
  long local_8;
  
  cVar1 = '\0';
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x110) == 0) && (*(int *)(param_1 + 0x30) == 3)) {
    fVar5 = (float)FUN_037e1520((float)*(int *)(param_1 + 0x10));
    fVar6 = (float)FUN_037e1520((float)*(int *)(param_1 + 0x14));
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(this + 0x114),extraout_x1);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    local_18 = local_18 + iVar2;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    local_14 = local_14 + iVar2;
    cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)&local_18,(int)fVar5,(int)fVar6);
    if ((cVar1 == '\0') || (*(int *)(this + 0x110) != 0)) {
      cVar1 = '\0';
    }
    else {
      fVar6 = *(float *)(this + 0x10c);
      iVar2 = 1;
      *(undefined4 *)(this + 0x110) = 1;
      lVar3 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      fVar5 = (float)FUN_037e12f8(*(undefined4 *)(lVar3 + 0x38));
      if (*(float *)(this + 0x11c) < ABS(fVar6 - fVar5)) {
        *(undefined4 *)(this + 0x110) = 2;
      }
      else {
        *(undefined4 *)(this + 0x110) = 3;
        if (ABS(fVar6 - fVar5) <= *(float *)(this + 0x120)) {
          playBoomEffect();
          iVar2 = 2;
          *(undefined4 *)(this + 0x110) = 4;
        }
        MessageRouter::Broadcast<int,int>
                  ((MessageRouter *)gMessageRouter,Message::AddMusicalSuccessedCount,iVar2);
      }
      pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar4,"Play_Guitar1");
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}

