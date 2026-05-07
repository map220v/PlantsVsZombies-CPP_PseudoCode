// Class: Lua::CUIProgress


/* Lua::CUIProgress::SetProgress(float) */

void __thiscall Lua::CUIProgress::SetProgress(CUIProgress *this,float param_1)

{
  *(float *)(this + 0xd4) = param_1;
  return;
}


/* Lua::CUIProgress::~CUIProgress() */

void __thiscall Lua::CUIProgress::~CUIProgress(CUIProgress *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2be10;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* Lua::CUIProgress::~CUIProgress() */

void __thiscall Lua::CUIProgress::~CUIProgress(CUIProgress *this)

{
  ~CUIProgress(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIProgress::CUIProgress(char const*) */

void __thiscall Lua::CUIProgress::CUIProgress(CUIProgress *this,char *param_1)

{
  string *psVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06a2be10;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  *(undefined4 *)(this + 0xd4) = 0;
  psVar1 = gLawnApp;
  std::string::string(asStack_10,param_1);
  LawnApp::GetUIImageFromStringId(psVar1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd8),(RtWeakPtr *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIProgress::Draw(Sexy::Graphics*) */

void __thiscall Lua::CUIProgress::Draw(CUIProgress *this,Graphics *param_1)

{
  char cVar1;
  ResourceInfo *pRVar2;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0.0 < *(float *)(this + 0xd4)) {
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 0xd8));
    if (cVar1 == '\0') {
      Sexy::Insets::Insets
                (aIStack_28,*(int *)(this + 0x48),*(int *)(this + 0x4c),
                 (int)((float)*(int *)(this + 0x50) * *(float *)(this + 0xd4)),*(int *)(this + 0x54)
                );
      Sexy::Insets::Insets(aIStack_18,aIStack_28);
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xd8));
      Draw9SliceImage(param_1,aIStack_18,pRVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

