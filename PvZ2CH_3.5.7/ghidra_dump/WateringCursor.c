// Class: WateringCursor


/* WateringCursor::~WateringCursor() */

void __thiscall WateringCursor::~WateringCursor(WateringCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_0684c850;
  BaseCursor::~BaseCursor((BaseCursor *)this);
  return;
}


/* WateringCursor::~WateringCursor() */

void __thiscall WateringCursor::~WateringCursor(WateringCursor *this)

{
  ~WateringCursor(this);
  AK::FreeHook(this);
  return;
}


/* WateringCursor::WateringCursor() */

void __thiscall WateringCursor::WateringCursor(WateringCursor *this)

{
  BaseCursor::BaseCursor((BaseCursor *)this);
  *(undefined ***)this = &PTR_GetClass_0684c850;
  return;
}


/* WateringCursor::StaticNew() */

WateringCursor * WateringCursor::StaticNew(void)

{
  WateringCursor *this;
  
  this = ::operator_new(0x48);
  WateringCursor(this);
  return this;
}


/* WateringCursor::StaticGetClass() */

long * WateringCursor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WateringCursor",uVar2,StaticNew);
  return sClass;
}


/* WateringCursor::GetClass() const */

long * WateringCursor::GetClass(void)

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
  (*pcVar3)(plVar1,"WateringCursor",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WateringCursor::WateringCursor(Sexy::Touch const&) */

void __thiscall WateringCursor::WateringCursor(WateringCursor *this,Touch *param_1)

{
  int iVar1;
  long *extraout_x0;
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BaseCursor::BaseCursor((BaseCursor *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_0684c850;
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
  this[0x40] = (WateringCursor)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WateringCursor::shovelEntity(BoardEntity*, int, int) */

void __thiscall
WateringCursor::shovelEntity(WateringCursor *this,BoardEntity *param_1,int param_2,int param_3)

{
  int iVar1;
  WaterShovel_Effect *this_00;
  SexyVector3 *this_01;
  ResourceInfo *pRVar2;
  Board *this_02;
  undefined4 uVar3;
  undefined4 uVar4;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_18,"WaterShovel01");
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
    this_02 = *(Board **)(gLawnApp + 0x9f0);
  }
  this_00 = Board::AddEffect<WaterShovel_Effect>(this_02);
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  uVar3 = 0x42700000;
  uVar4 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,-16.0,60.0,0.0);
  local_18 = Sexy::SexyVector3::operator-(this_01,(SexyVector3 *)aVStack_28);
  local_14 = uVar3;
  local_10 = uVar4;
  iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,iVar1 + 1);
  std::string::string((string *)aVStack_28,"POPANIM_UI_HUD_WATER_SHOVEL");
  GetPAMByName((string *)aVStack_28);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string((string *)aVStack_28);
  nop();
  (**(code **)(*(long *)this_00 + 0x80))(0x3f000000,this_00);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this_00,true);
  std::string::string((string *)&local_18,"animation");
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,(string *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aVStack_28);
  CthulhuEyeballEffect::SetCthulhuEasyButton((CthulhuEyeballEffect *)this_00,(string *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_28);
  (**(code **)(*(long *)this + 0x78))(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WateringCursor::onDraw(Sexy::Graphics*) */

void __thiscall WateringCursor::onDraw(WateringCursor *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b095b8);
  if (pIVar2 != (Image *)0x0) {
    iVar1 = FUN_04460eb4();
    Sexy::Graphics::DrawImage
              (param_1,pIVar2,iVar1,iVar1,
               (int)((float)*(int *)(pIVar2 + 0x38) * *(float *)(param_1 + 0x18) * 0.5),
               (int)((float)*(int *)(pIVar2 + 0x3c) * *(float *)(param_1 + 0x1c) * 0.5));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WateringCursor::tryToShovelPlant() */

void __thiscall WateringCursor::tryToShovelPlant(WateringCursor *this)

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
  float fVar13;
  float fVar14;
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
      cVar2 = BesiegeModule::IsInTutorial(this_01);
      cVar3 = '\0';
      if (cVar2 != '\0') goto LAB_0446267c;
    }
  }
  BaseCursor::GetBoardPosition();
  BaseCursor::GetBoardPosition();
  fVar14 = (float)local_1c;
  if ((*(long *)(gLawnApp + 0x9f0) != 0) && (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')
     ) {
    fVar13 = (float)Board::calculateRoofOffsetZ((float)local_20);
    fVar14 = fVar14 + fVar13;
  }
  iVar5 = BoardTransforms::BoardSpaceToGridX((float)local_20);
  iVar6 = BoardTransforms::BoardSpaceToGridY(fVar14);
  Sexy::Point::Point(aPStack_40,iVar5,iVar6);
  plVar7 = (long *)Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
  if (plVar7 != (long *)0x0) {
    cVar3 = (**(code **)(*plVar7 + 0x158))();
    if (cVar3 != '\0') {
      pvVar8 = (vector *)PlantGroup::Plants();
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)&local_20,
                 pvVar8);
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
        cVar2 = Sexy::RtMixedPtrBase::IsValid(this_02);
        if (cVar2 != '\0') {
          uVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02)
          ;
          cVar2 = Plant::HasCondition(uVar9,0x22);
          if (cVar2 == '\0') {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
            Plant::GetType();
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
            bVar4 = std::operator==((string *)(lVar10 + 8),"happyleek");
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
            if (bVar4) {
              this[0x40] = (WateringCursor)0x1;
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
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)&local_20)
      ;
      goto LAB_0446267c;
    }
  }
  pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  cVar3 = '\0';
  AudioMgr::SendEvent(pcVar12,"Play_drop");
LAB_0446267c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}


/* WateringCursor::onTouchEvent(Sexy::Touch const&) */

WateringCursor __thiscall WateringCursor::onTouchEvent(WateringCursor *this,Touch *param_1)

{
  int iVar1;
  WateringCursor WVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  this[0x40] = (WateringCursor)0x0;
  if (iVar1 == 4) {
    BaseCursor::Destroy((BaseCursor *)this);
    iVar1 = *(int *)(param_1 + 0x30);
  }
  WVar2 = (WateringCursor)0x0;
  if (iVar1 == 3) {
    WVar2 = (WateringCursor)(**(code **)(*(long *)this + 0x48))(this);
    if (WVar2 == (WateringCursor)0x0) {
      tryToShovelPlant(this);
      WVar2 = this[0x40];
      if (WVar2 == (WateringCursor)0x0) {
        WVar2 = (WateringCursor)0x1;
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
  return WVar2;
}

