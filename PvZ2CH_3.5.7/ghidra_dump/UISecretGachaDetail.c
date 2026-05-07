// Class: UISecretGachaDetail


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGachaDetail::Initialize() */

void __thiscall UISecretGachaDetail::Initialize(UISecretGachaDetail *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UISecretGachaDetail");
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGachaDetail::UserInit() */

void __thiscall UISecretGachaDetail::UserInit(UISecretGachaDetail *this)

{
  exception_ptr *this_00;
  string *psVar1;
  DTouchLayer *pDVar2;
  code *pcVar3;
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  this_00 = (exception_ptr *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_30,"root/dialog/menu/btnClose");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_30);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar3 = *(code **)(*(long *)pDVar2 + 0x350);
    FUN_03de5f88(afStack_28,this);
    (*pcVar3)(pDVar2,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_30,"root/dialog/menu2/btnPlant");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_30);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar3 = *(code **)(*(long *)pDVar2 + 0x350);
    FUN_03de5fe4(afStack_28,this);
    (*pcVar3)(pDVar2,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    (**(code **)(*(long *)pDVar2 + 1000))(pDVar2);
  }
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_30,"root/dialog/menu2/btnPlantPiece");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_30);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar3 = *(code **)(*(long *)pDVar2 + 0x350);
    FUN_03de6040(afStack_28,this);
    (*pcVar3)(pDVar2,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_30,"root/dialog/menu2/btnInfo");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_30);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar3 = *(code **)(*(long *)pDVar2 + 0x350);
    FUN_03de609c(afStack_28,this);
    (*pcVar3)(pDVar2,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISecretGachaDetail::UISecretGachaDetail() */

void __thiscall UISecretGachaDetail::UISecretGachaDetail(UISecretGachaDetail *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0677e810;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  return;
}


/* UISecretGachaDetail::~UISecretGachaDetail() */

void __thiscall UISecretGachaDetail::~UISecretGachaDetail(UISecretGachaDetail *this)

{
  *(undefined ***)this = &PTR_GetClass_0677e810;
  s_pWidgetHandler = 0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x150));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x138));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UISecretGachaDetail::~UISecretGachaDetail() */

void __thiscall UISecretGachaDetail::~UISecretGachaDetail(UISecretGachaDetail *this)

{
  ~UISecretGachaDetail(this);
  AK::FreeHook(this);
  return;
}


/* UISecretGachaDetail::create(std::vector<int, std::allocator<int> > const&, std::vector<int,
   std::allocator<int> > const&, bool) */

UISecretGachaDetail * UISecretGachaDetail::create(vector *param_1,vector *param_2,bool param_3)

{
  UISecretGachaDetail *this;
  
  if (s_pWidgetHandler != (UISecretGachaDetail *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x168);
  UISecretGachaDetail(this);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x138),param_1);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x150),param_2);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_3);
  s_pWidgetHandler = this;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGachaDetail::updateInfo() */

