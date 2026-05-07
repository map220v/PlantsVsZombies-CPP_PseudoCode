// Class: SecretStoreCenterWidthScaleImage


/* SecretStoreCenterWidthScaleImage::~SecretStoreCenterWidthScaleImage() */

void __thiscall
SecretStoreCenterWidthScaleImage::~SecretStoreCenterWidthScaleImage
          (SecretStoreCenterWidthScaleImage *this)

{
  *(undefined ***)this = &PTR_GetClass_06775510;
  SecretStoreCenterWidthImage::~SecretStoreCenterWidthImage((SecretStoreCenterWidthImage *)this);
  return;
}


/* SecretStoreCenterWidthScaleImage::~SecretStoreCenterWidthScaleImage() */

void __thiscall
SecretStoreCenterWidthScaleImage::~SecretStoreCenterWidthScaleImage
          (SecretStoreCenterWidthScaleImage *this)

{
  ~SecretStoreCenterWidthScaleImage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreCenterWidthScaleImage::SecretStoreCenterWidthScaleImage(Sexy::RtWeakPtr<Sexy::Image>,
   bool, int, float) */

void __thiscall
SecretStoreCenterWidthScaleImage::SecretStoreCenterWidthScaleImage
          (undefined4 param_1,SecretStoreCenterWidthScaleImage *this,RtWeakPtrBase *param_3,
          undefined1 param_4,undefined8 param_5)

{
  bool bVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  SecretStoreCenterWidthImage::SecretStoreCenterWidthImage
            ((SecretStoreCenterWidthImage *)this,aRStack_10,param_4,param_5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06775510;
  *(undefined4 *)(this + 300) = param_1;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SecretStoreCenterWidthScaleImage::drawImage(Sexy::Graphics*) */

void __thiscall
SecretStoreCenterWidthScaleImage::drawImage
          (SecretStoreCenterWidthScaleImage *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  ResourceInfo *pRVar4;
  float fVar5;
  float fVar6;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8);
  this_01 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  fVar5 = *(float *)(this + 300);
  this_02 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_02);
  iVar1 = *(int *)(this + 0x50);
  fVar6 = *(float *)(this + 300);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar4,(iVar1 - (int)((float)iVar2 * fVar5)) / 2,
             *(int *)(this + 0x128),(int)((float)iVar2 * fVar5),(int)((float)iVar3 * fVar6));
  return;
}

