// Class: UINewPVPShopChestDetail


/* UINewPVPShopChestDetail::Draw(Sexy::Graphics*) */

void UINewPVPShopChestDetail::Draw(Graphics *param_1)

{
  DTransformNode *this;
  Graphics *in_x1;
  
  this = (DTransformNode *)
         std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(param_1 + 0xd8));
  DTransformNode::visit(this,in_x1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPShopChestDetail::Initialize() */

void __thiscall UINewPVPShopChestDetail::Initialize(UINewPVPShopChestDetail *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UINewPVPShopChestDetail");
  DNodeWidget::load((DNodeWidget *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPShopChestDetail::UserInit() */

void __thiscall UINewPVPShopChestDetail::UserInit(UINewPVPShopChestDetail *this)

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
    FUN_03551aac(afStack_28,this);
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
    FUN_03551b08(afStack_28,this);
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
    FUN_03551b64(afStack_28,this);
    (*pcVar3)(pDVar2,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPShopChestDetail::UINewPVPShopChestDetail() */

void __thiscall UINewPVPShopChestDetail::UINewPVPShopChestDetail(UINewPVPShopChestDetail *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  this[0x131] = (UINewPVPShopChestDetail)0x1;
  this[0x132] = (UINewPVPShopChestDetail)0x0;
  *(undefined ***)this = &PTR_GetClass_06657fe0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  return;
}


/* UINewPVPShopChestDetail::create(bool) */

UINewPVPShopChestDetail * UINewPVPShopChestDetail::create(bool param_1)

{
  UINewPVPShopChestDetail *this;
  
  this = ::operator_new(0x180);
  UINewPVPShopChestDetail(this);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_1);
  return this;
}


/* UINewPVPShopChestDetail::~UINewPVPShopChestDetail() */

void __thiscall UINewPVPShopChestDetail::~UINewPVPShopChestDetail(UINewPVPShopChestDetail *this)

{
  *(undefined ***)this = &PTR_GetClass_06657fe0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x168));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x150));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x138));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UINewPVPShopChestDetail::~UINewPVPShopChestDetail() */

void __thiscall UINewPVPShopChestDetail::~UINewPVPShopChestDetail(UINewPVPShopChestDetail *this)

{
  ~UINewPVPShopChestDetail(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPShopChestDetail::useTestDataIfNecessary() */

void __thiscall UINewPVPShopChestDetail::useTestDataIfNecessary(UINewPVPShopChestDetail *this)

{
  vector<int,std::allocator<int>> *this_00;
  vector<int,std::allocator<int>> *this_01;
  char cVar1;
  bool bVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  map *pmVar3;
  pair *ppVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  int aiStack_40 [2];
  undefined4 local_38 [12];
  long local_8;
  
  this_00 = (vector<int,std::allocator<int>> *)(this + 0x150);
  this_01 = (vector<int,std::allocator<int>> *)(this + 0x168);
  local_8 = ___stack_chk_guard;
  std::vector<int,std::allocator<int>>::clear(this_00);
  std::vector<int,std::allocator<int>>::clear(this_01);
  cVar1 = std::vector<int,std::allocator<int>>::empty(this_00);
  if ((cVar1 != '\0') &&
     (cVar1 = std::vector<int,std::allocator<int>>::empty(this_01), cVar1 != '\0')) {
    local_38[0] = 0xbc0;
    std::vector<int,std::allocator<int>>::push_back(this_00,(int *)local_38);
    local_38[0] = 0x5acb;
    std::vector<int,std::allocator<int>>::push_back(this_00,(int *)local_38);
    this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)NewPVPZombiePieceMapper::GetInstance();
    pmVar3 = (map *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_end(this_02);
    std::
    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
    map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)local_38,pmVar3);
    local_58 = std::
               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               ::begin((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                        *)local_38);
    local_50 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)local_38);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_58,(rbtree_iterator *)&local_50),
          bVar2) {
      ppVar4 = (pair *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                 ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_58)
      ;
      std::pair<std::string_const,int>::pair((pair<std::string_const,int> *)local_48,ppVar4);
      std::vector<int,std::allocator<int>>::push_back(this_00,aiStack_40);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)local_48);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_58);
    }
    local_48[0] = 100;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_48);
    local_48[0] = 100;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_48);
    local_48[0] = 100;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_48);
    local_48[0] = 0x32;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_48);
    local_48[0] = 0x50;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_48);
    std::
    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
    ~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPShopChestDetail::updateInfo() */

void __thiscall UINewPVPShopChestDetail::updateInfo(UINewPVPShopChestDetail *this)

