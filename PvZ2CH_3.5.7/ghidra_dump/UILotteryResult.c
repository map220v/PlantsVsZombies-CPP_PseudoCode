// Class: UILotteryResult


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILotteryResult::Initialize() */

void __thiscall UILotteryResult::Initialize(UILotteryResult *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIRedPacketResult");
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILotteryResult::~UILotteryResult() */

void __thiscall UILotteryResult::~UILotteryResult(UILotteryResult *this)

{
  *(undefined ***)this = &PTR_GetClass_0671d370;
  s_pWidgetHandler = 0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x168));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x138))
  ;
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UILotteryResult::~UILotteryResult() */

void __thiscall UILotteryResult::~UILotteryResult(UILotteryResult *this)

{
  ~UILotteryResult(this);
  AK::FreeHook(this);
  return;
}


/* UILotteryResult::UILotteryResult() */

void __thiscall UILotteryResult::UILotteryResult(UILotteryResult *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0671d370;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  return;
}


/* UILotteryResult::create(bool) */

UILotteryResult * UILotteryResult::create(bool param_1)

{
  UILotteryResult *this;
  
  if (s_pWidgetHandler != (UILotteryResult *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x180);
  memset(this,0,0x180);
  UILotteryResult(this);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_1);
  s_pWidgetHandler = this;
  return this;
}


/* UILotteryResult::create(std::map<int, int, std::less<int>, std::allocator<std::pair<int const,
   int> > > const&, std::vector<int, std::allocator<int> > const&, bool) */

UILotteryResult * UILotteryResult::create(map *param_1,vector *param_2,bool param_3)

{
  UILotteryResult *this;
  
  if (s_pWidgetHandler != (UILotteryResult *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x180);
  memset(this,0,0x180);
  UILotteryResult(this);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator=
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x138),
             param_1);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x168),param_2);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_3);
  s_pWidgetHandler = this;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILotteryResult::UserInit() */

