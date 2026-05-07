// Class: MoldColonyChallenge


/* MoldColonyChallenge::gameplayEnded() */

void __thiscall MoldColonyChallenge::gameplayEnded(MoldColonyChallenge *this)

{
  char cVar1;
  
  cVar1 = FUN_04490db0(*(undefined4 *)(this + 0x1c));
  if (cVar1 == '\0') {
    return;
  }
  Challenge::Complete((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoldColonyChallenge::StaticClassInit() */

void MoldColonyChallenge::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoundMold");
    (*pcVar3)(plVar2,asStack_10,FUN_0449233c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"MoldColonyChallenge");
    (*pcVar3)(plVar2,asStack_10,FUN_04492538,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MoldColonyChallenge::StaticGetClass() */

long * MoldColonyChallenge::StaticGetClass(void)

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
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"MoldColonyChallenge",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MoldColonyChallenge::playMoldAnimation(std::string const&, bool) */

void __thiscall
MoldColonyChallenge::playMoldAnimation(MoldColonyChallenge *this,string *param_1,bool param_2)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar2;
  Effect_PopAnim *pEVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar6 = 0;
  if (param_2) {
    uVar5 = *(undefined8 *)(this + 0x28);
    lVar1 = FUN_04490e38(uVar5,*(undefined8 *)(this + 0x30));
    if (lVar1 != 0) {
      do {
        pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04490e30(uVar5,uVar6);
        uVar6 = uVar6 + 1;
        pEVar3 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
        PVZ_EOT();
        Effect_PopAnim::PlayLoopingAnimation(pEVar3,param_1,0);
        uVar5 = *(undefined8 *)(this + 0x28);
        uVar4 = FUN_04490e38(uVar5,*(undefined8 *)(this + 0x30));
      } while (uVar6 < uVar4);
    }
    uVar6 = 0;
    while( true ) {
      uVar5 = *(undefined8 *)(this + 0x40);
      uVar4 = FUN_04490e00(uVar5,*(undefined8 *)(this + 0x48));
      if (uVar4 <= uVar6) break;
      lVar1 = FUN_04490e28(uVar5,uVar6);
      pEVar3 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar1 + 8));
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar3,param_1,0);
      uVar6 = uVar6 + 1;
    }
  }
  else {
    uVar5 = *(undefined8 *)(this + 0x28);
    lVar1 = FUN_04490e38(uVar5,*(undefined8 *)(this + 0x30));
    if (lVar1 != 0) {
      do {
        pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04490e30(uVar5,uVar6);
        uVar6 = uVar6 + 1;
        pEVar3 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
        Effect_PopAnim::PlaySingleAnimation(pEVar3,param_1,0);
        uVar5 = *(undefined8 *)(this + 0x28);
        uVar4 = FUN_04490e38(uVar5,*(undefined8 *)(this + 0x30));
      } while (uVar6 < uVar4);
    }
    uVar5 = *(undefined8 *)(this + 0x40);
    uVar6 = 0;
    lVar1 = FUN_04490e00(uVar5,*(undefined8 *)(this + 0x48));
    if (lVar1 != 0) {
      do {
        lVar1 = FUN_04490e28(uVar5,uVar6);
        uVar6 = uVar6 + 1;
        pEVar3 = (Effect_PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar1 + 8));
        Effect_PopAnim::PlaySingleAnimation(pEVar3,param_1,0);
        uVar5 = *(undefined8 *)(this + 0x40);
        uVar4 = FUN_04490e00(uVar5,*(undefined8 *)(this + 0x48));
      } while (uVar6 < uVar4);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoldColonyChallenge::onFail() */

void __thiscall MoldColonyChallenge::onFail(MoldColonyChallenge *this)

{
  string asStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x20) = 2;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"fail");
  playMoldAnimation(this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoldColonyChallenge::onAnimStopped(StandaloneEffect*) */

void __thiscall
MoldColonyChallenge::onAnimStopped(MoldColonyChallenge *this,StandaloneEffect *param_1)

{
  bool bVar1;
  UIWidget *this_00;
  long lVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  lVar2 = UIWidget::GetAtlasImage(this_00);
  lVar2 = FUN_04490dac(*(undefined8 *)(lVar2 + 0x20));
  FUN_05475d88(asStack_18,lVar2 + 0x48);
  bVar1 = std::operator==(asStack_18,"zombies");
  if (bVar1) {
    std::string::string(asStack_10,"zombies_idle");
    playMoldAnimation(this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoldColonyChallenge::isCursorAboveMold() */

void __thiscall MoldColonyChallenge::isCursorAboveMold(MoldColonyChallenge *this)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  undefined8 *puVar6;
  BoardGridMapProps *this_00;
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  puVar6 = (undefined8 *)Board::GetCursors(*(Board **)(gLawnApp + 0x9f0));
  local_30 = FUN_04491760(*puVar6);
  local_28 = FUN_044917b0(puVar6[1]);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar2) {
LAB_04491944:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar2);
    }
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    if (((RtObject *)*puVar6 != (RtObject *)0x0) &&
       (bVar2 = Sexy::RtObject::IsA<PlantCursor>((RtObject *)*puVar6), bVar2)) {
      nop();
      ArtifactEvolutionCursor::GetPlantType();
      BaseCursor::GetBoardPosition();
      uVar1 = local_18;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_20);
      iVar3 = BoardTransforms::PlantingBoardSpaceToGridX(uVar1,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      uVar1 = local_14;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_20);
      iVar4 = BoardTransforms::PlantingBoardSpaceToGridY(uVar1,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      this_00 = (BoardGridMapProps *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(pRVar5 + 0x40));
      iVar3 = BoardGridMapProps::At(this_00,(long)iVar4,(long)iVar3);
      if (iVar3 != 0) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        bVar2 = true;
        goto LAB_04491944;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoldColonyChallenge::gameplayUpdate() */

void __thiscall MoldColonyChallenge::gameplayUpdate(MoldColonyChallenge *this)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isCursorAboveMold(this);
  if (*(int *)(this + 0x20) == 0) {
    if (cVar1 != '\0') {
      std::string::string(asStack_10,"zombies");
      playMoldAnimation(this,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      *(undefined4 *)(this + 0x20) = 1;
    }
  }
  else if ((*(int *)(this + 0x20) == 1) && (cVar1 == '\0')) {
    std::string::string(asStack_10,"idle");
    playMoldAnimation(this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoldColonyChallenge::onRailcartMoved(GridItemRailcart*) */

void __thiscall
MoldColonyChallenge::onRailcartMoved(MoldColonyChallenge *this,GridItemRailcart *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  RtWeakPtr *this_00;
  ulong uVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  RtObject *this_02;
  GridItemRailcart *pGVar5;
  StandaloneEffect *this_03;
  SexyVector3 *this_04;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (GridItemRailcart *)0x0) && (uVar6 = 0, *(int *)(this + 0x20) != 2)) {
    uVar7 = *(undefined8 *)(this + 0x40);
    lVar3 = FUN_04490e00(uVar7,*(undefined8 *)(this + 0x48));
    if (lVar3 != 0) {
      do {
        this_00 = (RtWeakPtr *)FUN_04490e28(uVar7,uVar6);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
        if (bVar1) {
          this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    FUN_04490e28(*(undefined8 *)(this + 0x40),uVar6);
          this_02 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
          pGVar5 = Sexy::RtObject::Cast<GridItemRailcart>(this_02);
          if (param_1 == pGVar5) {
            lVar3 = FUN_04490e28(*(undefined8 *)(this + 0x40),uVar6);
            this_03 = (StandaloneEffect *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 8));
            this_04 = (SexyVector3 *)
                      std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
            uVar8 = 0xc2e60000;
            uVar9 = 0;
            EATextSquish::Vec3::Vec3(aVStack_28,-97.5,-115.0,0.0);
            local_18 = Sexy::SexyVector3::operator+(this_04,(SexyVector3 *)aVStack_28);
            local_14 = uVar8;
            local_10 = uVar9;
            StandaloneEffect::SetBoardSpaceOrigin(this_03,(SexyVector3 *)&local_18,-1);
            lVar3 = FUN_04490e28(*(undefined8 *)(this + 0x40),uVar6);
            lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 8));
            iVar2 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
            FUN_04490da4(lVar3 + 0x1c,iVar2 + 1);
            break;
          }
        }
        uVar7 = *(undefined8 *)(this + 0x40);
        uVar6 = uVar6 + 1;
        uVar4 = FUN_04490e00(uVar7,*(undefined8 *)(this + 0x48));
      } while (uVar6 < uVar4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MoldColonyChallenge::MoldColonyChallenge() */

void __thiscall MoldColonyChallenge::MoldColonyChallenge(MoldColonyChallenge *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_06850de0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* MoldColonyChallenge::StaticNew() */

MoldColonyChallenge * MoldColonyChallenge::StaticNew(void)

{
  MoldColonyChallenge *this;
  
  this = ::operator_new(0x58);
  MoldColonyChallenge(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoldColonyChallenge::levelStarted() */

void __thiscall MoldColonyChallenge::levelStarted(MoldColonyChallenge *this)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  BoardGridMapProps *pBVar3;
  long lVar4;
  StandaloneEffect *pSVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [24];
  Delegate2<int,int> aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  pBVar3 = (BoardGridMapProps *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(pRVar2 + 0x40));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addMold);
  Sexy::Delegate2<int,int>::Delegate2<MoldColonyChallenge,void(MoldColonyChallenge::*)(int,int)>
            (aDStack_50,asStack_68);
  BoardGridMapProps::Apply(pBVar3,aDStack_50);
  cVar1 = std::
          vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
          empty((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
                 *)(this + 0x28));
  if (cVar1 == '\0') {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04490e30(*(undefined8 *)(this + 0x28),0);
  }
  else {
    cVar1 = std::
            vector<MoldColonyChallenge::BoundMold,std::allocator<MoldColonyChallenge::BoundMold>>::
            empty((vector<MoldColonyChallenge::BoundMold,std::allocator<MoldColonyChallenge::BoundMold>>
                   *)(this + 0x40));
    if (cVar1 != '\0') goto LAB_044920b8;
    lVar4 = FUN_04490e28(*(undefined8 *)(this + 0x40),0);
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 8);
  }
  pSVar5 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string(asStack_68,"onAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aDStack_50,aRStack_70,
             asStack_68);
  StandaloneEffect::SetCompletionCallback(pSVar5,aDStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aDStack_50);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
LAB_044920b8:
  std::string::string(asStack_68,"idle");
  playMoldAnimation(this,asStack_68,true);
  std::string::~string(asStack_68);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MoldColonyChallenge::~MoldColonyChallenge() */

void __thiscall MoldColonyChallenge::~MoldColonyChallenge(MoldColonyChallenge *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06850de0;
  std::vector<MoldColonyChallenge::BoundMold,std::allocator<MoldColonyChallenge::BoundMold>>::
  ~vector((vector<MoldColonyChallenge::BoundMold,std::allocator<MoldColonyChallenge::BoundMold>> *)
          (this + 0x40));
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  ~vector((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )(this + 0x28));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* MoldColonyChallenge::~MoldColonyChallenge() */

void __thiscall MoldColonyChallenge::~MoldColonyChallenge(MoldColonyChallenge *this)

{
  ~MoldColonyChallenge(this);
  AK::FreeHook(this);
  return;
}


/* MoldColonyChallenge::levelEnded() */

void __thiscall MoldColonyChallenge::levelEnded(MoldColonyChallenge *this)

{
  char *pcVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Stop_UI_Game_Objective_Success_Mold_LP");
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0x28);
    uVar2 = FUN_04490e38(uVar6,*(undefined8 *)(this + 0x30));
    if (uVar2 <= uVar5) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04490e30(uVar6,uVar5);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar4 + 0x48))();
    uVar5 = uVar5 + 1;
  }
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  clear((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *)
        (this + 0x28));
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0x40);
    uVar2 = FUN_04490e00(uVar6,*(undefined8 *)(this + 0x48));
    if (uVar2 <= uVar5) break;
    lVar3 = FUN_04490e28(uVar6,uVar5);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 8));
    (**(code **)(*plVar4 + 0x48))();
    uVar5 = uVar5 + 1;
  }
  std::vector<MoldColonyChallenge::BoundMold,std::allocator<MoldColonyChallenge::BoundMold>>::clear
            ((vector<MoldColonyChallenge::BoundMold,std::allocator<MoldColonyChallenge::BoundMold>>
              *)(this + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoldColonyChallenge::winOutroStarted() */

void __thiscall MoldColonyChallenge::winOutroStarted(MoldColonyChallenge *this)

{
  char *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x20) != 2) {
    std::string::string(asStack_10,"win");
    playMoldAnimation(this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Objective_Success_Mold_LP");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoldColonyChallenge::addRailcartMold(int, int) */

void __thiscall
MoldColonyChallenge::addRailcartMold(MoldColonyChallenge *this,int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  GridItemRailcart *this_00;
  Effect_PopAnim *this_01;
  PopAnim *pPVar4;
  SexyVector3 *this_02;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_50;
  undefined8 local_48;
  string asStack_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Board::GetGridItemsAt(*(Board **)(gLawnApp + 0x9f0),param_1,param_2,(vector *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    if (!bVar1) {
LAB_04492e84:
      std::vector<GridItem*,std::allocator<GridItem*>>::~vector
                ((vector<GridItem*,std::allocator<GridItem*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    if (((RtObject *)*puVar3 != (RtObject *)0x0) &&
       (this_00 = Sexy::RtObject::Cast<GridItemRailcart>((RtObject *)*puVar3),
       this_00 != (GridItemRailcart *)0x0)) {
      this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_40,"POPANIM_EFFECTS_STAR_OBJECTIVE_MOLD_ALT");
      GetPAMByName(asStack_40);
      pPVar4 = (PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      Effect_PopAnim::CreatePopAnimRig(this_01,pPVar4,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      std::string::~string(asStack_40);
      nop();
      this_02 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this_00);
      uVar5 = 0xc2e60000;
      uVar6 = 0;
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_40,-97.5,-115.0,0.0);
      local_30 = Sexy::SexyVector3::operator+(this_02,(SexyVector3 *)asStack_40);
      local_2c = uVar5;
      local_28[0] = uVar6;
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)&local_30,-1)
      ;
      iVar2 = (**(code **)(*(long *)this_00 + 0x170))(this_00);
      FUN_04490da4(this_01 + 0x1c,iVar2 + 1);
      StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_01,true);
      SunOwnerLink::SunOwnerLink((SunOwnerLink *)&local_30);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)&local_30,(RtWeakPtrBase *)asStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)local_28,(RtWeakPtrBase *)asStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
      std::vector<MoldColonyChallenge::BoundMold,std::allocator<MoldColonyChallenge::BoundMold>>::
      push_back((vector<MoldColonyChallenge::BoundMold,std::allocator<MoldColonyChallenge::BoundMold>>
                 *)(this + 0x40),(BoundMold *)&local_30);
      DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
                ((DragonBruitLauncherEntry *)&local_30);
      goto LAB_04492e84;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoldColonyChallenge::addNormalMold(int, int) */

void __thiscall
MoldColonyChallenge::addNormalMold(MoldColonyChallenge *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  PopAnim *pPVar3;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_STAR_OBJECTIVE_MOLD");
  GetPAMByName(asStack_20);
  pPVar3 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  nop();
  iVar1 = BoardTransforms::GridToBoardSpaceX(param_2);
  iVar2 = BoardTransforms::GridToBoardSpaceY(param_1);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)iVar1 - 97.5,(float)iVar2 - 130.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  FUN_04490da4(this_00 + 0x1c,0x61a82);
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_00,true);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)asStack_20);
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  push_back((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
             *)(this + 0x28),(RtWeakPtr *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MoldColonyChallenge::addMold(int, int) */

void __thiscall MoldColonyChallenge::addMold(MoldColonyChallenge *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = Board::GetGridSquareType(*(Board **)(gLawnApp + 0x9f0),param_2,param_1);
  if (iVar1 != 4) {
    addNormalMold(this,param_1,param_2);
    return;
  }
  addRailcartMold(this,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoldColonyChallenge::registerForEvents() */

void __thiscall MoldColonyChallenge::registerForEvents(MoldColonyChallenge *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Challenge::registerForEvents((Challenge *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,levelStarted);
  Sexy::Delegate0::Delegate0<MoldColonyChallenge,void(MoldColonyChallenge::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayUpdate);
  Sexy::Delegate0::Delegate0<MoldColonyChallenge,void(MoldColonyChallenge::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,levelEnded);
  Sexy::Delegate0::Delegate0<MoldColonyChallenge,void(MoldColonyChallenge::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,winOutroStarted);
  Sexy::Delegate0::Delegate0<MoldColonyChallenge,void(MoldColonyChallenge::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnWinOutroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<MoldColonyChallenge,void(MoldColonyChallenge::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRailcartMoved);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<GridItemRailcart*,Sexy::CBMemberTranslatorX<MoldColonyChallenge,void(MoldColonyChallenge::*)(GridItemRailcart*)>>
            ((MessageRouter *)puVar1,Message::RailcartMoved,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherPlantingRestrictions);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<MoldColonyChallenge,void(MoldColonyChallenge::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoldColonyChallenge::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
MoldColonyChallenge::gatherPlantingRestrictions
          (MoldColonyChallenge *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  BoardGridMapProps *this_00;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  this_00 = (BoardGridMapProps *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(pRVar2 + 0x40));
  iVar1 = BoardGridMapProps::At(this_00,(long)*(int *)(param_1 + 4),(long)*(int *)param_1);
  if (iVar1 != 0) {
    local_c = 0x1e;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

