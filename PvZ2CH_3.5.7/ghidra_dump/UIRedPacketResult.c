// Class: UIRedPacketResult


/* UIRedPacketResult::UIRedPacketResult() */

void __thiscall UIRedPacketResult::UIRedPacketResult(UIRedPacketResult *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06771990;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  return;
}


/* UIRedPacketResult::isActive() */

undefined1 UIRedPacketResult::isActive(void)

{
  return s_isActive;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacketResult::Initialize() */

void __thiscall UIRedPacketResult::Initialize(UIRedPacketResult *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIRedPacketResult");
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  s_isActive = 1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIRedPacketResult::setUnactive() */

void UIRedPacketResult::setUnactive(void)

{
  s_isActive = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacketResult::setTitle(std::wstring const&) */

void __thiscall UIRedPacketResult::setTitle(UIRedPacketResult *this,wstring *param_1)

{
  string *psVar1;
  DTouchLayer *pDVar2;
  undefined8 uVar3;
  wstring *extraout_x1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_10,"rewardTitle");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_10);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    Sexy::SexyStringToUTF8String((Sexy *)param_1,extraout_x1);
    uVar3 = FUN_0547429c(asStack_10);
    (**(code **)(*(long *)pDVar2 + 0x338))(pDVar2,uVar3);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacketResult::GetTitleNode() */

void __thiscall UIRedPacketResult::GetTitleNode(UIRedPacketResult *this)

{
  string *psVar1;
  DTouchLayer *pDVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_10,"rewardTitle");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pDVar2);
}


/* UIRedPacketResult::~UIRedPacketResult() */

void __thiscall UIRedPacketResult::~UIRedPacketResult(UIRedPacketResult *this)

{
  *(undefined ***)this = &PTR_GetClass_06771990;
  setUnactive();
  s_pWidgetHandler = 0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x180));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x168));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x138))
  ;
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UIRedPacketResult::~UIRedPacketResult() */

void __thiscall UIRedPacketResult::~UIRedPacketResult(UIRedPacketResult *this)

{
  ~UIRedPacketResult(this);
  AK::FreeHook(this);
  return;
}


/* UIRedPacketResult::create(bool) */

UIRedPacketResult * UIRedPacketResult::create(bool param_1)

{
  UIRedPacketResult *this;
  
  if (s_pWidgetHandler != (UIRedPacketResult *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x198);
  memset(this,0,0x198);
  UIRedPacketResult(this);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_1);
  s_pWidgetHandler = this;
  return this;
}


/* UIRedPacketResult::create(std::vector<int, std::allocator<int> > const&, std::vector<int,
   std::allocator<int> > const&, bool) */

UIRedPacketResult * UIRedPacketResult::create(vector *param_1,vector *param_2,bool param_3)

{
  UIRedPacketResult *this;
  
  if (s_pWidgetHandler != (UIRedPacketResult *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x198);
  memset(this,0,0x198);
  UIRedPacketResult(this);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x180),param_1);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x168),param_2);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_3);
  s_pWidgetHandler = this;
  return this;
}


/* UIRedPacketResult::create(std::map<int, int, std::less<int>, std::allocator<std::pair<int const,
   int> > > const&, std::vector<int, std::allocator<int> > const&, bool) */

UIRedPacketResult * UIRedPacketResult::create(map *param_1,vector *param_2,bool param_3)

