// Class: SecretStoreCenterWidthImage


/* SecretStoreCenterWidthImage::~SecretStoreCenterWidthImage() */

void __thiscall
SecretStoreCenterWidthImage::~SecretStoreCenterWidthImage(SecretStoreCenterWidthImage *this)

{
  *(undefined ***)this = &PTR_GetClass_06774eb0;
  SecretStoreImage::~SecretStoreImage((SecretStoreImage *)this);
  return;
}


/* SecretStoreCenterWidthImage::~SecretStoreCenterWidthImage() */

void __thiscall
SecretStoreCenterWidthImage::~SecretStoreCenterWidthImage(SecretStoreCenterWidthImage *this)

{
  ~SecretStoreCenterWidthImage(this);
  AK::FreeHook(this);
  return;
}


/* SecretStoreCenterWidthImage::SecretStoreCenterWidthImage(std::string const&, bool, int) */

void __thiscall
SecretStoreCenterWidthImage::SecretStoreCenterWidthImage
          (SecretStoreCenterWidthImage *this,string *param_1,bool param_2,int param_3)

{
  SecretStoreImage::SecretStoreImage((SecretStoreImage *)this,param_1,param_2);
  *(int *)(this + 0x128) = param_3;
  *(undefined ***)this = &PTR_GetClass_06774eb0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreCenterWidthImage::SecretStoreCenterWidthImage(Sexy::RtWeakPtr<Sexy::Image>, bool, int)
    */

void __thiscall
SecretStoreCenterWidthImage::SecretStoreCenterWidthImage
          (SecretStoreCenterWidthImage *this,RtWeakPtrBase *param_2,undefined1 param_3,
          undefined4 param_4)

{
  bool bVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  SecretStoreImage::SecretStoreImage((SecretStoreImage *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x128) = param_4;
  *(undefined ***)this = &PTR_GetClass_06774eb0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SecretStoreCenterWidthImage::drawImage(Sexy::Graphics*) */

void __thiscall
SecretStoreCenterWidthImage::drawImage(SecretStoreCenterWidthImage *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  int iVar2;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  ResourceInfo *pRVar3;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8);
  this_01 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  this_02 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  SalesProgressBar::GetCurrentLevel(this_02);
  iVar1 = *(int *)(this + 0x50);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar3,(iVar1 - iVar2) / 2,*(int *)(this + 0x128));
  return;
}

