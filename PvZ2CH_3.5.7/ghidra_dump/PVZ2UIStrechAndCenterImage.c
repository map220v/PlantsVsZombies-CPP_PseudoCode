// Class: PVZ2UIStrechAndCenterImage


/* PVZ2UIStrechAndCenterImage::~PVZ2UIStrechAndCenterImage() */

void __thiscall
PVZ2UIStrechAndCenterImage::~PVZ2UIStrechAndCenterImage(PVZ2UIStrechAndCenterImage *this)

{
  *(undefined ***)this = &PTR_GetClass_06837a60;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ2UIStrechAndCenterImage::~PVZ2UIStrechAndCenterImage() */

void __thiscall
PVZ2UIStrechAndCenterImage::~PVZ2UIStrechAndCenterImage(PVZ2UIStrechAndCenterImage *this)

{
  ~PVZ2UIStrechAndCenterImage(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UIStrechAndCenterImage::PVZ2UIStrechAndCenterImage() */

void __thiscall
PVZ2UIStrechAndCenterImage::PVZ2UIStrechAndCenterImage(PVZ2UIStrechAndCenterImage *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06837a60;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStrechAndCenterImage::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIStrechAndCenterImage::Draw(PVZ2UIStrechAndCenterImage *this,Graphics *param_1)

{
  RtMixedPtr<Sexy::Image> *this_00;
  int iVar1;
  char cVar2;
  ResourceInfo *pRVar3;
  long lVar4;
  GraphicsAutoState aGStack_30 [8];
  TRect aTStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar2 == '\0') {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    StretchAndCenterImageInRect(aTStack_28,pRVar3,aIStack_18);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar1 = *(int *)(lVar4 + 0x38);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar1,*(int *)(lVar4 + 0x3c));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar3,aTStack_28,(TRect *)aIStack_18);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

