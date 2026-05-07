// Class: Sexy::Image::CachedImageAtlasUVInfo


/* Sexy::Image::CachedImageAtlasUVInfo::CachedImageAtlasUVInfo() */

void __thiscall
Sexy::Image::CachedImageAtlasUVInfo::CachedImageAtlasUVInfo(CachedImageAtlasUVInfo *this)

{
  CachedAtlasUVResult::CachedAtlasUVResult((CachedAtlasUVResult *)(this + 0x18));
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x38] = (CachedImageAtlasUVInfo)0x1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0;
  return;
}


/* Sexy::Image::CachedImageAtlasUVInfo::UpdateData(Sexy::Image::TestValue const&) */

void __thiscall
Sexy::Image::CachedImageAtlasUVInfo::UpdateData(CachedImageAtlasUVInfo *this,TestValue *param_1)

{
  undefined8 uVar1;
  
  if ((((*(int *)param_1 == *(int *)this) && (*(int *)(param_1 + 4) == *(int *)(this + 4))) &&
      (*(int *)(param_1 + 8) == *(int *)(this + 8))) &&
     (((*(int *)(param_1 + 0xc) == *(int *)(this + 0xc) &&
       (*(int *)(param_1 + 0x10) == *(int *)(this + 0x10))) &&
      (*(int *)(param_1 + 0x14) == *(int *)(this + 0x14))))) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  this[0x38] = (CachedImageAtlasUVInfo)0x1;
  return;
}


/* Sexy::Image::CachedImageAtlasUVInfo::SaveResult(Sexy::Image::CachedAtlasUVResult const&) */

void __thiscall
Sexy::Image::CachedImageAtlasUVInfo::SaveResult
          (CachedImageAtlasUVInfo *this,CachedAtlasUVResult *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  this[0x38] = (CachedImageAtlasUVInfo)0x0;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x20) = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x30) = uVar1;
  return;
}