void __thiscall UISecretGachaDetail::updateInfo(UISecretGachaDetail *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  string *psVar4;
  DTouchLayer *pDVar5;
  ProbabilityConfig *pPVar6;
  undefined8 uVar7;
  char *pcVar8;
  string *extraout_x1;
  wstring *extraout_x1_00;
  wstring *extraout_x1_01;
  code *pcVar9;
  uint uVar10;
  float local_34;
  RtWeakPtr aRStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  ProbabilityConfig aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"SecretGacha");
  Sexy::UTF8StringToWString((Sexy *)asStack_20,extraout_x1);
  ProbabilityConfig::GetProbabilityConfig(aPStack_18,extraout_x1_00);
  FUN_05476c50(aPStack_18);
  std::string::~string(asStack_20);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if (bVar1) {
    pPVar6 = (ProbabilityConfig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    iVar3 = ProbabilityConfig::GetSize(pPVar6);
    if (iVar3 != 0) {
      uVar10 = 1;
      do {
        Set8BytesTo0(asStack_28);
        pPVar6 = (ProbabilityConfig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        cVar2 = ProbabilityConfig::GetKeyValue(pPVar6,uVar10 - 1,asStack_28,&local_34);
        if (cVar2 != '\0') {
          psVar4 = (string *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
          Sexy::StrFormat("text_%d",aPStack_18,(ulong)uVar10);
          pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
          std::string::~string((string *)aPStack_18);
          if (pDVar5 != (DTouchLayer *)0x0) {
            Sexy::UTF8StringToSexyString(asStack_28);
            TodStringTranslate((wstring *)aPStack_18);
            FUN_05476c50(aPStack_18);
            Sexy::SexyStringToUTF8String((Sexy *)asStack_20,extraout_x1_01);
            uVar7 = FUN_0547429c(aPStack_18);
            (**(code **)(*(long *)pDVar5 + 0x338))(pDVar5,uVar7);
            (**(code **)(*(long *)pDVar5 + 0xd8))(pDVar5,1);
            std::string::~string((string *)aPStack_18);
            FUN_05476c50(asStack_20);
          }
          psVar4 = (string *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
          Sexy::StrFormat("text_v_%d",aPStack_18,(ulong)uVar10);
          pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
          std::string::~string((string *)aPStack_18);
          if (pDVar5 != (DTouchLayer *)0x0) {
            DString::DString((DString *)aPStack_18);
            DString::format((char *)aPStack_18,(double)local_34,"%.2f%%");
            pcVar9 = *(code **)(*(long *)pDVar5 + 0x338);
            pcVar8 = DString::operator_cast_to_char_((DString *)aPStack_18);
            (*pcVar9)(pDVar5,pcVar8);
            (**(code **)(*(long *)pDVar5 + 0xd8))(pDVar5,1);
            DString::~DString((DString *)aPStack_18);
          }
        }
        uVar10 = uVar10 + 1;
        std::string::~string(asStack_28);
      } while (uVar10 != iVar3 + 1U);
    }
  }
  psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string((string *)aPStack_18,"scrollView");
  pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
  std::string::~string((string *)aPStack_18);
  nop();
  if (pDVar5 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar5 + 0xd8))(pDVar5,0);
  }
  psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string((string *)aPStack_18,"infoImg");
  pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
  std::string::~string((string *)aPStack_18);
  nop();
  if (pDVar5 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar5 + 0xd8))(pDVar5,1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGachaDetail::updateItems(std::vector<int, std::allocator<int> > const&) */

void __thiscall UISecretGachaDetail::updateItems(UISecretGachaDetail *this,vector *param_1)

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
  long *plVar12;
  undefined8 uVar13;
  DMenu *this_00;
  SeedPacketUtils *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  ResourceInfo *pRVar14;
  long lVar15;
  wstring *extraout_x1;
  code *pcVar16;
  float fVar17;
  float fVar18;
  CompiledMap aCStack_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  CompiledMap aCStack_a0 [8];
  DRefPtr<UIAccumulatedLoginButton> aDStack_98 [8];
  RtWeakPtr aRStack_90 [8];
  DRefPtr<DAtlasSpriteNode> aDStack_88 [8];
  DString aDStack_80 [16];
  UISecretGachaDetail *pUStack_70;
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
  std::string::string(asStack_38,"infoImg");
  pDVar8 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar7);
  std::string::~string(asStack_38);
  nop();
  if (pDVar8 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar8 + 0xd8))(pDVar8,0);
  }
  pDVar9 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
  std::string::string(asStack_38,"scrollViewContainer");
  DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar9,asStack_38,(DTransformNode *)0x0);
  std::string::~string(asStack_38);
  nop();
  cVar3 = Sexy::CompiledMap::Initialized(aCStack_b8);
  if (cVar3 != '\0') {
    local_b0 = FUN_03de71a0(*(undefined8 *)param_1);
    local_a8 = FUN_03de71f0(*(undefined8 *)(param_1 + 8));
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
LAB_03deabfc:
        cVar3 = Sexy::CompiledMap::Initialized(aCStack_a0);
      }
      else {
        psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
        std::string::string((string *)&pUStack_70,"img");
        pDVar8 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar7);
        std::string::~string((string *)&pUStack_70);
        nop();
        if (local_34 == 1) {
          psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
          bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_90);
          if (bVar4) {
            plVar12 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)aDStack_98);
            pcVar16 = *(code **)(*plVar12 + 0x2e8);
            lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
            DString::Format("UI/Dialog_Asset/frame_tool%d",(string *)&pUStack_70,
                            (ulong)(*(int *)(lVar15 + 0xd0) + 1));
            DString::operator_cast_to_string((DString *)&pUStack_70);
            (*pcVar16)(plVar12,aDStack_80);
            std::string::~string((string *)aDStack_80);
            DString::~DString((DString *)&pUStack_70);
          }
          DRefPtr<DAtlasSpriteNode>::DRefPtr(aDStack_88);
          plVar12 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88)
          ;
          pcVar16 = *(code **)(*plVar12 + 0x338);
          FUN_031f5e7c(aDStack_80,"UI/headshot/plant/",asStack_28);
          plVar12 = (long *)(*pcVar16)(plVar12,aDStack_80,1);
          pcVar16 = *(code **)(*plVar12 + 0x108);
          DVec2::DVec2((DVec2 *)&pUStack_70,0.0,0.0);
          plVar12 = (long *)(*pcVar16)(plVar12,(string *)&pUStack_70);
          (**(code **)(*plVar12 + 0x130))(0,0);
          std::string::~string((string *)aDStack_80);
          plVar12 = (long *)(**(code **)(*(long *)pDVar8 + 0x110))(0xc0a00000,0xc0a00000,pDVar8);
          (**(code **)(*plVar12 + 0x130))(0,0);
          uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
          (**(code **)(*(long *)pDVar8 + 0x30))(pDVar8,uVar13);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)aDStack_88);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
          goto LAB_03deabfc;
        }
        if (local_34 == 2) {
          this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
          this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    SeedPacketUtils::GetPlantPiecePacketRenderData(this_01,asStack_28);
          DRefPtr<DAtlasSpriteNode>::DRefPtr(aDStack_88);
          plVar12 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88)
          ;
          pcVar16 = *(code **)(*plVar12 + 0x340);
          pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this_02 + 0x170));
          plVar12 = (long *)(*pcVar16)(plVar12,pRVar14,this_02 + 0x20);
          plVar12 = (long *)(**(code **)(*plVar12 + 0x110))(0,0);
          (**(code **)(*plVar12 + 0x130))(0,0);
          iVar5 = *(int *)(this_02 + 0x30);
          iVar6 = *(int *)(this_02 + 0x34);
          iVar1 = *(int *)(this_02 + 0x18);
          iVar2 = *(int *)(this_02 + 0x1c);
          DRefPtr<DAtlasSpriteNode>::DRefPtr((DRefPtr<DAtlasSpriteNode> *)aDStack_80);
          plVar12 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80)
          ;
          pcVar16 = *(code **)(*plVar12 + 0x340);
          lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
          pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar15 + 0x48));
          plVar12 = (long *)(*pcVar16)(plVar12,pRVar14,this_02 + 8);
          pcVar16 = *(code **)(*plVar12 + 0x108);
          fVar17 = (float)FUN_03de6518((float)(iVar1 - iVar5));
          fVar18 = (float)FUN_03de6518((float)(iVar2 - iVar6));
          DVec2::DVec2((DVec2 *)&pUStack_70,fVar17,fVar18);
          plVar12 = (long *)(*pcVar16)(plVar12,(string *)&pUStack_70);
          (**(code **)(*plVar12 + 0x130))(0,0);
          uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
          (**(code **)(*(long *)pDVar8 + 0x30))(pDVar8,uVar13);
          uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80);
          (**(code **)(*(long *)pDVar8 + 0x30))(pDVar8,uVar13);
          pcVar16 = *(code **)(*(long *)pDVar8 + 0x210);
          iVar5 = FUN_03de6504(*(undefined4 *)(this_02 + 0x28));
          iVar6 = FUN_03de6504(*(undefined4 *)(this_02 + 0x2c));
          DVec2::DVec2((DVec2 *)&pUStack_70,(float)iVar5,(float)iVar6);
          (*pcVar16)(pDVar8,(string *)&pUStack_70);
          (**(code **)(*(long *)pDVar8 + 0x170))(0x42be0000,pDVar8);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)aDStack_80);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)aDStack_88);
          goto LAB_03deabfc;
        }
        (**(code **)(*(long *)pDVar8 + 0x2e8))(pDVar8,auStack_18);
        (**(code **)(*(long *)pDVar8 + 0x170))(0x42be0000,pDVar8);
        cVar3 = Sexy::CompiledMap::Initialized(aCStack_a0);
      }
      if (cVar3 != '\0') {
        plVar12 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a0);
        uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
        (**(code **)(*plVar12 + 0x388))(plVar12,uVar13);
        Sexy::SexyStringToUTF8String(aSStack_10,extraout_x1);
        DString::DString(aDStack_80,(string *)&pUStack_70);
        std::string::~string((string *)&pUStack_70);
        plVar12 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a0);
        pcVar16 = *(code **)(*plVar12 + 0x360);
        pUStack_70 = this;
        DString::DString(aDStack_68,aDStack_80);
        FUN_03de60f8(afStack_58,(string *)&pUStack_70);
        (*pcVar16)(plVar12,afStack_58);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
        FUN_035590e8((string *)&pUStack_70);
        plVar12 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a0);
        pcVar16 = *(code **)(*plVar12 + 0x380);
        FUN_03de6158(afStack_58,this);
        (*pcVar16)(plVar12,afStack_58);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
        plVar12 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_b8);
        uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a0);
        (**(code **)(*plVar12 + 0x30))(plVar12,uVar13);
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
    (**(code **)(*(long *)pDVar8 + 0xd8))(pDVar8,1);
  }
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_b8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

