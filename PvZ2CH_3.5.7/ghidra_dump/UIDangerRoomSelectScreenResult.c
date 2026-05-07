// Class: UIDangerRoomSelectScreenResult


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSelectScreenResult::Initialize() */

void __thiscall UIDangerRoomSelectScreenResult::Initialize(UIDangerRoomSelectScreenResult *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIDangerRoomSelectResult");
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIDangerRoomSelectScreenResult::UIDangerRoomSelectScreenResult() */

void __thiscall
UIDangerRoomSelectScreenResult::UIDangerRoomSelectScreenResult(UIDangerRoomSelectScreenResult *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_067729b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  return;
}


/* UIDangerRoomSelectScreenResult::~UIDangerRoomSelectScreenResult() */

void __thiscall
UIDangerRoomSelectScreenResult::~UIDangerRoomSelectScreenResult
          (UIDangerRoomSelectScreenResult *this)

{
  *(undefined ***)this = &PTR_GetClass_067729b0;
  s_pWidgetHandler = 0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x138));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UIDangerRoomSelectScreenResult::~UIDangerRoomSelectScreenResult() */

void __thiscall
UIDangerRoomSelectScreenResult::~UIDangerRoomSelectScreenResult
          (UIDangerRoomSelectScreenResult *this)

{
  ~UIDangerRoomSelectScreenResult(this);
  AK::FreeHook(this);
  return;
}


/* UIDangerRoomSelectScreenResult::create(std::vector<int, std::allocator<int> > const&, bool) */

UIDangerRoomSelectScreenResult *
UIDangerRoomSelectScreenResult::create(vector *param_1,bool param_2)

{
  UIDangerRoomSelectScreenResult *this;
  
  if (s_pWidgetHandler != (UIDangerRoomSelectScreenResult *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x150);
  memset(this,0,0x150);
  UIDangerRoomSelectScreenResult(this);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x138),param_1);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_2);
  s_pWidgetHandler = this;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSelectScreenResult::UserInit() */