{
  uint uVar1;
  long lVar2;
  exception_ptr *this_00;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  string *psVar8;
  DTouchLayer *pDVar9;
  wstring *extraout_x1;
  ulong uVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  int local_44;
  string asStack_40 [8];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  lVar5 = 0;
  do {
    local_44 = (int)lVar5 + 1;
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_44);
    std::operator+("[NEW_PVP_SHOP_CHEST_DETAIL_KEY_",asStack_40);
    std::operator+((string *)&local_38,"]");
    lVar2 = lVar5 + 1;
    uVar4 = FUN_03550378(*(undefined8 *)(this + 0x168),lVar5);
    FUN_03555ba0((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,
                 (string *)local_30,uVar4);
    std::string::~string((string *)local_30);
    std::string::~string((string *)&local_38);
    std::string::~string(asStack_40);
    lVar5 = lVar2;
  } while (lVar2 != 5);
  local_38 = FUN_0354ff9c((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20
                         );
  do {
    local_30[0] = FUN_0354ff50((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                               &local_20);
    cVar3 = FUN_0354f940((string *)&local_38,(string *)local_30);
    while( true ) {
      if (cVar3 == '\0') {
        this_00 = (exception_ptr *)(this + 0xd8);
        for (uVar10 = 0; uVar7 = FUN_0354ff1c(local_20,local_18), uVar10 < uVar7;
            uVar10 = uVar10 + 1) {
          uVar1 = (int)uVar10 + 1;
          Set8BytesTo0(asStack_40);
          psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
          Sexy::StrFormat("text_%d",(string *)local_30,(ulong)uVar1);
          pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
          std::string::~string((string *)local_30);
          if (pDVar9 != (DTouchLayer *)0x0) {
            auVar12 = FUN_0354ff28(local_20,uVar10);
            Sexy::ToSexyString(auVar12._0_8_,auVar12._8_8_);
            TodStringTranslate((wstring *)local_30);
            FUN_05476c50((string *)local_30);
            Sexy::SexyStringToUTF8String((Sexy *)&local_38,extraout_x1);
            uVar4 = FUN_0547429c((string *)local_30);
            (**(code **)(*(long *)pDVar9 + 0x338))(pDVar9,uVar4);
            (**(code **)(*(long *)pDVar9 + 0xd8))(pDVar9,1);
            std::string::~string((string *)local_30);
            FUN_05476c50((string *)&local_38);
          }
          psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
          Sexy::StrFormat("text_v_%d",(string *)local_30,(ulong)uVar1);
          pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
          std::string::~string((string *)local_30);
          if (pDVar9 != (DTouchLayer *)0x0) {
            DString::DString((DString *)local_30);
            lVar5 = FUN_0354ff28(local_20,uVar10);
            DString::format((char *)local_30,&DAT_055936e8,(ulong)*(uint *)(lVar5 + 8));
            pcVar11 = *(code **)(*(long *)pDVar9 + 0x338);
            pcVar6 = DString::operator_cast_to_char_((DString *)local_30);
            (*pcVar11)(pDVar9,pcVar6);
            (**(code **)(*(long *)pDVar9 + 0xd8))(pDVar9,1);
            DString::~DString((DString *)local_30);
          }
          std::string::~string(asStack_40);
        }
        this[0x132] = (UINewPVPShopChestDetail)0x1;
        psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
        std::string::string((string *)local_30,"scrollView");
        pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
        std::string::~string((string *)local_30);
        nop();
        if (pDVar9 != (DTouchLayer *)0x0) {
          (**(code **)(*(long *)pDVar9 + 0xd8))(pDVar9,0);
        }
        psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
        std::string::string((string *)local_30,"infoImg");
        pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
        std::string::~string((string *)local_30);
        nop();
        if (pDVar9 != (DTouchLayer *)0x0) {
          (**(code **)(*(long *)pDVar9 + 0xd8))(pDVar9,1);
        }
        FUN_035505a8((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      lVar5 = FUN_0354f848((string *)&local_38);
      if (*(int *)(lVar5 + 8) < 1) break;
      FUN_0354f850((string *)&local_38);
      local_30[0] = FUN_0354ff50((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                                 &local_20);
      cVar3 = FUN_0354f940((string *)&local_38,(string *)local_30);
    }
    FUN_0354f914((string *)local_30,(string *)&local_38);
    local_38 = FUN_03550528((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                            &local_20,local_30[0]);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPShopChestDetail::updateItems() */

void __thiscall UINewPVPShopChestDetail::updateItems(UINewPVPShopChestDetail *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  string *psVar5;
  DTouchLayer *pDVar6;
  DNodeLoaderConfig *pDVar7;
  DTouchLayer *pDVar8;
  int *piVar9;
  NameMapperBase *this_00;
  SeedPacketUtils *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  LotteryResultProgressBar *this_03;
  long *plVar10;
  long lVar11;
  ResourceInfo *pRVar12;
  undefined8 uVar13;
  DMenu *this_04;
  wstring *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  wstring *extraout_x1_02;
  code *pcVar14;
  CompiledMap aCStack_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  exception_ptr aeStack_d8 [8];
  DRefPtr<UIAccumulatedLoginButton> aDStack_d0 [8];
  string asStack_c8 [8];
  Sexy aSStack_c0 [8];
  string asStack_b8 [8];
  string asStack_b0 [8];
  Sexy aSStack_a8 [8];
  string asStack_a0 [8];
  DRefPtr<DAtlasSpriteNode> aDStack_98 [8];
  DRefPtr<DAtlasSpriteNode> aDStack_90 [8];
  string asStack_88 [8];
  DVec2 aDStack_80 [16];
  UINewPVPShopChestDetail *pUStack_70;
  int local_68;
  int local_64;
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  string asStack_38 [40];
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_38,"infoImg");
  pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
  std::string::~string(asStack_38);
  nop();
  if (pDVar6 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar6 + 0xd8))(pDVar6,0);
  }
  pDVar7 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
  std::string::string(asStack_38,"scrollViewContainer");
  DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar7,asStack_38,(DTransformNode *)0x0);
  std::string::~string(asStack_38);
  nop();
  cVar1 = Sexy::CompiledMap::Initialized(aCStack_f0);
  if (cVar1 != '\0') {
    local_e8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x150));
    local_e0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x150));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_e8,(__normal_iterator *)&local_e0), bVar2)
    {
      piVar9 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e8);
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
      this_00 = (NameMapperBase *)NewPVPZombiePieceMapper::GetInstance();
      cVar1 = NameMapperBase::ContainsId(this_00,*piVar9);
      if ((cVar1 != '\0') &&
         (cVar1 = Sexy::CompiledMap::Initialized((CompiledMap *)aDStack_d0), cVar1 != '\0')) {
        iVar3 = NewPVPZombiePieceMapper::GetInstance();
        NameMapperBase::GetNameForId(iVar3);
        this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
        std::string::string((string *)&pUStack_70,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  SeedPacketUtils::GetZombiePacketRenderData
                            (this_01,asStack_a0,(string *)&pUStack_70,-1);
        std::string::~string((string *)&pUStack_70);
        nop();
        DRefPtr<DAtlasSpriteNode>::DRefPtr(aDStack_98);
        DRefPtr<DAtlasSpriteNode>::DRefPtr(aDStack_90);
        psVar5 = (string *)&pUStack_70;
        std::string::string(asStack_88,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_NORMAL");
        nop();
        iVar3 = FUN_03559970(*piVar9);
        if (iVar3 == 1) {
          std::string::append(asStack_88,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_READY",(size_t)psVar5);
        }
        else if (iVar3 == 2) {
          std::string::append(asStack_88,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_LEGEND",(size_t)psVar5);
        }
        this_03 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_88,true);
        iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_03);
        iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_03);
        Sexy::Insets::Insets((Insets *)&pUStack_70,0,0,iVar3,iVar4);
        plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
        plVar10 = (long *)(**(code **)(*plVar10 + 0x340))(plVar10,this_03,(string *)&pUStack_70);
        plVar10 = (long *)(**(code **)(*plVar10 + 0x140))(0x3fa66666);
        (**(code **)(*plVar10 + 0x130))(0x3f000000,0x3f800000);
        plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
        pcVar14 = *(code **)(*plVar10 + 0x340);
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar11 + 0x48));
        plVar10 = (long *)(*pcVar14)(plVar10,pRVar12,this_02 + 8);
        plVar10 = (long *)(**(code **)(*plVar10 + 0x110))(0,0xc1000000);
        (**(code **)(*plVar10 + 0x130))(0x3f000000,0x3f800000);
        plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d0);
        uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
        (**(code **)(*plVar10 + 0x30))(plVar10,uVar13);
        plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d0);
        uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
        (**(code **)(*plVar10 + 0x30))(plVar10,uVar13);
        plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d0);
        (**(code **)(*plVar10 + 0x130))(0x3f000000,0x3f800000);
        plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d0);
        pcVar14 = *(code **)(*plVar10 + 0x210);
        DVec2::DVec2(aDStack_80,(float)local_68,(float)local_64);
        (*pcVar14)(plVar10,aDStack_80);
        std::string::~string(asStack_88);
        DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_90)
        ;
        DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_98)
        ;
        std::string::~string(asStack_a0);
        cVar1 = Sexy::CompiledMap::Initialized((CompiledMap *)aeStack_d8);
        if (cVar1 != '\0') {
          plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_d8);
          uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d0);
          (**(code **)(*plVar10 + 0x388))(plVar10,uVar13);
          Sexy::SexyStringToUTF8String(aSStack_10,extraout_x1);
          DString::DString((DString *)aDStack_80,(string *)&pUStack_70);
          std::string::~string((string *)&pUStack_70);
          plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d0)
          ;
          (**(code **)(*plVar10 + 0x110))(0x41f00000,0x42c80000);
          iVar3 = NewPVPZombiePieceMapper::GetInstance();
          NameMapperBase::GetNameForId(iVar3);
          FUN_031f5e7c(aSStack_c0,"zombie_",asStack_c8);
          Sexy::StringToUpper(aSStack_c0,extraout_x1_00);
          std::operator+("[",asStack_b8);
          std::operator+(asStack_b0,"]");
          Sexy::ToSexyString(aSStack_a8,extraout_x1_01);
          TodStringTranslate((wstring *)asStack_a0);
          TodStringTranslate(L"[NEW_PVP_ZOMBIE_CARD]");
          std::operator+((wstring *)aDStack_98,(wstring *)aDStack_90);
          Sexy::SexyStringToUTF8String((Sexy *)asStack_88,extraout_x1_02);
          DString::operator=((DString *)aDStack_80,(string *)&pUStack_70);
          std::string::~string((string *)&pUStack_70);
          FUN_05476c50(asStack_88);
          FUN_05476c50(aDStack_90);
          FUN_05476c50(aDStack_98);
          FUN_05476c50(asStack_a0);
          std::string::~string((string *)aSStack_a8);
          std::string::~string(asStack_b0);
          std::string::~string(asStack_b8);
          std::string::~string((string *)aSStack_c0);
          std::string::~string(asStack_c8);
          plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_d8);
          pcVar14 = *(code **)(*plVar10 + 0x360);
          pUStack_70 = this;
          DString::DString((DString *)&local_68,(DString *)aDStack_80);
          FUN_03551bc0(afStack_58,(string *)&pUStack_70);
          (*pcVar14)(plVar10,afStack_58);
          std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
          FUN_035590e8((string *)&pUStack_70);
          plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_d8);
          pcVar14 = *(code **)(*plVar10 + 0x380);
          FUN_03551c20(afStack_58,this);
          (*pcVar14)(plVar10,afStack_58);
          std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
          DString::~DString((DString *)aDStack_80);
        }
        plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_f0);
        uVar13 = std::__exception_ptr::exception_ptr::_M_get(aeStack_d8);
        (**(code **)(*plVar10 + 0x30))(plVar10,uVar13);
      }
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr(aDStack_d0);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_d8);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_e8);
    }
    this_04 = (DMenu *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_f0);
    DMenu::align(this_04,5,100.0,100.0,10.0,10.0);
  }
  psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_38,"scrollView");
  pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
  std::string::~string(asStack_38);
  nop();
  if (pDVar6 != (DTouchLayer *)0x0) {
    pDVar8 = (DTouchLayer *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_f0)
    ;
    DScrollView::setContainer((DScrollView *)pDVar6,pDVar8);
    (**(code **)(*(long *)pDVar6 + 0xd8))(pDVar6,1);
  }
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_f0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPShopChestDetail::Init(std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >&) */

void __thiscall UINewPVPShopChestDetail::Init(UINewPVPShopChestDetail *this,vector *param_1)

{
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x138),param_1);
  updateItems(this);
  return;
}


/* UINewPVPShopChestDetail::Init(std::vector<int, std::allocator<int> >&, std::vector<int,
   std::allocator<int> >&) */

void __thiscall
UINewPVPShopChestDetail::Init(UINewPVPShopChestDetail *this,vector *param_1,vector *param_2)

{
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x150),param_1);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x168),param_2);
  updateItems(this);
  return;
}


/* UINewPVPShopChestDetail::updatePlantsShow() */

void __thiscall UINewPVPShopChestDetail::updatePlantsShow(UINewPVPShopChestDetail *this)

{
  if ((this[0x131] != (UINewPVPShopChestDetail)0x0) && (this[0x132] == (UINewPVPShopChestDetail)0x0)
     ) {
    return;
  }
  this[0x132] = (UINewPVPShopChestDetail)0x0;
  this[0x131] = (UINewPVPShopChestDetail)0x1;
  updateItems(this);
  return;
}

