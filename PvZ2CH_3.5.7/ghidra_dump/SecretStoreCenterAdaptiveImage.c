// Class: SecretStoreCenterAdaptiveImage


/* SecretStoreCenterAdaptiveImage::~SecretStoreCenterAdaptiveImage() */

void __thiscall
SecretStoreCenterAdaptiveImage::~SecretStoreCenterAdaptiveImage
          (SecretStoreCenterAdaptiveImage *this)

{
  *(undefined ***)this = &PTR_GetClass_067751e0;
  SecretStoreImage::~SecretStoreImage((SecretStoreImage *)this);
  return;
}


/* SecretStoreCenterAdaptiveImage::~SecretStoreCenterAdaptiveImage() */

void __thiscall
SecretStoreCenterAdaptiveImage::~SecretStoreCenterAdaptiveImage
          (SecretStoreCenterAdaptiveImage *this)

{
  ~SecretStoreCenterAdaptiveImage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreCenterAdaptiveImage::SecretStoreCenterAdaptiveImage(Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall
SecretStoreCenterAdaptiveImage::SecretStoreCenterAdaptiveImage
          (SecretStoreCenterAdaptiveImage *this,RtWeakPtrBase *param_2)

{
  bool bVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  SecretStoreImage::SecretStoreImage((SecretStoreImage *)this,aRStack_10,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_067751e0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreCenterAdaptiveImage::drawImage(Sexy::Graphics*) */

void __thiscall
SecretStoreCenterAdaptiveImage::drawImage(SecretStoreCenterAdaptiveImage *this,Graphics *param_1)

{
  ResourceInfo *pRVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xd8));
  DrawAdaptiveImage(param_1,aIStack_18,pRVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

