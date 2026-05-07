// Class: UIRedPacketReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacketReward::Initialize() */

void __thiscall UIRedPacketReward::Initialize(UIRedPacketReward *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIRedPacketReward");
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIRedPacketReward::~UIRedPacketReward() */

void __thiscall UIRedPacketReward::~UIRedPacketReward(UIRedPacketReward *this)

{
  *(undefined ***)this = &PTR_GetClass_067715d0;
  s_pWidgetHandler = 0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x198));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x168))
  ;
  New_S2C_RedPackReward::~New_S2C_RedPackReward((New_S2C_RedPackReward *)(this + 0x138));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UIRedPacketReward::~UIRedPacketReward() */

void __thiscall UIRedPacketReward::~UIRedPacketReward(UIRedPacketReward *this)

{
  ~UIRedPacketReward(this);
  AK::FreeHook(this);
  return;
}


/* UIRedPacketReward::UIRedPacketReward() */

void __thiscall UIRedPacketReward::UIRedPacketReward(UIRedPacketReward *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_067715d0;
  New_S2C_RedPackReward::New_S2C_RedPackReward((New_S2C_RedPackReward *)(this + 0x138));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x168));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x198));
  this[0x1b0] = (UIRedPacketReward)0x0;
  *(undefined4 *)(this + 0x1b4) = 0;
  this[0x1b8] = (UIRedPacketReward)0x0;
  this[0x1b9] = (UIRedPacketReward)0x0;
  return;
}


/* UIRedPacketReward::create(bool) */

UIRedPacketReward * UIRedPacketReward::create(bool param_1)

{
  UIRedPacketReward *this;
  
  if (s_pWidgetHandler != (UIRedPacketReward *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x1c0);
  memset(this,0,0x1c0);
  UIRedPacketReward(this);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_1);
  s_pWidgetHandler = this;
  return this;
}


/* UIRedPacketReward::create(New_S2C_RedPackReward const&, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > > const&, std::vector<int, std::allocator<int> >
   const&, bool, bool) */

UIRedPacketReward *
UIRedPacketReward::create
          (New_S2C_RedPackReward *param_1,map *param_2,vector *param_3,bool param_4,bool param_5)

{
  UIRedPacketReward *this;
  
  if (s_pWidgetHandler != (UIRedPacketReward *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x1c0);
  memset(this,0,0x1c0);
  UIRedPacketReward(this);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator=
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x168),
             param_2);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x198),param_3);
  New_S2C_RedPackReward::operator=((New_S2C_RedPackReward *)(this + 0x138),param_1);
  this[0x1b0] = (UIRedPacketReward)param_4;
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_5);
  s_pWidgetHandler = this;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacketReward::skipAni() */

void __thiscall UIRedPacketReward::skipAni(UIRedPacketReward *this)

{
  vector<int,std::allocator<int>> avStack_50 [24];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            (amStack_38,(map *)(this + 0x168));
  std::vector<int,std::allocator<int>>::vector(avStack_50,(vector *)(this + 0x198));
  (**(code **)(*(long *)this + 0x348))(this);
  UIRedPacketResult::create((map *)amStack_38,(vector *)avStack_50,true);
  std::vector<int,std::allocator<int>>::~vector(avStack_50);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacketReward::nextAni() */

void __thiscall UIRedPacketReward::nextAni(UIRedPacketReward *this)

{
  int iVar1;
  ulong uVar2;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1b8] == (UIRedPacketReward)0x0) {
    iVar1 = *(int *)(this + 0x1b4);
    *(int *)(this + 0x1b4) = iVar1 + 1;
    uVar2 = FUN_03d7e71c(*(undefined8 *)(this + 0x150),*(undefined8 *)(this + 0x158));
    if (uVar2 <= (ulong)(long)(iVar1 + 1)) {
      skipAni(this);
      goto LAB_03d844dc;
    }
    if (this[0x1b9] != (UIRedPacketReward)0x0) goto LAB_03d8446c;
    __s = "UIRedPacketReward";
  }
  else {
    this[0x1b8] = (UIRedPacketReward)0x0;
    if (this[0x1b9] == (UIRedPacketReward)0x0) {
      __s = "UIRedPacketReward2";
    }
    else {
LAB_03d8446c:
      __s = "UIRedPacketReward3";
    }
  }
  std::string::string(asStack_10,__s);
  DNodeWidget::reload((string *)this);
  std::string::~string(asStack_10);
  nop();
