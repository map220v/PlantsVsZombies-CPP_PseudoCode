// Class: PVPSeedBankModule


/* PVPSeedBankModule::initializeModule() */

void __thiscall PVPSeedBankModule::initializeModule(PVPSeedBankModule *this)

{
  this[0x40] = (PVPSeedBankModule)0x0;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18));
  return;
}


/* PVPSeedBankModule::GetSkillSeedBank() */

RtWeakPtr<Sexy::SoundResource> * PVPSeedBankModule::GetSkillSeedBank(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x50));
  return in_x8;
}


/* PVPSeedBankModule::GetZombieSeedBank() */

RtWeakPtr<Sexy::SoundResource> * PVPSeedBankModule::GetZombieSeedBank(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x60));
  return in_x8;
}


/* PVPSeedBankModule::GetPVPSkillEnergyUI() */

RtWeakPtr<Sexy::SoundResource> * PVPSeedBankModule::GetPVPSkillEnergyUI(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x68));
  return in_x8;
}


/* PVPSeedBankModule::ShowAllSeedBank(bool) */

void __thiscall PVPSeedBankModule::ShowAllSeedBank(PVPSeedBankModule *this,bool param_1)

{
  char cVar1;
  UIWidget *pUVar2;
  
  if (param_1) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x50));
    if (cVar1 == '\0') {
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x60));
    }
    else {
      pUVar2 = (UIWidget *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
      UIWidget::SetVisible(pUVar2,true);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x60));
    }
    if (cVar1 == '\0') {
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x68));
    }
    else {
      pUVar2 = (UIWidget *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
      UIWidget::SetVisible(pUVar2,true);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x68));
    }
    if (cVar1 == '\0') {
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
    }
    else {
      pUVar2 = (UIWidget *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
      UIWidget::SetVisible(pUVar2,true);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
    }
    if (cVar1 != '\0') {
      pUVar2 = (UIWidget *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
      UIWidget::SetVisible(pUVar2,true);
      return;
    }
    return;
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x50));
  if (cVar1 == '\0') {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x60));
  }
  else {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
    UIWidget::SetVisible(pUVar2,false);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x60));
  }
  if (cVar1 == '\0') {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x68));
  }
  else {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
    UIWidget::SetVisible(pUVar2,false);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x68));
  }
  if (cVar1 == '\0') {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
  }
  else {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
    UIWidget::SetVisible(pUVar2,false);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
  }
  if (cVar1 != '\0') {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
    UIWidget::SetVisible(pUVar2,false);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedBankModule::onAddToRenderQueue(RenderQueue*) */

void __thiscall PVPSeedBankModule::onAddToRenderQueue(PVPSeedBankModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDraw);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<PVPSeedBankModule,void(PVPSeedBankModule::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0x186a2,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedBankModule::renewSkillSeedBank() */

void __thiscall PVPSeedBankModule::renewSkillSeedBank(PVPSeedBankModule *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ResourceInfo *this_00;
  long lVar6;
  string *psVar7;
  int local_18;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x50));
  if (cVar1 != '\0') {
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x50));
    SeedBankNew::SetPacketsOnDisplay((SeedBankNew *)this_00,false);
    lVar6 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    cVar1 = FUN_04ab1900(*(undefined1 *)(lVar6 + 0x174));
    if (cVar1 == '\0') {
      lVar6 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      cVar1 = FUN_04ab1908(*(undefined1 *)(lVar6 + 0x221));
      if (cVar1 == '\0') {
        lVar6 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        cVar1 = FUN_04ab1904(*(undefined1 *)(lVar6 + 0x176));
        if (cVar1 == '\0') {
          UIWidget::SetVisible((UIWidget *)this_00,true);
        }
      }
    }
    psVar7 = (string *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    iVar4 = 0;
    SeedPacketUtils::GetZombiePacketSize(psVar7);
    cVar1 = FUN_04ab18cc(this_00[0x199]);
    iVar2 = FUN_04ab2254(0x14);
    FUN_04ab186c(this_00 + 0x38,local_18 * cVar1 + iVar2);
    cVar1 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
    if (cVar1 != '\0') {
      iVar4 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
      iVar4 = iVar4 / 2;
    }
    iVar3 = FUN_04ab1868(*(undefined4 *)(this_00 + 0x38));
    iVar2 = *(int *)((long)gLawnApp + 0xd4);
    iVar4 = FUN_04ab2254(iVar4);
    iVar5 = FUN_04ab2254(0x208);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_10,(float)((iVar2 - iVar3) - iVar4),(float)iVar5);
    UIWidget::SetPositionOffset(local_10,local_c,this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedBankModule::onPlantShoveled(Plant*) */

void __thiscall PVPSeedBankModule::onPlantShoveled(PVPSeedBankModule *this,Plant *param_1)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  int iVar2;
  string *psVar3;
  RtObject *this_01;
  SeedPacket_PVP *pSVar4;
  SexyVector3 *this_02;
  CollectableArenaZombie *this_03;
  long lVar5;
  PVPSeedBank *pPVar6;
  SeedPacket_PVP *this_04;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  RtMixedPtrBase aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x58);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if ((cVar1 == '\0') && (param_1 != (Plant *)0x0)) {
    psVar3 = (string *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Plant::GetType();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    SeedBankNew::GetPacket(psVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
    if (cVar1 == '\0') {
      lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar2 = FUN_04ab18fc(*(undefined4 *)(lVar5 + 0x128));
      if (iVar2 == 2) {
        Sexy::RtName::RtName((RtName *)&local_28,L"UIPVPSeedPacket");
        Sexy::RtName::RtName((RtName *)aRStack_18,(RtName *)&local_28);
        UIWidget::CreateWidget(aRStack_18,1);
        Sexy::RtName::~RtName((RtName *)aRStack_18);
        pPVar6 = (PVPSeedBank *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
        PVPSeedBank::AddPacket(pPVar6,aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        nop();
        Plant::GetType();
        pcVar7 = *(code **)(*(long *)this_04 + 0x198);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
        (*pcVar7)(this_04,aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        SeedPacket_PVP::SetMaxNum(this_04,99999);
        SeedPacket_PVP::SetCurNum(this_04,1);
        SeedPacket_PVP::SetCost(this_04,-1);
        pPVar6 = (PVPSeedBank *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        PVPSeedBank::RefreshPackets(pPVar6);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        Sexy::RtName::~RtName((RtName *)&local_28);
      }
    }
    else {
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pSVar4 = Sexy::RtObject::Cast<SeedPacket_PVP>(this_01);
      if (pSVar4 != (SeedPacket_PVP *)0x0) {
        this_02 = (SexyVector3 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)param_1);
        uVar9 = 0;
        uVar8 = 0xc1f00000;
        EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,8.0,-30.0,0.0);
        local_28 = Sexy::SexyVector3::operator+(this_02,(SexyVector3 *)aRStack_18);
        psVar3 = *(string **)(gLawnApp + 0x9f0);
        local_24 = uVar8;
        local_20 = uVar9;
        std::string::string((string *)aRStack_18,"arena_plant");
        Board::AddCollectableWithDefaultMotion(psVar3,(SexyVector3 *)aRStack_18);
        std::string::~string((string *)aRStack_18);
        nop();
        nop();
        Plant::GetType();
        CollectableArenaPlant::SetPlantSeedType((CollectableArenaPlant *)this_03,aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        CollectableArenaZombie::PrepareMoving(this_03);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        goto LAB_04ab2cd8;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
LAB_04ab2cd8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPSeedBankModule::PVPSeedBankModule() */

void __thiscall PVPSeedBankModule::PVPSeedBankModule(PVPSeedBankModule *this)

{
  SeedBankModule::SeedBankModule((SeedBankModule *)this);
  *(undefined4 *)(this + 0x48) = 1;
  *(undefined ***)this = &PTR_GetModuleClass_06948340;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x60));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  return;
}


/* PVPSeedBankModule::StaticNew() */

PVPSeedBankModule * PVPSeedBankModule::StaticNew(void)

{
  PVPSeedBankModule *this;
  
  this = ::operator_new(0x70);
  PVPSeedBankModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedBankModule::onDraw(Sexy::Graphics*) */

void __thiscall PVPSeedBankModule::onDraw(PVPSeedBankModule *this,Graphics *param_1)

{
  RtWeakPtr *pRVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  UIWidget *pUVar9;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *pSVar10;
  Image *pIVar11;
  GraphicsAutoState aGStack_70 [8];
  int local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  Insets aIStack_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x48) == 1) {
    pRVar1 = (RtWeakPtr *)(this + 0x60);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
    if (bVar2) {
      pUVar9 = (UIWidget *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      cVar3 = UIWidget::IsVisible(pUVar9);
      if (cVar3 != '\0') {
        Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_70,param_1);
        Sexy::Graphics::ClearClipRect(param_1);
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        Sexy::Insets::Insets((Insets *)&local_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        UIWidget::GetDrawRect();
        local_60 = local_40;
        local_58 = local_38;
        Sexy::Point::Point((Point *)local_68,-(int)local_40,0);
        Board::TranslateScreenPositionToBoardPosition
                  (*(Board **)(gLawnApp + 0x9f0),(Point *)local_68);
        iVar4 = FUN_04ab2254(0x14);
        local_60 = CONCAT44(local_60._4_4_,local_68[0] - iVar4);
        iVar4 = *(int *)(gLawnApp + 0x728);
        pSVar10 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80768);
        iVar7 = SalesProgressBar::GetCurrentLevel(pSVar10);
        local_60 = CONCAT44(iVar4 - iVar7,(int)local_60);
        pSVar10 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80768);
        uVar8 = SalesProgressBar::GetCurrentLevel(pSVar10);
        local_58 = CONCAT44(uVar8,(int)local_58);
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b80768,5);
        Sexy::Insets::Insets(aIStack_50,(Insets *)&local_60);
        PVZ2UIImage::Draw((PVZ2UIImage *)&local_40,param_1,aIStack_50);
        Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_70);
      }
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x50));
    if (bVar2) {
      pUVar9 = (UIWidget *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
      cVar3 = UIWidget::IsVisible(pUVar9);
      if (cVar3 != '\0') {
        Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_40,param_1);
        Sexy::Graphics::ClearClipRect(param_1);
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        iVar4 = *(int *)(gLawnApp + 0x724);
        this_00 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80738);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_00);
        iVar7 = *(int *)(gLawnApp + 0x728);
        pSVar10 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80738);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
        pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80738);
        Sexy::Graphics::DrawImage(param_1,pIVar11,iVar4 - iVar5,iVar7 - iVar6);
        Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_40);
      }
    }
  }
  else if (*(int *)(this + 0x48) == 0) {
    pRVar1 = (RtWeakPtr *)(this + 0x58);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
    if (bVar2) {
      pUVar9 = (UIWidget *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      cVar3 = UIWidget::IsVisible(pUVar9);
      if (cVar3 != '\0') {
        Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_70,param_1);
        Sexy::Graphics::ClearClipRect(param_1);
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        Sexy::Insets::Insets((Insets *)&local_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        UIWidget::GetDrawRect();
        local_60 = local_40;
        local_58 = local_38;
        Sexy::Point::Point((Point *)local_68,0,0);
        Board::TranslateUIWidgetPositionToBoardPosition
                  (*(Board **)(gLawnApp + 0x9f0),(Point *)local_68);
        local_60._0_4_ = local_68[0];
        local_58._0_4_ = *(int *)(gLawnApp + 0x724) - local_68[0];
        iVar4 = FUN_04ab2254(10);
        local_60 = CONCAT44(local_60._4_4_ - iVar4,(int)local_60);
        iVar4 = FUN_04ab2254(0x19);
        local_58 = CONCAT44(local_58._4_4_ + iVar4,(int)local_58);
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b80698,5);
        Sexy::Insets::Insets(aIStack_50,(Insets *)&local_60);
        PVZ2UIImage::Draw((PVZ2UIImage *)&local_40,param_1,aIStack_50);
        Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_70);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPSeedBankModule::~PVPSeedBankModule() */

void __thiscall PVPSeedBankModule::~PVPSeedBankModule(PVPSeedBankModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06948340;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  SeedBankModule::~SeedBankModule((SeedBankModule *)this);
  return;
}


/* PVPSeedBankModule::~PVPSeedBankModule() */

void __thiscall PVPSeedBankModule::~PVPSeedBankModule(PVPSeedBankModule *this)

{
  ~PVPSeedBankModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedBankModule::createSkillSeedBank() */

void __thiscall PVPSeedBankModule::createSkillSeedBank(PVPSeedBankModule *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ResilienceTutorialIntroProperties *pRVar9;
  ResourceInfo *this_01;
  UIWidget *pUVar10;
  SeedPacket_PVPSkill *this_02;
  string *psVar11;
  ZombiePVPSkillProps *this_03;
  GroupInfo *pGVar12;
  PVPManager *this_04;
  long lVar13;
  PVPSkillEnergyUI *this_05;
  uint uVar14;
  code *pcVar15;
  float fVar16;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtName aRStack_38 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x50);
  pRVar9 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  Sexy::RtName::RtName((RtName *)&local_18,L"UIPVPSeedBank");
  UIWidget::CreateWidget((RtName *)&local_18,0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  Sexy::RtName::~RtName((RtName *)&local_18);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar1 != '\0') {
    this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
    pcVar15 = *(code **)(*(long *)this_01 + 0x1a8);
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_28);
    (*pcVar15)(this_01,(RtName *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    FUN_04ab20f8(this_01 + 0x19c);
    std::string::string((string *)&local_18,"UIScreen");
    pUVar10 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_18);
    UIWidget::SetParentWidget((UIWidget *)this_01,pUVar10);
    std::string::~string((string *)&local_18);
    nop();
    uVar3 = FUN_04ab2254(400);
    FUN_04ab186c(this_01 + 0x38,uVar3);
    uVar3 = FUN_04ab2254(0x46);
    FUN_04ab1874(this_01 + 0x3c,uVar3);
    UIWidget::SetAnchorType((UIWidget *)this_01,1);
    UIWidget::SetParentAnchorType((UIWidget *)this_01,1);
    iVar4 = FUN_04ab2254(500);
    iVar5 = FUN_04ab2254(0x208);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar4,(float)iVar5);
    UIWidget::SetPositionOffset(local_18,local_14,this_01);
    FUN_04ab20f0(this_01 + 0x1c2);
    Sexy::RtName::RtName(aRStack_38,L"UIPVPSkillSeedPacket");
    Sexy::RtName::RtName((RtName *)&local_18,aRStack_38);
    SeedBankNew::SetSeedPacketType(this_01,(RtName *)&local_18);
    Sexy::RtName::~RtName((RtName *)&local_18);
    local_50 = FUN_04ab2894(*(undefined8 *)(pRVar9 + 0xe0));
    local_48 = FUN_04ab28e4(*(undefined8 *)(pRVar9 + 0xe8));
    while( true ) {
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
      uVar14 = (uint)bVar2;
      if (!bVar2) break;
      pGVar12 = (GroupInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50)
      ;
      Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo((GroupInfo *)aRStack_28,pGVar12);
      this_04 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      lVar13 = PVPManager::GetSkillData(this_04,(string *)aRStack_28);
      if (lVar13 == 0) {
        iVar5 = -1;
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(lVar13 + 8);
        iVar5 = iVar4 + -1;
      }
      Sexy::RtName::RtName((RtName *)&local_18,aRStack_38);
      UIWidget::CreateWidget((RtName *)&local_18,1);
      Sexy::RtName::~RtName((RtName *)&local_18);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_40);
      PVPSeedBank::AddPacket((PVPSeedBank *)this_01,(RtName *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      nop();
      psVar11 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar11);
      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar13 + 0xa0));
      nop();
      fVar16 = (float)ZombiePVPSkillProps::GetReduceCost(this_03,iVar5);
      pcVar15 = *(code **)(*(long *)this_02 + 0x1a0);
      fVar16 = (1.0 - fVar16) * *(float *)(this_03 + 0x218);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_40);
      (*pcVar15)(this_02,(RtName *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      SeedPacket_PVPSkill::InitEnergy(this_02,(int)fVar16,(int)*(float *)(this_03 + 0x21c));
      SeedPacket::setAffordable((SeedPacket *)this_02,fVar16 <= (float)*(int *)(pRVar9 + 0xd4));
      SeedPacket::SetPacketsPrefix((SeedPacket *)this_02,(string *)&PVPManager::PacketsSkillPrefix);
      uVar3 = FUN_04ab2254(0x46);
      FUN_04ab186c(this_02 + 0x38,uVar3);
      iVar5 = FUN_04ab2254(5);
      iVar6 = FUN_04ab2254(0x14);
      iVar7 = FUN_04ab2254(0xfffffff6);
      iVar8 = FUN_04ab2254(10);
      Sexy::Insets::Insets((Insets *)&local_18,iVar5,iVar6,iVar7,iVar8);
      UIButtonWidget::SetColorLabel((UIButtonWidget *)this_02,(Color *)&local_18);
      SeedPacket_PVPSkill::SetLevel(this_02,iVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_28);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_50);
    }
    Sexy::RtName::RtName((RtName *)&local_18,L"UIPVPSkillEnergy");
    UIWidget::CreateWidget((RtName *)&local_18,0);
    nop();
    Sexy::RtName::~RtName((RtName *)&local_18);
    if (this_05 != (PVPSkillEnergyUI *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x68),(RtWeakPtrBase *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      PVPSkillEnergyUI::InitEnergy(this_05,*(int *)(pRVar9 + 0xd4),*(int *)(pRVar9 + 0xd4));
      cVar1 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
      if (cVar1 != '\0') {
        iVar4 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
        uVar14 = iVar4 / 2;
      }
      iVar5 = FUN_04ab2254(0x8c);
      iVar4 = *(int *)((long)gLawnApp + 0x724);
      iVar6 = FUN_04ab2254(uVar14);
      iVar7 = FUN_04ab2254(0x1ea);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_18,(float)((iVar4 - iVar5) - iVar6),(float)iVar7);
      UIWidget::SetPositionOffset(local_18,local_14,this_05);
      FUN_04ab18ec(this_05 + 0x174,*(undefined4 *)(pRVar9 + 0xd8));
      FUN_04ab18f4(this_05 + 0x178,*(undefined4 *)(pRVar9 + 0xdc));
    }
    Sexy::RtName::~RtName(aRStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedBankModule::createZombieSeedBank() */

void __thiscall PVPSeedBankModule::createZombieSeedBank(PVPSeedBankModule *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SysFont *pSVar7;
  long lVar8;
  ResourceInfo *this_01;
  UIWidget *pUVar9;
  ResourceInfo *pRVar10;
  long *extraout_x0;
  ResilienceTutorialIntroProperties *pRVar11;
  TrainingCamp *this_02;
  undefined8 uVar12;
  string *psVar13;
  SeedPacket_PVP *this_03;
  ulong uVar14;
  SeedPacket_PVP *this_04;
  ulong uVar15;
  code *pcVar16;
  undefined1 local_54;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [16];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x60);
  LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar5 = 0;
  Sexy::RtName::RtName((RtName *)&local_20,L"UIPVPSeedBank");
  UIWidget::CreateWidget((RtName *)&local_20,0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  Sexy::RtName::~RtName((RtName *)&local_20);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30),(RtWeakPtrBase *)this_00);
  pSVar7 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  lVar8 = Sexy::SysFont::CreateImageFont(pSVar7);
  iVar2 = FUN_04ab190c(*(undefined4 *)(lVar8 + 0xc));
  this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
  FUN_04ab20f8(this_01 + 0x19c);
  FUN_04ab18d8(this_01 + 0x1f0,iVar2);
  std::string::string((string *)&local_20,"UIScreen");
  pUVar9 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_20);
  UIWidget::SetParentWidget((UIWidget *)this_01,pUVar9);
  std::string::~string((string *)&local_20);
  nop();
  uVar3 = FUN_04ab2254(500);
  FUN_04ab186c(this_01 + 0x38,uVar3);
  uVar3 = FUN_04ab2254(0x46);
  FUN_04ab1874(this_01 + 0x3c,uVar3);
  UIWidget::SetAnchorType((UIWidget *)this_01,1);
  UIWidget::SetParentAnchorType((UIWidget *)this_01,1);
  cVar1 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
  if (cVar1 != '\0') {
    iVar5 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
    iVar5 = iVar5 / 5;
  }
  iVar4 = FUN_04ab2254(10);
  iVar5 = FUN_04ab2254(iVar5);
  iVar6 = FUN_04ab2254(0x208);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,(float)(iVar4 - iVar5),(float)iVar6);
  UIWidget::SetPositionOffset(local_20,uStack_1c,this_01);
  FUN_04ab20f0(this_01 + 0x1c2);
  Sexy::RtName::RtName((RtName *)aRStack_30,L"UIPVPSeedPacket");
  Sexy::RtName::RtName((RtName *)&local_20,(RtName *)aRStack_30);
  SeedBankNew::SetSeedPacketType(this_01,(RtName *)&local_20);
  Sexy::RtName::~RtName((RtName *)&local_20);
  pcVar16 = *(code **)(*(long *)this_01 + 0x1a8);
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)aRStack_38);
  (*pcVar16)(this_01,(RtName *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  UIWidget::CompleteLoad((UIWidget *)this_01);
  local_54 = (undefined1)iVar2;
  (**(code **)(*(long *)this_01 + 0x1c0))(this_01,local_54,1);
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      iVar4 = iVar5 + 1;
      UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this_01,iVar5);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
      PVPSeedChooser::InitSeedPacketPVP((SeedPacket *)pRVar10,*(int *)(this + 0x48));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      iVar5 = iVar4;
    } while (iVar4 != iVar2);
  }
  cVar1 = (**(code **)(*(long *)this + 0xa0))(this);
  if (cVar1 == '\0') {
    lVar8 = FUN_04ab34bc(*(undefined8 *)(gLawnApp[0x13e] + 0xad8));
    if ((lVar8 == 0) || (iVar5 = FUN_04ab1910(*(undefined4 *)(lVar8 + 0x6c)), iVar5 != 4)) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      pSVar7 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      this_02 = (TrainingCamp *)Sexy::SysFont::CreateImageFont(pSVar7);
      TrainingCamp::GetHaveDatas(this_02,(vector *)&local_20);
      uVar15 = 0;
      while( true ) {
        uVar12 = CONCAT44(uStack_1c,local_20);
        uVar14 = FUN_04ab191c(uVar12,local_18);
        if (uVar14 <= uVar15) break;
        cVar1 = FUN_04ab18cc(this_01[0x199]);
        if ((int)cVar1 <= (int)uVar15) break;
        uVar12 = FUN_04ab1928(uVar12,uVar15);
        FUN_05475d88(asStack_48,uVar12);
        psVar13 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar13);
        UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this_01,(int)uVar15);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        pcVar16 = *(code **)(*(long *)this_03 + 0x1a0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_40);
        (*pcVar16)(this_03,aRStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        SeedPacket_PVP::SetCost(this_03,-1);
        SeedPacket_PVP::SetMaxNum(this_03,99999);
        lVar8 = FUN_04ab1928(CONCAT44(uStack_1c,local_20),uVar15);
        SeedPacket_PVP::SetCurNum(this_03,*(int *)(lVar8 + 8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        std::string::~string(asStack_48);
        uVar15 = uVar15 + 1;
      }
      std::vector<TrainingData,std::allocator<TrainingData>>::~vector
                ((vector<TrainingData,std::allocator<TrainingData>> *)&local_20);
    }
    else {
      psVar13 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      std::string::string((string *)&local_20,"pvp_change");
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar13);
      std::string::~string((string *)&local_20);
      nop();
      UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this_01,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      pcVar16 = *(code **)(*(long *)this_04 + 0x1a0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)aRStack_38);
      (*pcVar16)(this_04,(RtName *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      SeedPacket_PVP::SetCost(this_04,-1);
      SeedPacket_PVP::SetMaxNum(this_04,99999);
      SeedPacket_PVP::SetCurNum(this_04,0x14);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    }
  }
  else {
    Sexy::RtName::RtName((RtName *)&local_20,L"UIPVPSeedChooser");
    UIWidget::CreateWidget((RtName *)&local_20,0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38),(RtWeakPtrBase *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtName::~RtName((RtName *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
    nop();
    Sexy::RtName::RtName((RtName *)&local_20,(RtName *)aRStack_30);
    SeedChooser::SetSeedPacketType(extraout_x0,(RtName *)&local_20);
    Sexy::RtName::~RtName((RtName *)&local_20);
    FUN_04ab18e4((long)extraout_x0 + 0x34c,*(undefined4 *)(this + 0x48));
    FUN_04ab18d0((long)extraout_x0 + 0x1e6,local_54);
    pcVar16 = *(code **)(*extraout_x0 + 0x1a0);
    pRVar11 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    (*pcVar16)(extraout_x0,pRVar11);
  }
  Sexy::RtName::~RtName((RtName *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedBankModule::createPlantSeedBank() */

void PVPSeedBankModule::createPlantSeedBank(void)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this;
  uint uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar7;
  ResourceInfo *this_00;
  UIWidget *pUVar8;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  SeedPacket_PVP *this_03;
  string *psVar9;
  long *plVar10;
  PVPManager *this_04;
  GroupInfo *pGVar11;
  int in_w3;
  code *pcVar12;
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtName aRStack_38 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  int local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 0x58);
  pRVar7 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  Sexy::RtName::RtName((RtName *)&local_18,L"UIPVPSeedBank");
  UIWidget::CreateWidget((RtName *)&local_18,0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  Sexy::RtName::~RtName((RtName *)&local_18);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 0x30),(RtWeakPtrBase *)this);
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this);
  FUN_04ab20f8(this_00 + 0x19c);
  FUN_04ab18d8(this_00 + 0x1f0,6);
  pcVar12 = *(code **)(*(long *)this_00 + 0x1a8);
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_28);
  (*pcVar12)(this_00,(RtName *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  std::string::string((string *)&local_18,"UIScreen");
  pUVar8 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_18);
  UIWidget::SetParentWidget((UIWidget *)this_00,pUVar8);
  std::string::~string((string *)&local_18);
  nop();
  uVar4 = FUN_04ab2254(500);
  FUN_04ab186c(this_00 + 0x38,uVar4);
  uVar4 = FUN_04ab2254(0x46);
  FUN_04ab1874(this_00 + 0x3c,uVar4);
  UIWidget::SetAnchorType((UIWidget *)this_00,1);
  UIWidget::SetParentAnchorType((UIWidget *)this_00,1);
  iVar5 = FUN_04ab2254(0x96);
  iVar6 = FUN_04ab2254(0x217);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar5,(float)iVar6);
  UIWidget::SetPositionOffset(local_18,local_14,this_00);
  FUN_04ab20f0(this_00 + 0x1c2);
  Sexy::RtName::RtName(aRStack_38,L"UIPVPSeedPacket");
  Sexy::RtName::RtName((RtName *)&local_18,aRStack_38);
  SeedBankNew::SetSeedPacketType(this_00,(RtName *)&local_18);
  Sexy::RtName::~RtName((RtName *)&local_18);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  local_58 = FUN_04ab2934(*(undefined8 *)(pRVar7 + 0xf8));
  local_50 = FUN_04ab2984(*(undefined8 *)(pRVar7 + 0x100));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar2) {
    pGVar11 = (GroupInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo((GroupInfo *)aRStack_28,pGVar11);
    cVar3 = PlayerInfo::GetIsPlantUnlocked(this_02,(string *)aRStack_28);
    if (cVar3 == '\0') {
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_28);
    }
    else {
      Sexy::RtName::RtName((RtName *)&local_18,aRStack_38);
      UIWidget::CreateWidget((RtName *)&local_18,1);
      Sexy::RtName::~RtName((RtName *)&local_18);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_40);
      PVPSeedBank::AddPacket((PVPSeedBank *)this_00,(RtName *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      nop();
      psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
      pcVar12 = *(code **)(*(long *)this_03 + 0x198);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_48);
      (*pcVar12)(this_03,(RtName *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      SeedPacket_PVP::SetMaxNum(this_03,local_20);
      SeedPacket_PVP::SetCurNum(this_03,local_20);
      plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      iVar5 = (**(code **)(*plVar10 + 0x70))(plVar10,0xfffffffe);
      SeedPacket_PVP::SetCost(this_03,iVar5);
      uVar1 = local_1c;
      this_04 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar5 = PVPManager::GetHomeLevel(this_04);
      if (iVar5 < (int)uVar1) {
        std::string::string((string *)aRStack_40,"[PVP_SEEDPACKET_LOCKED]");
        StringHelper::ReplaceNumberString
                  ((StringHelper *)aRStack_40,(string *)L"{NUMBER}",(wchar_t *)(ulong)local_1c,in_w3
                  );
        SeedPacket_PVP::SetLocked(this_03,true,(wstring *)&local_18);
        FUN_05476c50((RtName *)&local_18);
        std::string::~string((string *)aRStack_40);
        nop();
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_28);
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_58);
  }
  Sexy::RtName::~RtName(aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedBankModule::onLoadComplete() */

void __thiscall PVPSeedBankModule::onLoadComplete(PVPSeedBankModule *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_04ab34b0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  lVar4 = FUN_04ab34bc(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if ((lVar4 == 0) && (lVar3 == 0)) {
    lVar3 = FUN_04ab34c8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (lVar3 == 0) {
      if (*(int *)(this + 0x48) != 0) goto LAB_04ab4df8;
    }
    else {
      *(undefined4 *)(this + 0x48) = 0;
    }
    createPlantSeedBank();
  }
  else {
    *(undefined4 *)(this + 0x48) = 1;
LAB_04ab4df8:
    createSkillSeedBank(this);
    createZombieSeedBank(this);
  }
  std::string::string((string *)&local_10,"UIShovel");
  lVar3 = UIWidget::GetWidgetBySheetName((string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  if (lVar3 != 0) {
    iVar1 = FUN_04ab2254(0x14);
    iVar2 = FUN_04ab2254(0xffffff9c);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar1,(float)iVar2);
    UIWidget::SetPositionOffset(local_10,local_c,lVar3);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedBankModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall PVPSeedBankModule::AddResourceRequirements(PVPSeedBankModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::string::string(asStack_10,"UI_PVP_INGAME");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PVP_INBATTLEANIM");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedBankModule::StaticClassInit() */

void PVPSeedBankModule::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"PVPMode_Plant",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"PVPMode_Zombie",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"PVPMode");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"PVPSeedBankModule");
    (*pcVar3)(plVar2,avStack_20,FUN_04ab517c,0x70,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPSeedBankModule::StaticGetClass() */

long * PVPSeedBankModule::StaticGetClass(void)

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
  uVar2 = SeedBankModule::StaticGetClass();
  (*pcVar3)(plVar1,"PVPSeedBankModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedBankModule::registerForEvents() */

void __thiscall PVPSeedBankModule::registerForEvents(PVPSeedBankModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate1<RenderQueue*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedBankModule::registerForEvents((SeedBankModule *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAddToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<PVPSeedBankModule,void(PVPSeedBankModule::*)(RenderQueue*)>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantShoveled);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PVPSeedBankModule,void(PVPSeedBankModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantShoveled,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedBankModule::onGameStarted() */

void __thiscall PVPSeedBankModule::onGameStarted(PVPSeedBankModule *this)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  ResourceInfo *this_00;
  long lVar5;
  UIWidgetAnim *this_01;
  vector *pvVar6;
  int *piVar7;
  RtObject *this_02;
  SeedPacket_PVP *this_03;
  long *plVar8;
  UIWidget *pUVar9;
  Board *this_04;
  undefined8 local_50;
  undefined8 local_48;
  string asStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  ServerPlantID aSStack_30 [16];
  vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  renewSkillSeedBank(this);
  if (*(int *)(this + 0x48) == 0) {
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x58));
    lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar4 = FUN_04ab18fc(*(undefined4 *)(lVar5 + 0x128));
    if (iVar4 == 2) {
      UIWidget::SetVisible((UIWidget *)this_00,false);
    }
    else {
      UIWidget::SetVisible((UIWidget *)this_00,true);
      this_01 = (UIWidgetAnim *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      pvVar6 = (vector *)UIWidgetAnim::GetScale(this_01);
      std::vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>>::vector
                (avStack_20,pvVar6);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48),
            bVar1) {
        piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
        ServerPlantID::ServerPlantID(aSStack_30,*piVar7);
        ServerPlantID::ToString();
        SeedBankNew::GetPacket((string *)this_00);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_38);
        if (cVar2 != '\0') {
          this_02 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          this_03 = Sexy::RtObject::Cast<SeedPacket_PVP>(this_02);
          if (this_03 != (SeedPacket_PVP *)0x0) {
            iVar4 = FUN_04ab18e0(*(undefined4 *)(this_03 + 0x200));
            SeedPacket_PVP::SetCurNum(this_03,iVar4 + -1);
            this_04 = *(Board **)(gLawnApp + 0x9f0);
            SeedPacket::GetPlantType();
            plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_30);
            iVar4 = (**(code **)(*plVar8 + 0x70))(plVar8,0xfffffffe);
            Board::TakeSunMoney(this_04,iVar4,true,false);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_30);
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        std::string::~string(asStack_40);
        __gnu_cxx::
        __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
        ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                      *)&local_50);
      }
      std::vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>>::~vector
                (avStack_20);
    }
    goto LAB_04ab6698;
  }
  lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  cVar2 = FUN_04ab1900(*(undefined1 *)(lVar5 + 0x174));
  if (cVar2 == '\0') {
    lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    cVar2 = FUN_04ab1908(*(undefined1 *)(lVar5 + 0x221));
    if (cVar2 != '\0') goto LAB_04ab665c;
    lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    bVar3 = FUN_04ab1904(*(undefined1 *)(lVar5 + 0x176));
    bVar3 = bVar3 ^ 1;
  }
  else {
LAB_04ab665c:
    bVar3 = false;
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x60));
  if (cVar2 != '\0') {
    pUVar9 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
    UIWidget::SetVisible(pUVar9,(bool)bVar3);
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x68));
  if (cVar2 != '\0') {
    pUVar9 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
    UIWidget::SetVisible(pUVar9,(bool)bVar3);
  }
LAB_04ab6698:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

