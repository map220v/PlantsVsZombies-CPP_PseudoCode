// Class: Sexy::Image


/* Sexy::Image::AsMemoryImage() */

undefined8 Sexy::Image::AsMemoryImage(void)

{
  return 0;
}


/* Sexy::Image::StaticNew() */

undefined8 Sexy::Image::StaticNew(void)

{
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Image::StaticClassInit() */

void Sexy::Image::StaticClassInit(void)

{
  long lVar1;
  undefined8 uVar2;
  CRefSymbolDb *this;
  long *plVar3;
  code *pcVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = StaticGetClass();
  uVar2 = ResourceInfoTypes::ImageRes::StaticGetClass();
  FUN_0515623c(lVar1 + 0x48,uVar2);
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar3 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar3 != (long *)0x0
     )) {
    pcVar4 = *(code **)(*plVar3 + 0x18);
    std::string::string(asStack_10,"Image");
    (*pcVar4)(plVar3,asStack_10,FUN_051569f0,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Image::StaticGetClass() */

long * Sexy::Image::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BaseResource::StaticGetClass();
  (*pcVar3)(plVar1,"Image",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::Image::GetClass() const */

long * Sexy::Image::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BaseResource::StaticGetClass();
  (*pcVar3)(plVar1,"Image",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::Image::Image(Sexy::Image const&) */

void __thiscall Sexy::Image::Image(Image *this,Image *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CachedImageAtlasUVInfo *this_00;
  undefined8 *puVar5;
  
  BaseResource::BaseResource((BaseResource *)this);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_GetClass_06a2ea50;
  Set8BytesTo0(this + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  uVar4 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x38) = uVar2;
  *(undefined4 *)(this + 0x3c) = uVar3;
  *(undefined4 *)(this + 0x40) = uVar4;
  RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x48),(RtWeakPtrBase *)(param_1 + 0x48));
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  uVar3 = *(undefined4 *)(param_1 + 0x54);
  uVar4 = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x50) = uVar2;
  *(undefined4 *)(this + 0x54) = uVar3;
  *(undefined4 *)(this + 0x58) = uVar4;
  this[0x28] = (Image)0x0;
  this_00 = ::operator_new(0x40);
  CachedImageAtlasUVInfo::CachedImageAtlasUVInfo(this_00);
  *(CachedImageAtlasUVInfo **)(this + 0x60) = this_00;
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  uVar1 = puVar5[1];
  *(undefined8 *)this_00 = *puVar5;
  *(undefined8 *)(this_00 + 8) = uVar1;
  uVar1 = puVar5[3];
  *(undefined8 *)(this_00 + 0x10) = puVar5[2];
  *(undefined8 *)(this_00 + 0x18) = uVar1;
  uVar1 = puVar5[5];
  *(undefined8 *)(this_00 + 0x20) = puVar5[4];
  *(undefined8 *)(this_00 + 0x28) = uVar1;
  *(undefined8 *)(this_00 + 0x30) = puVar5[6];
  this_00[0x38] = *(CachedImageAtlasUVInfo *)(puVar5 + 7);
  return;
}


/* Sexy::Image::GetCelHeight() */

int __thiscall Sexy::Image::GetCelHeight(Image *this)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(this + 0x40) != 0) {
    iVar1 = *(int *)(this + 0x3c) / *(int *)(this + 0x40);
  }
  return iVar1;
}


/* Sexy::Image::GetCelWidth() */

int __thiscall Sexy::Image::GetCelWidth(Image *this)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(this + 0x44) != 0) {
    iVar1 = *(int *)(this + 0x38) / *(int *)(this + 0x44);
  }
  return iVar1;
}


/* Sexy::Image::GetCelCount() */

int __thiscall Sexy::Image::GetCelCount(Image *this)

{
  return *(int *)(this + 0x44) * *(int *)(this + 0x40);
}


/* Sexy::Image::CreateRenderData() */

void __thiscall Sexy::Image::CreateRenderData(Image *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (*(code **)(*(long *)this + 0x48) == AsMemoryImage) {
    lVar1 = AsMemoryImage();
  }
  else {
    lVar1 = (**(code **)(*(long *)this + 0x48))();
  }
  if (lVar1 != 0) {
    if ((*(long **)(gSexyAppBase + 0x20) != (long *)0x0) &&
       (lVar2 = (**(code **)(**(long **)(gSexyAppBase + 0x20) + 0xb0))(), lVar2 != 0)) {
      plVar3 = (long *)(**(code **)(**(long **)(gSexyAppBase + 0x20) + 0xb0))
                                 (*(long **)(gSexyAppBase + 0x20));
      (**(code **)(*plVar3 + 0x118))(plVar3,lVar1);
    }
  }
  return;
}


/* Sexy::Image::CopyAttributes(Sexy::Image*) */

void __thiscall Sexy::Image::CopyAttributes(Image *this,Image *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = uVar1;
  return;
}


/* Sexy::Image::GetCelRect(int) */

void Sexy::Image::GetCelRect(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *this;
  int in_w1;
  Insets *in_x8;
  
  this = (Image *)(ulong)(uint)param_1;
  iVar3 = GetCelHeight(this);
  iVar4 = GetCelWidth(this);
  iVar1 = *(int *)(this + 0x44);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = in_w1 / iVar1;
  }
  Insets::Insets(in_x8,(in_w1 - iVar2 * iVar1) * iVar4,iVar2 * iVar3,iVar4,iVar3);
  return;
}


/* Sexy::Image::GetCelRect(int, int) */

void Sexy::Image::GetCelRect(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_w2;
  Insets *in_x8;
  
  iVar1 = GetCelHeight((Image *)(ulong)(uint)param_1);
  iVar2 = GetCelWidth((Image *)(ulong)(uint)param_1);
  Insets::Insets(in_x8,param_2 * iVar2,in_w2 * iVar1,iVar2,iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Image::Image() */

void __thiscall Sexy::Image::Image(Image *this)

{
  long lVar1;
  _func_void *extraout_x1;
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BaseResource::BaseResource((BaseResource *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_GetClass_06a2ea50;
  Set8BytesTo0(this + 0x30);
  std::__exception_ptr::exception_ptr::exception_ptr(aeStack_10,extraout_x1);
  RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x48),(RtWeakPtrBase *)aeStack_10);
  RtId::~RtId((RtId *)aeStack_10);
  *(undefined4 *)(this + 0x50) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 1;
  *(undefined4 *)(this + 0x44) = 1;
  this[0x28] = (Image)0x0;
  *(undefined8 *)(this + 0x60) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Image::~Image() */

void __thiscall Sexy::Image::~Image(Image *this)

{
  char cVar1;
  
  *(undefined ***)this = &PTR_GetClass_06a2ea50;
  cVar1 = FUN_05156374(*(undefined4 *)(this + 0x18));
  if (((cVar1 != '\0') && (gSexyAppBase != 0)) &&
     (*(ResourceManager **)(gSexyAppBase + 0x848) != (ResourceManager *)0x0)) {
    ResourceManager::RemoveUngroupedSharedImage(*(ResourceManager **)(gSexyAppBase + 0x848),this);
  }
  if (*(void **)(this + 0x60) != (void *)0x0) {
    AK::FreeHook(*(void **)(this + 0x60));
    *(undefined8 *)(this + 0x60) = 0;
  }
  RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  std::string::~string((string *)(this + 0x30));
  BaseResource::~BaseResource((BaseResource *)this);
  return;
}


/* Sexy::Image::~Image() */

void __thiscall Sexy::Image::~Image(Image *this)

{
  ~Image(this);
  AK::FreeHook(this);
  return;
}

