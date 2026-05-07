// Class: UISecretGachaChangePlant


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGachaChangePlant::Initialize() */

void __thiscall UISecretGachaChangePlant::Initialize(UISecretGachaChangePlant *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UISecretGachaChangePlant");
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISecretGachaChangePlant::UISecretGachaChangePlant() */

void __thiscall UISecretGachaChangePlant::UISecretGachaChangePlant(UISecretGachaChangePlant *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0677ebd0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  *(undefined4 *)(this + 0x150) = 0;
  return;
}


/* UISecretGachaChangePlant::~UISecretGachaChangePlant() */

void __thiscall UISecretGachaChangePlant::~UISecretGachaChangePlant(UISecretGachaChangePlant *this)

{
  *(undefined ***)this = &PTR_GetClass_0677ebd0;
  s_pWidgetHandler = 0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x138));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UISecretGachaChangePlant::~UISecretGachaChangePlant() */

void __thiscall UISecretGachaChangePlant::~UISecretGachaChangePlant(UISecretGachaChangePlant *this)

{
  ~UISecretGachaChangePlant(this);
  AK::FreeHook(this);
  return;
}


/* UISecretGachaChangePlant::create(int, std::vector<int, std::allocator<int> > const&, bool) */

UISecretGachaChangePlant *
UISecretGachaChangePlant::create(int param_1,vector *param_2,bool param_3)

{
  UISecretGachaChangePlant *this;
  
  if (s_pWidgetHandler != (UISecretGachaChangePlant *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x158);
  UISecretGachaChangePlant(this);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x138),param_2);
  *(int *)(this + 0x150) = param_1;
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_3);
  s_pWidgetHandler = this;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGachaChangePlant::ChangeReward(int) */

