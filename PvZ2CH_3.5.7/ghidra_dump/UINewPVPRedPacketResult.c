// Class: UINewPVPRedPacketResult


/* UINewPVPRedPacketResult::~UINewPVPRedPacketResult() */

void __thiscall UINewPVPRedPacketResult::~UINewPVPRedPacketResult(UINewPVPRedPacketResult *this)

{
  *(undefined ***)this = &PTR_GetClass_066583a0;
  UIRedPacketResult::~UIRedPacketResult((UIRedPacketResult *)this);
  return;
}


/* UINewPVPRedPacketResult::~UINewPVPRedPacketResult() */

void __thiscall UINewPVPRedPacketResult::~UINewPVPRedPacketResult(UINewPVPRedPacketResult *this)

{
  ~UINewPVPRedPacketResult(this);
  AK::FreeHook(this);
  return;
}


/* UINewPVPRedPacketResult::UINewPVPRedPacketResult() */

void __thiscall UINewPVPRedPacketResult::UINewPVPRedPacketResult(UINewPVPRedPacketResult *this)

{
  UIRedPacketResult::UIRedPacketResult((UIRedPacketResult *)this);
  *(undefined ***)this = &PTR_GetClass_066583a0;
  return;
}


/* UINewPVPRedPacketResult::create(std::map<int, int, std::less<int>, std::allocator<std::pair<int
   const, int> > > const&, std::vector<int, std::allocator<int> > const&, bool) */

UINewPVPRedPacketResult * UINewPVPRedPacketResult::create(map *param_1,vector *param_2,bool param_3)

{
  UINewPVPRedPacketResult *pUVar1;
  
  if (UIRedPacketResult::s_pWidgetHandler != (RtObject *)0x0) {
    pUVar1 = Sexy::RtObject::Cast<UINewPVPRedPacketResult>(UIRedPacketResult::s_pWidgetHandler);
    return pUVar1;
  }
  pUVar1 = ::operator_new(0x198);
  memset(pUVar1,0,0x198);
  UINewPVPRedPacketResult(pUVar1);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator=
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (pUVar1 + 0x138),param_1);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(pUVar1 + 0x168),param_2);
  (**(code **)(*(long *)pUVar1 + 0x310))(pUVar1);
  (**(code **)(*(long *)pUVar1 + 0x318))(pUVar1);
  (**(code **)(*(long *)pUVar1 + 0x338))(pUVar1,param_3);
  UIRedPacketResult::s_pWidgetHandler = (RtObject *)pUVar1;
  return pUVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPRedPacketResult::UserInit() */

