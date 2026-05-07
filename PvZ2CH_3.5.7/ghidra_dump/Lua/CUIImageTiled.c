// Class: Lua::CUIImageTiled


/* Lua::CUIImageTiled::~CUIImageTiled() */

void __thiscall Lua::CUIImageTiled::~CUIImageTiled(CUIImageTiled *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2ab50;
  CUIImage::~CUIImage((CUIImage *)this);
  return;
}


/* Lua::CUIImageTiled::~CUIImageTiled() */

void __thiscall Lua::CUIImageTiled::~CUIImageTiled(CUIImageTiled *this)

{
  ~CUIImageTiled(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIImageTiled::CUIImageTiled(std::string const&, Sexy::TRect<int>) */

void __thiscall
Lua::CUIImageTiled::CUIImageTiled(CUIImageTiled *this,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CUIImage::CUIImage((CUIImage *)this);
  *(undefined ***)this = &PTR_GetClass_06a2ab50;
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  LawnApp::GetUIImageFromStringId(gLawnApp);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd8),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar2 = ___stack_chk_guard;
  uVar1 = param_3[1];
  *(undefined8 *)(this + 0x128) = *param_3;
  *(undefined8 *)(this + 0x130) = uVar1;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIImageTiled::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
Lua::CUIImageTiled::DrawAll(CUIImageTiled *this,ModalFlags *param_1,Graphics *param_2)

{
  ResourceInfo *pRVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x128));
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xd8));
  DrawImageTiled(0x3f800000,param_2,aIStack_18,pRVar1);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

