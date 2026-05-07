// Class: HotUIHelpers


/* HotUIHelpers::GetInsetsFromDynamicPadding(DynamicPadding const&) */

void __thiscall
HotUIHelpers::GetInsetsFromDynamicPadding(HotUIHelpers *this,DynamicPadding *param_1)

{
  Insets *in_x8;
  float fVar1;
  
  Sexy::Insets::Insets(in_x8,0,0,0,0);
  if (*(int *)(this + 8) == 0) {
    fVar1 = (float)FUN_036267a0(*(undefined4 *)(this + 0xc));
    *(int *)in_x8 = (int)fVar1;
  }
  if (*(int *)(this + 0x28) == 0) {
    fVar1 = (float)FUN_036267a0(*(undefined4 *)(this + 0x2c));
    *(int *)(in_x8 + 8) = (int)fVar1;
  }
  if (*(int *)(this + 0x18) == 0) {
    fVar1 = (float)FUN_036267a0(*(undefined4 *)(this + 0x1c));
    *(int *)(in_x8 + 4) = (int)(fVar1 + (float)*(int *)(in_x8 + 4));
  }
  if (*(int *)(this + 0x38) == 0) {
    fVar1 = (float)FUN_036267a0(*(undefined4 *)(this + 0x3c));
    *(int *)(in_x8 + 0xc) = (int)(fVar1 + (float)*(int *)(in_x8 + 0xc));
  }
  return;
}


/* HotUIHelpers::DoLayoutPassOnWidget(HotUIWidget*) */

byte HotUIHelpers::DoLayoutPassOnWidget(HotUIWidget *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = HotUIWidget::LayoutWidget(param_1);
  bVar2 = (**(code **)(*(long *)param_1 + 0x310))(param_1);
  bVar3 = HotUIWidget::LayoutWidgetViaContent(param_1);
  return bVar3 | bVar2 | bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIHelpers::GetImageFromStringId(std::string const&) */

void __thiscall HotUIHelpers::GetImageFromStringId(HotUIHelpers *this,string *param_1)

{
  string *psVar1;
  char cVar2;
  long lVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  lVar3 = FUN_05474374(this,"IMAGE_UI_",0);
  if (lVar3 == -1) {
    LawnApp::GetImageFromStringId(gLawnApp,(int)this);
  }
  else {
    LawnApp::GetUIImageFromStringId(gLawnApp);
  }
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)in_x8);
  psVar1 = gLawnApp;
  if (cVar2 == '\0') {
    std::string::string(asStack_18,"IMAGE_MISSING_IMAGE");
    LawnApp::GetImageFromStringId(psVar1,(int)asStack_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIHelpers::LayoutAndPositionWidget(Sexy::RtWeakPtr<HotUIWidget>) */

void HotUIHelpers::LayoutAndPositionWidget(RtWeakPtrBase *param_1)

{
  bool bVar1;
  byte bVar2;
  HotUIManager *pHVar3;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  vector *pvVar4;
  WidgetHotSwapData *pWVar5;
  HotUIWidget *pHVar6;
  byte bVar7;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>> avStack_50 [24];
  undefined8 local_38 [3];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar3 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,param_1);
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)HotUIManager::GetUIFileForWidget(pHVar3,aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  pvVar4 = (vector *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(this);
  std::vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>>::vector(avStack_50,pvVar4);
  do {
    bVar7 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_50);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar1)
    {
      pWVar5 = (WidgetHotSwapData *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
      WidgetHotSwapData::WidgetHotSwapData((WidgetHotSwapData *)aRStack_20,pWVar5);
      pHVar6 = (HotUIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      bVar2 = DoLayoutPassOnWidget(pHVar6);
      if (bVar2 != 0) {
        HotUIWidget::GetName(pHVar6);
        std::vector<std::string,std::allocator<std::string>>::push_back
                  ((vector<std::string,std::allocator<std::string>> *)local_38,(string *)&local_58);
        std::string::~string((string *)&local_58);
      }
      bVar7 = bVar2 | bVar7;
      WidgetHotSwapData::~WidgetHotSwapData((WidgetHotSwapData *)aRStack_20);
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_68);
    }
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)local_38);
  } while (bVar7 != 0);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
  local_38[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_50);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_38)
        , bVar1) {
    pWVar5 = (WidgetHotSwapData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    WidgetHotSwapData::WidgetHotSwapData((WidgetHotSwapData *)aRStack_20,pWVar5);
    pHVar6 = (HotUIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    HotUIWidget::FinalizeLayout(pHVar6);
    WidgetHotSwapData::~WidgetHotSwapData((WidgetHotSwapData *)aRStack_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_58);
  }
  std::vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>>::~vector(avStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