void __thiscall UINewPVPRedPacketResult::UserInit(UINewPVPRedPacketResult *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  string *psVar8;
  DTouchLayer *pDVar9;
  DNodeLoaderConfig *pDVar10;
  DTouchLayer *pDVar11;
  int *piVar12;
  long *plVar13;
  NameMapperBase *this_00;
  SeedPacketUtils *pSVar14;
  long lVar15;
  ResourceInfo *pRVar16;
  long *plVar17;
  undefined8 uVar18;
  char *pcVar19;
  DMenu *this_01;
  wstring *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  wstring *extraout_x1_02;
  code *pcVar20;
  float fVar21;
  float fVar22;
  long lVar23;
  long *local_150;
  code *local_120;
  CompiledMap aCStack_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  CompiledMap aCStack_e8 [8];
  DRefPtr<UIAccumulatedLoginButton> aDStack_e0 [8];
  DRefPtr<UIAccumulatedLoginButton> aDStack_d8 [8];
  DRefPtr<UIAccumulatedLoginButton> aDStack_d0 [8];
  string asStack_c8 [8];
  Sexy aSStack_c0 [8];
  string asStack_b8 [8];
  string asStack_b0 [8];
  Sexy aSStack_a8 [8];
  string asStack_a0 [8];
  DRefPtr<DAtlasSpriteNode> aDStack_98 [8];
  DRefPtr<DAtlasSpriteNode> aDStack_90 [8];
  float local_88 [2];
  DString aDStack_80 [4];
  float local_7c;
  UINewPVPRedPacketResult *local_70;
  DString aDStack_68 [16];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  string asStack_38 [32];
  undefined1 auStack_18 [8];
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_38,"btnClose");
  pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
  std::string::~string(asStack_38);
  nop();
  if (pDVar9 != (DTouchLayer *)0x0) {
    pcVar20 = *(code **)(*(long *)pDVar9 + 0x350);
    FUN_03551c7c(afStack_58,this);
    (*pcVar20)(pDVar9,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  }
  pDVar10 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
  std::string::string(asStack_38,"scrollViewContainer");
  DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar10,asStack_38,(DTransformNode *)0x0);
  std::string::~string(asStack_38);
  nop();
  cVar3 = Sexy::CompiledMap::Initialized(aCStack_100);
  if (cVar3 != '\0') {
    lVar23 = 0;
    local_f8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x168));
    local_f0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x168));
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_f8,(__normal_iterator *)&local_f0), bVar4)
    {
      piVar12 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f8);
      iVar7 = *piVar12;
      GetGameItemInfo(iVar7,0x7fffffff,0);
      pDVar10 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
      std::string::string((string *)&local_70,"rewardBtn");
      DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar10,(string *)&local_70,(DTransformNode *)0x0);
      std::string::~string((string *)&local_70);
      nop();
      pDVar10 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
      std::string::string((string *)&local_70,"rewardImg");
      DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar10,(string *)&local_70,(DTransformNode *)0x0);
      std::string::~string((string *)&local_70);
      nop();
      DRefPtr<DSpriteNode>::DRefPtr((DRefPtr<DSpriteNode> *)aDStack_d8);
      DRefPtr<DStringNode>::DRefPtr((DRefPtr<DStringNode> *)aDStack_d0);
      plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d8);
      pcVar20 = *(code **)(*plVar13 + 0x210);
      DVec2::DVec2((DVec2 *)&local_70,95.0,95.0);
      (*pcVar20)(plVar13,(string *)&local_70);
      plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d0);
      plVar13 = (long *)(**(code **)(*plVar13 + 0x350))(plVar13,1);
      plVar13 = (long *)(**(code **)(*plVar13 + 0x358))(plVar13,1);
      plVar13 = (long *)(**(code **)(*plVar13 + 0x348))
                                  (plVar13,PrimeText_Game::Typeface_CafeteriaBlack_32_ThickOutline);
      plVar13 = (long *)(**(code **)(*plVar13 + 0x138))(0,0,0x42be0000,0x42200000);
      plVar13 = (long *)(**(code **)(*plVar13 + 0x130))(0,0);
      pcVar20 = *(code **)(*plVar13 + 0x108);
      DVec2::DVec2((DVec2 *)&local_70,0.0,65.0);
      (*pcVar20)(plVar13,(string *)&local_70);
      this_00 = (NameMapperBase *)NewPVPZombiePieceMapper::GetInstance();
      cVar3 = NameMapperBase::ContainsId(this_00,iVar7);
      cVar5 = Sexy::CompiledMap::Initialized((CompiledMap *)aDStack_e0);
      if (cVar5 == '\0') {
LAB_0355b7bc:
        cVar5 = Sexy::CompiledMap::Initialized(aCStack_e8);
      }
      else {
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_e0);
        (**(code **)(*plVar13 + 0x170))(0x42be0000);
        psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_e0);
        std::string::string((string *)&local_70,"img");
        DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
        std::string::~string((string *)&local_70);
        nop();
        if (cVar3 == '\0') {
          DRefPtr<DAtlasSpriteNode>::DRefPtr(aDStack_98);
          DRefPtr<DSpriteNode>::DRefPtr((DRefPtr<DSpriteNode> *)aDStack_90);
          pSVar14 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
          std::string::string((string *)aDStack_80,"new_pvp_beach_octopus");
          std::string::string((string *)&local_70,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
          lVar15 = SeedPacketUtils::GetZombiePacketRenderData
                             (pSVar14,(string *)aDStack_80,(string *)&local_70,1);
          std::string::~string((string *)&local_70);
          nop();
          std::string::~string((string *)aDStack_80);
          nop();
          plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98)
          ;
          pcVar20 = *(code **)(*plVar13 + 0x340);
          pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar15 + 0x170));
          plVar13 = (long *)(*pcVar20)(plVar13,pRVar16,lVar15 + 0x20);
          plVar13 = (long *)(**(code **)(*plVar13 + 0x170))(0x42be0000);
          pcVar20 = *(code **)(*plVar13 + 0x108);
          iVar7 = FUN_03551e2c(*(undefined4 *)(lVar15 + 0x30));
          iVar6 = FUN_03551e2c(*(undefined4 *)(lVar15 + 0x34));
          DVec2::DVec2((DVec2 *)&local_70,(float)iVar7,(float)iVar6);
          plVar13 = (long *)(*pcVar20)(plVar13,(string *)&local_70);
          (**(code **)(*plVar13 + 0x130))(0,0);
          plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90)
          ;
          plVar13 = (long *)(**(code **)(*plVar13 + 0x2e8))(plVar13,auStack_18);
          plVar13 = (long *)(**(code **)(*plVar13 + 0x130))(0x3f000000,0x3f000000);
          plVar13 = (long *)(**(code **)(*plVar13 + 0x170))(0x42200000);
          pcVar20 = *(code **)(*plVar13 + 0x110);
          plVar17 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98)
          ;
          (**(code **)(*plVar17 + 0x218))(local_88);
          fVar22 = local_88[0] * 0.5;
          plVar17 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98)
          ;
          (**(code **)(*plVar17 + 0x218))(aDStack_80);
          fVar21 = local_7c;
          plVar17 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98)
          ;
          (**(code **)(*plVar17 + 0x218))((string *)&local_70);
          (*pcVar20)(fVar22,fVar21 - local_70._0_4_ * 0.5,plVar13);
          plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98)
          ;
          uVar18 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
          (**(code **)(*plVar13 + 0x30))(plVar13,uVar18);
          plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d8)
          ;
          uVar18 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
          (**(code **)(*plVar13 + 0x30))(plVar13,uVar18);
          uVar18 = *(undefined8 *)(this + 0x180);
          lVar15 = FUN_0355036c(uVar18,*(undefined8 *)(this + 0x188));
          if (lVar15 == 0) {
            local_150 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                          ((exception_ptr *)aDStack_d0);
            local_120 = *(code **)(*local_150 + 0x338);
            piVar12 = (int *)std::
                             map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                             operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                         *)(this + 0x138),piVar12);
          }
          else {
            local_150 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                          ((exception_ptr *)aDStack_d0);
            local_120 = *(code **)(*local_150 + 0x338);
            piVar12 = (int *)FUN_03550378(uVar18,lVar23);
          }
          DString::DString((DString *)&local_70,*piVar12);
          pcVar19 = DString::operator_cast_to_char_((DString *)&local_70);
          (*local_120)(local_150,pcVar19);
          DString::~DString((DString *)&local_70);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)aDStack_90);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)aDStack_98);
          goto LAB_0355b7bc;
        }
        iVar6 = NewPVPZombiePieceMapper::GetInstance();
        NameMapperBase::GetNameForId(iVar6);
        iVar7 = FUN_03559970(iVar7);
        pSVar14 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
        std::string::string((string *)&local_70,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
        lVar15 = SeedPacketUtils::GetZombiePacketRenderData
                           (pSVar14,asStack_a0,(string *)&local_70,iVar7);
        std::string::~string((string *)&local_70);
        nop();
        DRefPtr<DAtlasSpriteNode>::DRefPtr(aDStack_98);
        DRefPtr<DAtlasSpriteNode>::DRefPtr(aDStack_90);
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
        pcVar20 = *(code **)(*plVar13 + 0x340);
        pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar15 + 0x170));
        plVar13 = (long *)(*pcVar20)(plVar13,pRVar16,lVar15 + 0x20);
        plVar13 = (long *)(**(code **)(*plVar13 + 0x170))(0x42be0000);
        pcVar20 = *(code **)(*plVar13 + 0x108);
        iVar7 = FUN_03551e2c(*(undefined4 *)(lVar15 + 0x30));
        iVar6 = FUN_03551e2c(*(undefined4 *)(lVar15 + 0x34));
        DVec2::DVec2((DVec2 *)&local_70,(float)iVar7,(float)iVar6);
        plVar13 = (long *)(*pcVar20)(plVar13,(string *)&local_70);
        (**(code **)(*plVar13 + 0x130))(0,0);
        iVar7 = *(int *)(lVar15 + 0x30);
        iVar6 = *(int *)(lVar15 + 0x34);
        iVar1 = *(int *)(lVar15 + 0x18);
        iVar2 = *(int *)(lVar15 + 0x1c);
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
        pcVar20 = *(code **)(*plVar13 + 0x340);
        pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar15 + 0x170));
        plVar13 = (long *)(*pcVar20)(plVar13,pRVar16,lVar15 + 8);
        pcVar20 = *(code **)(*plVar13 + 0x108);
        fVar21 = (float)FUN_03551e64((float)(iVar1 - iVar7));
        fVar22 = (float)FUN_03551e64((float)(iVar2 - iVar6));
        DVec2::DVec2((DVec2 *)&local_70,fVar21,fVar22);
        plVar13 = (long *)(*pcVar20)(plVar13,(string *)&local_70);
        (**(code **)(*plVar13 + 0x130))(0,0);
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
        (**(code **)(*plVar13 + 0x130))(0x3f000000,0x3f800000);
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
        pcVar20 = *(code **)(*plVar13 + 0x108);
        plVar17 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
        (**(code **)(*plVar17 + 0x218))(local_88);
        fVar21 = local_88[0] * 0.5;
        plVar17 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
        (**(code **)(*plVar17 + 0x218))(aDStack_80);
        DVec2::DVec2((DVec2 *)&local_70,fVar21,local_7c - 8.0);
        (*pcVar20)(plVar13,(string *)&local_70);
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
        (**(code **)(*plVar13 + 0x140))(0x3f400000);
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
        uVar18 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
        (**(code **)(*plVar13 + 0x30))(plVar13,uVar18);
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d8);
        uVar18 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
        (**(code **)(*plVar13 + 0x30))(plVar13,uVar18);
        uVar18 = *(undefined8 *)(this + 0x180);
        lVar15 = FUN_0355036c(uVar18,*(undefined8 *)(this + 0x188));
        if (lVar15 == 0) {
          local_150 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)aDStack_d0);
          local_120 = *(code **)(*local_150 + 0x338);
          piVar12 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                           ::operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                         *)(this + 0x138),piVar12);
        }
        else {
          local_150 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)aDStack_d0);
          local_120 = *(code **)(*local_150 + 0x338);
          piVar12 = (int *)FUN_03550378(uVar18,lVar23);
        }
        DString::DString((DString *)&local_70,*piVar12);
        pcVar19 = DString::operator_cast_to_char_((DString *)&local_70);
        (*local_120)(local_150,pcVar19);
        DString::~DString((DString *)&local_70);
        DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_90)
        ;
        DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_98)
        ;
        std::string::~string(asStack_a0);
        cVar5 = Sexy::CompiledMap::Initialized(aCStack_e8);
      }
      if (cVar5 != '\0') {
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_e8);
        uVar18 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d8);
        (**(code **)(*plVar13 + 0x388))(plVar13,uVar18);
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d8);
        uVar18 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d0);
        (**(code **)(*plVar13 + 0x30))(plVar13,uVar18);
        Sexy::SexyStringToUTF8String(aSStack_10,extraout_x1);
        DString::DString(aDStack_80,(string *)&local_70);
        std::string::~string((string *)&local_70);
        if (cVar3 != '\0') {
          iVar7 = NewPVPZombiePieceMapper::GetInstance();
          NameMapperBase::GetNameForId(iVar7);
          FUN_031f5e7c(aSStack_c0,"zombie_",asStack_c8);
          Sexy::StringToUpper(aSStack_c0,extraout_x1_00);
          std::operator+("[",asStack_b8);
          std::operator+(asStack_b0,"]");
          Sexy::ToSexyString(aSStack_a8,extraout_x1_01);
          TodStringTranslate((wstring *)asStack_a0);
          TodStringTranslate(L"[NEW_PVP_ZOMBIE_CARD]");
          std::operator+((wstring *)aDStack_98,(wstring *)aDStack_90);
          Sexy::SexyStringToUTF8String((Sexy *)local_88,extraout_x1_02);
          DString::operator=(aDStack_80,(string *)&local_70);
          std::string::~string((string *)&local_70);
          FUN_05476c50((Sexy *)local_88);
          FUN_05476c50((wstring *)aDStack_90);
          FUN_05476c50((wstring *)aDStack_98);
          FUN_05476c50((wstring *)asStack_a0);
          std::string::~string((string *)aSStack_a8);
          std::string::~string(asStack_b0);
          std::string::~string(asStack_b8);
          std::string::~string((string *)aSStack_c0);
          std::string::~string(asStack_c8);
        }
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_e8);
        pcVar20 = *(code **)(*plVar13 + 0x360);
        local_70 = this;
        DString::DString(aDStack_68,aDStack_80);
        FUN_03551cd8(afStack_58,(string *)&local_70);
        (*pcVar20)(plVar13,afStack_58);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
        FUN_035590e8((string *)&local_70);
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_e8);
        pcVar20 = *(code **)(*plVar13 + 0x380);
        FUN_03551d38(afStack_58,this);
        (*pcVar20)(plVar13,afStack_58);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_100);
        uVar18 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_e8);
        (**(code **)(*plVar13 + 0x30))(plVar13,uVar18);
        DString::~DString(aDStack_80);
      }
      lVar23 = lVar23 + 1;
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr(aDStack_d0);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr(aDStack_d8);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr(aDStack_e0);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_e8);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_f8);
    }
    this_01 = (DMenu *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_100);
    DMenu::align(this_01,5,100.0,100.0,10.0,10.0);
  }
  psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_38,"scrollView");
  pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
  std::string::~string(asStack_38);
  nop();
  if (pDVar9 != (DTouchLayer *)0x0) {
    pDVar11 = (DTouchLayer *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_100);
    DScrollView::setContainer((DScrollView *)pDVar9,pDVar11);
  }
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_100);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