void __thiscall UIDangerRoomSelectScreenResult::UserInit(UIDangerRoomSelectScreenResult *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  exception_ptr *this_01;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  string *psVar5;
  DTouchLayer *pDVar6;
  DNodeLoaderConfig *pDVar7;
  DTouchLayer *pDVar8;
  int *piVar9;
  long *plVar10;
  DMenu *this_02;
  long lVar11;
  wstring *extraout_x1;
  code *pcVar12;
  CompiledMap aCStack_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  CompiledMap aCStack_a0 [8];
  DRefPtr<UIAccumulatedLoginButton> aDStack_98 [8];
  RtWeakPtr aRStack_90 [8];
  DRefPtr<DAtlasSpriteNode> aDStack_88 [8];
  DString aDStack_80 [16];
  UIDangerRoomSelectScreenResult *pUStack_70;
  DString aDStack_68 [16];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  string asStack_38 [4];
  int local_34;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [8];
  Sexy aSStack_10 [8];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x138);
  local_8 = ___stack_chk_guard;
  this_01 = (exception_ptr *)(this + 0xd8);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  std::
  sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,bool(*)(int,int)>
            (uVar3,uVar4,sortByRare);
  psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string(asStack_38,"btnSave");
  pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
  std::string::~string(asStack_38);
  nop();
  if (pDVar6 != (DTouchLayer *)0x0) {
    pcVar12 = *(code **)(*(long *)pDVar6 + 0x350);
    FUN_03d95654(afStack_58,this);
    (*pcVar12)(pDVar6,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  }
  psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string(asStack_38,"btnCancel");
  pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
  std::string::~string(asStack_38);
  nop();
  if (pDVar6 != (DTouchLayer *)0x0) {
    pcVar12 = *(code **)(*(long *)pDVar6 + 0x350);
    FUN_03d956b0(afStack_58,this);
    (*pcVar12)(pDVar6,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  }
  pDVar7 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
  std::string::string(asStack_38,"scrollViewContainer");
  DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar7,asStack_38,(DTransformNode *)0x0);
  std::string::~string(asStack_38);
  nop();
  cVar1 = Sexy::CompiledMap::Initialized(aCStack_b8);
  if (cVar1 != '\0') {
    local_b0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_a8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8), bVar2)
    {
      piVar9 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
      GetGameItemInfo(*piVar9,0x7fffffff,0);
      pDVar7 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
      std::string::string((string *)&pUStack_70,"rewardBtn");
      DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar7,(string *)&pUStack_70,(DTransformNode *)0x0);
      std::string::~string((string *)&pUStack_70);
      nop();
      pDVar7 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
      std::string::string((string *)&pUStack_70,"rewardImg");
      DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar7,(string *)&pUStack_70,(DTransformNode *)0x0);
      std::string::~string((string *)&pUStack_70);
      nop();
      cVar1 = Sexy::CompiledMap::Initialized((CompiledMap *)aDStack_98);
      if (cVar1 == '\0') {
LAB_03d978a0:
        cVar1 = Sexy::CompiledMap::Initialized(aCStack_a0);
      }
      else {
        psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
        std::string::string((string *)&pUStack_70,"img");
        pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
        std::string::~string((string *)&pUStack_70);
        nop();
        if (local_34 == 1) {
          psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_90);
          if (bVar2) {
            plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)aDStack_98);
            pcVar12 = *(code **)(*plVar10 + 0x2e8);
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
            DString::Format("UI/Dialog_Asset/frame_tool%d",(string *)&pUStack_70,
                            (ulong)(*(int *)(lVar11 + 0xd0) + 1));
            DString::operator_cast_to_string((DString *)&pUStack_70);
            (*pcVar12)(plVar10,aDStack_80);
            std::string::~string((string *)aDStack_80);
            DString::~DString((DString *)&pUStack_70);
          }
          DRefPtr<DAtlasSpriteNode>::DRefPtr(aDStack_88);
          plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88)
          ;
          pcVar12 = *(code **)(*plVar10 + 0x338);
          FUN_031f5e7c(aDStack_80,"UI/headshot/plant/",auStack_28);
          plVar10 = (long *)(*pcVar12)(plVar10,aDStack_80,1);
          pcVar12 = *(code **)(*plVar10 + 0x108);
          DVec2::DVec2((DVec2 *)&pUStack_70,0.0,0.0);
          plVar10 = (long *)(*pcVar12)(plVar10,(string *)&pUStack_70);
          (**(code **)(*plVar10 + 0x130))(0,0);
          std::string::~string((string *)aDStack_80);
          plVar10 = (long *)(**(code **)(*(long *)pDVar6 + 0x110))(0xc0a00000,0xc0a00000,pDVar6);
          (**(code **)(*plVar10 + 0x130))(0,0);
          uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
          (**(code **)(*(long *)pDVar6 + 0x30))(pDVar6,uVar3);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)aDStack_88);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
          goto LAB_03d978a0;
        }
        (**(code **)(*(long *)pDVar6 + 0x2e8))(pDVar6,auStack_18);
        (**(code **)(*(long *)pDVar6 + 0x170))(0x42be0000,pDVar6);
        cVar1 = Sexy::CompiledMap::Initialized(aCStack_a0);
      }
      if (cVar1 != '\0') {
        plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a0);
        uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
        (**(code **)(*plVar10 + 0x388))(plVar10,uVar3);
        Sexy::SexyStringToUTF8String(aSStack_10,extraout_x1);
        DString::DString(aDStack_80,(string *)&pUStack_70);
        std::string::~string((string *)&pUStack_70);
        plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a0);
        pcVar12 = *(code **)(*plVar10 + 0x360);
        pUStack_70 = this;
        DString::DString(aDStack_68,aDStack_80);
        FUN_03d9570c(afStack_58,(string *)&pUStack_70);
        (*pcVar12)(plVar10,afStack_58);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
        FUN_035590e8((string *)&pUStack_70);
        plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a0);
        pcVar12 = *(code **)(*plVar10 + 0x380);
        FUN_03d9576c(afStack_58,this);
        (*pcVar12)(plVar10,afStack_58);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
        plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_b8);
        uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a0);
        (**(code **)(*plVar10 + 0x30))(plVar10,uVar3);
        DString::~DString(aDStack_80);
      }
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr(aDStack_98);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_a0);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_b0);
    }
    this_02 = (DMenu *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_b8);
    DMenu::align(this_02,6,100.0,100.0,10.0,10.0);
  }
  psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string(asStack_38,"scrollView");
  pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
  std::string::~string(asStack_38);
  nop();
  if (pDVar6 != (DTouchLayer *)0x0) {
    pDVar8 = (DTouchLayer *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_b8)
    ;
    DScrollView::setContainer((DScrollView *)pDVar6,pDVar8);
  }
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_b8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

