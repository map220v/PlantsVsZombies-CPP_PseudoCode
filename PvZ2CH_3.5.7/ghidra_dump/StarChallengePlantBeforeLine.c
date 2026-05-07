// Class: StarChallengePlantBeforeLine


/* StarChallengePlantBeforeLine::gameplayEnded() */

void __thiscall StarChallengePlantBeforeLine::gameplayEnded(StarChallengePlantBeforeLine *this)

{
  char cVar1;
  
  cVar1 = FUN_04475ac4(*(undefined4 *)(this + 0x1c));
  if (cVar1 == '\0') {
    return;
  }
  Challenge::Complete((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantBeforeLine::StaticClassInit() */

void StarChallengePlantBeforeLine::StaticClassInit(void)

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
    (*pcVar3)(plVar2,asStack_10,FUN_04476df4,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"StarChallengePlantBeforeLine");
    (*pcVar3)(plVar2,asStack_10,FUN_04476ff0,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengePlantBeforeLine::StaticGetClass() */

long * StarChallengePlantBeforeLine::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengePlantBeforeLine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengePlantBeforeLine::playMoldAnimation(std::string const&, bool) */

void __thiscall
StarChallengePlantBeforeLine::playMoldAnimation
          (StarChallengePlantBeforeLine *this,string *param_1,bool param_2)

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
    lVar1 = FUN_04475bbc(uVar5,*(undefined8 *)(this + 0x30));
    if (lVar1 != 0) {
      do {
        pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04475bb4(uVar5,uVar6);
        uVar6 = uVar6 + 1;
        pEVar3 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
        PVZ_EOT();
        Effect_PopAnim::PlayLoopingAnimation(pEVar3,param_1,0);
        uVar5 = *(undefined8 *)(this + 0x28);
        uVar4 = FUN_04475bbc(uVar5,*(undefined8 *)(this + 0x30));
      } while (uVar6 < uVar4);
    }
    uVar6 = 0;
    while( true ) {
      uVar5 = *(undefined8 *)(this + 0x40);
      uVar4 = FUN_04475b84(uVar5,*(undefined8 *)(this + 0x48));
      if (uVar4 <= uVar6) break;
      lVar1 = FUN_04475bac(uVar5,uVar6);
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
    lVar1 = FUN_04475bbc(uVar5,*(undefined8 *)(this + 0x30));
    if (lVar1 != 0) {
      do {
        pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04475bb4(uVar5,uVar6);
        uVar6 = uVar6 + 1;
        pEVar3 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
        Effect_PopAnim::PlaySingleAnimation(pEVar3,param_1,0);
        uVar5 = *(undefined8 *)(this + 0x28);
        uVar4 = FUN_04475bbc(uVar5,*(undefined8 *)(this + 0x30));
      } while (uVar6 < uVar4);
    }
    uVar5 = *(undefined8 *)(this + 0x40);
    uVar6 = 0;
    lVar1 = FUN_04475b84(uVar5,*(undefined8 *)(this + 0x48));
    if (lVar1 != 0) {
      do {
        lVar1 = FUN_04475bac(uVar5,uVar6);
        uVar6 = uVar6 + 1;
        pEVar3 = (Effect_PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar1 + 8));
        Effect_PopAnim::PlaySingleAnimation(pEVar3,param_1,0);
        uVar5 = *(undefined8 *)(this + 0x40);
        uVar4 = FUN_04475b84(uVar5,*(undefined8 *)(this + 0x48));
      } while (uVar6 < uVar4);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantBeforeLine::onFail() */

void __thiscall StarChallengePlantBeforeLine::onFail(StarChallengePlantBeforeLine *this)

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
/* StarChallengePlantBeforeLine::onRailcartMoved(GridItemRailcart*) */

void __thiscall
StarChallengePlantBeforeLine::onRailcartMoved
          (StarChallengePlantBeforeLine *this,GridItemRailcart *param_1)

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
    lVar3 = FUN_04475b84(uVar7,*(undefined8 *)(this + 0x48));
    if (lVar3 != 0) {
      do {
        this_00 = (RtWeakPtr *)FUN_04475bac(uVar7,uVar6);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
        if (bVar1) {
          this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    FUN_04475bac(*(undefined8 *)(this + 0x40),uVar6);
          this_02 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
          pGVar5 = Sexy::RtObject::Cast<GridItemRailcart>(this_02);
          if (param_1 == pGVar5) {
            lVar3 = FUN_04475bac(*(undefined8 *)(this + 0x40),uVar6);
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
            lVar3 = FUN_04475bac(*(undefined8 *)(this + 0x40),uVar6);
            lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 8));
            iVar2 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
            FUN_04475b5c(lVar3 + 0x1c,iVar2 + 1);
            break;
          }
        }
        uVar7 = *(undefined8 *)(this + 0x40);
        uVar6 = uVar6 + 1;
        uVar4 = FUN_04475b84(uVar7,*(undefined8 *)(this + 0x48));
      } while (uVar6 < uVar4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantBeforeLine::onAnimStopped(StandaloneEffect*) */

void __thiscall
StarChallengePlantBeforeLine::onAnimStopped
          (StarChallengePlantBeforeLine *this,StandaloneEffect *param_1)

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
  lVar2 = FUN_04475b64(*(undefined8 *)(lVar2 + 0x20));
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
/* StarChallengePlantBeforeLine::gameplayUpdate() */

void __thiscall StarChallengePlantBeforeLine::gameplayUpdate(StarChallengePlantBeforeLine *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ResilienceTutorialIntroProperties *pRVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar1 = *(int *)(pRVar6 + 0x44);
  uVar10 = 0;
  pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar2 = *(int *)(pRVar6 + 0x40);
  puVar7 = (undefined8 *)Board::GetCursors(*(Board **)(gLawnApp + 0x9f0));
  uVar11 = *puVar7;
  uVar8 = FUN_04475b70(uVar11,puVar7[1]);
  if (uVar8 != 0) {
    do {
      puVar9 = (undefined8 *)FUN_04475b7c(uVar11,uVar10);
      if ((RtObject *)*puVar9 != (RtObject *)0x0) {
        bVar3 = Sexy::RtObject::IsA<PlantCursor>((RtObject *)*puVar9);
        if (bVar3) {
          nop();
          BaseCursor::GetBoardPosition();
          fVar12 = (float)local_10;
          BaseCursor::GetBoardPosition();
          fVar13 = (float)local_c;
          ArtifactEvolutionCursor::GetPlantType();
          iVar4 = BoardTransforms::PlantingBoardSpaceToGridX
                            (fVar12,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
          ArtifactEvolutionCursor::GetPlantType();
          iVar5 = BoardTransforms::PlantingBoardSpaceToGridY
                            (fVar13,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
          if (((iVar4 < iVar2 && iVar1 <= iVar4) && (-1 < iVar5)) &&
             (iVar4 = BoardConstants::NUMBER_OF_ROWS(), iVar5 < iVar4)) {
            if (*(int *)(this + 0x20) == 0) {
              std::string::string((string *)&local_10,"zombies");
              playMoldAnimation(this,(string *)&local_10,false);
              std::string::~string((string *)&local_10);
              nop();
              *(undefined4 *)(this + 0x20) = 1;
            }
            goto LAB_04476998;
          }
        }
        uVar11 = *puVar7;
        uVar8 = FUN_04475b70(uVar11,puVar7[1]);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar8);
  }
  if (*(int *)(this + 0x20) == 1) {
    std::string::string((string *)&local_10,"idle");
    playMoldAnimation(this,(string *)&local_10,true);
    std::string::~string((string *)&local_10);
    nop();
    *(undefined4 *)(this + 0x20) = 0;
  }
LAB_04476998:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengePlantBeforeLine::StarChallengePlantBeforeLine() */

void __thiscall
StarChallengePlantBeforeLine::StarChallengePlantBeforeLine(StarChallengePlantBeforeLine *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_0684df30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* StarChallengePlantBeforeLine::StaticNew() */

StarChallengePlantBeforeLine * StarChallengePlantBeforeLine::StaticNew(void)

{
  StarChallengePlantBeforeLine *this;
  
  this = ::operator_new(0x58);
  StarChallengePlantBeforeLine(this);
  return this;
}


/* StarChallengePlantBeforeLine::~StarChallengePlantBeforeLine() */

void __thiscall
StarChallengePlantBeforeLine::~StarChallengePlantBeforeLine(StarChallengePlantBeforeLine *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0684df30;
  std::
  vector<StarChallengePlantBeforeLine::BoundMold,std::allocator<StarChallengePlantBeforeLine::BoundMold>>
  ::~vector((vector<StarChallengePlantBeforeLine::BoundMold,std::allocator<StarChallengePlantBeforeLine::BoundMold>>
             *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  ~vector((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )(this + 0x28));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengePlantBeforeLine::~StarChallengePlantBeforeLine() */

void __thiscall
StarChallengePlantBeforeLine::~StarChallengePlantBeforeLine(StarChallengePlantBeforeLine *this)

{
  ~StarChallengePlantBeforeLine(this);
  AK::FreeHook(this);
  return;
}


/* StarChallengePlantBeforeLine::levelEnded() */

void __thiscall StarChallengePlantBeforeLine::levelEnded(StarChallengePlantBeforeLine *this)

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
    uVar2 = FUN_04475bbc(uVar6,*(undefined8 *)(this + 0x30));
    if (uVar2 <= uVar5) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04475bb4(uVar6,uVar5);
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
    uVar2 = FUN_04475b84(uVar6,*(undefined8 *)(this + 0x48));
    if (uVar2 <= uVar5) break;
    lVar3 = FUN_04475bac(uVar6,uVar5);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 8));
    (**(code **)(*plVar4 + 0x48))();
    uVar5 = uVar5 + 1;
  }
  std::
  vector<StarChallengePlantBeforeLine::BoundMold,std::allocator<StarChallengePlantBeforeLine::BoundMold>>
  ::clear((vector<StarChallengePlantBeforeLine::BoundMold,std::allocator<StarChallengePlantBeforeLine::BoundMold>>
           *)(this + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantBeforeLine::winOutroStarted() */

void __thiscall StarChallengePlantBeforeLine::winOutroStarted(StarChallengePlantBeforeLine *this)

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
/* StarChallengePlantBeforeLine::levelStarted() */

void __thiscall StarChallengePlantBeforeLine::levelStarted(StarChallengePlantBeforeLine *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ResilienceTutorialIntroProperties *pRVar8;
  Effect_PopAnim *pEVar9;
  PopAnim *pPVar10;
  undefined8 uVar11;
  RtObject *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *this_02;
  long lVar12;
  StandaloneEffect *pSVar13;
  RtWeakPtr<Sexy::ResourceInfo> *this_03;
  int extraout_w1;
  int iVar14;
  Board *this_04;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  RtId aRStack_90 [16];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78 [2];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [32];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar7 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar1 = *(int *)(pRVar8 + 0x44);
  pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar2 = *(int *)(pRVar8 + 0x40);
  if (0 < iVar7) {
    iVar15 = 0;
    do {
      iVar14 = iVar1;
      if (iVar1 < iVar2) {
        do {
          this_04 = *(Board **)(gLawnApp + 0x9f0);
          iVar5 = Board::GetGridSquareType(this_04,iVar14,iVar15);
          if (iVar5 != 4) {
            pEVar9 = Board::AddEffect<Effect_PopAnim>(this_04);
            std::string::string((string *)&local_80,"POPANIM_EFFECTS_STAR_OBJECTIVE_MOLD");
            GetPAMByName((string *)&local_80);
            pPVar10 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
            Effect_PopAnim::CreatePopAnimRig(pEVar9,pPVar10,(RtClass *)0x0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
            std::string::~string((string *)&local_80);
            nop();
            iVar5 = BoardTransforms::GridToBoardSpaceX(iVar14);
            iVar6 = BoardTransforms::GridToBoardSpaceY(iVar15);
            EATextSquish::Vec3::Vec3
                      ((Vec3 *)aRStack_70,(float)iVar5 - 97.5,(float)iVar6 - 130.0,0.0);
            StandaloneEffect::SetBoardSpaceOrigin
                      ((StandaloneEffect *)pEVar9,(SexyVector3 *)aRStack_70,-1);
            FUN_04475b5c(pEVar9 + 0x1c,0x61a82);
            StandaloneEffect::SetKeepAlive((StandaloneEffect *)pEVar9,true);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_70,(RtWeakPtrBase *)&local_80);
            std::
            vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
            ::push_back((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
                         *)(this + 0x28),(RtWeakPtr *)aRStack_70);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 != iVar2);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 != iVar7);
  }
  uVar11 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable((Iterator *)aRStack_70,uVar11,0x2f);
  while (bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aRStack_70), bVar3) {
    Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_70);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_98,(RtWeakPtrBase *)&local_80);
    Sexy::RtId::~RtId((RtId *)&local_80);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_98);
    if (bVar3) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
      bVar3 = Sexy::RtObject::IsA<GridItemRailcart>(this_00);
      if (bVar3) {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_70);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_80,(RtWeakPtrBase *)aRStack_90);
        this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
        Sexy::RtId::~RtId(aRStack_90);
        this_02 = (SexyVector3 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(this_01);
        iVar7 = BoardTransforms::BoardSpaceToGridX(*(float *)this_02);
        if ((iVar7 < iVar2) && (iVar1 <= iVar7)) {
          pEVar9 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
          std::string::string((string *)aRStack_90,"POPANIM_EFFECTS_STAR_OBJECTIVE_MOLD_ALT");
          GetPAMByName((string *)aRStack_90);
          pPVar10 = (PopAnim *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
          Effect_PopAnim::CreatePopAnimRig(pEVar9,pPVar10,(RtClass *)0x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
          std::string::~string((string *)aRStack_90);
          nop();
          uVar16 = 0xc2e60000;
          uVar17 = 0;
          EATextSquish::Vec3::Vec3((Vec3 *)aRStack_90,-97.5,-115.0,0.0);
          local_80 = Sexy::SexyVector3::operator+(this_02,(SexyVector3 *)aRStack_90);
          local_7c = uVar16;
          local_78[0] = uVar17;
          StandaloneEffect::SetBoardSpaceOrigin
                    ((StandaloneEffect *)pEVar9,(SexyVector3 *)&local_80,-1);
          iVar7 = (**(code **)(*(long *)this_01 + 0x170))(this_01);
          FUN_04475b5c(pEVar9 + 0x1c,iVar7 + 1);
          StandaloneEffect::SetKeepAlive((StandaloneEffect *)pEVar9,true);
          SunOwnerLink::SunOwnerLink((SunOwnerLink *)&local_80);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)&local_80,(RtWeakPtrBase *)aRStack_90);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)local_78,(RtWeakPtrBase *)aRStack_90);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
          std::
          vector<StarChallengePlantBeforeLine::BoundMold,std::allocator<StarChallengePlantBeforeLine::BoundMold>>
          ::push_back((vector<StarChallengePlantBeforeLine::BoundMold,std::allocator<StarChallengePlantBeforeLine::BoundMold>>
                       *)(this + 0x40),(BoundMold *)&local_80);
          DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
                    ((DragonBruitLauncherEntry *)&local_80);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_70,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_70);
  cVar4 = std::
          vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
          empty((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
                 *)(this + 0x28));
  if (cVar4 == '\0') {
    this_03 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04475bb4(*(undefined8 *)(this + 0x28),0);
  }
  else {
    cVar4 = std::
            vector<StarChallengePlantBeforeLine::BoundMold,std::allocator<StarChallengePlantBeforeLine::BoundMold>>
            ::empty((vector<StarChallengePlantBeforeLine::BoundMold,std::allocator<StarChallengePlantBeforeLine::BoundMold>>
                     *)(this + 0x40));
    if (cVar4 != '\0') goto LAB_04477c88;
    lVar12 = FUN_04475bac(*(undefined8 *)(this + 0x40),0);
    this_03 = (RtWeakPtr<Sexy::ResourceInfo> *)(lVar12 + 8);
  }
  pSVar13 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_03);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_90);
  std::string::string((string *)aRStack_70,"onAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,
             (RtId *)&local_80,(Iterator *)aRStack_70);
  StandaloneEffect::SetCompletionCallback(pSVar13,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_70);
  nop();
  Sexy::RtId::~RtId((RtId *)&local_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
LAB_04477c88:
  std::string::string((string *)aRStack_70,"idle");
  playMoldAnimation(this,(string *)aRStack_70,true);
  std::string::~string((string *)aRStack_70);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantBeforeLine::registerForEvents() */

void __thiscall StarChallengePlantBeforeLine::registerForEvents(StarChallengePlantBeforeLine *this)

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
  Sexy::Delegate0::Delegate0<StarChallengePlantBeforeLine,void(StarChallengePlantBeforeLine::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayUpdate);
  Sexy::Delegate0::Delegate0<StarChallengePlantBeforeLine,void(StarChallengePlantBeforeLine::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,levelEnded);
  Sexy::Delegate0::Delegate0<StarChallengePlantBeforeLine,void(StarChallengePlantBeforeLine::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,winOutroStarted);
  Sexy::Delegate0::Delegate0<StarChallengePlantBeforeLine,void(StarChallengePlantBeforeLine::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnWinOutroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<StarChallengePlantBeforeLine,void(StarChallengePlantBeforeLine::*)()>
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
  Subscribe<GridItemRailcart*,Sexy::CBMemberTranslatorX<StarChallengePlantBeforeLine,void(StarChallengePlantBeforeLine::*)(GridItemRailcart*)>>
            ((MessageRouter *)puVar1,Message::RailcartMoved,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherPlantingRestrictions);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<StarChallengePlantBeforeLine,void(StarChallengePlantBeforeLine::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantBeforeLine::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
StarChallengePlantBeforeLine::gatherPlantingRestrictions
          (StarChallengePlantBeforeLine *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar1 = *(int *)(pRVar2 + 0x44);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if ((iVar1 <= *(int *)param_1) && (*(int *)param_1 < *(int *)(pRVar2 + 0x40))) {
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

