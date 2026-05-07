// Class: BundleDescWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BundleDescWidget::GetStringWidth() */

void __thiscall BundleDescWidget::GetStringWidth(BundleDescWidget *this)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_18 = 0;
  local_8 = ___stack_chk_guard;
  local_14 = 0;
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  FUN_05477b24(auStack_10,this + 0xe0);
  Sexy::PrimeTypeface::SizeString_Paragraph(0,uVar1,auStack_10,&local_18,&local_14);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18);
}


/* BundleDescWidget::~BundleDescWidget() */

void __thiscall BundleDescWidget::~BundleDescWidget(BundleDescWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0692bd80;
  FUN_05476c50(this + 0xe0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* BundleDescWidget::~BundleDescWidget() */

void __thiscall BundleDescWidget::~BundleDescWidget(BundleDescWidget *this)

{
  ~BundleDescWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BundleDescWidget::BundleDescWidget(std::string const&, std::wstring const&, int) */

void __thiscall
BundleDescWidget::BundleDescWidget
          (BundleDescWidget *this,string *param_1,wstring *param_2,int param_3)

{
  bool bVar1;
  string *extraout_x1;
  string *extraout_x1_00;
  string *psVar2;
  string *extraout_x1_01;
  Sexy aSStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0692bd80;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  FUN_05477b24(this + 0xe0,param_2);
  FUN_05475d88(aSStack_20,param_1);
  bVar1 = std::operator==(param_1,"plant_piece");
  psVar2 = extraout_x1;
  if (((bVar1) || (bVar1 = std::operator==(param_1,"plant"), psVar2 = extraout_x1_01, bVar1)) &&
     (-1 < param_3)) {
    Sexy::StrFormat("_%d",asStack_10,(ulong)(uint)param_3);
    thunk_FUN_054757c0(aSStack_20,asStack_10);
    std::string::~string(asStack_10);
    psVar2 = extraout_x1_00;
  }
  Sexy::StringToUpper(aSStack_20,psVar2);
  std::operator+((string *)&DAT_06b77c68,asStack_10);
  std::string::~string(asStack_10);
  GetImageByName(asStack_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd8),(RtWeakPtr *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  std::string::~string((string *)aSStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BundleDescWidget::Draw(Sexy::Graphics*) */

void __thiscall BundleDescWidget::Draw(BundleDescWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  SalesProgressBar *this_00;
  PrimeTypeface *pPVar4;
  undefined1 auStack_40 [8];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pIVar3 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  iVar2 = *(int *)(this + 0x54);
  this_00 = (SalesProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8))
  ;
  iVar1 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar3,0,(iVar2 - iVar1) / 2);
  iVar2 = FUN_049ec7f8(0x23);
  Sexy::Insets::Insets(aIStack_38,iVar2,0,*(int *)(this + 0x50) - iVar2,*(int *)(this + 0x54));
  pPVar4 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  Sexy::Insets::Insets(aIStack_28,aIStack_38);
  FUN_05477b24(auStack_40,this + 0xe0);
  Sexy::Color::Color(aCStack_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph(pPVar4,param_1,aIStack_28,auStack_40,0,1,aCStack_18,0);
  FUN_05476c50(auStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

