// Class: RecommendPlantUI


/* RecommendPlantUI::~RecommendPlantUI() */

void __thiscall RecommendPlantUI::~RecommendPlantUI(RecommendPlantUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06734e20;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RecommendPlantUI::~RecommendPlantUI() */

void __thiscall RecommendPlantUI::~RecommendPlantUI(RecommendPlantUI *this)

{
  ~RecommendPlantUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecommendPlantUI::RecommendPlantUI(Sexy::RtWeakPtr<ZombieType const>, Sexy::TRect<int> const&) */

void __thiscall
RecommendPlantUI::RecommendPlantUI
          (RecommendPlantUI *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,TRect *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  Widget *pWVar6;
  undefined8 local_38;
  undefined8 local_30;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06734e20;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  PlantHeadshot::Resize((PlantHeadshot *)this,param_3);
  iVar2 = FUN_03b839d4(10);
  iVar3 = FUN_03b839d4(0x78);
  iVar2 = iVar2 + iVar3;
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20,(vector *)(lVar4 + 0x30));
  local_38 = FUN_03b839e8(local_20);
  local_30 = FUN_03b83a38(local_18);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    FUN_05475d88(asStack_28,uVar5);
    pWVar6 = ::operator_new(0x138);
    PlantHeadshot::PlantHeadshot((PlantHeadshot *)pWVar6,asStack_28);
    std::string::~string(asStack_28);
    (**(code **)(*(long *)pWVar6 + 0x1a8))
              (pWVar6,iVar2,(*(int *)(this + 0x54) - *(int *)(pWVar6 + 0x54)) / 2);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,pWVar6);
    iVar3 = FUN_03b839d4(0xc);
    iVar2 = iVar2 + iVar3 + *(int *)(pWVar6 + 0x50);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RecommendPlantUI::Draw(Sexy::Graphics*) */

void __thiscall RecommendPlantUI::Draw(RecommendPlantUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  PrimeTypeface *pPVar6;
  undefined1 auStack_40 [8];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03b839d4(2);
  Sexy::Insets::Insets(aIStack_18,iVar1,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06accb68);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  nop();
  iVar1 = FUN_03b839d4(10);
  iVar2 = FUN_03b839d4(5);
  iVar3 = FUN_03b839d4(0x78);
  iVar4 = FUN_03b839d4(0x32);
  Sexy::Insets::Insets(aIStack_38,iVar1,iVar2,iVar3,iVar4);
  pPVar6 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_28,aIStack_38);
  TodStringTranslate(L"[BOARD_ALMANAC_RECOMMEND_PLANT]");
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_AlmanacDesc);
  Sexy::PrimeTypeface::DrawString_Paragraph(pPVar6,param_1,aIStack_28,auStack_40,1,1,aIStack_18,0);
  FUN_05476c50(auStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

