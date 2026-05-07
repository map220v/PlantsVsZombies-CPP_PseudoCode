// Class: ShovelCursor


/* ShovelCursor::ShovelCursor() */

void __thiscall ShovelCursor::ShovelCursor(ShovelCursor *this)

{
  BaseCursor::BaseCursor((BaseCursor *)this);
  *(undefined ***)this = &PTR_GetClass_0684c7b0;
  return;
}


/* ShovelCursor::~ShovelCursor() */

void __thiscall ShovelCursor::~ShovelCursor(ShovelCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_0684c7b0;
  BaseCursor::~BaseCursor((BaseCursor *)this);
  return;
}


/* ShovelCursor::~ShovelCursor() */

void __thiscall ShovelCursor::~ShovelCursor(ShovelCursor *this)

{
  ~ShovelCursor(this);
  AK::FreeHook(this);
  return;
}


/* ShovelCursor::StaticNew() */

ShovelCursor * ShovelCursor::StaticNew(void)

{
  ShovelCursor *this;
  
  this = ::operator_new(0x48);
  ShovelCursor(this);
  return this;
}


/* ShovelCursor::StaticGetClass() */

long * ShovelCursor::StaticGetClass(void)

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
  uVar2 = BaseCursor::StaticGetClass();
  (*pcVar3)(plVar1,"ShovelCursor",uVar2,StaticNew);
  return sClass;
}


/* ShovelCursor::GetClass() const */

