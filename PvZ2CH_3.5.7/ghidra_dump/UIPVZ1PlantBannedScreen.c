// Class: UIPVZ1PlantBannedScreen


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPVZ1PlantBannedScreen::Initialize() */

void __thiscall UIPVZ1PlantBannedScreen::Initialize(UIPVZ1PlantBannedScreen *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIPVZ1PlantBannedScreen");
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPVZ1PlantBannedScreen::UIPVZ1PlantBannedScreen() */

void __thiscall UIPVZ1PlantBannedScreen::UIPVZ1PlantBannedScreen(UIPVZ1PlantBannedScreen *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_066694b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  return;
}


/* UIPVZ1PlantBannedScreen::~UIPVZ1PlantBannedScreen() */

void __thiscall UIPVZ1PlantBannedScreen::~UIPVZ1PlantBannedScreen(UIPVZ1PlantBannedScreen *this)

{
  *(undefined ***)this = &PTR_GetClass_066694b0;
  s_pWidgetHandler = 0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x138));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UIPVZ1PlantBannedScreen::~UIPVZ1PlantBannedScreen() */

void __thiscall UIPVZ1PlantBannedScreen::~UIPVZ1PlantBannedScreen(UIPVZ1PlantBannedScreen *this)

{
  ~UIPVZ1PlantBannedScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPVZ1PlantBannedScreen::UserInit() */

void __thiscall UIPVZ1PlantBannedScreen::UserInit(UIPVZ1PlantBannedScreen *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  string *psVar8;
  DTouchLayer *pDVar9;
  DNodeLoaderConfig *this_00;
  DTouchLayer *pDVar10;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  undefined8 uVar11;
  int *piVar12;
  SeedPacketUtils *pSVar13;
  PacketRenderData *pPVar14;
  long *plVar15;
  long *plVar16;
  ResourceInfo *pRVar17;
  DMenu *this_03;
  code *pcVar18;
  float fVar19;
  float fVar20;
  int unaff_s11;
  CompiledMap aCStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  exception_ptr aeStack_88 [8];
  exception_ptr aeStack_80 [8];
  exception_ptr aeStack_78 [8];
  DRefPtr<DSpriteNode> aDStack_70 [8];
  string asStack_68 [8];
  DVec2 aDStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  string asStack_38 [16];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_38,"btnCancel");
  pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
  std::string::~string(asStack_38);
  nop();
  if (pDVar9 != (DTouchLayer *)0x0) {
    pcVar18 = *(code **)(*(long *)pDVar9 + 0x350);
    FUN_03619470(afStack_58,this);
    (*pcVar18)(pDVar9,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  }
  this_00 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
  std::string::string(asStack_38,"scrollViewContainer");
  DNodeLoaderConfig::loadNode<DTouchLayer>(this_00,asStack_38,(DTransformNode *)0x0);
  std::string::~string(asStack_38);
  nop();
  cVar3 = Sexy::CompiledMap::Initialized(aCStack_a0);
  if (cVar3 != '\0') {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    iVar5 = 0;
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x138));
    local_90 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x138));
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_98,(__normal_iterator *)&local_90), bVar4)
    {
      piVar12 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
      GetGameItemInfo(*piVar12,0x7fffffff,0);
      cVar3 = PlayerInfo::GetIsPlantUnlocked(this_02,asStack_28);
      pSVar13 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      pPVar14 = (PacketRenderData *)
                SeedPacketUtils::GetPlantPacketRenderData(pSVar13,asStack_28,-1,-1,-1);
      pSVar13 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      plVar15 = (long *)SeedPacketUtils::CreateDeviceImageForSeedPacket(pSVar13,pPVar14,0,0);
      unaff_s11 = FUN_036194e0(*(undefined4 *)(pPVar14 + 0x28));
      iVar5 = FUN_036194e0(*(undefined4 *)(pPVar14 + 0x2c));
      DRefPtr<DTransformNode>::DRefPtr((DRefPtr<DTransformNode> *)aeStack_88);
      plVar16 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_88);
      pcVar18 = *(code **)(*plVar16 + 0x210);
      iVar6 = FUN_036194e0(*(undefined4 *)(pPVar14 + 0x28));
      iVar7 = FUN_036194e0(*(undefined4 *)(pPVar14 + 0x2c));
      DVec2::DVec2(aDStack_60,(float)iVar6,(float)iVar7);
      (*pcVar18)(plVar16,aDStack_60);
      DRefPtr<DAtlasSpriteNode>::DRefPtr((DRefPtr<DAtlasSpriteNode> *)aeStack_80);
      plVar16 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_80);
      pcVar18 = *(code **)(*plVar16 + 0x340);
      pRVar17 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pPVar14 + 0x170));
      plVar16 = (long *)(*pcVar18)(plVar16,pRVar17,pPVar14 + 0x20);
      pcVar18 = *(code **)(*plVar16 + 0x108);
      iVar6 = FUN_036194e0(*(undefined4 *)(pPVar14 + 0x30));
      iVar7 = FUN_036194e0(*(undefined4 *)(pPVar14 + 0x34));
      DVec2::DVec2(aDStack_60,(float)iVar6,(float)iVar7);
      plVar16 = (long *)(*pcVar18)(plVar16,aDStack_60);
      (**(code **)(*plVar16 + 0x130))(0,0);
      iVar6 = *(int *)(pPVar14 + 0x30);
      iVar7 = *(int *)(pPVar14 + 0x34);
      iVar1 = *(int *)(pPVar14 + 0x18);
      iVar2 = *(int *)(pPVar14 + 0x1c);
      DRefPtr<DAtlasSpriteNode>::DRefPtr((DRefPtr<DAtlasSpriteNode> *)aeStack_78);
      plVar16 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_78);
      pcVar18 = *(code **)(*plVar16 + 0x340);
      pRVar17 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pPVar14 + 0x170));
      plVar16 = (long *)(*pcVar18)(plVar16,pRVar17,pPVar14 + 8);
      pcVar18 = *(code **)(*plVar16 + 0x108);
      fVar19 = (float)FUN_036194f4((float)(iVar1 - iVar6));
      fVar20 = (float)FUN_036194f4((float)(iVar2 - iVar7));
      DVec2::DVec2(aDStack_60,fVar19,fVar20);
      plVar16 = (long *)(*pcVar18)(plVar16,aDStack_60);
      (**(code **)(*plVar16 + 0x130))(0,0);
      if (cVar3 == '\0') {
        plVar16 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_78);
        pcVar18 = *(code **)(*plVar16 + 0x2e0);
        std::string::string((string *)aDStack_60,"grayscale");
        (*pcVar18)(plVar16,aDStack_60);
        std::string::~string((string *)aDStack_60);
        nop();
        plVar16 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_80);
        pcVar18 = *(code **)(*plVar16 + 0x2e0);
        std::string::string((string *)aDStack_60,"grayscale");
        (*pcVar18)(plVar16,aDStack_60);
        std::string::~string((string *)aDStack_60);
        nop();
      }
      plVar16 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_80);
      uVar11 = std::__exception_ptr::exception_ptr::_M_get(aeStack_78);
      (**(code **)(*plVar16 + 0x28))(plVar16,uVar11,0);
      DRefPtr<DSpriteNode>::DRefPtr(aDStack_70);
      plVar16 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
      pcVar18 = *(code **)(*plVar16 + 0x2e8);
      std::string::string(asStack_68,"UI/pvz1/banned_cover");
      plVar16 = (long *)(*pcVar18)(plVar16,asStack_68);
      pcVar18 = *(code **)(*plVar16 + 0x108);
      DVec2::DVec2(aDStack_60,(float)(unaff_s11 + -0x16),(float)(iVar5 + -0x17));
      plVar16 = (long *)(*pcVar18)(plVar16,aDStack_60);
      plVar16 = (long *)(**(code **)(*plVar16 + 0x130))(0,0);
      (**(code **)(*plVar16 + 0x140))(0x3ecccccd);
      std::string::~string(asStack_68);
      nop();
      plVar16 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_80);
      uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
      (**(code **)(*plVar16 + 0x30))(plVar16,uVar11);
      plVar16 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_88);
      uVar11 = std::__exception_ptr::exception_ptr::_M_get(aeStack_80);
      (**(code **)(*plVar16 + 0x30))(plVar16,uVar11);
      plVar16 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_88);
      (**(code **)(*plVar16 + 0x1a0))(plVar16,1);
      plVar16 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a0);
      uVar11 = std::__exception_ptr::exception_ptr::_M_get(aeStack_88);
      (**(code **)(*plVar16 + 0x30))(plVar16,uVar11);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_70);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_78);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_80);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_88);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_98);
    }
    this_03 = (DMenu *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a0);
    DMenu::align(this_03,3,(float)unaff_s11,(float)iVar5,6.0,6.0);
  }
  psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_38,"scrollView");
  pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
  std::string::~string(asStack_38);
  nop();
  if (pDVar9 != (DTouchLayer *)0x0) {
    pDVar10 = (DTouchLayer *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a0);
    DScrollView::setContainer((DScrollView *)pDVar9,pDVar10);
  }
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_a0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UIPVZ1PlantBannedScreen::create(std::vector<int, std::allocator<int> > const&, bool) */

UIPVZ1PlantBannedScreen * UIPVZ1PlantBannedScreen::create(vector *param_1,bool param_2)

{
  UIPVZ1PlantBannedScreen *this;
  
  if (s_pWidgetHandler != (UIPVZ1PlantBannedScreen *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x150);
  memset(this,0,0x150);
  UIPVZ1PlantBannedScreen(this);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x138),param_1);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_2);
  s_pWidgetHandler = this;
  return this;
}

