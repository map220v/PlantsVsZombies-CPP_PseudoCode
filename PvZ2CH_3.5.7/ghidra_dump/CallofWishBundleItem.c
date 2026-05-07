// Class: CallofWishBundleItem


/* CallofWishBundleItem::~CallofWishBundleItem() */

void __thiscall CallofWishBundleItem::~CallofWishBundleItem(CallofWishBundleItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066f2a00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f2d28;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x108));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CallofWishBundleItem::~CallofWishBundleItem() */

void __thiscall CallofWishBundleItem::~CallofWishBundleItem(CallofWishBundleItem *this)

{
  ~CallofWishBundleItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishBundleItem::InitView(CallofWishTab, int, int) */

void __thiscall
CallofWishBundleItem::InitView
          (CallofWishBundleItem *this,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  PVZ2UIButton *pPVar5;
  size_t __n;
  long *plVar6;
  code *pcVar7;
  undefined1 auStack_88 [8];
  wstring awStack_80 [8];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  *(undefined4 *)(this + 0xe4) = param_4;
  local_8 = ___stack_chk_guard;
  __n = (size_t)(param_3 + 1);
  *(undefined4 *)(this + 0xe8) = param_2;
  *(int *)(this + 0xe0) = param_3;
  Sexy::StrFormat("IMAGE_UI_CALLOFWISH_BUNDLE%d%d",asStack_40);
  uVar4 = StringHelper::ToImage(asStack_40,false);
  *(undefined8 *)(this + 0xf0) = uVar4;
  std::string::~string(asStack_40);
  if (*(int *)(this + 0xe8) == 4) {
    if (param_3 == 0) {
      *(undefined4 *)(this + 0x100) = 1;
      iVar1 = 0x1e;
      std::string::append((string *)(this + 0x108),"com.popcap.ios.chs.PVZ2.CallofWishLimit30",__n);
      goto LAB_039d4048;
    }
    if (param_3 == 1) {
      *(undefined4 *)(this + 0x100) = 2;
      iVar1 = 0x44;
      std::string::append((string *)(this + 0x108),"com.popcap.ios.chs.PVZ2.CallofWishLimit68",__n);
      goto LAB_039d4048;
    }
    if (param_3 == 2) {
      *(undefined4 *)(this + 0x100) = 3;
      iVar1 = 0x80;
      std::string::append((string *)(this + 0x108),"com.popcap.ios.chs.PVZ2.CallofWishLimit128",__n)
      ;
      goto LAB_039d4048;
    }
  }
  else if (*(int *)(this + 0xe8) == 3) {
    if (param_3 == 0) {
      *(undefined4 *)(this + 0x100) = 4;
      iVar1 = 6;
      std::string::append((string *)(this + 0x108),"com.popcap.ios.chs.PVZ2.CallofWishDaily6",__n);
      goto LAB_039d4048;
    }
    if (param_3 == 1) {
      *(undefined4 *)(this + 0x100) = 5;
      iVar1 = 0xc;
      std::string::append((string *)(this + 0x108),"com.popcap.ios.chs.PVZ2.CallofWishDaily12",__n);
      goto LAB_039d4048;
    }
    if (param_3 == 2) {
      *(undefined4 *)(this + 0x100) = 6;
      iVar1 = 0x1e;
      std::string::append((string *)(this + 0x108),"com.popcap.ios.chs.PVZ2.CallofWishDaily30",__n);
      goto LAB_039d4048;
    }
  }
  iVar1 = 99999;
LAB_039d4048:
  if (*(long *)(this + 0xf8) == 0) {
    FUN_05478178(awStack_80,L"[SECRET_BUY_STR]",auStack_88);
    TodReplaceNumberString(awStack_80,L"{NUMBER}",iVar1);
    Sexy::Color::Color((Color *)asStack_40,1);
    pPVar5 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar5,0x130,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)asStack_40);
    *(PVZ2UIButton **)(this + 0xf8) = pPVar5;
    FUN_05476c50(awStack_78);
    FUN_05476c50(awStack_80);
    nop();
    pPVar5 = *(PVZ2UIButton **)(this + 0xf8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac1558,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ac1688,3);
    PVZ2UIButton::SetDialogStates(pPVar5,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
    plVar6 = *(long **)(this + 0xf8);
    pcVar7 = *(code **)(*plVar6 + 0x1a0);
    iVar1 = FUN_039d34f4(0x7d);
    iVar2 = FUN_039d34f4(200);
    iVar3 = FUN_039d34f4(0x32);
    Sexy::Insets::Insets((Insets *)asStack_40,(*(int *)(this + 0x50) - iVar1) / 2,iVar2,iVar1,iVar3)
    ;
    (*pcVar7)(plVar6,asStack_40);
    plVar6 = *(long **)(this + 0xf8);
    pcVar7 = *(code **)(*plVar6 + 800);
    uVar4 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_24_HardShadow);
    (*pcVar7)(plVar6,uVar4);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
    if (*(int *)(this + 0xe4) < 1) {
      (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CallofWishBundleItem::ButtonDepress(int) */

void __thiscall CallofWishBundleItem::ButtonDepress(CallofWishBundleItem *this,int param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  
  if (param_1 != 0x130) {
    return;
  }
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this_00);
  PurchaseBroker::RequestPayment(this_01,(string *)(this + 0x108),0);
  return;
}


/* non-virtual thunk to CallofWishBundleItem::ButtonDepress(int) */

void __thiscall CallofWishBundleItem::ButtonDepress(CallofWishBundleItem *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* CallofWishBundleItem::onBuyGacha(int) */

void __thiscall CallofWishBundleItem::onBuyGacha(CallofWishBundleItem *this,int param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (*(int *)(this + 0x100) != param_1) {
    return;
  }
  if (*(int *)(this + 0xe8) == 4) {
    lVar3 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
    uVar4 = FUN_039d2760(*(undefined8 *)(lVar3 + 0x88),*(undefined8 *)(lVar3 + 0x90));
    if (uVar4 <= (ulong)(long)*(int *)(this + 0xe0)) goto LAB_039d5650;
    lVar3 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
    uVar5 = *(undefined8 *)(lVar3 + 0x88);
  }
  else {
    if (*(int *)(this + 0xe8) != 3) goto LAB_039d5650;
    lVar3 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
    uVar4 = FUN_039d2760(*(undefined8 *)(lVar3 + 0x70),*(undefined8 *)(lVar3 + 0x78));
    if (uVar4 <= (ulong)(long)*(int *)(this + 0xe0)) goto LAB_039d5650;
    lVar3 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
    uVar5 = *(undefined8 *)(lVar3 + 0x70);
  }
  piVar2 = (int *)FUN_039d2790(uVar5,(long)*(int *)(this + 0xe0));
  *piVar2 = *piVar2 + -1;
LAB_039d5650:
  iVar1 = *(int *)(this + 0xe4);
  *(int *)(this + 0xe4) = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
  }
  return;
}


/* CallofWishBundleItem::CallofWishBundleItem() */

void __thiscall CallofWishBundleItem::CallofWishBundleItem(CallofWishBundleItem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR_GetClass_066f2a00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f2d28;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  Set8BytesTo0(this + 0x108);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBuyGacha);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<CallofWishBundleItem,void(CallofWishBundleItem::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyCallofWish,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishBundleItem::Draw(Sexy::Graphics*) */

void __thiscall CallofWishBundleItem::Draw(CallofWishBundleItem *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  RenderEffectDefinition *pRVar6;
  RenderEffect *pRVar7;
  Image *pIVar8;
  code *pcVar9;
  undefined1 auStack_58 [8];
  wstring awStack_50 [8];
  wstring awStack_48 [8];
  Color aCStack_40 [16];
  Color aCStack_30 [16];
  Insets aIStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe4) < 1) {
    pRVar6 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
    CachedResourcePtr::operator_cast_to_RenderEffectDefinition_((CachedResourcePtr *)&DAT_06ac14a0);
    pRVar7 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar6);
    pcVar9 = *(code **)(*(long *)pRVar7 + 0x38);
    std::string::string((string *)aIStack_20,"Default");
    (*pcVar9)(pRVar7,(string *)aIStack_20,1);
    std::string::~string((string *)aIStack_20);
    nop();
    Sexy::RenderEffectAutoState::RenderEffectAutoState
              ((RenderEffectAutoState *)aIStack_20,param_1,pRVar7,1);
    while( true ) {
      bVar1 = Sexy::RenderEffectAutoState::operator_cast_to_bool
                        ((RenderEffectAutoState *)aIStack_20);
      if (!bVar1) break;
      pIVar8 = *(Image **)(this + 0xf0);
      if (pIVar8 != (Image *)0x0) {
        iVar2 = FUN_039d34f4(0);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar8,iVar2,iVar2,*(int *)(this + 0x50),*(int *)(this + 0x54));
        FUN_05478178(awStack_50,L"[PLANTBUNDLE_LIMITED_BUY]",auStack_58);
        TodReplaceNumberString(awStack_50,L"{NUMBER}",*(int *)(this + 0xe4));
        iVar2 = FUN_039d34f4(0);
        iVar3 = FUN_039d34f4(0xfd);
        iVar4 = FUN_039d34f4(0x1e);
        Sexy::Insets::Insets((Insets *)aCStack_30,iVar2,iVar3,*(int *)(this + 0x50),iVar4);
        uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
        Sexy::Color::Color(aCStack_40,0x66,0x37,0);
        WriteWordInRect(param_1,awStack_48,(Insets *)aCStack_30,uVar5,aCStack_40,5,1);
        FUN_05476c50(awStack_48);
        FUN_05476c50(awStack_50);
        nop();
      }
      Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)aIStack_20);
    }
    Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)aIStack_20);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac11c0);
    iVar2 = FUN_039d34f4(0);
    Sexy::Graphics::DrawImage
              (param_1,pIVar8,iVar2,iVar2,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  else {
    pIVar8 = *(Image **)(this + 0xf0);
    if (pIVar8 != (Image *)0x0) {
      iVar2 = FUN_039d34f4(0);
      Sexy::Graphics::DrawImage
                (param_1,pIVar8,iVar2,iVar2,*(int *)(this + 0x50),*(int *)(this + 0x54));
      FUN_05478178(awStack_48,L"[PLANTBUNDLE_LIMITED_BUY]",awStack_50);
      TodReplaceNumberString(awStack_48,L"{NUMBER}",*(int *)(this + 0xe4));
      iVar2 = FUN_039d34f4(0);
      iVar3 = FUN_039d34f4(0xfd);
      iVar4 = FUN_039d34f4(0x1e);
      Sexy::Insets::Insets(aIStack_20,iVar2,iVar3,*(int *)(this + 0x50),iVar4);
      uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      Sexy::Color::Color(aCStack_30,0x66,0x37,0);
      WriteWordInRect(param_1,aCStack_40,aIStack_20,uVar5,aCStack_30,5,1);
      FUN_05476c50(aCStack_40);
      FUN_05476c50(awStack_48);
      nop();
    }
  }
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