long * ShovelCursor::GetClass(void)

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
  uVar2 = BaseCursor::StaticGetClass();
  (*pcVar3)(plVar1,"ShovelCursor",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShovelCursor::ShovelCursor(Sexy::Touch const&) */

void __thiscall ShovelCursor::ShovelCursor(ShovelCursor *this,Touch *param_1)

{
  int iVar1;
  long *extraout_x0;
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BaseCursor::BaseCursor((BaseCursor *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_0684c7b0;
  std::string::string((string *)&local_18,"UIShovel");
  UIWidget::GetWidgetBySheetName((string *)&local_18);
  nop();
  std::string::~string((string *)&local_18);
  nop();
  (**(code **)(*extraout_x0 + 0xb8))((string *)&local_18,extraout_x0);
  Board::TranslateScreenRectToBoardRect((Board *)gLawnApp[0x13e],(TRect *)&local_18);
  local_18 = local_18 - *(int *)(gLawnApp[0x13e] + 0x48);
  local_14 = local_14 - *(int *)(gLawnApp[0x13e] + 0x4c);
  iVar1 = (**(code **)(*gLawnApp + 0x478))(gLawnApp);
  (**(code **)(*gLawnApp + 0x478))(gLawnApp);
  Sexy::TRect<int>::Inflate((int)(string *)&local_18,iVar1);
  BaseCursor::setCursorBoardOrigin((BaseCursor *)this,(TRect *)&local_18);
  this[0x40] = (ShovelCursor)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShovelCursor::onDraw(Sexy::Graphics*) */

void __thiscall ShovelCursor::onDraw(ShovelCursor *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09550);
  iVar1 = FUN_04460eb4();
  Sexy::Graphics::DrawImage
            (param_1,pIVar2,iVar1,iVar1,
             (int)((float)*(int *)(pIVar2 + 0x38) * *(float *)(param_1 + 0x18)),
             (int)((float)*(int *)(pIVar2 + 0x3c) * *(float *)(param_1 + 0x1c)));
  return;
}


/* ShovelCursor::doShovelEntity(BoardEntity*) */

void __thiscall ShovelCursor::doShovelEntity(ShovelCursor *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  Plant *pPVar3;
  SexyVector3 *pSVar4;
  float fVar5;
  
  fVar5 = (float)Board::GetSunShovelRefundAmount(*(Board **)(gLawnApp + 0x9f0));
  iVar2 = (**(code **)(*(long *)param_1 + 0x150))(param_1);
  iVar2 = (int)((float)iVar2 * fVar5);
  if (((0 < iVar2) &&
      (pPVar3 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1), pPVar3 != (Plant *)0x0)) &&
     (cVar1 = FUN_04460eac(pPVar3[0x550]), cVar1 != '\0')) {
    pSVar4 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    Board::FanOutSun(*(Board **)(gLawnApp + 0x9f0),pSVar4,iVar2,false,true,fVar5 == 1.0,false,false)
    ;
    MessageRouter::Broadcast<int,int>
              ((MessageRouter *)gMessageRouter,Message::SunProducedByShovel,iVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShovelCursor::shovelEntity(BoardEntity*, int, int) */

void __thiscall
ShovelCursor::shovelEntity(ShovelCursor *this,BoardEntity *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  Effect_PopAnim *this_00;
  SexyVector3 *this_01;
  ResourceInfo *pRVar3;
  Board *this_02;
  undefined4 uVar4;
  undefined4 uVar5;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_18,"Play_UI_Game_Shovel_Dig");
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)&local_18,0.0);
  std::string::~string((string *)&local_18);
  nop();
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  iVar1 = Board::GetGridSquareType(this_02,param_2,param_3);
  if (iVar1 == 3) {
    std::string::string((string *)&local_18,"Play_UI_Game_Shovel_Dig_Water");
    RealObject::PlayPositionalSound((RealObject *)param_1,(string *)&local_18,0.0);
    std::string::~string((string *)&local_18);
    nop();
    lVar2 = FUN_04461ac4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  }
  else {
    lVar2 = FUN_04461ac4(*(undefined8 *)(this_02 + 0xad8));
  }
  if (lVar2 == 0) {
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    this_01 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)param_1);
    uVar4 = 0x41700000;
    uVar5 = 0;
    EATextSquish::Vec3::Vec3(aVStack_28,0.0,15.0,0.0);
    local_18 = Sexy::SexyVector3::operator-(this_01,(SexyVector3 *)aVStack_28);
    local_14 = uVar4;
    local_10 = uVar5;
    iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,iVar1 + 1);
    std::string::string((string *)aVStack_28,"POPANIM_EFFECTS_PLANT_UNPLANTED");
    GetPAMByName((string *)aVStack_28);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string((string *)aVStack_28);
    nop();
    Effect_PopAnim::SetCentered(this_00,true);
    std::string::string((string *)&local_18,"animation");
    Effect_PopAnim::PlaySingleAnimation(this_00,(string *)&local_18,0);
    std::string::~string((string *)&local_18);
    nop();
  }
  (**(code **)(*(long *)this + 0x78))(this,param_1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShovelCursor::tryToShovelGridItem() */

void __thiscall ShovelCursor::tryToShovelGridItem(ShovelCursor *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BoardEntity *pBVar4;
  Board *this_00;
  float fVar5;
  float fVar6;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BaseCursor::GetBoardPosition();
  BaseCursor::GetBoardPosition();
  fVar6 = (float)local_c;
  if ((*(long *)(gLawnApp + 0x9f0) != 0) && (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')
     ) {
    fVar5 = (float)Board::calculateRoofOffsetZ((float)local_10);
    fVar6 = fVar6 + fVar5;
  }
  iVar2 = BoardTransforms::BoardSpaceToGridX((float)local_10);
  iVar3 = BoardTransforms::BoardSpaceToGridY(fVar6);
  pBVar4 = (BoardEntity *)FUN_04461d1c(iVar2,iVar3);
  if (pBVar4 == (BoardEntity *)0x0) {
LAB_04461fe0:
    pBVar4 = (BoardEntity *)FUN_04461e00(iVar2,iVar3);
    if (pBVar4 != (BoardEntity *)0x0) {
      cVar1 = (**(code **)(*(long *)pBVar4 + 0x158))();
      if (cVar1 != '\0') goto LAB_04461f98;
    }
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_10,"BesiegeBox");
    pBVar4 = (BoardEntity *)Board::GetGridItemAt(this_00,(string *)&local_10,iVar2,iVar3);
    std::string::~string((string *)&local_10);
    nop();
    if (pBVar4 != (BoardEntity *)0x0) {
      cVar1 = (**(code **)(*(long *)pBVar4 + 0x158))(pBVar4);
      if (cVar1 != '\0') {
        shovelEntity(this,pBVar4,iVar2,iVar3);
        goto LAB_04461fac;
      }
    }
    cVar1 = '\0';
  }
  else {
    cVar1 = (**(code **)(*(long *)pBVar4 + 0x158))();
    if (cVar1 == '\0') goto LAB_04461fe0;
LAB_04461f98:
    shovelEntity(this,pBVar4,iVar2,iVar3);
  }
LAB_04461fac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShovelCursor::tryToShovelPlant() */

void __thiscall ShovelCursor::tryToShovelPlant(ShovelCursor *this)

{
  LawnApp *pLVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  LevelModuleManager *this_00;
  BesiegeModule *this_01;
  long *plVar7;
  vector *pvVar8;
  RtMixedPtrBase *this_02;
  undefined8 uVar9;
  long lVar10;
  BoardEntity *pBVar11;
  char *pcVar12;
  Board *pBVar13;
  float fVar14;
  float fVar15;
  Point aPStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  int local_20;
  int local_1c;
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsInModule(gLawnApp,4);
  if (cVar2 != '\0') {
    this_00 = (LevelModuleManager *)FUN_04460eb0(*(undefined8 *)(*(long *)(pLVar1 + 0x9f0) + 0xad8))
    ;
    this_01 = LevelModuleManager::GetModuleByClass<BesiegeModule>(this_00);
    if (this_01 != (BesiegeModule *)0x0) {
      cVar3 = BesiegeModule::IsInTutorial(this_01);
      cVar2 = '\0';
      if (cVar3 != '\0') goto LAB_04462320;
    }
  }
  BaseCursor::GetBoardPosition();
  BaseCursor::GetBoardPosition();
  fVar15 = (float)local_1c;
  if ((*(long *)(gLawnApp + 0x9f0) != 0) && (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')
     ) {
    fVar14 = (float)Board::calculateRoofOffsetZ((float)local_20);
    fVar15 = fVar15 + fVar14;
  }
  iVar5 = BoardTransforms::BoardSpaceToGridX((float)local_20);
  iVar6 = BoardTransforms::BoardSpaceToGridY(fVar15);
  cVar2 = (**(code **)(*(long *)this + 0x80))(this,iVar5,iVar6);
  if (cVar2 == '\0') {
    pBVar13 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)&local_20,
                 L"[ADVICE_CANT_SHOVEL_THERE]",aRStack_28);
    Board::DisplayAdvice
              (pBVar13,(vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                       &local_20,7,2);
    FUN_05476c50((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)&local_20)
    ;
    nop();
    cVar2 = '\0';
  }
  else {
    Sexy::Point::Point(aPStack_40,iVar5,iVar6);
    plVar7 = (long *)Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
    if (plVar7 != (long *)0x0) {
      cVar2 = (**(code **)(*plVar7 + 0x158))();
      if (cVar2 != '\0') {
        pvVar8 = (vector *)PlantGroup::Plants();
        std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
                  ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                   &local_20,pvVar8);
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_20);
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
        while (bVar4 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30),
              bVar4) {
          this_02 = (RtMixedPtrBase *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
          cVar3 = Sexy::RtMixedPtrBase::IsValid(this_02);
          if (cVar3 != '\0') {
            uVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
            cVar3 = Plant::HasCondition(uVar9,0x22);
            if (cVar3 == '\0') {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
              Plant::GetType();
              lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
              bVar4 = std::operator==((string *)(lVar10 + 8),"happyleek");
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
              if (bVar4) {
                this[0x40] = (ShovelCursor)0x1;
              }
              pBVar11 = (BoardEntity *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
              shovelEntity(this,pBVar11,iVar5,iVar6);
            }
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
        }
        std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
                  ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                   &local_20);
        goto LAB_04462320;
      }
    }
    pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    cVar2 = '\0';
    AudioMgr::SendEvent(pcVar12,"Play_drop");
  }
LAB_04462320:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* ShovelCursor::onTouchEvent(Sexy::Touch const&) */

ShovelCursor __thiscall ShovelCursor::onTouchEvent(ShovelCursor *this,Touch *param_1)

{
  int iVar1;
  ShovelCursor SVar2;
  char cVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  this[0x40] = (ShovelCursor)0x0;
  if (iVar1 == 4) {
    BaseCursor::Destroy((BaseCursor *)this);
    iVar1 = *(int *)(param_1 + 0x30);
  }
  SVar2 = (ShovelCursor)0x0;
  if (iVar1 == 3) {
    SVar2 = (ShovelCursor)(**(code **)(*(long *)this + 0x48))(this);
    if (SVar2 == (ShovelCursor)0x0) {
      cVar3 = tryToShovelPlant(this);
      if (cVar3 == '\0') {
        tryToShovelGridItem(this);
      }
      SVar2 = this[0x40];
      if (SVar2 == (ShovelCursor)0x0) {
        SVar2 = (ShovelCursor)0x1;
        BaseCursor::Destroy((BaseCursor *)this);
      }
      else {
        Board::SetCachedCursor(*(Board **)(gLawnApp + 0x9f0),(BaseCursor *)this);
      }
    }
    else {
      BaseCursor::cacheOrDestroyCursor((BaseCursor *)this);
    }
  }
  return SVar2;
}