void __thiscall UISecretGachaChangePlant::ChangeReward(UISecretGachaChangePlant *this,int param_1)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [1888];
  string asStack_588 [1408];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"p");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_1);
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_03de5f2c(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_588,(map *)amStack_d18,30.0,(function *)afStack_d38,false,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGachaChangePlant::updateSelectBox(int) */

void __thiscall
UISecretGachaChangePlant::updateSelectBox(UISecretGachaChangePlant *this,int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  long *plVar5;
  char *__s;
  string *psVar6;
  DTouchLayer *pDVar7;
  code *pcVar8;
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  bVar2 = false;
  local_8 = ___stack_chk_guard;
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x138));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x138));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar3) {
    piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    iVar1 = *piVar4;
    plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
    pcVar8 = *(code **)(*plVar5 + 0x58);
    DString::DString(aDStack_18,iVar1);
    __s = (char *)DString::c_str(aDStack_18);
    std::string::string(asStack_20,__s);
    plVar5 = (long *)(*pcVar8)(plVar5,asStack_20);
    std::string::~string(asStack_20);
    nop();
    DString::~DString(aDStack_18);
    if (plVar5 != (long *)0x0) {
      if (param_1 == iVar1) {
        bVar2 = true;
        (**(code **)(*plVar5 + 0xd8))(plVar5,1);
      }
      else {
        (**(code **)(*plVar5 + 0xd8))(plVar5,0);
      }
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_30);
  }
  psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string((string *)aDStack_18,"btnSave");
  pDVar7 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar6);
  std::string::~string((string *)aDStack_18);
  nop();
  if (pDVar7 != (DTouchLayer *)0x0) {
    if (bVar2) {
      (**(code **)(*(long *)pDVar7 + 0x338))(pDVar7,1);
    }
    else {
      (**(code **)(*(long *)pDVar7 + 0x338))(pDVar7,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGachaChangePlant::UserInit() */

void __thiscall UISecretGachaChangePlant::UserInit(UISecretGachaChangePlant *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  exception_ptr *this_01;
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  string *psVar6;
  DTouchLayer *pDVar7;
  DNodeLoaderConfig *pDVar8;
  DTouchLayer *pDVar9;
  uint *puVar10;
  long *plVar11;
  long lVar12;
  char *__s;
  DMenu *this_02;
  code *pcVar13;
  ulong unaff_d13;
  CompiledMap aCStack_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  CompiledMap aCStack_90 [8];
  DRefPtr<UIAccumulatedLoginButton> aDStack_88 [8];
  RtWeakPtr aRStack_80 [8];
  DRefPtr<DAtlasSpriteNode> aDStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [16];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  string asStack_38 [4];
  int local_34;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x138);
  this_01 = (exception_ptr *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  std::
  sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,bool(*)(int,int)>
            (uVar4,uVar5,sortByPlantRare);
  psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string(asStack_38,"btnSave");
  pDVar7 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar6);
  std::string::~string(asStack_38);
  nop();
  if (pDVar7 != (DTouchLayer *)0x0) {
    pcVar13 = *(code **)(*(long *)pDVar7 + 0x350);
    FUN_03de61b4(afStack_58,this);
    (*pcVar13)(pDVar7,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  }
  psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string(asStack_38,"btnCancel");
  pDVar7 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar6);
  std::string::~string(asStack_38);
  nop();
  if (pDVar7 != (DTouchLayer *)0x0) {
    pcVar13 = *(code **)(*(long *)pDVar7 + 0x350);
    FUN_03de6210(afStack_58,this);
    (*pcVar13)(pDVar7,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  }
  pDVar8 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
  std::string::string(asStack_38,"scrollViewContainer");
  DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar8,asStack_38,(DTransformNode *)0x0);
  std::string::~string(asStack_38);
  nop();
  cVar2 = Sexy::CompiledMap::Initialized(aCStack_a8);
  if (cVar2 != '\0') {
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar3)
    {
      puVar10 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
      uVar1 = *puVar10;
      GetGameItemInfo(uVar1,0x7fffffff,0);
      pDVar8 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
      std::string::string(asStack_68,"rewardBtn");
      DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar8,asStack_68,(DTransformNode *)0x0);
      std::string::~string(asStack_68);
      nop();
      pDVar8 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
      std::string::string(asStack_68,"rewardImg");
      DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar8,asStack_68,(DTransformNode *)0x0);
      std::string::~string(asStack_68);
      nop();
      cVar2 = Sexy::CompiledMap::Initialized((CompiledMap *)aDStack_88);
      if (cVar2 == '\0') {
LAB_03deba60:
        cVar2 = Sexy::CompiledMap::Initialized(aCStack_90);
      }
      else {
        psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
        std::string::string(asStack_68,"img");
        pDVar7 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar6);
        std::string::~string(asStack_68);
        nop();
        if (local_34 == 1) {
          psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
          bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_80);
          if (bVar3) {
            plVar11 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)aDStack_88);
            pcVar13 = *(code **)(*plVar11 + 0x2e8);
            lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
            DString::Format("UI/Dialog_Asset/frame_tool%d",asStack_68,
                            (ulong)(*(int *)(lVar12 + 0xd0) + 1));
            DString::operator_cast_to_string((DString *)asStack_68);
            (*pcVar13)(plVar11,asStack_70);
            std::string::~string(asStack_70);
            DString::~DString((DString *)asStack_68);
          }
          DRefPtr<DAtlasSpriteNode>::DRefPtr(aDStack_78);
          plVar11 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78)
          ;
          pcVar13 = *(code **)(*plVar11 + 0x338);
          FUN_031f5e7c(asStack_70,"UI/headshot/plant/",auStack_28);
          plVar11 = (long *)(*pcVar13)(plVar11,asStack_70,1);
          pcVar13 = *(code **)(*plVar11 + 0x108);
          DVec2::DVec2((DVec2 *)asStack_68,0.0,0.0);
          plVar11 = (long *)(*pcVar13)(plVar11,asStack_68);
          (**(code **)(*plVar11 + 0x130))(0,0);
          std::string::~string(asStack_70);
          plVar11 = (long *)(**(code **)(*(long *)pDVar7 + 0x110))(0xc0a00000,0xc0a00000,pDVar7);
          (**(code **)(*plVar11 + 0x130))(0,0);
          uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
          (**(code **)(*(long *)pDVar7 + 0x30))(pDVar7,uVar4);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)aDStack_78);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
          goto LAB_03deba60;
        }
        (**(code **)(*(long *)pDVar7 + 0x2e8))(pDVar7,auStack_18);
        (**(code **)(*(long *)pDVar7 + 0x170))(0x42be0000,pDVar7);
        cVar2 = Sexy::CompiledMap::Initialized(aCStack_90);
      }
      if (cVar2 != '\0') {
        plVar11 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_90);
        uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
        (**(code **)(*plVar11 + 0x388))(plVar11,uVar4);
        psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_90);
        std::string::string(asStack_68,"box");
        pDVar7 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar6);
        std::string::~string(asStack_68);
        nop();
        if (pDVar7 != (DTouchLayer *)0x0) {
          plVar11 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_90)
          ;
          lVar12 = (**(code **)(*plVar11 + 0x1f8))();
          (**(code **)(*(long *)pDVar7 + 0x130))(0,0,pDVar7);
          (**(code **)(*(long *)pDVar7 + 0x160))
                    (*(undefined4 *)(lVar12 + 8),*(undefined4 *)(lVar12 + 0xc),pDVar7);
          DString::DString((DString *)asStack_68,uVar1);
          __s = (char *)DString::c_str((DString *)asStack_68);
          std::string::string(asStack_70,__s);
          DTransformNode::setName((DTransformNode *)pDVar7,asStack_70);
          std::string::~string(asStack_70);
          nop();
          DString::~DString((DString *)asStack_68);
        }
        unaff_d13 = unaff_d13 & 0xffffffff00000000 | (ulong)uVar1;
        plVar11 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_90);
        pcVar13 = *(code **)(*plVar11 + 0x350);
        FUN_03de626c(afStack_58,this,unaff_d13);
        (*pcVar13)(plVar11,afStack_58);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
        plVar11 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a8);
        uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_90);
        (**(code **)(*plVar11 + 0x30))(plVar11,uVar4);
      }
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr(aDStack_88);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_90);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_a0);
    }
    this_02 = (DMenu *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a8);
    DMenu::align(this_02,6,100.0,100.0,10.0,10.0);
  }
  psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string(asStack_38,"scrollView");
  pDVar7 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar6);
  std::string::~string(asStack_38);
  nop();
  if (pDVar7 != (DTouchLayer *)0x0) {
    pDVar9 = (DTouchLayer *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a8)
    ;
    DScrollView::setContainer((DScrollView *)pDVar7,pDVar9);
  }
  updateSelectBox(this,*(int *)(this + 0x150));
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_a8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