LAB_03d844dc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacketReward::UserInit() */

void __thiscall UIRedPacketReward::UserInit(UIRedPacketReward *this)

{
  exception_ptr *this_00;
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  string *psVar8;
  DTouchLayer *pDVar9;
  DTouchLayer *pDVar10;
  DAction *pDVar11;
  undefined8 uVar12;
  DNodeLoaderConfig *pDVar13;
  ulong uVar14;
  char *pcVar15;
  int *piVar16;
  long *plVar17;
  SeedPacketUtils *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  ResourceInfo *pRVar18;
  long lVar19;
  wstring *extraout_x1;
  code *pcVar20;
  float fVar21;
  float fVar22;
  CompiledMap aCStack_a0 [8];
  CompiledMap aCStack_98 [8];
  DRefPtr<UIAccumulatedLoginButton> aDStack_90 [8];
  CompiledMap aCStack_88 [8];
  RtWeakPtr aRStack_80 [8];
  string asStack_78 [16];
  int local_68;
  int local_64;
  int local_60;
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  string asStack_38 [4];
  int local_34;
  string asStack_28 [16];
  undefined1 auStack_18 [8];
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (exception_ptr *)(this + 0xd8);
  if (this[0x1b0] == (UIRedPacketReward)0x0) {
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    pcVar15 = "redpack_small";
  }
  else {
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    pcVar15 = "redpack_big";
  }
  std::string::string(asStack_38,pcVar15);
  pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
  std::string::~string(asStack_38);
  nop();
  if (pDVar9 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar9 + 0xd8))(pDVar9,1);
  }
  psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_38,"btnClose");
  pDVar10 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
  std::string::~string(asStack_38);
  nop();
  if (pDVar10 != (DTouchLayer *)0x0) {
    pcVar20 = *(code **)(*(long *)pDVar10 + 0x350);
    FUN_03d811e0(afStack_58,this);
    (*pcVar20)(pDVar10,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  }
  psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_38,"btnSkip");
  pDVar10 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
  std::string::~string(asStack_38);
  nop();
  if (pDVar10 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar10 + 0x338))(pDVar10,0);
    pcVar20 = *(code **)(*(long *)pDVar10 + 0x350);
    FUN_03d8123c(afStack_58,this);
    (*pcVar20)(pDVar10,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
    DRefPtr<DAction>::DRefPtr((DRefPtr<DAction> *)asStack_38);
    pDVar11 = (DAction *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_38);
    pDVar11 = (DAction *)DAction::setDelayTime(pDVar11,0.3);
    FUN_03d813b0(afStack_58,pDVar10);
    DAction::onDone(pDVar11,(function *)afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
    uVar12 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_38);
    (**(code **)(*(long *)pDVar10 + 0x298))(pDVar10,uVar12);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_38);
  }
  pDVar13 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
  std::string::string(asStack_38,"moveDownAction");
  DNodeLoaderConfig::loadAction<DChangeColor>(pDVar13,asStack_38);
  std::string::~string(asStack_38);
  nop();
  cVar3 = Sexy::CompiledMap::Initialized(aCStack_a0);
  if (cVar3 != '\0') {
    pDVar11 = (DAction *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a0);
    FUN_03d8140c(afStack_58,pDVar9,this);
    DAction::onDone(pDVar11,(function *)afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
    uVar12 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a0);
    (**(code **)(*(long *)pDVar9 + 0x298))(pDVar9,uVar12);
  }
  psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_38,"light_anim");
  pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
  std::string::~string(asStack_38);
  nop();
  psVar8 = (string *)DNodeWidget::getLoader((DNodeWidget *)this);
  std::string::string(asStack_38,"endAction");
  DNodeLoaderConfig::loadAction(psVar8);
  std::string::~string(asStack_38);
  nop();
  cVar3 = Sexy::CompiledMap::Initialized(aCStack_98);
  if (cVar3 != '\0') {
    pDVar11 = (DAction *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_98);
    FUN_03d81468(afStack_58,this);
    DAction::onDone(pDVar11,(function *)afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
    uVar12 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_98);
    (**(code **)(*(long *)pDVar9 + 0x298))(pDVar9,uVar12);
  }
  pDVar13 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
  std::string::string(asStack_38,"ScaleInAction");
  DNodeLoaderConfig::loadAction<DChangeColor>(pDVar13,asStack_38);
  std::string::~string(asStack_38);
  nop();
  if (this[0x1b8] == (UIRedPacketReward)0x0) {
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    std::string::string(asStack_38,"coinNumStr");
    pDVar10 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string(asStack_38);
    nop();
    if (pDVar10 != (DTouchLayer *)0x0) {
      (**(code **)(*(long *)pDVar10 + 0x2a8))(pDVar10);
      if (this[0x1b9] != (UIRedPacketReward)0x0) {
        (**(code **)(*(long *)pDVar10 + 0xd8))(pDVar10,0);
      }
    }
    pDVar13 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
    std::string::string(asStack_38,"changeColor");
    DNodeLoaderConfig::loadAction<DChangeColor>(pDVar13,asStack_38);
    std::string::~string(asStack_38);
    nop();
    uVar12 = *(undefined8 *)(this + 0x150);
    iVar6 = *(int *)(this + 0x1b4);
    uVar14 = FUN_03d7e71c(uVar12,*(undefined8 *)(this + 0x158));
    if ((ulong)(long)iVar6 < uVar14) {
      piVar16 = (int *)FUN_03d7e744(uVar12,(long)iVar6);
      iVar6 = *piVar16;
      uVar5 = piVar16[1];
    }
    else {
      uVar5 = 1;
      iVar6 = 0x1b21d;
    }
    GetGameItemInfo(iVar6,0x7fffffff,0);
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    std::string::string((string *)&local_68,"rewardImg");
    pDVar10 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_68);
    nop();
    cVar3 = Sexy::CompiledMap::Initialized((CompiledMap *)aDStack_90);
    if (cVar3 != '\0') {
      plVar17 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
      (**(code **)(*plVar17 + 0x68))(0x3f800000);
      DRefPtr<DSequence>::DRefPtr((DRefPtr<DSequence> *)&local_68);
      plVar17 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
      uVar12 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
      pDVar11 = (DAction *)(**(code **)(*plVar17 + 0x40))(plVar17,uVar12);
      FUN_03d814c4(afStack_58);
      DAction::onDone(pDVar11,(function *)afStack_58);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
      cVar3 = Sexy::CompiledMap::Initialized((CompiledMap *)&local_68);
      if (cVar3 != '\0') {
        uVar12 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
        (**(code **)(*(long *)pDVar10 + 0x298))(pDVar10,uVar12);
      }
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_68);
    }
    if (local_34 == 2) {
      this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                SeedPacketUtils::GetPlantPiecePacketRenderData(this_01,asStack_28);
      DRefPtr<DAtlasSpriteNode>::DRefPtr((DRefPtr<DAtlasSpriteNode> *)aRStack_80);
      plVar17 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aRStack_80);
      pcVar20 = *(code **)(*plVar17 + 0x340);
      pRVar18 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this_02 + 0x170));
      plVar17 = (long *)(*pcVar20)(plVar17,pRVar18,this_02 + 0x20);
      plVar17 = (long *)(**(code **)(*plVar17 + 0x110))(0,0);
      (**(code **)(*plVar17 + 0x130))(0,0);
      iVar6 = *(int *)(this_02 + 0x30);
      iVar7 = *(int *)(this_02 + 0x34);
      iVar1 = *(int *)(this_02 + 0x18);
      iVar2 = *(int *)(this_02 + 0x1c);
      DRefPtr<DAtlasSpriteNode>::DRefPtr((DRefPtr<DAtlasSpriteNode> *)asStack_78);
      plVar17 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_78);
      pcVar20 = *(code **)(*plVar17 + 0x340);
      lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
      pRVar18 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar19 + 0x48));
      plVar17 = (long *)(*pcVar20)(plVar17,pRVar18,this_02 + 8);
      pcVar20 = *(code **)(*plVar17 + 0x108);
      fVar21 = (float)FUN_03d81524((float)(iVar1 - iVar6));
      fVar22 = (float)FUN_03d81524((float)(iVar2 - iVar7));
      DVec2::DVec2((DVec2 *)&local_68,fVar21,fVar22);
      plVar17 = (long *)(*pcVar20)(plVar17,(string *)&local_68);
      (**(code **)(*plVar17 + 0x130))(0,0);
      uVar12 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aRStack_80);
      (**(code **)(*(long *)pDVar10 + 0x30))(pDVar10,uVar12);
      uVar12 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_78);
      (**(code **)(*(long *)pDVar10 + 0x30))(pDVar10,uVar12);
      pcVar20 = *(code **)(*(long *)pDVar10 + 0x210);
      iVar6 = FUN_03d81510(*(undefined4 *)(this_02 + 0x28));
      iVar7 = FUN_03d81510(*(undefined4 *)(this_02 + 0x2c));
      DVec2::DVec2((DVec2 *)&local_68,(float)iVar6,(float)iVar7);
      (*pcVar20)(pDVar10,(string *)&local_68);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_78);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aRStack_80);
    }
    else if (local_34 == 1) {
      pcVar20 = *(code **)(*(long *)pDVar10 + 0x2e8);
      FUN_031f5e7c((string *)&local_68,"IMAGE_UI_HEADSHOT_BIGPLANT_",asStack_28);
      (*pcVar20)(pDVar10,(string *)&local_68);
      std::string::~string((string *)&local_68);
    }
    else {
      (**(code **)(*(long *)pDVar10 + 0x2e8))(pDVar10,auStack_18);
    }
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    std::string::string((string *)&local_68,"redpacket_showmoney");
    pDVar10 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_68);
    nop();
    if (pDVar10 != (DTouchLayer *)0x0) {
      (**(code **)(*(long *)pDVar10 + 0x2a8))(pDVar10);
    }
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    std::string::string((string *)&local_68,"rewardName");
    pDVar10 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_68);
    nop();
    if (pDVar10 != (DTouchLayer *)0x0) {
      DString::DString((DString *)&local_68);
      Sexy::SexyStringToUTF8String(aSStack_10,extraout_x1);
      uVar12 = FUN_0547429c(asStack_78);
      DString::format((char *)&local_68,"%s X %d",uVar12,(ulong)uVar5);
      std::string::~string(asStack_78);
      pcVar20 = *(code **)(*(long *)pDVar10 + 0x338);
      pcVar15 = DString::operator_cast_to_char_((DString *)&local_68);
      (*pcVar20)(pDVar10,pcVar15);
      DString::~DString((DString *)&local_68);
    }
    psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
    bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_80);
    if (bVar4) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      PlantType::GetRareColor();
      cVar3 = Sexy::CompiledMap::Initialized(aCStack_88);
      if ((cVar3 != '\0') && (pDVar9 != (DTouchLayer *)0x0)) {
        plVar17 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_88);
        pcVar20 = *(code **)(*plVar17 + 0x40);
        DVec3::DVec3((DVec3 *)asStack_78,(float)local_68 * 0.003921569,(float)local_64 * 0.003921569
                     ,(float)local_60 * 0.003921569);
        (*pcVar20)(plVar17,asStack_78);
        plVar17 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_88);
        pcVar20 = *(code **)(*plVar17 + 0x48);
        DVec3::DVec3((DVec3 *)asStack_78,(float)local_68 * 0.003921569,(float)local_64 * 0.003921569
                     ,(float)local_60 * 0.003921569);
        (*pcVar20)(plVar17,asStack_78);
        uVar12 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_88);
        (**(code **)(*(long *)pDVar9 + 0x298))(pDVar9,uVar12);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_88);
  }
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr(aDStack_90);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_98);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