{
  UIRedPacketResult *this;
  
  if (s_pWidgetHandler != (UIRedPacketResult *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x198);
  memset(this,0,0x198);
  UIRedPacketResult(this);
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
/* UIRedPacketResult::UserInit() */

void __thiscall UIRedPacketResult::UserInit(UIRedPacketResult *this)

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
  long lVar12;
  char *pcVar13;
  LotteryResultProgressBar *this_00;
  long *plVar14;
  DMenu *this_01;
  string *extraout_x0;
  SeedPacketUtils *this_02;
  RtWeakPtr<Sexy::ResourceInfo> *this_03;
  ResourceInfo *pRVar15;
  long lVar16;
  wstring *extraout_x1;
  string *extraout_x1_00;
  code *pcVar17;
  long lVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  long local_128;
  CompiledMap aCStack_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  CompiledMap aCStack_b0 [8];
  DRefPtr<UIAccumulatedLoginButton> aDStack_a8 [8];
  string asStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  DString aDStack_80 [16];
  UIRedPacketResult *pUStack_70;
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
    FUN_03d81298(afStack_58,this);
    (*pcVar17)(pDVar8,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  }
  pDVar9 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
  std::string::string(asStack_38,"scrollViewContainer");
  DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar9,asStack_38,(DTransformNode *)0x0);
  std::string::~string(asStack_38);
  nop();
  cVar3 = Sexy::CompiledMap::Initialized(aCStack_c8);
  if (cVar3 != '\0') {
    lVar18 = 0;
    local_c0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x168));
    local_b8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x168));
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8), bVar4)
    {
      piVar11 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
      iVar5 = *piVar11;
      GetGameItemInfo(iVar5,0x7fffffff,0);
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
      cVar3 = Sexy::CompiledMap::Initialized((CompiledMap *)aDStack_a8);
      if (cVar3 == '\0') {
LAB_03d88530:
        cVar3 = Sexy::CompiledMap::Initialized(aCStack_b0);
      }
      else {
        psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a8);
        std::string::string((string *)&pUStack_70,"img");
        pDVar8 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar7);
        std::string::~string((string *)&pUStack_70);
        nop();
        psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a8);
        std::string::string((string *)&pUStack_70,"showText");
        pDVar10 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar7);
        std::string::~string((string *)&pUStack_70);
        nop();
        if (local_34 == 1) {
          psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
          bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_90);
          if (bVar4) {
            plVar14 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)aDStack_a8);
            pcVar17 = *(code **)(*plVar14 + 0x2e8);
            lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_90);
            DString::Format("UI/Dialog_Asset/frame_tool%d",(string *)&pUStack_70,
                            (ulong)(*(int *)(lVar12 + 0xd0) + 1));
            DString::operator_cast_to_string((DString *)&pUStack_70);
            (*pcVar17)(plVar14,aDStack_80);
            std::string::~string((string *)aDStack_80);
            DString::~DString((DString *)&pUStack_70);
          }
          DRefPtr<DAtlasSpriteNode>::DRefPtr((DRefPtr<DAtlasSpriteNode> *)asStack_88);
          plVar14 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_88)
          ;
          pcVar17 = *(code **)(*plVar14 + 0x338);
          FUN_031f5e7c(aDStack_80,"UI/headshot/plant/",asStack_28);
          plVar14 = (long *)(*pcVar17)(plVar14,aDStack_80,1);
          pcVar17 = *(code **)(*plVar14 + 0x108);
          DVec2::DVec2((DVec2 *)&pUStack_70,0.0,0.0);
          plVar14 = (long *)(*pcVar17)(plVar14,(string *)&pUStack_70);
          (**(code **)(*plVar14 + 0x130))(0,0);
          std::string::~string((string *)aDStack_80);
          plVar14 = (long *)(**(code **)(*(long *)pDVar8 + 0x110))(0xc0a00000,0xc0a00000);
          (**(code **)(*plVar14 + 0x130))(0,0);
          uVar19 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_88);
          (**(code **)(*(long *)pDVar8 + 0x30))(pDVar8,uVar19);
          (**(code **)(*(long *)pDVar10 + 0xd8))(pDVar10,0);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)asStack_88);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_90);
          goto LAB_03d88530;
        }
        if (local_34 == 2) {
          this_02 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
          this_03 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    SeedPacketUtils::GetPlantPiecePacketRenderData(this_02,asStack_28);
          DRefPtr<DAtlasSpriteNode>::DRefPtr((DRefPtr<DAtlasSpriteNode> *)asStack_88);
          plVar14 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_88)
          ;
          pcVar17 = *(code **)(*plVar14 + 0x340);
          pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this_03 + 0x170));
          plVar14 = (long *)(*pcVar17)(plVar14,pRVar15,this_03 + 0x20);
          plVar14 = (long *)(**(code **)(*plVar14 + 0x110))(0,0);
          (**(code **)(*plVar14 + 0x130))(0,0);
          iVar5 = *(int *)(this_03 + 0x30);
          iVar6 = *(int *)(this_03 + 0x34);
          iVar1 = *(int *)(this_03 + 0x18);
          iVar2 = *(int *)(this_03 + 0x1c);
          DRefPtr<DAtlasSpriteNode>::DRefPtr((DRefPtr<DAtlasSpriteNode> *)aDStack_80);
          plVar14 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80)
          ;
          pcVar17 = *(code **)(*plVar14 + 0x340);
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_03);
          pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar12 + 0x48));
          plVar14 = (long *)(*pcVar17)(plVar14,pRVar15,this_03 + 8);
          pcVar17 = *(code **)(*plVar14 + 0x108);
          fVar20 = (float)FUN_03d81524((float)(iVar1 - iVar5));
          fVar21 = (float)FUN_03d81524((float)(iVar2 - iVar6));
          DVec2::DVec2((DVec2 *)&pUStack_70,fVar20,fVar21);
          plVar14 = (long *)(*pcVar17)(plVar14,(string *)&pUStack_70);
          (**(code **)(*plVar14 + 0x130))(0,0);
          uVar19 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_88);
          (**(code **)(*(long *)pDVar8 + 0x30))(pDVar8,uVar19);
          uVar19 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80);
          (**(code **)(*(long *)pDVar8 + 0x30))(pDVar8,uVar19);
          pcVar17 = *(code **)(*(long *)pDVar8 + 0x210);
          iVar5 = FUN_03d81510(*(undefined4 *)(this_03 + 0x28));
          iVar6 = FUN_03d81510(*(undefined4 *)(this_03 + 0x2c));
          DVec2::DVec2((DVec2 *)&pUStack_70,(float)iVar5,(float)iVar6);
          (*pcVar17)(pDVar8,(string *)&pUStack_70);
          uVar19 = *(undefined8 *)(this + 0x180);
          lVar12 = FUN_03d7e464(uVar19,*(undefined8 *)(this + 0x188));
          if (lVar12 == 0) {
            pcVar17 = *(code **)(*(long *)pDVar10 + 0x338);
            piVar11 = (int *)std::
                             map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                             operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                         *)(this + 0x138),piVar11);
            DString::DString((DString *)&pUStack_70,*piVar11);
            pcVar13 = DString::operator_cast_to_char_((DString *)&pUStack_70);
            (*pcVar17)(pDVar10,pcVar13);
            DString::~DString((DString *)&pUStack_70);
          }
          else {
            pcVar17 = *(code **)(*(long *)pDVar10 + 0x338);
            piVar11 = (int *)FUN_03d7e74c(uVar19,lVar18);
            DString::DString((DString *)&pUStack_70,*piVar11);
            pcVar13 = DString::operator_cast_to_char_((DString *)&pUStack_70);
            (*pcVar17)(pDVar10,pcVar13);
            DString::~DString((DString *)&pUStack_70);
          }
          (**(code **)(*(long *)pDVar8 + 0x170))(0x42be0000);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)aDStack_80);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)asStack_88);
          goto LAB_03d88530;
        }
        if (local_34 == 0x8000) {
          DSingleton<HeadshotConfig>::getInstance();
          nop();
          DString::DString((DString *)&pUStack_70,iVar5);
          DString::operator_cast_to_string((DString *)&pUStack_70);
          local_128 = 0;
          std::string::string(asStack_88,"plant");
          std::string::string((string *)aDStack_80,"none");
          DIniFile::getItem(extraout_x0,asStack_90,asStack_88);
          std::string::~string((string *)aDStack_80);
          nop();
          std::string::~string(asStack_88);
          nop();
          std::string::~string(asStack_90);
          DString::~DString((DString *)&pUStack_70);
          bVar4 = std::operator!=(asStack_a0,"none");
          if (bVar4) {
            Sexy::StringToUpper((Sexy *)asStack_a0,extraout_x1_00);
            std::operator+("IMAGE_UI_HEADSHOTFRAME_HEADSHOT_",(string *)aDStack_80);
            local_128 = StringHelper::ToImage((string *)&pUStack_70,false);
            std::string::~string((string *)&pUStack_70);
            std::string::~string((string *)aDStack_80);
          }
          DString::DString((DString *)&pUStack_70,iVar5);
          DString::operator_cast_to_string((DString *)&pUStack_70);
          std::string::string(asStack_90,"frame");
          std::string::string(asStack_88,"none");
          DIniFile::getItem(extraout_x0,asStack_98,asStack_90);
          thunk_FUN_05475e00(asStack_a0,aDStack_80);
          std::string::~string((string *)aDStack_80);
          std::string::~string(asStack_88);
          nop();
          std::string::~string(asStack_90);
          nop();
          std::string::~string(asStack_98);
          DString::~DString((DString *)&pUStack_70);
          bVar4 = std::operator!=(asStack_a0,"none");
          if (bVar4) {
            FUN_031f5e7c(aDStack_80,"IMAGE_UI_HEADSHOTFRAME_LV",asStack_a0);
            std::operator+((string *)aDStack_80,"_1");
            lVar12 = StringHelper::ToImage((string *)&pUStack_70,false);
            std::string::~string((string *)&pUStack_70);
            std::string::~string((string *)aDStack_80);
            FUN_031f5e7c(aDStack_80,"IMAGE_UI_HEADSHOTFRAME_LV",asStack_a0);
            std::operator+((string *)aDStack_80,"_2");
            lVar16 = StringHelper::ToImage((string *)&pUStack_70,false);
            std::string::~string((string *)&pUStack_70);
            std::string::~string((string *)aDStack_80);
            if (lVar16 != 0) {
              (**(code **)(*(long *)pDVar8 + 0x330))(pDVar8,lVar16);
              if (local_128 != 0) {
                DRefPtr<DAtlasSpriteNode>::DRefPtr((DRefPtr<DAtlasSpriteNode> *)asStack_88);
                plVar14 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                            ((exception_ptr *)asStack_88);
                pcVar17 = *(code **)(*plVar14 + 0x340);
                Sexy::Insets::Insets
                          ((Insets *)&pUStack_70,0,0,*(int *)(local_128 + 0x38),
                           *(int *)(local_128 + 0x3c));
                plVar14 = (long *)(*pcVar17)(plVar14,local_128,(string *)&pUStack_70);
                pcVar17 = *(code **)(*plVar14 + 0x108);
                iVar5 = FUN_03d81510(*(int *)(lVar16 + 0x38) / 2);
                iVar6 = FUN_03d81510(*(int *)(lVar16 + 0x3c) / 2);
                DVec2::DVec2((DVec2 *)aDStack_80,(float)iVar5,(float)iVar6);
                (*pcVar17)(plVar14,aDStack_80);
                uVar19 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_88);
                (**(code **)(*(long *)pDVar8 + 0x30))(pDVar8,uVar19);
                DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                          ((DRefPtr<UIAccumulatedLoginButton> *)asStack_88);
              }
              if (lVar12 != 0) {
                DRefPtr<DAtlasSpriteNode>::DRefPtr((DRefPtr<DAtlasSpriteNode> *)asStack_88);
                plVar14 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                            ((exception_ptr *)asStack_88);
                pcVar17 = *(code **)(*plVar14 + 0x340);
                Sexy::Insets::Insets
                          ((Insets *)&pUStack_70,0,0,*(int *)(lVar12 + 0x38),*(int *)(lVar12 + 0x3c)
                          );
                plVar14 = (long *)(*pcVar17)(plVar14,lVar12,(string *)&pUStack_70);
                pcVar17 = *(code **)(*plVar14 + 0x108);
                iVar5 = FUN_03d81510(*(int *)(lVar16 + 0x38) / 2);
                iVar6 = FUN_03d81510(*(int *)(lVar16 + 0x3c) / 2);
                DVec2::DVec2((DVec2 *)aDStack_80,(float)iVar5,(float)iVar6);
                (*pcVar17)(plVar14,aDStack_80);
                uVar19 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_88);
                (**(code **)(*(long *)pDVar8 + 0x30))(pDVar8,uVar19);
                DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                          ((DRefPtr<UIAccumulatedLoginButton> *)asStack_88);
              }
            }
          }
          (**(code **)(*(long *)pDVar8 + 0x168))(0x42be0000);
          (**(code **)(*(long *)pDVar10 + 0xd8))(pDVar10,0);
          std::string::~string(asStack_a0);
          goto LAB_03d88530;
        }
        (**(code **)(*(long *)pDVar8 + 0x2e8))(pDVar8,auStack_18);
        uVar19 = *(undefined8 *)(this + 0x180);
        lVar12 = FUN_03d7e464(uVar19,*(undefined8 *)(this + 0x188));
        if (lVar12 == 0) {
          pcVar17 = *(code **)(*(long *)pDVar10 + 0x338);
          piVar11 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                           ::operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                         *)(this + 0x138),piVar11);
          DString::DString((DString *)&pUStack_70,*piVar11);
          pcVar13 = DString::operator_cast_to_char_((DString *)&pUStack_70);
          (*pcVar17)(pDVar10,pcVar13);
          DString::~DString((DString *)&pUStack_70);
        }
        else {
          pcVar17 = *(code **)(*(long *)pDVar10 + 0x338);
          piVar11 = (int *)FUN_03d7e74c(uVar19,lVar18);
          DString::DString((DString *)&pUStack_70,*piVar11);
          pcVar13 = DString::operator_cast_to_char_((DString *)&pUStack_70);
          (*pcVar17)(pDVar10,pcVar13);
          DString::~DString((DString *)&pUStack_70);
        }
        pcVar13 = (char *)FUN_0547429c(auStack_18);
        std::string::string((string *)&pUStack_70,pcVar13);
        this_00 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)&pUStack_70,false);
        std::string::~string((string *)&pUStack_70);
        nop();
        if (this_00 == (LotteryResultProgressBar *)0x0) {
LAB_03d888d4:
          (**(code **)(*(long *)pDVar8 + 0x170))(0x42be0000);
          goto LAB_03d88530;
        }
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_00);
        iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
        if (iVar6 <= iVar5) goto LAB_03d888d4;
        (**(code **)(*(long *)pDVar8 + 0x168))(0x42be0000);
        cVar3 = Sexy::CompiledMap::Initialized(aCStack_b0);
      }
      if (cVar3 != '\0') {
        plVar14 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_b0);
        uVar19 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a8);
        (**(code **)(*plVar14 + 0x388))(plVar14,uVar19);
        Sexy::SexyStringToUTF8String(aSStack_10,extraout_x1);
        DString::DString(aDStack_80,(string *)&pUStack_70);
        std::string::~string((string *)&pUStack_70);
        plVar14 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_b0);
        pcVar17 = *(code **)(*plVar14 + 0x360);
        pUStack_70 = this;
        DString::DString(aDStack_68,aDStack_80);
        FUN_03d812f4(afStack_58,(string *)&pUStack_70);
        (*pcVar17)(plVar14,afStack_58);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
        FUN_035590e8((string *)&pUStack_70);
        plVar14 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_b0);
        pcVar17 = *(code **)(*plVar14 + 0x380);
        FUN_03d81354(afStack_58,this);
        (*pcVar17)(plVar14,afStack_58);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
        plVar14 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_c8);
        uVar19 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_b0);
        (**(code **)(*plVar14 + 0x30))(plVar14,uVar19);
        DString::~DString(aDStack_80);
      }
      lVar18 = lVar18 + 1;
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr(aDStack_a8);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_b0);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_c0);
    }
    this_01 = (DMenu *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_c8);
    DMenu::align(this_01,5,100.0,100.0,10.0,10.0);
  }
  psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_38,"scrollView");
  pDVar8 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar7);
  std::string::~string(asStack_38);
  nop();
  if (pDVar8 != (DTouchLayer *)0x0) {
    pDVar10 = (DTouchLayer *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_c8);
    DScrollView::setContainer((DScrollView *)pDVar8,pDVar10);
  }
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_c8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