void __thiscall UILotteryResult::UserInit(UILotteryResult *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  string *psVar7;
  DTouchLayer *pDVar8;
  DNodeLoaderConfig *pDVar9;
  DTouchLayer *pDVar10;
  int *piVar11;
  char *pcVar12;
  long *plVar13;
  undefined8 uVar14;
  DMenu *this_00;
  SeedPacketUtils *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  ResourceInfo *pRVar15;
  long lVar16;
  wstring *extraout_x1;
  code *pcVar17;
  float fVar18;
  float fVar19;
  CompiledMap aCStack_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  CompiledMap aCStack_a0 [8];
  DRefPtr<UIAccumulatedLoginButton> aDStack_98 [8];
  RtWeakPtr aRStack_90 [8];
  DRefPtr<DAtlasSpriteNode> aDStack_88 [8];
  DString aDStack_80 [16];
  UILotteryResult *pUStack_70;
  DString aDStack_68 [16];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  string asStack_38 [4];
  int local_34;
  string asStack_28 [16];
  undefined1 auStack_18 [8];
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_38,"btnClose");
  pDVar8 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar7);
  std::string::~string(asStack_38);
  nop();
  if (pDVar8 != (DTouchLayer *)0x0) {
    pcVar17 = *(code **)(*(long *)pDVar8 + 0x350);
    FUN_03ac46e8(afStack_58,this);
    (*pcVar17)(pDVar8,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  }
  pDVar9 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
  std::string::string(asStack_38,"scrollViewContainer");
  DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar9,asStack_38,(DTransformNode *)0x0);
  std::string::~string(asStack_38);
  nop();
  cVar3 = Sexy::CompiledMap::Initialized(aCStack_b8);
  if (cVar3 != '\0') {
    local_b0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x168));
    local_a8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x168));
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8), bVar4)
    {
      piVar11 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
      GetGameItemInfo(*piVar11,0x7fffffff,0);
      pDVar9 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
      std::string::string((string *)&pUStack_70,"rewardBtn");
      DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar9,(string *)&pUStack_70,(DTransformNode *)0x0);
      std::string::~string((string *)&pUStack_70);
      nop();
      pDVar9 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
      std::string::string((string *)&pUStack_70,"rewardImg");
      DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar9,(string *)&pUStack_70,(DTransformNode *)0x0);
      std::string::~string((string *)&pUStack_70);
      nop();
      cVar3 = Sexy::CompiledMap::Initialized((CompiledMap *)aDStack_98);
      if (cVar3 == '\0') {
LAB_03ae2980:
        cVar3 = Sexy::CompiledMap::Initialized(aCStack_a0);
      }
      else {
        psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
        std::string::string((string *)&pUStack_70,"img");
        pDVar8 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar7);
        std::string::~string((string *)&pUStack_70);
        nop();
        psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
        std::string::string((string *)&pUStack_70,"showText");
        pDVar10 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar7);
        std::string::~string((string *)&pUStack_70);
        nop();
        if (local_34 == 1) {
          psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
          bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_90);
          if (bVar4) {
            plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)aDStack_98);
            pcVar17 = *(code **)(*plVar13 + 0x2e8);
            lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
            DString::Format("UI/Dialog_Asset/frame_tool%d",(string *)&pUStack_70,
                            (ulong)(*(int *)(lVar16 + 0xd0) + 1));
            DString::operator_cast_to_string((DString *)&pUStack_70);
            (*pcVar17)(plVar13,aDStack_80);
            std::string::~string((string *)aDStack_80);
            DString::~DString((DString *)&pUStack_70);
          }
          DRefPtr<DAtlasSpriteNode>::DRefPtr(aDStack_88);
          plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88)
          ;
          pcVar17 = *(code **)(*plVar13 + 0x338);
          FUN_031f5e7c(aDStack_80,"UI/headshot/plant/",asStack_28);
          plVar13 = (long *)(*pcVar17)(plVar13,aDStack_80,1);
          pcVar17 = *(code **)(*plVar13 + 0x108);
          DVec2::DVec2((DVec2 *)&pUStack_70,0.0,0.0);
          plVar13 = (long *)(*pcVar17)(plVar13,(string *)&pUStack_70);
          (**(code **)(*plVar13 + 0x130))(0,0);
          std::string::~string((string *)aDStack_80);
          plVar13 = (long *)(**(code **)(*(long *)pDVar8 + 0x110))(0xc0a00000,0xc0a00000,pDVar8);
          (**(code **)(*plVar13 + 0x130))(0,0);
          uVar14 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
          (**(code **)(*(long *)pDVar8 + 0x30))(pDVar8,uVar14);
          (**(code **)(*(long *)pDVar10 + 0xd8))(pDVar10,0);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)aDStack_88);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
          goto LAB_03ae2980;
        }
        if (local_34 == 2) {
          this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
          this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    SeedPacketUtils::GetPlantPiecePacketRenderData(this_01,asStack_28);
          DRefPtr<DAtlasSpriteNode>::DRefPtr(aDStack_88);
          plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88)
          ;
          pcVar17 = *(code **)(*plVar13 + 0x340);
          pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this_02 + 0x170));
          plVar13 = (long *)(*pcVar17)(plVar13,pRVar15,this_02 + 0x20);
          plVar13 = (long *)(**(code **)(*plVar13 + 0x110))(0,0);
          (**(code **)(*plVar13 + 0x130))(0,0);
          iVar5 = *(int *)(this_02 + 0x30);
          iVar6 = *(int *)(this_02 + 0x34);
          iVar1 = *(int *)(this_02 + 0x18);
          iVar2 = *(int *)(this_02 + 0x1c);
          DRefPtr<DAtlasSpriteNode>::DRefPtr((DRefPtr<DAtlasSpriteNode> *)aDStack_80);
          plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80)
          ;
          pcVar17 = *(code **)(*plVar13 + 0x340);
          lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
          pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar16 + 0x48));
          plVar13 = (long *)(*pcVar17)(plVar13,pRVar15,this_02 + 8);
          pcVar17 = *(code **)(*plVar13 + 0x108);
          fVar18 = (float)FUN_03ac4828((float)(iVar1 - iVar5));
          fVar19 = (float)FUN_03ac4828((float)(iVar2 - iVar6));
          DVec2::DVec2((DVec2 *)&pUStack_70,fVar18,fVar19);
          plVar13 = (long *)(*pcVar17)(plVar13,(string *)&pUStack_70);
          (**(code **)(*plVar13 + 0x130))(0,0);
          uVar14 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
          (**(code **)(*(long *)pDVar8 + 0x30))(pDVar8,uVar14);
          uVar14 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80);
          (**(code **)(*(long *)pDVar8 + 0x30))(pDVar8,uVar14);
          pcVar17 = *(code **)(*(long *)pDVar8 + 0x210);
          iVar5 = FUN_03ac4814(*(undefined4 *)(this_02 + 0x28));
          iVar6 = FUN_03ac4814(*(undefined4 *)(this_02 + 0x2c));
          DVec2::DVec2((DVec2 *)&pUStack_70,(float)iVar5,(float)iVar6);
          (*pcVar17)(pDVar8,(string *)&pUStack_70);
          pcVar17 = *(code **)(*(long *)pDVar10 + 0x338);
          piVar11 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                           ::operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                         *)(this + 0x138),piVar11);
          DString::DString((DString *)&pUStack_70,*piVar11);
          pcVar12 = DString::operator_cast_to_char_((DString *)&pUStack_70);
          (*pcVar17)(pDVar10,pcVar12);
          DString::~DString((DString *)&pUStack_70);
          (**(code **)(*(long *)pDVar8 + 0x170))(0x42be0000,pDVar8);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)aDStack_80);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)aDStack_88);
          goto LAB_03ae2980;
        }
        (**(code **)(*(long *)pDVar8 + 0x2e8))(pDVar8,auStack_18);
        pcVar17 = *(code **)(*(long *)pDVar10 + 0x338);
        piVar11 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                         operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                     *)(this + 0x138),piVar11);
        DString::DString((DString *)&pUStack_70,*piVar11);
        pcVar12 = DString::operator_cast_to_char_((DString *)&pUStack_70);
        (*pcVar17)(pDVar10,pcVar12);
        DString::~DString((DString *)&pUStack_70);
        (**(code **)(*(long *)pDVar8 + 0x170))(0x42be0000,pDVar8);
        cVar3 = Sexy::CompiledMap::Initialized(aCStack_a0);
      }
      if (cVar3 != '\0') {
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a0);
        uVar14 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
        (**(code **)(*plVar13 + 0x388))(plVar13,uVar14);
        Sexy::SexyStringToUTF8String(aSStack_10,extraout_x1);
        DString::DString(aDStack_80,(string *)&pUStack_70);
        std::string::~string((string *)&pUStack_70);
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a0);
        pcVar17 = *(code **)(*plVar13 + 0x360);
        pUStack_70 = this;
        DString::DString(aDStack_68,aDStack_80);
        FUN_03ac4744(afStack_58,(string *)&pUStack_70);
        (*pcVar17)(plVar13,afStack_58);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
        FUN_035590e8((string *)&pUStack_70);
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a0);
        pcVar17 = *(code **)(*plVar13 + 0x380);
        FUN_03ac47a4(afStack_58,this);
        (*pcVar17)(plVar13,afStack_58);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_b8);
        uVar14 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a0);
        (**(code **)(*plVar13 + 0x30))(plVar13,uVar14);
        DString::~DString(aDStack_80);
      }
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr(aDStack_98);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_a0);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_b0);
    }
    this_00 = (DMenu *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_b8);
    DMenu::align(this_00,5,100.0,100.0,10.0,10.0);
  }
  psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_38,"scrollView");
  pDVar8 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar7);
  std::string::~string(asStack_38);
  nop();
  if (pDVar8 != (DTouchLayer *)0x0) {
    pDVar10 = (DTouchLayer *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_b8);
    DScrollView::setContainer((DScrollView *)pDVar8,pDVar10);
  }
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_b8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

